// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the Emulation Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalEmulation');
goog.provide('chromium.DevTools.Emulation');
goog.require('chromium.DevTools.Connection');
goog.require('chromium.DevTools.DOM');
goog.require('chromium.DevTools.Page');
goog.require('chromium.DevTools.Runtime');
goog.forwardDeclare('chromium.DevTools.Network.TimeSinceEpoch');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;
const DOM = chromium.DevTools.DOM;
const Page = chromium.DevTools.Page;
const Runtime = chromium.DevTools.Runtime;

/**
 * Experimental bindings for the Emulation DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalEmulation = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalEmulation = chromium.DevTools.ExperimentalEmulation;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalEmulation.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the Emulation DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Emulation = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalEmulation} */
  this.experimental = new ExperimentalEmulation(connection);
}

const Emulation = chromium.DevTools.Emulation;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
Emulation.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * advance: If the scheduler runs out of immediate work, the virtual time base may fast forward to
 * allow the next delayed task (if any) to run; pause: The virtual time base may not advance;
 * pauseIfNetworkFetchesPending: The virtual time base may not advance if there are any pending
 * resource fetches.
 *
 * @enum {string}
 */
Emulation.VirtualTimePolicy = {
    ADVANCE: "advance",
    PAUSE: "pause",
    PAUSE_IF_NETWORK_FETCHES_PENDING: "pauseIfNetworkFetchesPending"
};

/**
 * Orientation type.
 *
 * @enum {string}
 */
Emulation.ScreenOrientationType = {
    PORTRAIT_PRIMARY: "portraitPrimary",
    PORTRAIT_SECONDARY: "portraitSecondary",
    LANDSCAPE_PRIMARY: "landscapePrimary",
    LANDSCAPE_SECONDARY: "landscapeSecondary"
};

/**
 * Touch/gesture events configuration. Default: current platform.
 *
 * @enum {string}
 */
Emulation.SetEmitTouchEventsForMouseConfiguration = {
    MOBILE: "mobile",
    DESKTOP: "desktop"
};


/**
 * Screen orientation.
 *
 * type: Orientation type.
 * angle: Orientation angle.
 *
 * @typedef {{
 *   type: !Emulation.ScreenOrientationType,
 *   angle: number
 * }}
 */
Emulation.ScreenOrientation;

/**
 * Parameters for the CanEmulate command.
 *
 *
 * @typedef {undefined}
 */
Emulation.CanEmulateParams;

/**
 * Result for the CanEmulate command.
 *
 * result: True if emulation is supported.
 *
 * @typedef {{
 *   result: boolean
 * }}
 */
Emulation.CanEmulateResult;

/**
 * Parameters for the ClearDeviceMetricsOverride command.
 *
 *
 * @typedef {undefined}
 */
Emulation.ClearDeviceMetricsOverrideParams;

/**
 * Result for the ClearDeviceMetricsOverride command.
 *
 *
 * @typedef {undefined}
 */
Emulation.ClearDeviceMetricsOverrideResult;

/**
 * Parameters for the ClearGeolocationOverride command.
 *
 *
 * @typedef {undefined}
 */
Emulation.ClearGeolocationOverrideParams;

/**
 * Result for the ClearGeolocationOverride command.
 *
 *
 * @typedef {undefined}
 */
Emulation.ClearGeolocationOverrideResult;

/**
 * Parameters for the ResetPageScaleFactor command.
 *
 *
 * @typedef {undefined}
 */
Emulation.ResetPageScaleFactorParams;

/**
 * Result for the ResetPageScaleFactor command.
 *
 *
 * @typedef {undefined}
 */
Emulation.ResetPageScaleFactorResult;

/**
 * Parameters for the SetCPUThrottlingRate command.
 *
 * rate: Throttling rate as a slowdown factor (1 is no throttle, 2 is 2x slowdown, etc).
 *
 * @typedef {{
 *   rate: number
 * }}
 */
