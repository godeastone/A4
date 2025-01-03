// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the Emulation DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalEmulation = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalEmulation.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the Emulation DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Emulation = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalEmulation} */
chromium.DevTools.Emulation.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.Emulation.prototype.removeEventListener = function(id) {};

/**
 * advance: If the scheduler runs out of immediate work, the virtual time base may fast forward to
 * allow the next delayed task (if any) to run; pause: The virtual time base may not advance;
 * pauseIfNetworkFetchesPending: The virtual time base may not advance if there are any pending
 * resource fetches.
 *
 * @enum {string}
 */
chromium.DevTools.Emulation.VirtualTimePolicy = {
    ADVANCE: "advance",
    PAUSE: "pause",
    PAUSE_IF_NETWORK_FETCHES_PENDING: "pauseIfNetworkFetchesPending"
};

/**
 * Orientation type.
 *
 * @enum {string}
 */
chromium.DevTools.Emulation.ScreenOrientationType = {
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
chromium.DevTools.Emulation.SetEmitTouchEventsForMouseConfiguration = {
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
 *   type: !chromium.DevTools.Emulation.ScreenOrientationType,
 *   angle: number
 * }}
 */
chromium.DevTools.Emulation.ScreenOrientation;

/**
 * Parameters for the CanEmulate command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Emulation.CanEmulateParams;

/**
 * Result for the CanEmulate command.
 *
 * result: True if emulation is supported.
 *
 * @typedef {{
 *   result: boolean
 * }}
 */
chromium.DevTools.Emulation.CanEmulateResult;

/**
 * Parameters for the ClearDeviceMetricsOverride command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Emulation.ClearDeviceMetricsOverrideParams;

/**
 * Result for the ClearDeviceMetricsOverride command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Emulation.ClearDeviceMetricsOverrideResult;

/**
 * Parameters for the ClearGeolocationOverride command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Emulation.ClearGeolocationOverrideParams;

/**
 * Result for the ClearGeolocationOverride command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Emulation.ClearGeolocationOverrideResult;

/**
 * Parameters for the ResetPageScaleFactor command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Emulation.ResetPageScaleFactorParams;

/**
 * Result for the ResetPageScaleFactor command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Emulation.ResetPageScaleFactorResult;

/**
 * Parameters for the SetCPUThrottlingRate command.
 *
 * rate: Throttling rate as a slowdown factor (1 is no throttle, 2 is 2x slowdown, etc).
 *
 * @typedef {{
 *   rate: number
 * }}
 */
chromium.DevTools.Emulation.SetCPUThrottlingRateParams;

/**
 * Result for the SetCPUThrottlingRate command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Emulation.SetCPUThrottlingRateResult;

/**
 * Parameters for the SetDefaultBackgroundColorOverride command.
 *
 * color: RGBA of the default background color. If not specified, any existing override will be
 *    cleared.
 *
 * @typedef {{
 *   color: (!chromium.DevTools.DOM.RGBA|undefined)
 * }}
 */
chromium.DevTools.Emulation.SetDefaultBackgroundColorOverrideParams;

/**
 * Result for the SetDefaultBackgroundColorOverride command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Emulation.SetDefaultBackgroundColorOverrideResult;

/**
 * Parameters for the SetDeviceMetricsOverride command.
 *
 * width: Overriding width value in pixels (minimum 0, maximum 10000000). 0 disables the override.
 * height: Overriding height value in pixels (minimum 0, maximum 10000000). 0 disables the override.
 * deviceScaleFactor: Overriding device scale factor value. 0 disables the override.
 * mobile: Whether to emulate mobile device. This includes viewport meta tag, overlay scrollbars, text
 *    autosizing and more.
 * scale: Scale to apply to resulting view image.
 * screenWidth: Overriding screen width value in pixels (minimum 0, maximum 10000000).
 * screenHeight: Overriding screen height value in pixels (minimum 0, maximum 10000000).
 * positionX: Overriding view X position on screen in pixels (minimum 0, maximum 10000000).
 * positionY: Overriding view Y position on screen in pixels (minimum 0, maximum 10000000).
 * dontSetVisibleSize: Do not set visible view size, rely upon explicit setVisibleSize call.
 * screenOrientation: Screen orientation override.
 * viewport: If set, the visible area of the page will be overridden to this viewport. This viewport
 *    change is not observed by the page, e.g. viewport-relative elements do not change positions.
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
 *   screenOrientation: (!chromium.DevTools.Emulation.ScreenOrientation|undefined),
 *   viewport: (!chromium.DevTools.Page.Viewport|undefined)
 * }}
 */
