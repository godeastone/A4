// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the Target Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalTarget');
goog.provide('chromium.DevTools.Target');
goog.require('chromium.DevTools.Connection');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;

/**
 * Experimental bindings for the Target DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalTarget = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalTarget = chromium.DevTools.ExperimentalTarget;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalTarget.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the Target DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Target = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalTarget} */
  this.experimental = new ExperimentalTarget(connection);
}

const Target = chromium.DevTools.Target;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
Target.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}


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
Target.TargetInfo;

/**
 *
 * @typedef {{
 *   host: string,
 *   port: number
 * }}
 */
Target.RemoteLocation;

/**
 * Parameters for the ActivateTarget command.
 *
 *
 * @typedef {{
 *   targetId: string
 * }}
 */
Target.ActivateTargetParams;

/**
 * Result for the ActivateTarget command.
 *
 *
 * @typedef {undefined}
 */
Target.ActivateTargetResult;

/**
 * Parameters for the AttachToTarget command.
 *
 *
 * @typedef {{
 *   targetId: string
 * }}
 */
Target.AttachToTargetParams;

/**
 * Result for the AttachToTarget command.
 *
 * sessionId: Id assigned to the session.
 *
 * @typedef {{
 *   sessionId: string
 * }}
 */
Target.AttachToTargetResult;

/**
 * Parameters for the CloseTarget command.
 *
 *
 * @typedef {{
 *   targetId: string
 * }}
 */
Target.CloseTargetParams;

/**
 * Result for the CloseTarget command.
 *
 *
 * @typedef {{
 *   success: boolean
 * }}
 */
Target.CloseTargetResult;

/**
 * Parameters for the CreateBrowserContext command.
 *
 *
 * @typedef {undefined}
 */
Target.CreateBrowserContextParams;

/**
 * Result for the CreateBrowserContext command.
 *
 * browserContextId: The id of the context created.
 *
 * @typedef {{
 *   browserContextId: string
 * }}
 */
Target.CreateBrowserContextResult;

/**
 * Parameters for the GetBrowserContexts command.
 *
 *
 * @typedef {undefined}
 */
Target.GetBrowserContextsParams;

/**
 * Result for the GetBrowserContexts command.
 *
 * browserContextIds: An array of browser context ids.
 *
 * @typedef {{
 *   browserContextIds: !Array.<string>
 * }}
 */
Target.GetBrowserContextsResult;

/**
 * Parameters for the CreateTarget command.
 *
 * url: The initial URL the page will be navigated to.
 * width: Frame width in DIP (headless chrome only).
 * height: Frame height in DIP (headless chrome only).
 * browserContextId: The browser context to create the page in.
 * enableBeginFrameControl: Whether BeginFrames for this target will be controlled via DevTools (headless chrome only,
 *   not supported on MacOS yet, false by default).
 *
 * @typedef {{
 *   url: string,
 *   width: (number|undefined),
 *   height: (number|undefined),
 *   browserContextId: (string|undefined),
 *   enableBeginFrameControl: (boolean|undefined)
 * }}
 */
Target.CreateTargetParams;

/**
 * Result for the CreateTarget command.
 *
 * targetId: The id of the page opened.
 *
 * @typedef {{
 *   targetId: string
 * }}
 */
Target.CreateTargetResult;

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
Target.DetachFromTargetParams;

/**
 * Result for the DetachFromTarget command.
 *
 *
 * @typedef {undefined}
 */
Target.DetachFromTargetResult;

/**
 * Parameters for the DisposeBrowserContext command.
 *
 *
 * @typedef {{
 *   browserContextId: string
 * }}
 */
Target.DisposeBrowserContextParams;

/**
 * Result for the DisposeBrowserContext command.
 *
 *
 * @typedef {undefined}
 */
Target.DisposeBrowserContextResult;

/**
 * Parameters for the GetTargetInfo command.
 *
 *
 * @typedef {{
 *   targetId: string
 * }}
 */
Target.GetTargetInfoParams;

/**
 * Result for the GetTargetInfo command.
 *
 *
 * @typedef {{
 *   targetInfo: !Target.TargetInfo
 * }}
 */
