// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the Target DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalTarget = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalTarget.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the Target DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Target = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalTarget} */
chromium.DevTools.Target.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.Target.prototype.removeEventListener = function(id) {};


/**
 * attached: Whether the target has an attached client.
 * openerId: Opener target Id
 *
 * @typedef {{
 *   targetId: string,
 *   type: string,
 *   title: string,
 *   url: string,
 *   attached: boolean,
 *   openerId: (string|undefined),
 *   browserContextId: (string|undefined)
 * }}
 */
chromium.DevTools.Target.TargetInfo;

/**
 *
 * @typedef {{
 *   host: string,
 *   port: number
 * }}
 */
chromium.DevTools.Target.RemoteLocation;

/**
 * Parameters for the ActivateTarget command.
 *
 *
 * @typedef {{
 *   targetId: string
 * }}
 */
chromium.DevTools.Target.ActivateTargetParams;

/**
 * Result for the ActivateTarget command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Target.ActivateTargetResult;

/**
 * Parameters for the AttachToTarget command.
 *
 *
 * @typedef {{
 *   targetId: string
 * }}
 */
chromium.DevTools.Target.AttachToTargetParams;

/**
 * Result for the AttachToTarget command.
 *
 * sessionId: Id assigned to the session.
 *
 * @typedef {{
 *   sessionId: string
 * }}
 */
chromium.DevTools.Target.AttachToTargetResult;

/**
 * Parameters for the CloseTarget command.
 *
 *
 * @typedef {{
 *   targetId: string
 * }}
 */
chromium.DevTools.Target.CloseTargetParams;

/**
 * Result for the CloseTarget command.
 *
 *
 * @typedef {{
 *   success: boolean
 * }}
 */
chromium.DevTools.Target.CloseTargetResult;

/**
 * Parameters for the CreateBrowserContext command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Target.CreateBrowserContextParams;

/**
 * Result for the CreateBrowserContext command.
 *
 * browserContextId: The id of the context created.
 *
 * @typedef {{
 *   browserContextId: string
 * }}
 */
chromium.DevTools.Target.CreateBrowserContextResult;

/**
 * Parameters for the GetBrowserContexts command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Target.GetBrowserContextsParams;

/**
 * Result for the GetBrowserContexts command.
 *
 * browserContextIds: An array of browser context ids.
 *
 * @typedef {{
 *   browserContextIds: !Array.<string>
 * }}
 */
chromium.DevTools.Target.GetBrowserContextsResult;

/**
 * Parameters for the CreateTarget command.
 *
 * url: The initial URL the page will be navigated to.
 * width: Frame width in DIP (headless chrome only).
 * height: Frame height in DIP (headless chrome only).
 * browserContextId: The browser context to create the page in.
 * enableBeginFrameControl: Whether BeginFrames for this target will be controlled via DevTools (headless chrome only,
 *    not supported on MacOS yet, false by default).
 *
 * @typedef {{
 *   url: string,
 *   width: (number|undefined),
 *   height: (number|undefined),
 *   browserContextId: (string|undefined),
 *   enableBeginFrameControl: (boolean|undefined)
 * }}
 */
chromium.DevTools.Target.CreateTargetParams;

/**
 * Result for the CreateTarget command.
 *
 * targetId: The id of the page opened.
 *
 * @typedef {{
 *   targetId: string
 * }}
 */
chromium.DevTools.Target.CreateTargetResult;

/**
 * Parameters for the DetachFromTarget command.
 *
 * sessionId: Session to detach.
 * targetId: Deprecated.
 *
 * @typedef {{
 *   sessionId: (string|undefined),
 *   targetId: (string|undefined)
 * }}
 */
chromium.DevTools.Target.DetachFromTargetParams;

/**
 * Result for the DetachFromTarget command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Target.DetachFromTargetResult;

/**
 * Parameters for the DisposeBrowserContext command.
 *
 *
 * @typedef {{
 *   browserContextId: string
 * }}
 */
chromium.DevTools.Target.DisposeBrowserContextParams;