chromium.DevTools.Emulation.SetDeviceMetricsOverrideParams;

/**
 * Result for the SetDeviceMetricsOverride command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Emulation.SetDeviceMetricsOverrideResult;

/**
 * Parameters for the SetEmitTouchEventsForMouse command.
 *
 * enabled: Whether touch emulation based on mouse input should be enabled.
 * configuration: Touch/gesture events configuration. Default: current platform.
 *
 * @typedef {{
 *   enabled: boolean,
 *   configuration: (!chromium.DevTools.Emulation.SetEmitTouchEventsForMouseConfiguration|undefined)
 * }}
 */
chromium.DevTools.Emulation.SetEmitTouchEventsForMouseParams;

/**
 * Result for the SetEmitTouchEventsForMouse command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Emulation.SetEmitTouchEventsForMouseResult;

/**
 * Parameters for the SetEmulatedMedia command.
 *
 * media: Media type to emulate. Empty string disables the override.
 *
 * @typedef {{
 *   media: string
 * }}
 */
chromium.DevTools.Emulation.SetEmulatedMediaParams;

/**
 * Result for the SetEmulatedMedia command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Emulation.SetEmulatedMediaResult;

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
chromium.DevTools.Emulation.SetGeolocationOverrideParams;

/**
 * Result for the SetGeolocationOverride command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Emulation.SetGeolocationOverrideResult;

/**
 * Parameters for the SetNavigatorOverrides command.
 *
 * platform: The platform navigator.platform should return.
 *
 * @typedef {{
 *   platform: string
 * }}
 */
chromium.DevTools.Emulation.SetNavigatorOverridesParams;

/**
 * Result for the SetNavigatorOverrides command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Emulation.SetNavigatorOverridesResult;

/**
 * Parameters for the SetPageScaleFactor command.
 *
 * pageScaleFactor: Page scale factor.
 *
 * @typedef {{
 *   pageScaleFactor: number
 * }}
 */
chromium.DevTools.Emulation.SetPageScaleFactorParams;

/**
 * Result for the SetPageScaleFactor command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Emulation.SetPageScaleFactorResult;

/**
 * Parameters for the SetScriptExecutionDisabled command.
 *
 * value: Whether script execution should be disabled in the page.
 *
 * @typedef {{
 *   value: boolean
 * }}
 */
chromium.DevTools.Emulation.SetScriptExecutionDisabledParams;

/**
 * Result for the SetScriptExecutionDisabled command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Emulation.SetScriptExecutionDisabledResult;

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
chromium.DevTools.Emulation.SetTouchEmulationEnabledParams;

/**
 * Result for the SetTouchEmulationEnabled command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Emulation.SetTouchEmulationEnabledResult;

/**
 * Parameters for the SetVirtualTimePolicy command.
 *
 * budget: If set, after this many virtual milliseconds have elapsed virtual time will be paused and a
 *    virtualTimeBudgetExpired event is sent.
 * maxVirtualTimeTaskStarvationCount: If set this specifies the maximum number of tasks that can be run before virtual is forced
 *    forwards to prevent deadlock.
 * waitForNavigation: If set the virtual time policy change should be deferred until any frame starts navigating.
 *    Note any previous deferred policy change is superseded.
 * initialVirtualTime: If set, base::Time::Now will be overriden to initially return this value.
 *
 * @typedef {{
 *   policy: !chromium.DevTools.Emulation.VirtualTimePolicy,
 *   budget: (number|undefined),
 *   maxVirtualTimeTaskStarvationCount: (number|undefined),
 *   waitForNavigation: (boolean|undefined),
 *   initialVirtualTime: (number|undefined)
 * }}
 */
chromium.DevTools.Emulation.SetVirtualTimePolicyParams;

/**
 * Result for the SetVirtualTimePolicy command.
 *
 * virtualTimeTicksBase: Absolute timestamp at which virtual time was first enabled (up time in milliseconds).
 *
 * @typedef {{
 *   virtualTimeTicksBase: number
 * }}
 */
chromium.DevTools.Emulation.SetVirtualTimePolicyResult;

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
chromium.DevTools.Emulation.SetVisibleSizeParams;

/**
 * Result for the SetVisibleSize command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Emulation.SetVisibleSizeResult;

/**
 * Parameters for the VirtualTimeAdvanced event.
 *
 * virtualTimeElapsed: The amount of virtual time that has elapsed in milliseconds since virtual time was first
 *    enabled.
 *
 * @typedef {{
 *   virtualTimeElapsed: number
 * }}
 */
