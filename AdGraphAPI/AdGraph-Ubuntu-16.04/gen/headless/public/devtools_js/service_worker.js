// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the ServiceWorker Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalServiceWorker');
goog.provide('chromium.DevTools.ServiceWorker');
goog.require('chromium.DevTools.Connection');
goog.forwardDeclare('chromium.DevTools.Target.TargetID');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;

/**
 * Experimental bindings for the ServiceWorker DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalServiceWorker = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalServiceWorker = chromium.DevTools.ExperimentalServiceWorker;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalServiceWorker.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the ServiceWorker DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ServiceWorker = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalServiceWorker} */
  this.experimental = new ExperimentalServiceWorker(connection);
}

const ServiceWorker = chromium.DevTools.ServiceWorker;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ServiceWorker.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * @enum {string}
 */
ServiceWorker.ServiceWorkerVersionRunningStatus = {
    STOPPED: "stopped",
    STARTING: "starting",
    RUNNING: "running",
    STOPPING: "stopping"
};

/**
 * @enum {string}
 */
ServiceWorker.ServiceWorkerVersionStatus = {
    NEW: "new",
    INSTALLING: "installing",
    INSTALLED: "installed",
    ACTIVATING: "activating",
    ACTIVATED: "activated",
    REDUNDANT: "redundant"
};


/**
 * ServiceWorker registration.
 *
 *
 * @typedef {{
 *   registrationId: string,
 *   scopeURL: string,
 *   isDeleted: boolean
 * }}
 */
ServiceWorker.ServiceWorkerRegistration;

/**
 * ServiceWorker version.
 *
 * scriptLastModified: The Last-Modified header value of the main script.
 * scriptResponseTime: The time at which the response headers of the main script were received from the server.
 *   For cached script it is the last time the cache entry was validated.
 *
 * @typedef {{
 *   versionId: string,
 *   registrationId: string,
 *   scriptURL: string,
 *   runningStatus: !ServiceWorker.ServiceWorkerVersionRunningStatus,
 *   status: !ServiceWorker.ServiceWorkerVersionStatus,
 *   scriptLastModified: (number|undefined),
 *   scriptResponseTime: (number|undefined),
 *   controlledClients: (!Array.<string>|undefined),
 *   targetId: (string|undefined)
 * }}
 */
ServiceWorker.ServiceWorkerVersion;

/**
 * ServiceWorker error message.
 *
 *
 * @typedef {{
 *   errorMessage: string,
 *   registrationId: string,
 *   versionId: string,
 *   sourceURL: string,
 *   lineNumber: number,
 *   columnNumber: number
 * }}
 */
ServiceWorker.ServiceWorkerErrorMessage;

/**
 * Parameters for the DeliverPushMessage command.
 *
 *
 * @typedef {{
 *   origin: string,
 *   registrationId: string,
 *   data: string
 * }}
 */
ServiceWorker.DeliverPushMessageParams;

/**
 * Result for the DeliverPushMessage command.
 *
 *
 * @typedef {undefined}
 */
ServiceWorker.DeliverPushMessageResult;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
ServiceWorker.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
ServiceWorker.DisableResult;

/**
 * Parameters for the DispatchSyncEvent command.
 *
 *
 * @typedef {{
 *   origin: string,
 *   registrationId: string,
 *   tag: string,
 *   lastChance: boolean
 * }}
 */
ServiceWorker.DispatchSyncEventParams;

/**
 * Result for the DispatchSyncEvent command.
 *
 *
 * @typedef {undefined}
 */
ServiceWorker.DispatchSyncEventResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
ServiceWorker.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
ServiceWorker.EnableResult;

/**
 * Parameters for the InspectWorker command.
 *
 *
 * @typedef {{
 *   versionId: string
 * }}
 */
ServiceWorker.InspectWorkerParams;

/**
 * Result for the InspectWorker command.
 *
 *
 * @typedef {undefined}
 */
ServiceWorker.InspectWorkerResult;