Emulation.SetCPUThrottlingRateParams;

/**
 * Result for the SetCPUThrottlingRate command.
 *
 *
 * @typedef {undefined}
 */
Emulation.SetCPUThrottlingRateResult;

/**
 * Parameters for the SetDefaultBackgroundColorOverride command.
 *
 * color: RGBA of the default background color. If not specified, any existing override will be
 *   cleared.
 *
 * @typedef {{
 *   color: (!DOM.RGBA|undefined)
 * }}
 */
Emulation.SetDefaultBackgroundColorOverrideParams;

/**
 * Result for the SetDefaultBackgroundColorOverride command.
 *
 *
 * @typedef {undefined}
 */
Emulation.SetDefaultBackgroundColorOverrideResult;

/**
 * Parameters for the SetDeviceMetricsOverride command.
 *
 * width: Overriding width value in pixels (minimum 0, maximum 10000000). 0 disables the override.
 * height: Overriding height value in pixels (minimum 0, maximum 10000000). 0 disables the override.
 * deviceScaleFactor: Overriding device scale factor value. 0 disables the override.
 * mobile: Whether to emulate mobile device. This includes viewport meta tag, overlay scrollbars, text
 *   autosizing and more.
 * scale: Scale to apply to resulting view image.
 * screenWidth: Overriding screen width value in pixels (minimum 0, maximum 10000000).
 * screenHeight: Overriding screen height value in pixels (minimum 0, maximum 10000000).
 * positionX: Overriding view X position on screen in pixels (minimum 0, maximum 10000000).
 * positionY: Overriding view Y position on screen in pixels (minimum 0, maximum 10000000).
 * dontSetVisibleSize: Do not set visible view size, rely upon explicit setVisibleSize call.
 * screenOrientation: Screen orientation override.
 * viewport: If set, the visible area of the page will be overridden to this viewport. This viewport
 *   change is not observed by the page, e.g. viewport-relative elements do not change positions.
 *
 * @typedef {{
 *   width: number,
 *   height: number,
 *   deviceScaleFactor: number,
 *   mobile: boolean,
 *   scale: (number|undefined),
 *   screenWidth: (number|undefined),
 *   screenHeight: (number|undefined),
 *   positionX: (number|undefined),
 *   positionY: (number|undefined),
 *   dontSetVisibleSize: (boolean|undefined),
 *   screenOrientation: (!Emulation.ScreenOrientation|undefined),
 *   viewport: (!Page.Viewport|undefined)
 * }}
 */
Emulation.SetDeviceMetricsOverrideParams;

/**
 * Result for the SetDeviceMetricsOverride command.
 *
 *
 * @typedef {undefined}
 */
Emulation.SetDeviceMetricsOverrideResult;

/**
 * Parameters for the SetEmitTouchEventsForMouse command.
 *
 * enabled: Whether touch emulation based on mouse input should be enabled.
 * configuration: Touch/gesture events configuration. Default: current platform.
 *
 * @typedef {{
 *   enabled: boolean,
 *   configuration: (!Emulation.SetEmitTouchEventsForMouseConfiguration|undefined)
 * }}
 */
Emulation.SetEmitTouchEventsForMouseParams;

/**
 * Result for the SetEmitTouchEventsForMouse command.
 *
 *
 * @typedef {undefined}
 */
Emulation.SetEmitTouchEventsForMouseResult;

/**
 * Parameters for the SetEmulatedMedia command.
 *
 * media: Media type to emulate. Empty string disables the override.
 *
 * @typedef {{
 *   media: string
 * }}
 */
Emulation.SetEmulatedMediaParams;

/**
 * Result for the SetEmulatedMedia command.
 *
 *
 * @typedef {undefined}
 */
Emulation.SetEmulatedMediaResult;