chromium.DevTools.Emulation.VirtualTimeAdvancedParams;

/**
 * Parameters for the VirtualTimeBudgetExpired event.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Emulation.VirtualTimeBudgetExpiredParams;

/**
 * Parameters for the VirtualTimePaused event.
 *
 * virtualTimeElapsed: The amount of virtual time that has elapsed in milliseconds since virtual time was first
 *    enabled.
 *
 * @typedef {{
 *   virtualTimeElapsed: number
 * }}
 */
chromium.DevTools.Emulation.VirtualTimePausedParams;



/**
  * Tells whether emulation is supported.
  *
  * @return {!Promise<chromium.DevTools.Emulation.CanEmulateResult>}
  */
chromium.DevTools.ExperimentalEmulation.prototype.canEmulate = function() {};

/**
  * Clears the overriden device metrics.
  *
  * @return {!Promise<chromium.DevTools.Emulation.ClearDeviceMetricsOverrideResult>}
  */
chromium.DevTools.ExperimentalEmulation.prototype.clearDeviceMetricsOverride = function() {};

/**
  * Clears the overriden Geolocation Position and Error.
  *
  * @return {!Promise<chromium.DevTools.Emulation.ClearGeolocationOverrideResult>}
  */
chromium.DevTools.ExperimentalEmulation.prototype.clearGeolocationOverride = function() {};

/**
  * Requests that page scale factor is reset to initial values.
  *
  * @return {!Promise<chromium.DevTools.Emulation.ResetPageScaleFactorResult>}
  */
chromium.DevTools.ExperimentalEmulation.prototype.resetPageScaleFactor = function() {};

/**
  * Enables CPU throttling to emulate slow CPUs.
  *
  * @param {chromium.DevTools.Emulation.SetCPUThrottlingRateParams} params
  * @return {!Promise<chromium.DevTools.Emulation.SetCPUThrottlingRateResult>}
  */
chromium.DevTools.ExperimentalEmulation.prototype.setCPUThrottlingRate = function(params) {};

/**
  * Sets or clears an override of the default background color of the frame. This override is used
 * if the content does not specify one.
  *
  * @param {chromium.DevTools.Emulation.SetDefaultBackgroundColorOverrideParams=} opt_params
  * @return {!Promise<chromium.DevTools.Emulation.SetDefaultBackgroundColorOverrideResult>}
  */
chromium.DevTools.ExperimentalEmulation.prototype.setDefaultBackgroundColorOverride = function(opt_params) {};

/**
  * Overrides the values of device screen dimensions (window.screen.width, window.screen.height,
 * window.innerWidth, window.innerHeight, and "device-width"/"device-height"-related CSS media
 * query results).
  *
  * @param {chromium.DevTools.Emulation.SetDeviceMetricsOverrideParams} params
  * @return {!Promise<chromium.DevTools.Emulation.SetDeviceMetricsOverrideResult>}
  */
chromium.DevTools.ExperimentalEmulation.prototype.setDeviceMetricsOverride = function(params) {};

/**
  * @param {chromium.DevTools.Emulation.SetEmitTouchEventsForMouseParams} params
  * @return {!Promise<chromium.DevTools.Emulation.SetEmitTouchEventsForMouseResult>}
  */
chromium.DevTools.ExperimentalEmulation.prototype.setEmitTouchEventsForMouse = function(params) {};

/**
  * Emulates the given media for CSS media queries.
  *
  * @param {chromium.DevTools.Emulation.SetEmulatedMediaParams} params
  * @return {!Promise<chromium.DevTools.Emulation.SetEmulatedMediaResult>}
  */
chromium.DevTools.ExperimentalEmulation.prototype.setEmulatedMedia = function(params) {};

/**
  * Overrides the Geolocation Position or Error. Omitting any of the parameters emulates position
 * unavailable.
  *
  * @param {chromium.DevTools.Emulation.SetGeolocationOverrideParams=} opt_params
  * @return {!Promise<chromium.DevTools.Emulation.SetGeolocationOverrideResult>}
  */
chromium.DevTools.ExperimentalEmulation.prototype.setGeolocationOverride = function(opt_params) {};

/**
  * Overrides value returned by the javascript navigator object.
  *
  * @param {chromium.DevTools.Emulation.SetNavigatorOverridesParams} params
  * @return {!Promise<chromium.DevTools.Emulation.SetNavigatorOverridesResult>}
  */
chromium.DevTools.ExperimentalEmulation.prototype.setNavigatorOverrides = function(params) {};