/**
 * Parameters for the SetForceUpdateOnPageLoad command.
 *
 *
 * @typedef {{
 *   forceUpdateOnPageLoad: boolean
 * }}
 */
ServiceWorker.SetForceUpdateOnPageLoadParams;

/**
 * Result for the SetForceUpdateOnPageLoad command.
 *
 *
 * @typedef {undefined}
 */
ServiceWorker.SetForceUpdateOnPageLoadResult;

/**
 * Parameters for the SkipWaiting command.
 *
 *
 * @typedef {{
 *   scopeURL: string
 * }}
 */
ServiceWorker.SkipWaitingParams;

/**
 * Result for the SkipWaiting command.
 *
 *
 * @typedef {undefined}
 */
ServiceWorker.SkipWaitingResult;

/**
 * Parameters for the StartWorker command.
 *
 *
 * @typedef {{
 *   scopeURL: string
 * }}
 */
ServiceWorker.StartWorkerParams;

/**
 * Result for the StartWorker command.
 *
 *
 * @typedef {undefined}
 */
ServiceWorker.StartWorkerResult;

/**
 * Parameters for the StopAllWorkers command.
 *
 *
 * @typedef {undefined}
 */
ServiceWorker.StopAllWorkersParams;

/**
 * Result for the StopAllWorkers command.
 *
 *
 * @typedef {undefined}
 */
ServiceWorker.StopAllWorkersResult;

/**
 * Parameters for the StopWorker command.
 *
 *
 * @typedef {{
 *   versionId: string
 * }}
 */
ServiceWorker.StopWorkerParams;

/**
 * Result for the StopWorker command.
 *
 *
 * @typedef {undefined}
 */
ServiceWorker.StopWorkerResult;

/**
 * Parameters for the Unregister command.
 *
 *
 * @typedef {{
 *   scopeURL: string
 * }}
 */
ServiceWorker.UnregisterParams;

/**
 * Result for the Unregister command.
 *
 *
 * @typedef {undefined}
 */
ServiceWorker.UnregisterResult;

/**
 * Parameters for the UpdateRegistration command.
 *
 *
 * @typedef {{
 *   scopeURL: string
 * }}
 */
ServiceWorker.UpdateRegistrationParams;

/**
 * Result for the UpdateRegistration command.
 *
 *
 * @typedef {undefined}
 */
ServiceWorker.UpdateRegistrationResult;

/**
 * Parameters for the WorkerErrorReported event.
 *
 *
 * @typedef {{
 *   errorMessage: !ServiceWorker.ServiceWorkerErrorMessage
 * }}
 */
ServiceWorker.WorkerErrorReportedParams;

/**
 * Parameters for the WorkerRegistrationUpdated event.
 *
 *
 * @typedef {{
 *   registrations: !Array.<!ServiceWorker.ServiceWorkerRegistration>
 * }}
 */
ServiceWorker.WorkerRegistrationUpdatedParams;

/**
 * Parameters for the WorkerVersionUpdated event.
 *
 *
 * @typedef {{
 *   versions: !Array.<!ServiceWorker.ServiceWorkerVersion>
 * }}
 */
ServiceWorker.WorkerVersionUpdatedParams;



/**
  * @param {ServiceWorker.DeliverPushMessageParams} params
  * @return {!Promise<ServiceWorker.DeliverPushMessageResult>}
  */
ExperimentalServiceWorker.prototype.deliverPushMessage = function(params) {
  return this.connection_.sendDevToolsMessage('ServiceWorker.deliverPushMessage', params);
};

/**
  * @return {!Promise<ServiceWorker.DisableResult>}
  */
ExperimentalServiceWorker.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('ServiceWorker.disable', {});
};

/**
  * @param {ServiceWorker.DispatchSyncEventParams} params
  * @return {!Promise<ServiceWorker.DispatchSyncEventResult>}
  */
ExperimentalServiceWorker.prototype.dispatchSyncEvent = function(params) {
  return this.connection_.sendDevToolsMessage('ServiceWorker.dispatchSyncEvent', params);
};