/**
 * Result for the DisposeBrowserContext command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Target.DisposeBrowserContextResult;

/**
 * Parameters for the GetTargetInfo command.
 *
 *
 * @typedef {{
 *   targetId: string
 * }}
 */
chromium.DevTools.Target.GetTargetInfoParams;

/**
 * Result for the GetTargetInfo command.
 *
 *
 * @typedef {{
 *   targetInfo: !chromium.DevTools.Target.TargetInfo
 * }}
 */
chromium.DevTools.Target.GetTargetInfoResult;

/**
 * Parameters for the GetTargets command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Target.GetTargetsParams;

/**
 * Result for the GetTargets command.
 *
 * targetInfos: The list of targets.
 *
 * @typedef {{
 *   targetInfos: !Array.<!chromium.DevTools.Target.TargetInfo>
 * }}
 */
chromium.DevTools.Target.GetTargetsResult;

/**
 * Parameters for the SendMessageToTarget command.
 *
 * sessionId: Identifier of the session.
 * targetId: Deprecated.
 *
 * @typedef {{
 *   message: string,
 *   sessionId: (string|undefined),
 *   targetId: (string|undefined)
 * }}
 */
chromium.DevTools.Target.SendMessageToTargetParams;

/**
 * Result for the SendMessageToTarget command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Target.SendMessageToTargetResult;

/**
 * Parameters for the SetAutoAttach command.
 *
 * autoAttach: Whether to auto-attach to related targets.
 * waitForDebuggerOnStart: Whether to pause new targets when attaching to them. Use `Runtime.runIfWaitingForDebugger`
 *    to run paused targets.
 *
 * @typedef {{
 *   autoAttach: boolean,
 *   waitForDebuggerOnStart: boolean
 * }}
 */
chromium.DevTools.Target.SetAutoAttachParams;

/**
 * Result for the SetAutoAttach command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Target.SetAutoAttachResult;

/**
 * Parameters for the SetDiscoverTargets command.
 *
 * discover: Whether to discover available targets.
 *
 * @typedef {{
 *   discover: boolean
 * }}
 */
chromium.DevTools.Target.SetDiscoverTargetsParams;

/**
 * Result for the SetDiscoverTargets command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Target.SetDiscoverTargetsResult;

/**
 * Parameters for the SetRemoteLocations command.
 *
 * locations: List of remote locations.
 *
 * @typedef {{
 *   locations: !Array.<!chromium.DevTools.Target.RemoteLocation>
 * }}
 */
chromium.DevTools.Target.SetRemoteLocationsParams;

/**
 * Result for the SetRemoteLocations command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Target.SetRemoteLocationsResult;

/**
 * Parameters for the AttachedToTarget event.
 *
 * sessionId: Identifier assigned to the session used to send/receive messages.
 *
 * @typedef {{
 *   sessionId: string,
 *   targetInfo: !chromium.DevTools.Target.TargetInfo,
 *   waitingForDebugger: boolean
 * }}
 */
chromium.DevTools.Target.AttachedToTargetParams;

/**
 * Parameters for the DetachedFromTarget event.
 *
 * sessionId: Detached session identifier.
 * targetId: Deprecated.
 *
 * @typedef {{
 *   sessionId: string,
 *   targetId: (string|undefined)
 * }}
 */
chromium.DevTools.Target.DetachedFromTargetParams;

/**
 * Parameters for the ReceivedMessageFromTarget event.
 *
 * sessionId: Identifier of a session which sends a message.
 * targetId: Deprecated.
 *
 * @typedef {{
 *   sessionId: string,
 *   message: string,
 *   targetId: (string|undefined)
 * }}
 */
chromium.DevTools.Target.ReceivedMessageFromTargetParams;

/**
 * Parameters for the TargetCreated event.
 *
 *
 * @typedef {{
 *   targetInfo: !chromium.DevTools.Target.TargetInfo
 * }}
 */
chromium.DevTools.Target.TargetCreatedParams;

/**
 * Parameters for the TargetDestroyed event.
 *
 *
 * @typedef {{
 *   targetId: string
 * }}
 */
chromium.DevTools.Target.TargetDestroyedParams;