Target.GetTargetInfoResult;

/**
 * Parameters for the GetTargets command.
 *
 *
 * @typedef {undefined}
 */
Target.GetTargetsParams;

/**
 * Result for the GetTargets command.
 *
 * targetInfos: The list of targets.
 *
 * @typedef {{
 *   targetInfos: !Array.<!Target.TargetInfo>
 * }}
 */
Target.GetTargetsResult;

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
Target.SendMessageToTargetParams;

/**
 * Result for the SendMessageToTarget command.
 *
 *
 * @typedef {undefined}
 */
Target.SendMessageToTargetResult;

/**
 * Parameters for the SetAutoAttach command.
 *
 * autoAttach: Whether to auto-attach to related targets.
 * waitForDebuggerOnStart: Whether to pause new targets when attaching to them. Use `Runtime.runIfWaitingForDebugger`
 *   to run paused targets.
 *
 * @typedef {{
 *   autoAttach: boolean,
 *   waitForDebuggerOnStart: boolean
 * }}
 */
Target.SetAutoAttachParams;

/**
 * Result for the SetAutoAttach command.
 *
 *
 * @typedef {undefined}
 */
Target.SetAutoAttachResult;

/**
 * Parameters for the SetDiscoverTargets command.
 *
 * discover: Whether to discover available targets.
 *
 * @typedef {{
 *   discover: boolean
 * }}
 */
Target.SetDiscoverTargetsParams;

/**
 * Result for the SetDiscoverTargets command.
 *
 *
 * @typedef {undefined}
 */
Target.SetDiscoverTargetsResult;

/**
 * Parameters for the SetRemoteLocations command.
 *
 * locations: List of remote locations.
 *
 * @typedef {{
 *   locations: !Array.<!Target.RemoteLocation>
 * }}
 */
Target.SetRemoteLocationsParams;

/**
 * Result for the SetRemoteLocations command.
 *
 *
 * @typedef {undefined}
 */
Target.SetRemoteLocationsResult;

/**
 * Parameters for the AttachedToTarget event.
 *
 * sessionId: Identifier assigned to the session used to send/receive messages.
 *
 * @typedef {{
 *   sessionId: string,
 *   targetInfo: !Target.TargetInfo,
 *   waitingForDebugger: boolean
 * }}
 */
Target.AttachedToTargetParams;

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
Target.DetachedFromTargetParams;

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
Target.ReceivedMessageFromTargetParams;

/**
 * Parameters for the TargetCreated event.
 *
 *
 * @typedef {{
 *   targetInfo: !Target.TargetInfo
 * }}
 */
Target.TargetCreatedParams;

/**
 * Parameters for the TargetDestroyed event.
 *
 *
 * @typedef {{
 *   targetId: string
 * }}
 */
Target.TargetDestroyedParams;

/**
 * Parameters for the TargetInfoChanged event.
 *
 *
 * @typedef {{
 *   targetInfo: !Target.TargetInfo
 * }}
 */
Target.TargetInfoChangedParams;



/**
  * Activates (focuses) the target.
  *
  * @param {Target.ActivateTargetParams} params
  * @return {!Promise<Target.ActivateTargetResult>}
  */
ExperimentalTarget.prototype.activateTarget = function(params) {
  return this.connection_.sendDevToolsMessage('Target.activateTarget', params);
};

/**
  * Attaches to the target with given id.
  *
  * @param {Target.AttachToTargetParams} params
  * @return {!Promise<Target.AttachToTargetResult>}
  */
ExperimentalTarget.prototype.attachToTarget = function(params) {
  return this.connection_.sendDevToolsMessage('Target.attachToTarget', params);
};

/**
  * Closes the target. If the target is a page that gets closed too.
  *
  * @param {Target.CloseTargetParams} params
  * @return {!Promise<Target.CloseTargetResult>}
  */
ExperimentalTarget.prototype.closeTarget = function(params) {
  return this.connection_.sendDevToolsMessage('Target.closeTarget', params);
};

/**
  * Creates a new empty BrowserContext. Similar to an incognito profile but you can have more than
 * one.
  *
  * @return {!Promise<Target.CreateBrowserContextResult>}
  */