/**
 * Parameters for the SetGeolocationOverride command.
 *
 * latitude: Mock latitude
 * longitude: Mock longitude
 * accuracy: Mock accuracy
 *
 * @typedef {{
 *   latitude: (number|undefined),
 *   longitude: (number|undefined),
 *   accuracy: (number|undefined)
 * }}
 */
Emulation.SetGeolocationOverrideParams;

/**
 * Result for the SetGeolocationOverride command.
 *
 *
 * @typedef {undefined}
 */
Emulation.SetGeolocationOverrideResult;

/**
 * Parameters for the SetNavigatorOverrides command.
 *
 * platform: The platform navigator.platform should return.
 *
 * @typedef {{
 *   platform: string
 * }}
 */
Emulation.SetNavigatorOverridesParams;

/**
 * Result for the SetNavigatorOverrides command.
 *
 *
 * @typedef {undefined}
 */
Emulation.SetNavigatorOverridesResult;

/**
 * Parameters for the SetPageScaleFactor command.
 *
 * pageScaleFactor: Page scale factor.
 *
 * @typedef {{
 *   pageScaleFactor: number
 * }}
 */
Emulation.SetPageScaleFactorParams;

/**
 * Result for the SetPageScaleFactor command.
 *
 *
 * @typedef {undefined}
 */
Emulation.SetPageScaleFactorResult;

/**
 * Parameters for the SetScriptExecutionDisabled command.
 *
 * value: Whether script execution should be disabled in the page.
 *
 * @typedef {{
 *   value: boolean
 * }}
 */
Emulation.SetScriptExecutionDisabledParams;

/**
 * Result for the SetScriptExecutionDisabled command.
 *
 *
 * @typedef {undefined}
 */
Emulation.SetScriptExecutionDisabledResult;

/**
 * Parameters for the SetTouchEmulationEnabled command.
 *
 * enabled: Whether the touch event emulation should be enabled.
 * maxTouchPoints: Maximum touch points supported. Defaults to one.
 *
 * @typedef {{
 *   enabled: boolean,
 *   maxTouchPoints: (number|undefined)
 * }}
 */
Emulation.SetTouchEmulationEnabledParams;

/**
 * Result for the SetTouchEmulationEnabled command.
 *
 *
 * @typedef {undefined}
 */
Emulation.SetTouchEmulationEnabledResult;

/**
 * Parameters for the SetVirtualTimePolicy command.
 *
 * budget: If set, after this many virtual milliseconds have elapsed virtual time will be paused and a
 *   virtualTimeBudgetExpired event is sent.
 * maxVirtualTimeTaskStarvationCount: If set this specifies the maximum number of tasks that can be run before virtual is forced
 *   forwards to prevent deadlock.
 * waitForNavigation: If set the virtual time policy change should be deferred until any frame starts navigating.
 *   Note any previous deferred policy change is superseded.
 * initialVirtualTime: If set, base::Time::Now will be overriden to initially return this value.
 *
 * @typedef {{
 *   policy: !Emulation.VirtualTimePolicy,
 *   budget: (number|undefined),
 *   maxVirtualTimeTaskStarvationCount: (number|undefined),
 *   waitForNavigation: (boolean|undefined),
 *   initialVirtualTime: (number|undefined)
 * }}
 */
Emulation.SetVirtualTimePolicyParams;

/**
 * Result for the SetVirtualTimePolicy command.
 *
 * virtualTimeTicksBase: Absolute timestamp at which virtual time was first enabled (up time in milliseconds).
 *
 * @typedef {{
 *   virtualTimeTicksBase: number
 * }}
 */
Emulation.SetVirtualTimePolicyResult;

/**
 * Parameters for the SetVisibleSize command.
 *
 * width: Frame width (DIP).
 * height: Frame height (DIP).
 *
 * @typedef {{
 *   width: number,
 *   height: number
 * }}
 */
Emulation.SetVisibleSizeParams;

/**
 * Result for the SetVisibleSize command.
 *
 *
 * @typedef {undefined}
 */