/**
 * Parameters for the TargetInfoChanged event.
 *
 *
 * @typedef {{
 *   targetInfo: !chromium.DevTools.Target.TargetInfo
 * }}
 */
chromium.DevTools.Target.TargetInfoChangedParams;



/**
  * Activates (focuses) the target.
  *
  * @param {chromium.DevTools.Target.ActivateTargetParams} params
  * @return {!Promise<chromium.DevTools.Target.ActivateTargetResult>}
  */
chromium.DevTools.ExperimentalTarget.prototype.activateTarget = function(params) {};

/**
  * Attaches to the target with given id.
  *
  * @param {chromium.DevTools.Target.AttachToTargetParams} params
  * @return {!Promise<chromium.DevTools.Target.AttachToTargetResult>}
  */
chromium.DevTools.ExperimentalTarget.prototype.attachToTarget = function(params) {};

/**
  * Closes the target. If the target is a page that gets closed too.
  *
  * @param {chromium.DevTools.Target.CloseTargetParams} params
  * @return {!Promise<chromium.DevTools.Target.CloseTargetResult>}
  */
chromium.DevTools.ExperimentalTarget.prototype.closeTarget = function(params) {};

/**
  * Creates a new empty BrowserContext. Similar to an incognito profile but you can have more than
 * one.
  *
  * @return {!Promise<chromium.DevTools.Target.CreateBrowserContextResult>}
  */
chromium.DevTools.ExperimentalTarget.prototype.createBrowserContext = function() {};

/**
  * Returns all browser contexts created with `Target.createBrowserContext` method.
  *
  * @return {!Promise<chromium.DevTools.Target.GetBrowserContextsResult>}
  */
chromium.DevTools.ExperimentalTarget.prototype.getBrowserContexts = function() {};

/**
  * Creates a new page.
  *
  * @param {chromium.DevTools.Target.CreateTargetParams} params
  * @return {!Promise<chromium.DevTools.Target.CreateTargetResult>}
  */
chromium.DevTools.ExperimentalTarget.prototype.createTarget = function(params) {};

/**
  * Detaches session with given id.
  *
  * @param {chromium.DevTools.Target.DetachFromTargetParams=} opt_params
  * @return {!Promise<chromium.DevTools.Target.DetachFromTargetResult>}
  */
chromium.DevTools.ExperimentalTarget.prototype.detachFromTarget = function(opt_params) {};

/**
  * Deletes a BrowserContext. All the belonging pages will be closed without calling their
 * beforeunload hooks.
  *
  * @param {chromium.DevTools.Target.DisposeBrowserContextParams} params
  * @return {!Promise<chromium.DevTools.Target.DisposeBrowserContextResult>}
  */
chromium.DevTools.ExperimentalTarget.prototype.disposeBrowserContext = function(params) {};

/**
  * Returns information about a target.
  *
  * @param {chromium.DevTools.Target.GetTargetInfoParams} params
  * @return {!Promise<chromium.DevTools.Target.GetTargetInfoResult>}
  */
chromium.DevTools.ExperimentalTarget.prototype.getTargetInfo = function(params) {};

/**
  * Retrieves a list of available targets.
  *
  * @return {!Promise<chromium.DevTools.Target.GetTargetsResult>}
  */
chromium.DevTools.ExperimentalTarget.prototype.getTargets = function() {};

/**
  * Sends protocol message over session with given id.
  *
  * @param {chromium.DevTools.Target.SendMessageToTargetParams} params
  * @return {!Promise<chromium.DevTools.Target.SendMessageToTargetResult>}
  */
chromium.DevTools.ExperimentalTarget.prototype.sendMessageToTarget = function(params) {};

/**
  * Controls whether to automatically attach to new targets which are considered to be related to
 * this one. When turned on, attaches to all existing related targets as well. When turned off,
 * automatically detaches from all currently attached targets.
  *
  * @param {chromium.DevTools.Target.SetAutoAttachParams} params
  * @return {!Promise<chromium.DevTools.Target.SetAutoAttachResult>}
  */
chromium.DevTools.ExperimentalTarget.prototype.setAutoAttach = function(params) {};