ExperimentalTarget.prototype.createBrowserContext = function() {
  return this.connection_.sendDevToolsMessage('Target.createBrowserContext', {});
};

/**
  * Returns all browser contexts created with `Target.createBrowserContext` method.
  *
  * @return {!Promise<Target.GetBrowserContextsResult>}
  */
ExperimentalTarget.prototype.getBrowserContexts = function() {
  return this.connection_.sendDevToolsMessage('Target.getBrowserContexts', {});
};

/**
  * Creates a new page.
  *
  * @param {Target.CreateTargetParams} params
  * @return {!Promise<Target.CreateTargetResult>}
  */
ExperimentalTarget.prototype.createTarget = function(params) {
  return this.connection_.sendDevToolsMessage('Target.createTarget', params);
};

/**
  * Detaches session with given id.
  *
  * @param {Target.DetachFromTargetParams=} opt_params
  * @return {!Promise<Target.DetachFromTargetResult>}
  */
ExperimentalTarget.prototype.detachFromTarget = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Target.detachFromTarget', opt_params || {});
};

/**
  * Deletes a BrowserContext. All the belonging pages will be closed without calling their
 * beforeunload hooks.
  *
  * @param {Target.DisposeBrowserContextParams} params
  * @return {!Promise<Target.DisposeBrowserContextResult>}
  */
ExperimentalTarget.prototype.disposeBrowserContext = function(params) {
  return this.connection_.sendDevToolsMessage('Target.disposeBrowserContext', params);
};

/**
  * Returns information about a target.
  *
  * @param {Target.GetTargetInfoParams} params
  * @return {!Promise<Target.GetTargetInfoResult>}
  */
ExperimentalTarget.prototype.getTargetInfo = function(params) {
  return this.connection_.sendDevToolsMessage('Target.getTargetInfo', params);
};

/**
  * Retrieves a list of available targets.
  *
  * @return {!Promise<Target.GetTargetsResult>}
  */
ExperimentalTarget.prototype.getTargets = function() {
  return this.connection_.sendDevToolsMessage('Target.getTargets', {});
};

/**
  * Sends protocol message over session with given id.
  *
  * @param {Target.SendMessageToTargetParams} params
  * @return {!Promise<Target.SendMessageToTargetResult>}
  */
ExperimentalTarget.prototype.sendMessageToTarget = function(params) {
  return this.connection_.sendDevToolsMessage('Target.sendMessageToTarget', params);
};

/**
  * Controls whether to automatically attach to new targets which are considered to be related to
 * this one. When turned on, attaches to all existing related targets as well. When turned off,
 * automatically detaches from all currently attached targets.
  *
  * @param {Target.SetAutoAttachParams} params
  * @return {!Promise<Target.SetAutoAttachResult>}
  */
ExperimentalTarget.prototype.setAutoAttach = function(params) {
  return this.connection_.sendDevToolsMessage('Target.setAutoAttach', params);
};

/**
  * Controls whether to discover available targets and notify via
 * `targetCreated/targetInfoChanged/targetDestroyed` events.
  *
  * @param {Target.SetDiscoverTargetsParams} params
  * @return {!Promise<Target.SetDiscoverTargetsResult>}
  */
ExperimentalTarget.prototype.setDiscoverTargets = function(params) {
  return this.connection_.sendDevToolsMessage('Target.setDiscoverTargets', params);
};

/**
  * Enables target discovery for the specified locations, when `setDiscoverTargets` was set to
 * `true`.
  *
  * @param {Target.SetRemoteLocationsParams} params
  * @return {!Promise<Target.SetRemoteLocationsResult>}
  */
ExperimentalTarget.prototype.setRemoteLocations = function(params) {
  return this.connection_.sendDevToolsMessage('Target.setRemoteLocations', params);
};