/**
  * Sets a specified page scale factor.
  *
  * @param {chromium.DevTools.Emulation.SetPageScaleFactorParams} params
  * @return {!Promise<chromium.DevTools.Emulation.SetPageScaleFactorResult>}
  */
chromium.DevTools.ExperimentalEmulation.prototype.setPageScaleFactor = function(params) {};

/**
  * Switches script execution in the page.
  *
  * @param {chromium.DevTools.Emulation.SetScriptExecutionDisabledParams} params
  * @return {!Promise<chromium.DevTools.Emulation.SetScriptExecutionDisabledResult>}
  */
chromium.DevTools.ExperimentalEmulation.prototype.setScriptExecutionDisabled = function(params) {};

/**
  * Enables touch on platforms which do not support them.
  *
  * @param {chromium.DevTools.Emulation.SetTouchEmulationEnabledParams} params
  * @return {!Promise<chromium.DevTools.Emulation.SetTouchEmulationEnabledResult>}
  */
chromium.DevTools.ExperimentalEmulation.prototype.setTouchEmulationEnabled = function(params) {};

/**
  * Turns on virtual time for all frames (replacing real-time with a synthetic time source) and sets
 * the current virtual time policy.  Note this supersedes any previous time budget.
  *
  * @param {chromium.DevTools.Emulation.SetVirtualTimePolicyParams} params
  * @return {!Promise<chromium.DevTools.Emulation.SetVirtualTimePolicyResult>}
  */
chromium.DevTools.ExperimentalEmulation.prototype.setVirtualTimePolicy = function(params) {};

/**
  * Resizes the frame/viewport of the page. Note that this does not affect the frame's container
 * (e.g. browser window). Can be used to produce screenshots of the specified size. Not supported
 * on Android.
  *
  * @param {chromium.DevTools.Emulation.SetVisibleSizeParams} params
  * @return {!Promise<chromium.DevTools.Emulation.SetVisibleSizeResult>}
  */
chromium.DevTools.ExperimentalEmulation.prototype.setVisibleSize = function(params) {};


/**
  * Notification sent after the virtual time has advanced.
  *
  * @param {!function(!chromium.DevTools.Emulation.VirtualTimeAdvancedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalEmulation.prototype.onVirtualTimeAdvanced = function(listener) {};

/**
  * Notification sent after the virtual time budget for the current VirtualTimePolicy has run out.
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalEmulation.prototype.onVirtualTimeBudgetExpired = function(listener) {};

/**
  * Notification sent after the virtual time has paused.
  *
  * @param {!function(!chromium.DevTools.Emulation.VirtualTimePausedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalEmulation.prototype.onVirtualTimePaused = function(listener) {};



/**
  * Tells whether emulation is supported.
  *
  * @return {!Promise<chromium.DevTools.Emulation.CanEmulateResult>}
  */
chromium.DevTools.Emulation.prototype.canEmulate = function() {};

/**
  * Clears the overriden device metrics.
  *
  * @return {!Promise<chromium.DevTools.Emulation.ClearDeviceMetricsOverrideResult>}
  */
chromium.DevTools.Emulation.prototype.clearDeviceMetricsOverride = function() {};

/**
  * Clears the overriden Geolocation Position and Error.
  *
  * @return {!Promise<chromium.DevTools.Emulation.ClearGeolocationOverrideResult>}
  */
chromium.DevTools.Emulation.prototype.clearGeolocationOverride = function() {};

/**
  * Requests that page scale factor is reset to initial values.
  *
  * @return {!Promise<chromium.DevTools.Emulation.ResetPageScaleFactorResult>}
  */
chromium.DevTools.Emulation.prototype.resetPageScaleFactor = function() {};

/**
  * Enables CPU throttling to emulate slow CPUs.
  *
  * @param {chromium.DevTools.Emulation.SetCPUThrottlingRateParams} params
  * @return {!Promise<chromium.DevTools.Emulation.SetCPUThrottlingRateResult>}
  */
chromium.DevTools.Emulation.prototype.setCPUThrottlingRate = function(params) {};

/**
  * Sets or clears an override of the default background color of the frame. This override is used
 * if the content does not specify one.
  *
  * @param {chromium.DevTools.Emulation.SetDefaultBackgroundColorOverrideParams=} opt_params
  * @return {!Promise<chromium.DevTools.Emulation.SetDefaultBackgroundColorOverrideResult>}
  */
chromium.DevTools.Emulation.prototype.setDefaultBackgroundColorOverride = function(opt_params) {};