Emulation.SetVisibleSizeResult;

/**
 * Parameters for the VirtualTimeAdvanced event.
 *
 * virtualTimeElapsed: The amount of virtual time that has elapsed in milliseconds since virtual time was first
 *   enabled.
 *
 * @typedef {{
 *   virtualTimeElapsed: number
 * }}
 */
Emulation.VirtualTimeAdvancedParams;

/**
 * Parameters for the VirtualTimeBudgetExpired event.
 *
 *
 * @typedef {undefined}
 */
Emulation.VirtualTimeBudgetExpiredParams;

/**
 * Parameters for the VirtualTimePaused event.
 *
 * virtualTimeElapsed: The amount of virtual time that has elapsed in milliseconds since virtual time was first
 *   enabled.
 *
 * @typedef {{
 *   virtualTimeElapsed: number
 * }}
 */
Emulation.VirtualTimePausedParams;



/**
  * Tells whether emulation is supported.
  *
  * @return {!Promise<Emulation.CanEmulateResult>}
  */
ExperimentalEmulation.prototype.canEmulate = function() {
  return this.connection_.sendDevToolsMessage('Emulation.canEmulate', {});
};

/**
  * Clears the overriden device metrics.
  *
  * @return {!Promise<Emulation.ClearDeviceMetricsOverrideResult>}
  */
ExperimentalEmulation.prototype.clearDeviceMetricsOverride = function() {
  return this.connection_.sendDevToolsMessage('Emulation.clearDeviceMetricsOverride', {});
};

/**
  * Clears the overriden Geolocation Position and Error.
  *
  * @return {!Promise<Emulation.ClearGeolocationOverrideResult>}
  */
ExperimentalEmulation.prototype.clearGeolocationOverride = function() {
  return this.connection_.sendDevToolsMessage('Emulation.clearGeolocationOverride', {});
};

/**
  * Requests that page scale factor is reset to initial values.
  *
  * @return {!Promise<Emulation.ResetPageScaleFactorResult>}
  */
ExperimentalEmulation.prototype.resetPageScaleFactor = function() {
  return this.connection_.sendDevToolsMessage('Emulation.resetPageScaleFactor', {});
};

/**
  * Enables CPU throttling to emulate slow CPUs.
  *
  * @param {Emulation.SetCPUThrottlingRateParams} params
  * @return {!Promise<Emulation.SetCPUThrottlingRateResult>}
  */
ExperimentalEmulation.prototype.setCPUThrottlingRate = function(params) {
  return this.connection_.sendDevToolsMessage('Emulation.setCPUThrottlingRate', params);
};

/**
  * Sets or clears an override of the default background color of the frame. This override is used
 * if the content does not specify one.
  *
  * @param {Emulation.SetDefaultBackgroundColorOverrideParams=} opt_params
  * @return {!Promise<Emulation.SetDefaultBackgroundColorOverrideResult>}
  */
ExperimentalEmulation.prototype.setDefaultBackgroundColorOverride = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Emulation.setDefaultBackgroundColorOverride', opt_params || {});
};

/**
  * Overrides the values of device screen dimensions (window.screen.width, window.screen.height,
 * window.innerWidth, window.innerHeight, and "device-width"/"device-height"-related CSS media
 * query results).
  *
  * @param {Emulation.SetDeviceMetricsOverrideParams} params
  * @return {!Promise<Emulation.SetDeviceMetricsOverrideResult>}
  */
ExperimentalEmulation.prototype.setDeviceMetricsOverride = function(params) {
  return this.connection_.sendDevToolsMessage('Emulation.setDeviceMetricsOverride', params);
};

/**
  * @param {Emulation.SetEmitTouchEventsForMouseParams} params
  * @return {!Promise<Emulation.SetEmitTouchEventsForMouseResult>}
  */
