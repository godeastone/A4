// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the ServiceWorker DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalServiceWorker = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalServiceWorker.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the ServiceWorker DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ServiceWorker = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalServiceWorker} */
chromium.DevTools.ServiceWorker.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ServiceWorker.prototype.removeEventListener = function(id) {};

/**
 * @enum {string}
 */
chromium.DevTools.ServiceWorker.ServiceWorkerVersionRunningStatus = {
    STOPPED: "stopped",
    STARTING: "starting",
    RUNNING: "running",
    STOPPING: "stopping"
};

/**
 * @enum {string}
 */
chromium.DevTools.ServiceWorker.ServiceWorkerVersionStatus = {
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
chromium.DevTools.ServiceWorker.ServiceWorkerRegistration;

/**
 * ServiceWorker version.
 *
 * scriptLastModified: The Last-Modified header value of the main script.
 * scriptResponseTime: The time at which the response headers of the main script were received from the server.
 *    For cached script it is the last time the cache entry was validated.
 *
 * @typedef {{
 *   versionId: string,
 *   registrationId: string,
 *   scriptURL: string,
 *   runningStatus: !chromium.DevTools.ServiceWorker.ServiceWorkerVersionRunningStatus,
 *   status: !chromium.DevTools.ServiceWorker.ServiceWorkerVersionStatus,
 *   scriptLastModified: (number|undefined),
 *   scriptResponseTime: (number|undefined),
 *   controlledClients: (!Array.<string>|undefined),
 *   targetId: (string|undefined)
 * }}
 */
chromium.DevTools.ServiceWorker.ServiceWorkerVersion;

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
chromium.DevTools.ServiceWorker.ServiceWorkerErrorMessage;

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
chromium.DevTools.ServiceWorker.DeliverPushMessageParams;

/**
 * Result for the DeliverPushMessage command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.ServiceWorker.DeliverPushMessageResult;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.ServiceWorker.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.ServiceWorker.DisableResult;

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
chromium.DevTools.ServiceWorker.DispatchSyncEventParams;

/**
 * Result for the DispatchSyncEvent command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.ServiceWorker.DispatchSyncEventResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.ServiceWorker.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.ServiceWorker.EnableResult;

/**
 * Parameters for the InspectWorker command.
 *
 *
 * @typedef {{
 *   versionId: string
 * }}
 */
chromium.DevTools.ServiceWorker.InspectWorkerParams;

/**
 * Result for the InspectWorker command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.ServiceWorker.InspectWorkerResult;

/**
 * Parameters for the SetForceUpdateOnPageLoad command.
 *
 *
 * @typedef {{
 *   forceUpdateOnPageLoad: boolean
 * }}
 */
chromium.DevTools.ServiceWorker.SetForceUpdateOnPageLoadParams;

/**
 * Result for the SetForceUpdateOnPageLoad command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.ServiceWorker.SetForceUpdateOnPageLoadResult;

/**
 * Parameters for the SkipWaiting command.
 *
 *
 * @typedef {{
 *   scopeURL: string
 * }}
 */
chromium.DevTools.ServiceWorker.SkipWaitingParams;

/**
 * Result for the SkipWaiting command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.ServiceWorker.SkipWaitingResult;

/**
 * Parameters for the StartWorker command.
 *
 *
 * @typedef {{
 *   scopeURL: string
 * }}
 */
chromium.DevTools.ServiceWorker.StartWorkerParams;

/**
 * Result for the StartWorker command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.ServiceWorker.StartWorkerResult;

/**
 * Parameters for the StopAllWorkers command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.ServiceWorker.StopAllWorkersParams;

/**
 * Result for the StopAllWorkers command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.ServiceWorker.StopAllWorkersResult;

/**
 * Parameters for the StopWorker command.
 *
 *
 * @typedef {{
 *   versionId: string
 * }}
 */
chromium.DevTools.ServiceWorker.StopWorkerParams;

/**
 * Result for the StopWorker command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.ServiceWorker.StopWorkerResult;

/**
 * Parameters for the Unregister command.
 *
 *
 * @typedef {{
 *   scopeURL: string
 * }}
 */
chromium.DevTools.ServiceWorker.UnregisterParams;

/**
 * Result for the Unregister command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.ServiceWorker.UnregisterResult;

/**
 * Parameters for the UpdateRegistration command.
 *
 *
 * @typedef {{
 *   scopeURL: string
 * }}
 */
chromium.DevTools.ServiceWorker.UpdateRegistrationParams;

/**
 * Result for the UpdateRegistration command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.ServiceWorker.UpdateRegistrationResult;

/**
 * Parameters for the WorkerErrorReported event.
 *
 *
 * @typedef {{
 *   errorMessage: !chromium.DevTools.ServiceWorker.ServiceWorkerErrorMessage
 * }}
 */
chromium.DevTools.ServiceWorker.WorkerErrorReportedParams;

/**
 * Parameters for the WorkerRegistrationUpdated event.
 *
 *
 * @typedef {{
 *   registrations: !Array.<!chromium.DevTools.ServiceWorker.ServiceWorkerRegistration>
 * }}
 */
chromium.DevTools.ServiceWorker.WorkerRegistrationUpdatedParams;

/**
 * Parameters for the WorkerVersionUpdated event.
 *
 *
 * @typedef {{
 *   versions: !Array.<!chromium.DevTools.ServiceWorker.ServiceWorkerVersion>
 * }}
 */
chromium.DevTools.ServiceWorker.WorkerVersionUpdatedParams;



/**
  * @param {chromium.DevTools.ServiceWorker.DeliverPushMessageParams} params
  * @return {!Promise<chromium.DevTools.ServiceWorker.DeliverPushMessageResult>}
  */
chromium.DevTools.ExperimentalServiceWorker.prototype.deliverPushMessage = function(params) {};

/**
  * @return {!Promise<chromium.DevTools.ServiceWorker.DisableResult>}
  */
chromium.DevTools.ExperimentalServiceWorker.prototype.disable = function() {};

/**
  * @param {chromium.DevTools.ServiceWorker.DispatchSyncEventParams} params
  * @return {!Promise<chromium.DevTools.ServiceWorker.DispatchSyncEventResult>}
  */
chromium.DevTools.ExperimentalServiceWorker.prototype.dispatchSyncEvent = function(params) {};

/**
  * @return {!Promise<chromium.DevTools.ServiceWorker.EnableResult>}
  */
chromium.DevTools.ExperimentalServiceWorker.prototype.enable = function() {};

/**
  * @param {chromium.DevTools.ServiceWorker.InspectWorkerParams} params
  * @return {!Promise<chromium.DevTools.ServiceWorker.InspectWorkerResult>}
  */
chromium.DevTools.ExperimentalServiceWorker.prototype.inspectWorker = function(params) {};

/**
  * @param {chromium.DevTools.ServiceWorker.SetForceUpdateOnPageLoadParams} params
  * @return {!Promise<chromium.DevTools.ServiceWorker.SetForceUpdateOnPageLoadResult>}
  */
chromium.DevTools.ExperimentalServiceWorker.prototype.setForceUpdateOnPageLoad = function(params) {};

/**
  * @param {chromium.DevTools.ServiceWorker.SkipWaitingParams} params
  * @return {!Promise<chromium.DevTools.ServiceWorker.SkipWaitingResult>}
  */
chromium.DevTools.ExperimentalServiceWorker.prototype.skipWaiting = function(params) {};

/**
  * @param {chromium.DevTools.ServiceWorker.StartWorkerParams} params
  * @return {!Promise<chromium.DevTools.ServiceWorker.StartWorkerResult>}
  */
chromium.DevTools.ExperimentalServiceWorker.prototype.startWorker = function(params) {};

/**
  * @return {!Promise<chromium.DevTools.ServiceWorker.StopAllWorkersResult>}
  */
chromium.DevTools.ExperimentalServiceWorker.prototype.stopAllWorkers = function() {};

/**
  * @param {chromium.DevTools.ServiceWorker.StopWorkerParams} params
  * @return {!Promise<chromium.DevTools.ServiceWorker.StopWorkerResult>}
  */
chromium.DevTools.ExperimentalServiceWorker.prototype.stopWorker = function(params) {};

/**
  * @param {chromium.DevTools.ServiceWorker.UnregisterParams} params
  * @return {!Promise<chromium.DevTools.ServiceWorker.UnregisterResult>}
  */
chromium.DevTools.ExperimentalServiceWorker.prototype.unregister = function(params) {};

/**
  * @param {chromium.DevTools.ServiceWorker.UpdateRegistrationParams} params
  * @return {!Promise<chromium.DevTools.ServiceWorker.UpdateRegistrationResult>}
  */
chromium.DevTools.ExperimentalServiceWorker.prototype.updateRegistration = function(params) {};


/**
  * @param {!function(!chromium.DevTools.ServiceWorker.WorkerErrorReportedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalServiceWorker.prototype.onWorkerErrorReported = function(listener) {};

/**
  * @param {!function(!chromium.DevTools.ServiceWorker.WorkerRegistrationUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalServiceWorker.prototype.onWorkerRegistrationUpdated = function(listener) {};

/**
  * @param {!function(!chromium.DevTools.ServiceWorker.WorkerVersionUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalServiceWorker.prototype.onWorkerVersionUpdated = function(listener) {};



/**
  * @param {chromium.DevTools.ServiceWorker.DeliverPushMessageParams} params
  * @return {!Promise<chromium.DevTools.ServiceWorker.DeliverPushMessageResult>}
  */
chromium.DevTools.ServiceWorker.prototype.deliverPushMessage = function(params) {};

/**
  * @return {!Promise<chromium.DevTools.ServiceWorker.DisableResult>}
  */
chromium.DevTools.ServiceWorker.prototype.disable = function() {};

/**
  * @param {chromium.DevTools.ServiceWorker.DispatchSyncEventParams} params
  * @return {!Promise<chromium.DevTools.ServiceWorker.DispatchSyncEventResult>}
  */
chromium.DevTools.ServiceWorker.prototype.dispatchSyncEvent = function(params) {};

/**
  * @return {!Promise<chromium.DevTools.ServiceWorker.EnableResult>}
  */
chromium.DevTools.ServiceWorker.prototype.enable = function() {};

/**
  * @param {chromium.DevTools.ServiceWorker.InspectWorkerParams} params
  * @return {!Promise<chromium.DevTools.ServiceWorker.InspectWorkerResult>}
  */
chromium.DevTools.ServiceWorker.prototype.inspectWorker = function(params) {};

/**
  * @param {chromium.DevTools.ServiceWorker.SetForceUpdateOnPageLoadParams} params
  * @return {!Promise<chromium.DevTools.ServiceWorker.SetForceUpdateOnPageLoadResult>}
  */
chromium.DevTools.ServiceWorker.prototype.setForceUpdateOnPageLoad = function(params) {};

/**
  * @param {chromium.DevTools.ServiceWorker.SkipWaitingParams} params
  * @return {!Promise<chromium.DevTools.ServiceWorker.SkipWaitingResult>}
  */
chromium.DevTools.ServiceWorker.prototype.skipWaiting = function(params) {};

/**
  * @param {chromium.DevTools.ServiceWorker.StartWorkerParams} params
  * @return {!Promise<chromium.DevTools.ServiceWorker.StartWorkerResult>}
  */
chromium.DevTools.ServiceWorker.prototype.startWorker = function(params) {};

/**
  * @return {!Promise<chromium.DevTools.ServiceWorker.StopAllWorkersResult>}
  */
chromium.DevTools.ServiceWorker.prototype.stopAllWorkers = function() {};

/**
  * @param {chromium.DevTools.ServiceWorker.StopWorkerParams} params
  * @return {!Promise<chromium.DevTools.ServiceWorker.StopWorkerResult>}
  */
chromium.DevTools.ServiceWorker.prototype.stopWorker = function(params) {};

/**
  * @param {chromium.DevTools.ServiceWorker.UnregisterParams} params
  * @return {!Promise<chromium.DevTools.ServiceWorker.UnregisterResult>}
  */
chromium.DevTools.ServiceWorker.prototype.unregister = function(params) {};

/**
  * @param {chromium.DevTools.ServiceWorker.UpdateRegistrationParams} params
  * @return {!Promise<chromium.DevTools.ServiceWorker.UpdateRegistrationResult>}
  */
chromium.DevTools.ServiceWorker.prototype.updateRegistration = function(params) {};


/**
  * @param {!function(!chromium.DevTools.ServiceWorker.WorkerErrorReportedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ServiceWorker.prototype.onWorkerErrorReported = function(listener) {};

/**
  * @param {!function(!chromium.DevTools.ServiceWorker.WorkerRegistrationUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ServiceWorker.prototype.onWorkerRegistrationUpdated = function(listener) {};

/**
  * @param {!function(!chromium.DevTools.ServiceWorker.WorkerVersionUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ServiceWorker.prototype.onWorkerVersionUpdated = function(listener) {};