/**
  * Overrides the values of device screen dimensions (window.screen.width, window.screen.height,
 * window.innerWidth, window.innerHeight, and "device-width"/"device-height"-related CSS media
 * query results).
  *
  * @param {chromium.DevTools.Emulation.SetDeviceMetricsOverrideParams} params
  * @return {!Promise<chromium.DevTools.Emulation.SetDeviceMetricsOverrideResult>}
  */
chromium.DevTools.Emulation.prototype.setDeviceMetricsOverride = function(params) {};

/**
  * @param {chromium.DevTools.Emulation.SetEmitTouchEventsForMouseParams} params
  * @return {!Promise<chromium.DevTools.Emulation.SetEmitTouchEventsForMouseResult>}
  */
chromium.DevTools.Emulation.prototype.setEmitTouchEventsForMouse = function(params) {};

/**
  * Emulates the given media for CSS media queries.
  *
  * @param {chromium.DevTools.Emulation.SetEmulatedMediaParams} params
  * @return {!Promise<chromium.DevTools.Emulation.SetEmulatedMediaResult>}
  */
chromium.DevTools.Emulation.prototype.setEmulatedMedia = function(params) {};

/**
  * Overrides the Geolocation Position or Error. Omitting any of the parameters emulates position
 * unavailable.
  *
  * @param {chromium.DevTools.Emulation.SetGeolocationOverrideParams=} opt_params
  * @return {!Promise<chromium.DevTools.Emulation.SetGeolocationOverrideResult>}
  */
chromium.DevTools.Emulation.prototype.setGeolocationOverride = function(opt_params) {};

/**
  * Overrides value returned by the javascript navigator object.
  *
  * @param {chromium.DevTools.Emulation.SetNavigatorOverridesParams} params
  * @return {!Promise<chromium.DevTools.Emulation.SetNavigatorOverridesResult>}
  */
chromium.DevTools.Emulation.prototype.setNavigatorOverrides = function(params) {};

/**
  * Sets a specified page scale factor.
  *
  * @param {chromium.DevTools.Emulation.SetPageScaleFactorParams} params
  * @return {!Promise<chromium.DevTools.Emulation.SetPageScaleFactorResult>}
  */
chromium.DevTools.Emulation.prototype.setPageScaleFactor = function(params) {};

/**
  * Switches script execution in the page.
  *
  * @param {chromium.DevTools.Emulation.SetScriptExecutionDisabledParams} params
  * @return {!Promise<chromium.DevTools.Emulation.SetScriptExecutionDisabledResult>}
  */
chromium.DevTools.Emulation.prototype.setScriptExecutionDisabled = function(params) {};

/**
  * Enables touch on platforms which do not support them.
  *
  * @param {chromium.DevTools.Emulation.SetTouchEmulationEnabledParams} params
  * @return {!Promise<chromium.DevTools.Emulation.SetTouchEmulationEnabledResult>}
  */
chromium.DevTools.Emulation.prototype.setTouchEmulationEnabled = function(params) {};

/**
  * Turns on virtual time for all frames (replacing real-time with a synthetic time source) and sets
 * the current virtual time policy.  Note this supersedes any previous time budget.
  *
  * @param {chromium.DevTools.Emulation.SetVirtualTimePolicyParams} params
  * @return {!Promise<chromium.DevTools.Emulation.SetVirtualTimePolicyResult>}
  */
chromium.DevTools.Emulation.prototype.setVirtualTimePolicy = function(params) {};

/**
  * Resizes the frame/viewport of the page. Note that this does not affect the frame's container
 * (e.g. browser window). Can be used to produce screenshots of the specified size. Not supported
 * on Android.
  *
  * @param {chromium.DevTools.Emulation.SetVisibleSizeParams} params
  * @return {!Promise<chromium.DevTools.Emulation.SetVisibleSizeResult>}
  */
chromium.DevTools.Emulation.prototype.setVisibleSize = function(params) {};


/**
  * Notification sent after the virtual time has advanced.
  *
  * @param {!function(!chromium.DevTools.Emulation.VirtualTimeAdvancedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Emulation.prototype.onVirtualTimeAdvanced = function(listener) {};

/**
  * Notification sent after the virtual time budget for the current VirtualTimePolicy has run out.
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Emulation.prototype.onVirtualTimeBudgetExpired = function(listener) {};

/**
  * Notification sent after the virtual time has paused.
  *
  * @param {!function(!chromium.DevTools.Emulation.VirtualTimePausedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Emulation.prototype.onVirtualTimePaused = function(listener) {};