ExperimentalEmulation.prototype.setEmitTouchEventsForMouse = function(params) {
  return this.connection_.sendDevToolsMessage('Emulation.setEmitTouchEventsForMouse', params);
};

/**
  * Emulates the given media for CSS media queries.
  *
  * @param {Emulation.SetEmulatedMediaParams} params
  * @return {!Promise<Emulation.SetEmulatedMediaResult>}
  */
ExperimentalEmulation.prototype.setEmulatedMedia = function(params) {
  return this.connection_.sendDevToolsMessage('Emulation.setEmulatedMedia', params);
};

/**
  * Overrides the Geolocation Position or Error. Omitting any of the parameters emulates position
 * unavailable.
  *
  * @param {Emulation.SetGeolocationOverrideParams=} opt_params
  * @return {!Promise<Emulation.SetGeolocationOverrideResult>}
  */
ExperimentalEmulation.prototype.setGeolocationOverride = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Emulation.setGeolocationOverride', opt_params || {});
};

/**
  * Overrides value returned by the javascript navigator object.
  *
  * @param {Emulation.SetNavigatorOverridesParams} params
  * @return {!Promise<Emulation.SetNavigatorOverridesResult>}
  */
ExperimentalEmulation.prototype.setNavigatorOverrides = function(params) {
  return this.connection_.sendDevToolsMessage('Emulation.setNavigatorOverrides', params);
};

/**
  * Sets a specified page scale factor.
  *
  * @param {Emulation.SetPageScaleFactorParams} params
  * @return {!Promise<Emulation.SetPageScaleFactorResult>}
  */
ExperimentalEmulation.prototype.setPageScaleFactor = function(params) {
  return this.connection_.sendDevToolsMessage('Emulation.setPageScaleFactor', params);
};

/**
  * Switches script execution in the page.
  *
  * @param {Emulation.SetScriptExecutionDisabledParams} params
  * @return {!Promise<Emulation.SetScriptExecutionDisabledResult>}
  */
ExperimentalEmulation.prototype.setScriptExecutionDisabled = function(params) {
  return this.connection_.sendDevToolsMessage('Emulation.setScriptExecutionDisabled', params);
};

/**
  * Enables touch on platforms which do not support them.
  *
  * @param {Emulation.SetTouchEmulationEnabledParams} params
  * @return {!Promise<Emulation.SetTouchEmulationEnabledResult>}
  */
ExperimentalEmulation.prototype.setTouchEmulationEnabled = function(params) {
  return this.connection_.sendDevToolsMessage('Emulation.setTouchEmulationEnabled', params);
};

/**
  * Turns on virtual time for all frames (replacing real-time with a synthetic time source) and sets
 * the current virtual time policy.  Note this supersedes any previous time budget.
  *
  * @param {Emulation.SetVirtualTimePolicyParams} params
  * @return {!Promise<Emulation.SetVirtualTimePolicyResult>}
  */
ExperimentalEmulation.prototype.setVirtualTimePolicy = function(params) {
  return this.connection_.sendDevToolsMessage('Emulation.setVirtualTimePolicy', params);
};

/**
  * Resizes the frame/viewport of the page. Note that this does not affect the frame's container
 * (e.g. browser window). Can be used to produce screenshots of the specified size. Not supported
 * on Android.
  *
  * @param {Emulation.SetVisibleSizeParams} params
  * @return {!Promise<Emulation.SetVisibleSizeResult>}
  */
ExperimentalEmulation.prototype.setVisibleSize = function(params) {
  return this.connection_.sendDevToolsMessage('Emulation.setVisibleSize', params);
};