/**
  * @return {!Promise<ServiceWorker.EnableResult>}
  */
ExperimentalServiceWorker.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('ServiceWorker.enable', {});
};

/**
  * @param {ServiceWorker.InspectWorkerParams} params
  * @return {!Promise<ServiceWorker.InspectWorkerResult>}
  */
ExperimentalServiceWorker.prototype.inspectWorker = function(params) {
  return this.connection_.sendDevToolsMessage('ServiceWorker.inspectWorker', params);
};

/**
  * @param {ServiceWorker.SetForceUpdateOnPageLoadParams} params
  * @return {!Promise<ServiceWorker.SetForceUpdateOnPageLoadResult>}
  */
ExperimentalServiceWorker.prototype.setForceUpdateOnPageLoad = function(params) {
  return this.connection_.sendDevToolsMessage('ServiceWorker.setForceUpdateOnPageLoad', params);
};

/**
  * @param {ServiceWorker.SkipWaitingParams} params
  * @return {!Promise<ServiceWorker.SkipWaitingResult>}
  */
ExperimentalServiceWorker.prototype.skipWaiting = function(params) {
  return this.connection_.sendDevToolsMessage('ServiceWorker.skipWaiting', params);
};

/**
  * @param {ServiceWorker.StartWorkerParams} params
  * @return {!Promise<ServiceWorker.StartWorkerResult>}
  */
ExperimentalServiceWorker.prototype.startWorker = function(params) {
  return this.connection_.sendDevToolsMessage('ServiceWorker.startWorker', params);
};

/**
  * @return {!Promise<ServiceWorker.StopAllWorkersResult>}
  */
ExperimentalServiceWorker.prototype.stopAllWorkers = function() {
  return this.connection_.sendDevToolsMessage('ServiceWorker.stopAllWorkers', {});
};

/**
  * @param {ServiceWorker.StopWorkerParams} params
  * @return {!Promise<ServiceWorker.StopWorkerResult>}
  */
ExperimentalServiceWorker.prototype.stopWorker = function(params) {
  return this.connection_.sendDevToolsMessage('ServiceWorker.stopWorker', params);
};

/**
  * @param {ServiceWorker.UnregisterParams} params
  * @return {!Promise<ServiceWorker.UnregisterResult>}
  */
ExperimentalServiceWorker.prototype.unregister = function(params) {
  return this.connection_.sendDevToolsMessage('ServiceWorker.unregister', params);
};

/**
  * @param {ServiceWorker.UpdateRegistrationParams} params
  * @return {!Promise<ServiceWorker.UpdateRegistrationResult>}
  */
ExperimentalServiceWorker.prototype.updateRegistration = function(params) {
  return this.connection_.sendDevToolsMessage('ServiceWorker.updateRegistration', params);
};


/**
  * @param {!function(!ServiceWorker.WorkerErrorReportedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalServiceWorker.prototype.onWorkerErrorReported = function(listener) {
  return this.connection_.addEventListener(
      'ServiceWorker.workerErrorReported', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * @param {!function(!ServiceWorker.WorkerRegistrationUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalServiceWorker.prototype.onWorkerRegistrationUpdated = function(listener) {
  return this.connection_.addEventListener(
      'ServiceWorker.workerRegistrationUpdated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * @param {!function(!ServiceWorker.WorkerVersionUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalServiceWorker.prototype.onWorkerVersionUpdated = function(listener) {
  return this.connection_.addEventListener(
      'ServiceWorker.workerVersionUpdated', /** @type {!function(!Object): undefined} */ (listener));
};



/**
  * @param {ServiceWorker.DeliverPushMessageParams} params
  * @return {!Promise<ServiceWorker.DeliverPushMessageResult>}
  */
ServiceWorker.prototype.deliverPushMessage = function(params) {
  return this.connection_.sendDevToolsMessage('ServiceWorker.deliverPushMessage', params);
};

/**
  * @return {!Promise<ServiceWorker.DisableResult>}
  */