/**
  * Controls whether to discover available targets and notify via
 * `targetCreated/targetInfoChanged/targetDestroyed` events.
  *
  * @param {chromium.DevTools.Target.SetDiscoverTargetsParams} params
  * @return {!Promise<chromium.DevTools.Target.SetDiscoverTargetsResult>}
  */
chromium.DevTools.ExperimentalTarget.prototype.setDiscoverTargets = function(params) {};

/**
  * Enables target discovery for the specified locations, when `setDiscoverTargets` was set to
 * `true`.
  *
  * @param {chromium.DevTools.Target.SetRemoteLocationsParams} params
  * @return {!Promise<chromium.DevTools.Target.SetRemoteLocationsResult>}
  */
chromium.DevTools.ExperimentalTarget.prototype.setRemoteLocations = function(params) {};


/**
  * Issued when attached to target because of auto-attach or `attachToTarget` command.
  *
  * @param {!function(!chromium.DevTools.Target.AttachedToTargetParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalTarget.prototype.onAttachedToTarget = function(listener) {};

/**
  * Issued when detached from target for any reason (including `detachFromTarget` command). Can be
 * issued multiple times per target if multiple sessions have been attached to it.
  *
  * @param {!function(!chromium.DevTools.Target.DetachedFromTargetParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalTarget.prototype.onDetachedFromTarget = function(listener) {};

/**
  * Notifies about a new protocol message received from the session (as reported in
 * `attachedToTarget` event).
  *
  * @param {!function(!chromium.DevTools.Target.ReceivedMessageFromTargetParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalTarget.prototype.onReceivedMessageFromTarget = function(listener) {};

/**
  * Issued when a possible inspection target is created.
  *
  * @param {!function(!chromium.DevTools.Target.TargetCreatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalTarget.prototype.onTargetCreated = function(listener) {};

/**
  * Issued when a target is destroyed.
  *
  * @param {!function(!chromium.DevTools.Target.TargetDestroyedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalTarget.prototype.onTargetDestroyed = function(listener) {};

/**
  * Issued when some information about a target has changed. This only happens between
 * `targetCreated` and `targetDestroyed`.
  *
  * @param {!function(!chromium.DevTools.Target.TargetInfoChangedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalTarget.prototype.onTargetInfoChanged = function(listener) {};



/**
  * Activates (focuses) the target.
  *
  * @param {chromium.DevTools.Target.ActivateTargetParams} params
  * @return {!Promise<chromium.DevTools.Target.ActivateTargetResult>}
  */
chromium.DevTools.Target.prototype.activateTarget = function(params) {};

/**
  * Attaches to the target with given id.
  *
  * @param {chromium.DevTools.Target.AttachToTargetParams} params
  * @return {!Promise<chromium.DevTools.Target.AttachToTargetResult>}
  */
chromium.DevTools.Target.prototype.attachToTarget = function(params) {};

/**
  * Closes the target. If the target is a page that gets closed too.
  *
  * @param {chromium.DevTools.Target.CloseTargetParams} params
  * @return {!Promise<chromium.DevTools.Target.CloseTargetResult>}
  */
chromium.DevTools.Target.prototype.closeTarget = function(params) {};

/**
  * Creates a new empty BrowserContext. Similar to an incognito profile but you can have more than
 * one.
  *
  * @return {!Promise<chromium.DevTools.Target.CreateBrowserContextResult>}
  */
chromium.DevTools.Target.prototype.createBrowserContext = function() {};

/**
  * Returns all browser contexts created with `Target.createBrowserContext` method.
  *
  * @return {!Promise<chromium.DevTools.Target.GetBrowserContextsResult>}
  */
chromium.DevTools.Target.prototype.getBrowserContexts = function() {};

/**
  * Creates a new page.
  *
  * @param {chromium.DevTools.Target.CreateTargetParams} params
  * @return {!Promise<chromium.DevTools.Target.CreateTargetResult>}
  */
chromium.DevTools.Target.prototype.createTarget = function(params) {};