/**
  * Notification sent after the virtual time has advanced.
  *
  * @param {!function(!Emulation.VirtualTimeAdvancedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalEmulation.prototype.onVirtualTimeAdvanced = function(listener) {
  return this.connection_.addEventListener(
      'Emulation.virtualTimeAdvanced', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Notification sent after the virtual time budget for the current VirtualTimePolicy has run out.
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
ExperimentalEmulation.prototype.onVirtualTimeBudgetExpired = function(listener) {
  return this.connection_.addEventListener(
      'Emulation.virtualTimeBudgetExpired', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Notification sent after the virtual time has paused.
  *
  * @param {!function(!Emulation.VirtualTimePausedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalEmulation.prototype.onVirtualTimePaused = function(listener) {
  return this.connection_.addEventListener(
      'Emulation.virtualTimePaused', /** @type {!function(!Object): undefined} */ (listener));
};



/**
  * Tells whether emulation is supported.
  *
  * @return {!Promise<Emulation.CanEmulateResult>}
  */
Emulation.prototype.canEmulate = function() {
  return this.connection_.sendDevToolsMessage('Emulation.canEmulate', {});
};

/**
  * Clears the overriden device metrics.
  *
  * @return {!Promise<Emulation.ClearDeviceMetricsOverrideResult>}
  */
Emulation.prototype.clearDeviceMetricsOverride = function() {
  return this.connection_.sendDevToolsMessage('Emulation.clearDeviceMetricsOverride', {});
};

/**
  * Clears the overriden Geolocation Position and Error.
  *
  * @return {!Promise<Emulation.ClearGeolocationOverrideResult>}
  */
Emulation.prototype.clearGeolocationOverride = function() {
  return this.connection_.sendDevToolsMessage('Emulation.clearGeolocationOverride', {});
};

/**
  * Requests that page scale factor is reset to initial values.
  *
  * @return {!Promise<Emulation.ResetPageScaleFactorResult>}
  */
Emulation.prototype.resetPageScaleFactor = function() {
  return this.connection_.sendDevToolsMessage('Emulation.resetPageScaleFactor', {});
};

/**
  * Enables CPU throttling to emulate slow CPUs.
  *
  * @param {Emulation.SetCPUThrottlingRateParams} params
  * @return {!Promise<Emulation.SetCPUThrottlingRateResult>}
  */
Emulation.prototype.setCPUThrottlingRate = function(params) {
  return this.connection_.sendDevToolsMessage('Emulation.setCPUThrottlingRate', params);
};

/**
  * Sets or clears an override of the default background color of the frame. This override is used
 * if the content does not specify one.
  *
  * @param {Emulation.SetDefaultBackgroundColorOverrideParams=} opt_params
  * @return {!Promise<Emulation.SetDefaultBackgroundColorOverrideResult>}
  */
Emulation.prototype.setDefaultBackgroundColorOverride = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Emulation.setDefaultBackgroundColorOverride', opt_params || {});
};

/**
  * Overrides the values of device screen dimensions (window.screen.width, window.screen.height,
 * window.innerWidth, window.innerHeight, and "device-width"/"device-height"-related CSS media
 * query results).
  *
  * @param {Emulation.SetDeviceMetricsOverrideParams} params
  * @return {!Promise<Emulation.SetDeviceMetricsOverrideResult>}
  */
Emulation.prototype.setDeviceMetricsOverride = function(params) {
  return this.connection_.sendDevToolsMessage('Emulation.setDeviceMetricsOverride', params);
};

/**
  * @param {Emulation.SetEmitTouchEventsForMouseParams} params
  * @return {!Promise<Emulation.SetEmitTouchEventsForMouseResult>}
  */
Emulation.prototype.setEmitTouchEventsForMouse = function(params) {
  return this.connection_.sendDevToolsMessage('Emulation.setEmitTouchEventsForMouse', params);
};

/**
  * Emulates the given media for CSS media queries.
  *
  * @param {Emulation.SetEmulatedMediaParams} params
  * @return {!Promise<Emulation.SetEmulatedMediaResult>}
  */
Emulation.prototype.setEmulatedMedia = function(params) {
  return this.connection_.sendDevToolsMessage('Emulation.setEmulatedMedia', params);
};