ServiceWorker.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('ServiceWorker.disable', {});
};

/**
  * @param {ServiceWorker.DispatchSyncEventParams} params
  * @return {!Promise<ServiceWorker.DispatchSyncEventResult>}
  */
ServiceWorker.prototype.dispatchSyncEvent = function(params) {
  return this.connection_.sendDevToolsMessage('ServiceWorker.dispatchSyncEvent', params);
};

/**
  * @return {!Promise<ServiceWorker.EnableResult>}
  */
ServiceWorker.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('ServiceWorker.enable', {});
};

/**
  * @param {ServiceWorker.InspectWorkerParams} params
  * @return {!Promise<ServiceWorker.InspectWorkerResult>}
  */
ServiceWorker.prototype.inspectWorker = function(params) {
  return this.connection_.sendDevToolsMessage('ServiceWorker.inspectWorker', params);
};

/**
  * @param {ServiceWorker.SetForceUpdateOnPageLoadParams} params
  * @return {!Promise<ServiceWorker.SetForceUpdateOnPageLoadResult>}
  */
ServiceWorker.prototype.setForceUpdateOnPageLoad = function(params) {
  return this.connection_.sendDevToolsMessage('ServiceWorker.setForceUpdateOnPageLoad', params);
};

/**
  * @param {ServiceWorker.SkipWaitingParams} params
  * @return {!Promise<ServiceWorker.SkipWaitingResult>}
  */
ServiceWorker.prototype.skipWaiting = function(params) {
  return this.connection_.sendDevToolsMessage('ServiceWorker.skipWaiting', params);
};

/**
  * @param {ServiceWorker.StartWorkerParams} params
  * @return {!Promise<ServiceWorker.StartWorkerResult>}
  */
ServiceWorker.prototype.startWorker = function(params) {
  return this.connection_.sendDevToolsMessage('ServiceWorker.startWorker', params);
};

/**
  * @return {!Promise<ServiceWorker.StopAllWorkersResult>}
  */
ServiceWorker.prototype.stopAllWorkers = function() {
  return this.connection_.sendDevToolsMessage('ServiceWorker.stopAllWorkers', {});
};

/**
  * @param {ServiceWorker.StopWorkerParams} params
  * @return {!Promise<ServiceWorker.StopWorkerResult>}
  */
ServiceWorker.prototype.stopWorker = function(params) {
  return this.connection_.sendDevToolsMessage('ServiceWorker.stopWorker', params);
};

/**
  * @param {ServiceWorker.UnregisterParams} params
  * @return {!Promise<ServiceWorker.UnregisterResult>}
  */
ServiceWorker.prototype.unregister = function(params) {
  return this.connection_.sendDevToolsMessage('ServiceWorker.unregister', params);
};

/**
  * @param {ServiceWorker.UpdateRegistrationParams} params
  * @return {!Promise<ServiceWorker.UpdateRegistrationResult>}
  */
ServiceWorker.prototype.updateRegistration = function(params) {
  return this.connection_.sendDevToolsMessage('ServiceWorker.updateRegistration', params);
};


/**
  * @param {!function(!ServiceWorker.WorkerErrorReportedParams)} listener
  * @return {number} The id of this event listener.
  */
ServiceWorker.prototype.onWorkerErrorReported = function(listener) {
  return this.connection_.addEventListener(
      'ServiceWorker.workerErrorReported', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * @param {!function(!ServiceWorker.WorkerRegistrationUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
ServiceWorker.prototype.onWorkerRegistrationUpdated = function(listener) {
  return this.connection_.addEventListener(
      'ServiceWorker.workerRegistrationUpdated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * @param {!function(!ServiceWorker.WorkerVersionUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
ServiceWorker.prototype.onWorkerVersionUpdated = function(listener) {
  return this.connection_.addEventListener(
      'ServiceWorker.workerVersionUpdated', /** @type {!function(!Object): undefined} */ (listener));
};

});  // goog.scope