/**
  * Detaches session with given id.
  *
  * @param {chromium.DevTools.Target.DetachFromTargetParams=} opt_params
  * @return {!Promise<chromium.DevTools.Target.DetachFromTargetResult>}
  */
chromium.DevTools.Target.prototype.detachFromTarget = function(opt_params) {};

/**
  * Deletes a BrowserContext. All the belonging pages will be closed without calling their
 * beforeunload hooks.
  *
  * @param {chromium.DevTools.Target.DisposeBrowserContextParams} params
  * @return {!Promise<chromium.DevTools.Target.DisposeBrowserContextResult>}
  */
chromium.DevTools.Target.prototype.disposeBrowserContext = function(params) {};

/**
  * Returns information about a target.
  *
  * @param {chromium.DevTools.Target.GetTargetInfoParams} params
  * @return {!Promise<chromium.DevTools.Target.GetTargetInfoResult>}
  */
chromium.DevTools.Target.prototype.getTargetInfo = function(params) {};

/**
  * Retrieves a list of available targets.
  *
  * @return {!Promise<chromium.DevTools.Target.GetTargetsResult>}
  */
chromium.DevTools.Target.prototype.getTargets = function() {};

/**
  * Sends protocol message over session with given id.
  *
  * @param {chromium.DevTools.Target.SendMessageToTargetParams} params
  * @return {!Promise<chromium.DevTools.Target.SendMessageToTargetResult>}
  */
chromium.DevTools.Target.prototype.sendMessageToTarget = function(params) {};

/**
  * Controls whether to automatically attach to new targets which are considered to be related to
 * this one. When turned on, attaches to all existing related targets as well. When turned off,
 * automatically detaches from all currently attached targets.
  *
  * @param {chromium.DevTools.Target.SetAutoAttachParams} params
  * @return {!Promise<chromium.DevTools.Target.SetAutoAttachResult>}
  */
chromium.DevTools.Target.prototype.setAutoAttach = function(params) {};

/**
  * Controls whether to discover available targets and notify via
 * `targetCreated/targetInfoChanged/targetDestroyed` events.
  *
  * @param {chromium.DevTools.Target.SetDiscoverTargetsParams} params
  * @return {!Promise<chromium.DevTools.Target.SetDiscoverTargetsResult>}
  */
chromium.DevTools.Target.prototype.setDiscoverTargets = function(params) {};

/**
  * Enables target discovery for the specified locations, when `setDiscoverTargets` was set to
 * `true`.
  *
  * @param {chromium.DevTools.Target.SetRemoteLocationsParams} params
  * @return {!Promise<chromium.DevTools.Target.SetRemoteLocationsResult>}
  */
chromium.DevTools.Target.prototype.setRemoteLocations = function(params) {};


/**
  * Issued when attached to target because of auto-attach or `attachToTarget` command.
  *
  * @param {!function(!chromium.DevTools.Target.AttachedToTargetParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Target.prototype.onAttachedToTarget = function(listener) {};

/**
  * Issued when detached from target for any reason (including `detachFromTarget` command). Can be
 * issued multiple times per target if multiple sessions have been attached to it.
  *
  * @param {!function(!chromium.DevTools.Target.DetachedFromTargetParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Target.prototype.onDetachedFromTarget = function(listener) {};

/**
  * Notifies about a new protocol message received from the session (as reported in
 * `attachedToTarget` event).
  *
  * @param {!function(!chromium.DevTools.Target.ReceivedMessageFromTargetParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Target.prototype.onReceivedMessageFromTarget = function(listener) {};

/**
  * Issued when a possible inspection target is created.
  *
  * @param {!function(!chromium.DevTools.Target.TargetCreatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Target.prototype.onTargetCreated = function(listener) {};

/**
  * Issued when a target is destroyed.
  *
  * @param {!function(!chromium.DevTools.Target.TargetDestroyedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Target.prototype.onTargetDestroyed = function(listener) {};

/**
  * Issued when some information about a target has changed. This only happens between
 * `targetCreated` and `targetDestroyed`.
  *
  * @param {!function(!chromium.DevTools.Target.TargetInfoChangedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Target.prototype.onTargetInfoChanged = function(listener) {};