/**
  * Issued when attached to target because of auto-attach or `attachToTarget` command.
  *
  * @param {!function(!Target.AttachedToTargetParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalTarget.prototype.onAttachedToTarget = function(listener) {
  return this.connection_.addEventListener(
      'Target.attachedToTarget', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Issued when detached from target for any reason (including `detachFromTarget` command). Can be
 * issued multiple times per target if multiple sessions have been attached to it.
  *
  * @param {!function(!Target.DetachedFromTargetParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalTarget.prototype.onDetachedFromTarget = function(listener) {
  return this.connection_.addEventListener(
      'Target.detachedFromTarget', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Notifies about a new protocol message received from the session (as reported in
 * `attachedToTarget` event).
  *
  * @param {!function(!Target.ReceivedMessageFromTargetParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalTarget.prototype.onReceivedMessageFromTarget = function(listener) {
  return this.connection_.addEventListener(
      'Target.receivedMessageFromTarget', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Issued when a possible inspection target is created.
  *
  * @param {!function(!Target.TargetCreatedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalTarget.prototype.onTargetCreated = function(listener) {
  return this.connection_.addEventListener(
      'Target.targetCreated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Issued when a target is destroyed.
  *
  * @param {!function(!Target.TargetDestroyedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalTarget.prototype.onTargetDestroyed = function(listener) {
  return this.connection_.addEventListener(
      'Target.targetDestroyed', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Issued when some information about a target has changed. This only happens between
 * `targetCreated` and `targetDestroyed`.
  *
  * @param {!function(!Target.TargetInfoChangedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalTarget.prototype.onTargetInfoChanged = function(listener) {
  return this.connection_.addEventListener(
      'Target.targetInfoChanged', /** @type {!function(!Object): undefined} */ (listener));
};



/**
  * Activates (focuses) the target.
  *
  * @param {Target.ActivateTargetParams} params
  * @return {!Promise<Target.ActivateTargetResult>}
  */
Target.prototype.activateTarget = function(params) {
  return this.connection_.sendDevToolsMessage('Target.activateTarget', params);
};

/**
  * Attaches to the target with given id.
  *
  * @param {Target.AttachToTargetParams} params
  * @return {!Promise<Target.AttachToTargetResult>}
  */
Target.prototype.attachToTarget = function(params) {
  return this.connection_.sendDevToolsMessage('Target.attachToTarget', params);
};

/**
  * Closes the target. If the target is a page that gets closed too.
  *
  * @param {Target.CloseTargetParams} params
  * @return {!Promise<Target.CloseTargetResult>}
  */
Target.prototype.closeTarget = function(params) {
  return this.connection_.sendDevToolsMessage('Target.closeTarget', params);
};

/**
  * Creates a new empty BrowserContext. Similar to an incognito profile but you can have more than
 * one.
  *
  * @return {!Promise<Target.CreateBrowserContextResult>}
  */
Target.prototype.createBrowserContext = function() {
  return this.connection_.sendDevToolsMessage('Target.createBrowserContext', {});
};

/**
  * Returns all browser contexts created with `Target.createBrowserContext` method.
  *
  * @return {!Promise<Target.GetBrowserContextsResult>}
  */
Target.prototype.getBrowserContexts = function() {
  return this.connection_.sendDevToolsMessage('Target.getBrowserContexts', {});
};

/**
  * Creates a new page.
  *
  * @param {Target.CreateTargetParams} params
  * @return {!Promise<Target.CreateTargetResult>}
  */
Target.prototype.createTarget = function(params) {
  return this.connection_.sendDevToolsMessage('Target.createTarget', params);
};

/**
  * Detaches session with given id.
  *
  * @param {Target.DetachFromTargetParams=} opt_params
  * @return {!Promise<Target.DetachFromTargetResult>}
  */
Target.prototype.detachFromTarget = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Target.detachFromTarget', opt_params || {});
};

/**
  * Deletes a BrowserContext. All the belonging pages will be closed without calling their
 * beforeunload hooks.
  *
  * @param {Target.DisposeBrowserContextParams} params
  * @return {!Promise<Target.DisposeBrowserContextResult>}
  */
Target.prototype.disposeBrowserContext = function(params) {
  return this.connection_.sendDevToolsMessage('Target.disposeBrowserContext', params);
};

/**
  * Returns information about a target.
  *
  * @param {Target.GetTargetInfoParams} params
  * @return {!Promise<Target.GetTargetInfoResult>}
  */