/**
  * Overrides the Geolocation Position or Error. Omitting any of the parameters emulates position
 * unavailable.
  *
  * @param {Emulation.SetGeolocationOverrideParams=} opt_params
  * @return {!Promise<Emulation.SetGeolocationOverrideResult>}
  */
Emulation.prototype.setGeolocationOverride = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Emulation.setGeolocationOverride', opt_params || {});
};

/**
  * Overrides value returned by the javascript navigator object.
  *
  * @param {Emulation.SetNavigatorOverridesParams} params
  * @return {!Promise<Emulation.SetNavigatorOverridesResult>}
  */
Emulation.prototype.setNavigatorOverrides = function(params) {
  return this.connection_.sendDevToolsMessage('Emulation.setNavigatorOverrides', params);
};

/**
  * Sets a specified page scale factor.
  *
  * @param {Emulation.SetPageScaleFactorParams} params
  * @return {!Promise<Emulation.SetPageScaleFactorResult>}
  */
Emulation.prototype.setPageScaleFactor = function(params) {
  return this.connection_.sendDevToolsMessage('Emulation.setPageScaleFactor', params);
};

/**
  * Switches script execution in the page.
  *
  * @param {Emulation.SetScriptExecutionDisabledParams} params
  * @return {!Promise<Emulation.SetScriptExecutionDisabledResult>}
  */
Emulation.prototype.setScriptExecutionDisabled = function(params) {
  return this.connection_.sendDevToolsMessage('Emulation.setScriptExecutionDisabled', params);
};

/**
  * Enables touch on platforms which do not support them.
  *
  * @param {Emulation.SetTouchEmulationEnabledParams} params
  * @return {!Promise<Emulation.SetTouchEmulationEnabledResult>}
  */
Emulation.prototype.setTouchEmulationEnabled = function(params) {
  return this.connection_.sendDevToolsMessage('Emulation.setTouchEmulationEnabled', params);
};

/**
  * Turns on virtual time for all frames (replacing real-time with a synthetic time source) and sets
 * the current virtual time policy.  Note this supersedes any previous time budget.
  *
  * @param {Emulation.SetVirtualTimePolicyParams} params
  * @return {!Promise<Emulation.SetVirtualTimePolicyResult>}
  */
Emulation.prototype.setVirtualTimePolicy = function(params) {
  return this.connection_.sendDevToolsMessage('Emulation.setVirtualTimePolicy', params);
};

/**
  * Resizes the frame/viewport of the page. Note that this does not affect the frame's container
 * (e.g. browser window). Can be used to produce screenshots of the specified size. Not supported
 * on Android.
  *
  * @param {Emulation.SetVisibleSizeParams} params
  * @return {!Promise<Emulation.SetVisibleSizeResult>}
  */
Emulation.prototype.setVisibleSize = function(params) {
  return this.connection_.sendDevToolsMessage('Emulation.setVisibleSize', params);
};


/**
  * Notification sent after the virtual time has advanced.
  *
  * @param {!function(!Emulation.VirtualTimeAdvancedParams)} listener
  * @return {number} The id of this event listener.
  */
Emulation.prototype.onVirtualTimeAdvanced = function(listener) {
  return this.connection_.addEventListener(
      'Emulation.virtualTimeAdvanced', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Notification sent after the virtual time budget for the current VirtualTimePolicy has run out.
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
Emulation.prototype.onVirtualTimeBudgetExpired = function(listener) {
  return this.connection_.addEventListener(
      'Emulation.virtualTimeBudgetExpired', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Notification sent after the virtual time has paused.
  *
  * @param {!function(!Emulation.VirtualTimePausedParams)} listener
  * @return {number} The id of this event listener.
  */
Emulation.prototype.onVirtualTimePaused = function(listener) {
  return this.connection_.addEventListener(
      'Emulation.virtualTimePaused', /** @type {!function(!Object): undefined} */ (listener));
};

});  // goog.scope