Target.prototype.getTargetInfo = function(params) {
  return this.connection_.sendDevToolsMessage('Target.getTargetInfo', params);
};

/**
  * Retrieves a list of available targets.
  *
  * @return {!Promise<Target.GetTargetsResult>}
  */
Target.prototype.getTargets = function() {
  return this.connection_.sendDevToolsMessage('Target.getTargets', {});
};

/**
  * Sends protocol message over session with given id.
  *
  * @param {Target.SendMessageToTargetParams} params
  * @return {!Promise<Target.SendMessageToTargetResult>}
  */
Target.prototype.sendMessageToTarget = function(params) {
  return this.connection_.sendDevToolsMessage('Target.sendMessageToTarget', params);
};

/**
  * Controls whether to automatically attach to new targets which are considered to be related to
 * this one. When turned on, attaches to all existing related targets as well. When turned off,
 * automatically detaches from all currently attached targets.
  *
  * @param {Target.SetAutoAttachParams} params
  * @return {!Promise<Target.SetAutoAttachResult>}
  */
Target.prototype.setAutoAttach = function(params) {
  return this.connection_.sendDevToolsMessage('Target.setAutoAttach', params);
};

/**
  * Controls whether to discover available targets and notify via
 * `targetCreated/targetInfoChanged/targetDestroyed` events.
  *
  * @param {Target.SetDiscoverTargetsParams} params
  * @return {!Promise<Target.SetDiscoverTargetsResult>}
  */
Target.prototype.setDiscoverTargets = function(params) {
  return this.connection_.sendDevToolsMessage('Target.setDiscoverTargets', params);
};

/**
  * Enables target discovery for the specified locations, when `setDiscoverTargets` was set to
 * `true`.
  *
  * @param {Target.SetRemoteLocationsParams} params
  * @return {!Promise<Target.SetRemoteLocationsResult>}
  */
Target.prototype.setRemoteLocations = function(params) {
  return this.connection_.sendDevToolsMessage('Target.setRemoteLocations', params);
};


/**
  * Issued when attached to target because of auto-attach or `attachToTarget` command.
  *
  * @param {!function(!Target.AttachedToTargetParams)} listener
  * @return {number} The id of this event listener.
  */
Target.prototype.onAttachedToTarget = function(listener) {
  return this.connection_.addEventListener(
      'Target.attachedToTarget', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Issued when detached from target for any reason (including `detachFromTarget` command). Can be
 * issued multiple times per target if multiple sessions have been attached to it.
  *
  * @param {!function(!Target.DetachedFromTargetParams)} listener
  * @return {number} The id of this event listener.
  */
Target.prototype.onDetachedFromTarget = function(listener) {
  return this.connection_.addEventListener(
      'Target.detachedFromTarget', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Notifies about a new protocol message received from the session (as reported in
 * `attachedToTarget` event).
  *
  * @param {!function(!Target.ReceivedMessageFromTargetParams)} listener
  * @return {number} The id of this event listener.
  */
Target.prototype.onReceivedMessageFromTarget = function(listener) {
  return this.connection_.addEventListener(
      'Target.receivedMessageFromTarget', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Issued when a possible inspection target is created.
  *
  * @param {!function(!Target.TargetCreatedParams)} listener
  * @return {number} The id of this event listener.
  */
Target.prototype.onTargetCreated = function(listener) {
  return this.connection_.addEventListener(
      'Target.targetCreated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Issued when a target is destroyed.
  *
  * @param {!function(!Target.TargetDestroyedParams)} listener
  * @return {number} The id of this event listener.
  */
Target.prototype.onTargetDestroyed = function(listener) {
  return this.connection_.addEventListener(
      'Target.targetDestroyed', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Issued when some information about a target has changed. This only happens between
 * `targetCreated` and `targetDestroyed`.
  *
  * @param {!function(!Target.TargetInfoChangedParams)} listener
  * @return {number} The id of this event listener.
  */
Target.prototype.onTargetInfoChanged = function(listener) {
  return this.connection_.addEventListener(
      'Target.targetInfoChanged', /** @type {!function(!Object): undefined} */ (listener));
};

});  // goog.scope

