// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the Input DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalInput = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalInput.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the Input DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Input = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalInput} */
chromium.DevTools.Input.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.Input.prototype.removeEventListener = function(id) {};

/**
 * @enum {string}
 */
chromium.DevTools.Input.GestureSourceType = {
    DEFAULT: "default",
    TOUCH: "touch",
    MOUSE: "mouse"
};

/**
 * Type of the key event.
 *
 * @enum {string}
 */
chromium.DevTools.Input.DispatchKeyEventType = {
    KEY_DOWN: "keyDown",
    KEY_UP: "keyUp",
    RAW_KEY_DOWN: "rawKeyDown",
    CHAR: "char"
};

/**
 * Type of the mouse event.
 *
 * @enum {string}
 */
chromium.DevTools.Input.DispatchMouseEventType = {
    MOUSE_PRESSED: "mousePressed",
    MOUSE_RELEASED: "mouseReleased",
    MOUSE_PTR_MOVED: "mouseMoved",
    MOUSE_WHEEL: "mouseWheel"
};

/**
 * Mouse button (default: "none").
 *
 * @enum {string}
 */
chromium.DevTools.Input.DispatchMouseEventButton = {
    NONE: "none",
    LEFT: "left",
    MIDDLE: "middle",
    RIGHT: "right"
};

/**
 * Type of the touch event. TouchEnd and TouchCancel must not contain any touch points, while
 * TouchStart and TouchMove must contains at least one.
 *
 * @enum {string}
 */
chromium.DevTools.Input.DispatchTouchEventType = {
    TOUCH_START: "touchStart",
    TOUCH_END: "touchEnd",
    TOUCH_MOVE: "touchMove",
    TOUCH_CANCEL: "touchCancel"
};

/**
 * Type of the mouse event.
 *
 * @enum {string}
 */
chromium.DevTools.Input.EmulateTouchFromMouseEventType = {
    MOUSE_PRESSED: "mousePressed",
    MOUSE_RELEASED: "mouseReleased",
    MOUSE_PTR_MOVED: "mouseMoved",
    MOUSE_WHEEL: "mouseWheel"
};

/**
 * Mouse button.
 *
 * @enum {string}
 */
chromium.DevTools.Input.EmulateTouchFromMouseEventButton = {
    NONE: "none",
    LEFT: "left",
    MIDDLE: "middle",
    RIGHT: "right"
};


/**
 * x: X coordinate of the event relative to the main frame's viewport in CSS pixels.
 * y: Y coordinate of the event relative to the main frame's viewport in CSS pixels. 0 refers to
 *    the top of the viewport and Y increases as it proceeds towards the bottom of the viewport.
 * radiusX: X radius of the touch area (default: 1.0).
 * radiusY: Y radius of the touch area (default: 1.0).
 * rotationAngle: Rotation angle (default: 0.0).
 * force: Force (default: 1.0).
 * id: Identifier used to track touch sources between events, must be unique within an event.
 *
 * @typedef {{
 *   x: number,
 *   y: number,
 *   radiusX: (number|undefined),
 *   radiusY: (number|undefined),
 *   rotationAngle: (number|undefined),
 *   force: (number|undefined),
 *   id: (number|undefined)
 * }}
 */
chromium.DevTools.Input.TouchPoint;

/**
 * Parameters for the DispatchKeyEvent command.
 *
 * type: Type of the key event.
 * modifiers: Bit field representing pressed modifier keys. Alt=1, Ctrl=2, Meta/Command=4, Shift=8
 *    (default: 0).
 * timestamp: Time at which the event occurred.
 * text: Text as generated by processing a virtual key code with a keyboard layout. Not needed for
 *    for `keyUp` and `rawKeyDown` events (default: "")
 * unmodifiedText: Text that would have been generated by the keyboard if no modifiers were pressed (except for
 *    shift). Useful for shortcut (accelerator) key handling (default: "").
 * keyIdentifier: Unique key identifier (e.g., 'U+0041') (default: "").
 * code: Unique DOM defined string value for each physical key (e.g., 'KeyA') (default: "").
 * key: Unique DOM defined string value describing the meaning of the key in the context of active
 *    modifiers, keyboard layout, etc (e.g., 'AltGr') (default: "").
 * windowsVirtualKeyCode: Windows virtual key code (default: 0).
 * nativeVirtualKeyCode: Native virtual key code (default: 0).
 * autoRepeat: Whether the event was generated from auto repeat (default: false).
 * isKeypad: Whether the event was generated from the keypad (default: false).
 * isSystemKey: Whether the event was a system key event (default: false).
 * location: Whether the event was from the left or right side of the keyboard. 1=Left, 2=Right (default:
 *    0).
 *
 * @typedef {{
 *   type: !chromium.DevTools.Input.DispatchKeyEventType,
 *   modifiers: (number|undefined),
 *   timestamp: (number|undefined),
 *   text: (string|undefined),
 *   unmodifiedText: (string|undefined),
 *   keyIdentifier: (string|undefined),
 *   code: (string|undefined),
 *   key: (string|undefined),
 *   windowsVirtualKeyCode: (number|undefined),
 *   nativeVirtualKeyCode: (number|undefined),
 *   autoRepeat: (boolean|undefined),
 *   isKeypad: (boolean|undefined),
 *   isSystemKey: (boolean|undefined),
 *   location: (number|undefined)
 * }}
 */
chromium.DevTools.Input.DispatchKeyEventParams;

/**
 * Result for the DispatchKeyEvent command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Input.DispatchKeyEventResult;

/**
 * Parameters for the DispatchMouseEvent command.
 *
 * type: Type of the mouse event.
 * x: X coordinate of the event relative to the main frame's viewport in CSS pixels.
 * y: Y coordinate of the event relative to the main frame's viewport in CSS pixels. 0 refers to
 *    the top of the viewport and Y increases as it proceeds towards the bottom of the viewport.
 * modifiers: Bit field representing pressed modifier keys. Alt=1, Ctrl=2, Meta/Command=4, Shift=8
 *    (default: 0).
 * timestamp: Time at which the event occurred.
 * button: Mouse button (default: "none").
 * clickCount: Number of times the mouse button was clicked (default: 0).
 * deltaX: X delta in CSS pixels for mouse wheel event (default: 0).
 * deltaY: Y delta in CSS pixels for mouse wheel event (default: 0).
 *
 * @typedef {{
 *   type: !chromium.DevTools.Input.DispatchMouseEventType,
 *   x: number,
 *   y: number,
 *   modifiers: (number|undefined),
 *   timestamp: (number|undefined),
 *   button: (!chromium.DevTools.Input.DispatchMouseEventButton|undefined),
 *   clickCount: (number|undefined),
 *   deltaX: (number|undefined),
 *   deltaY: (number|undefined)
 * }}
 */
chromium.DevTools.Input.DispatchMouseEventParams;

/**
 * Result for the DispatchMouseEvent command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Input.DispatchMouseEventResult;

/**
 * Parameters for the DispatchTouchEvent command.
 *
 * type: Type of the touch event. TouchEnd and TouchCancel must not contain any touch points, while
 *    TouchStart and TouchMove must contains at least one.
 * touchPoints: Active touch points on the touch device. One event per any changed point (compared to
 *    previous touch event in a sequence) is generated, emulating pressing/moving/releasing points
 *    one by one.
 * modifiers: Bit field representing pressed modifier keys. Alt=1, Ctrl=2, Meta/Command=4, Shift=8
 *    (default: 0).
 * timestamp: Time at which the event occurred.
 *
 * @typedef {{
 *   type: !chromium.DevTools.Input.DispatchTouchEventType,
 *   touchPoints: !Array.<!chromium.DevTools.Input.TouchPoint>,
 *   modifiers: (number|undefined),
 *   timestamp: (number|undefined)
 * }}
 */
chromium.DevTools.Input.DispatchTouchEventParams;

/**
 * Result for the DispatchTouchEvent command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Input.DispatchTouchEventResult;

/**
 * Parameters for the EmulateTouchFromMouseEvent command.
 *
 * type: Type of the mouse event.
 * x: X coordinate of the mouse pointer in DIP.
 * y: Y coordinate of the mouse pointer in DIP.
 * button: Mouse button.
 * timestamp: Time at which the event occurred (default: current time).
 * deltaX: X delta in DIP for mouse wheel event (default: 0).
 * deltaY: Y delta in DIP for mouse wheel event (default: 0).
 * modifiers: Bit field representing pressed modifier keys. Alt=1, Ctrl=2, Meta/Command=4, Shift=8
 *    (default: 0).
 * clickCount: Number of times the mouse button was clicked (default: 0).
 *
 * @typedef {{
 *   type: !chromium.DevTools.Input.EmulateTouchFromMouseEventType,
 *   x: number,
 *   y: number,
 *   button: !chromium.DevTools.Input.EmulateTouchFromMouseEventButton,
 *   timestamp: (number|undefined),
 *   deltaX: (number|undefined),
 *   deltaY: (number|undefined),
 *   modifiers: (number|undefined),
 *   clickCount: (number|undefined)
 * }}
 */
chromium.DevTools.Input.EmulateTouchFromMouseEventParams;

/**
 * Result for the EmulateTouchFromMouseEvent command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Input.EmulateTouchFromMouseEventResult;

/**
 * Parameters for the SetIgnoreInputEvents command.
 *
 * ignore: Ignores input events processing when set to true.
 *
 * @typedef {{
 *   ignore: boolean
 * }}
 */
chromium.DevTools.Input.SetIgnoreInputEventsParams;

/**
 * Result for the SetIgnoreInputEvents command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Input.SetIgnoreInputEventsResult;

/**
 * Parameters for the SynthesizePinchGesture command.
 *
 * x: X coordinate of the start of the gesture in CSS pixels.
 * y: Y coordinate of the start of the gesture in CSS pixels.
 * scaleFactor: Relative scale factor after zooming (>1.0 zooms in, <1.0 zooms out).
 * relativeSpeed: Relative pointer speed in pixels per second (default: 800).
 * gestureSourceType: Which type of input events to be generated (default: 'default', which queries the platform
 *    for the preferred input type).
 *
 * @typedef {{
 *   x: number,
 *   y: number,
 *   scaleFactor: number,
 *   relativeSpeed: (number|undefined),
 *   gestureSourceType: (!chromium.DevTools.Input.GestureSourceType|undefined)
 * }}
 */
chromium.DevTools.Input.SynthesizePinchGestureParams;

/**
 * Result for the SynthesizePinchGesture command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Input.SynthesizePinchGestureResult;

/**
 * Parameters for the SynthesizeScrollGesture command.
 *
 * x: X coordinate of the start of the gesture in CSS pixels.
 * y: Y coordinate of the start of the gesture in CSS pixels.
 * xDistance: The distance to scroll along the X axis (positive to scroll left).
 * yDistance: The distance to scroll along the Y axis (positive to scroll up).
 * xOverscroll: The number of additional pixels to scroll back along the X axis, in addition to the given
 *    distance.
 * yOverscroll: The number of additional pixels to scroll back along the Y axis, in addition to the given
 *    distance.
 * preventFling: Prevent fling (default: true).
 * speed: Swipe speed in pixels per second (default: 800).
 * gestureSourceType: Which type of input events to be generated (default: 'default', which queries the platform
 *    for the preferred input type).
 * repeatCount: The number of times to repeat the gesture (default: 0).
 * repeatDelayMs: The number of milliseconds delay between each repeat. (default: 250).
 * interactionMarkerName: The name of the interaction markers to generate, if not empty (default: "").
 *
 * @typedef {{
 *   x: number,
 *   y: number,
 *   xDistance: (number|undefined),
 *   yDistance: (number|undefined),
 *   xOverscroll: (number|undefined),
 *   yOverscroll: (number|undefined),
 *   preventFling: (boolean|undefined),
 *   speed: (number|undefined),
 *   gestureSourceType: (!chromium.DevTools.Input.GestureSourceType|undefined),
 *   repeatCount: (number|undefined),
 *   repeatDelayMs: (number|undefined),
 *   interactionMarkerName: (string|undefined)
 * }}
 */
chromium.DevTools.Input.SynthesizeScrollGestureParams;

/**
 * Result for the SynthesizeScrollGesture command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Input.SynthesizeScrollGestureResult;

/**
 * Parameters for the SynthesizeTapGesture command.
 *
 * x: X coordinate of the start of the gesture in CSS pixels.
 * y: Y coordinate of the start of the gesture in CSS pixels.
 * duration: Duration between touchdown and touchup events in ms (default: 50).
 * tapCount: Number of times to perform the tap (e.g. 2 for double tap, default: 1).
 * gestureSourceType: Which type of input events to be generated (default: 'default', which queries the platform
 *    for the preferred input type).
 *
 * @typedef {{
 *   x: number,
 *   y: number,
 *   duration: (number|undefined),
 *   tapCount: (number|undefined),
 *   gestureSourceType: (!chromium.DevTools.Input.GestureSourceType|undefined)
 * }}
 */
chromium.DevTools.Input.SynthesizeTapGestureParams;

/**
 * Result for the SynthesizeTapGesture command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Input.SynthesizeTapGestureResult;



/**
  * Dispatches a key event to the page.
  *
  * @param {chromium.DevTools.Input.DispatchKeyEventParams} params
  * @return {!Promise<chromium.DevTools.Input.DispatchKeyEventResult>}
  */
chromium.DevTools.ExperimentalInput.prototype.dispatchKeyEvent = function(params) {};

/**
  * Dispatches a mouse event to the page.
  *
  * @param {chromium.DevTools.Input.DispatchMouseEventParams} params
  * @return {!Promise<chromium.DevTools.Input.DispatchMouseEventResult>}
  */
chromium.DevTools.ExperimentalInput.prototype.dispatchMouseEvent = function(params) {};

/**
  * Dispatches a touch event to the page.
  *
  * @param {chromium.DevTools.Input.DispatchTouchEventParams} params
  * @return {!Promise<chromium.DevTools.Input.DispatchTouchEventResult>}
  */
chromium.DevTools.ExperimentalInput.prototype.dispatchTouchEvent = function(params) {};

/**
  * Emulates touch event from the mouse event parameters.
  *
  * @param {chromium.DevTools.Input.EmulateTouchFromMouseEventParams} params
  * @return {!Promise<chromium.DevTools.Input.EmulateTouchFromMouseEventResult>}
  */
chromium.DevTools.ExperimentalInput.prototype.emulateTouchFromMouseEvent = function(params) {};

/**
  * Ignores input events (useful while auditing page).
  *
  * @param {chromium.DevTools.Input.SetIgnoreInputEventsParams} params
  * @return {!Promise<chromium.DevTools.Input.SetIgnoreInputEventsResult>}
  */
chromium.DevTools.ExperimentalInput.prototype.setIgnoreInputEvents = function(params) {};

/**
  * Synthesizes a pinch gesture over a time period by issuing appropriate touch events.
  *
  * @param {chromium.DevTools.Input.SynthesizePinchGestureParams} params
  * @return {!Promise<chromium.DevTools.Input.SynthesizePinchGestureResult>}
  */
chromium.DevTools.ExperimentalInput.prototype.synthesizePinchGesture = function(params) {};

/**
  * Synthesizes a scroll gesture over a time period by issuing appropriate touch events.
  *
  * @param {chromium.DevTools.Input.SynthesizeScrollGestureParams} params
  * @return {!Promise<chromium.DevTools.Input.SynthesizeScrollGestureResult>}
  */
chromium.DevTools.ExperimentalInput.prototype.synthesizeScrollGesture = function(params) {};

/**
  * Synthesizes a tap gesture over a time period by issuing appropriate touch events.
  *
  * @param {chromium.DevTools.Input.SynthesizeTapGestureParams} params
  * @return {!Promise<chromium.DevTools.Input.SynthesizeTapGestureResult>}
  */
chromium.DevTools.ExperimentalInput.prototype.synthesizeTapGesture = function(params) {};




/**
  * Dispatches a key event to the page.
  *
  * @param {chromium.DevTools.Input.DispatchKeyEventParams} params
  * @return {!Promise<chromium.DevTools.Input.DispatchKeyEventResult>}
  */
chromium.DevTools.Input.prototype.dispatchKeyEvent = function(params) {};

/**
  * Dispatches a mouse event to the page.
  *
  * @param {chromium.DevTools.Input.DispatchMouseEventParams} params
  * @return {!Promise<chromium.DevTools.Input.DispatchMouseEventResult>}
  */
chromium.DevTools.Input.prototype.dispatchMouseEvent = function(params) {};

/**
  * Dispatches a touch event to the page.
  *
  * @param {chromium.DevTools.Input.DispatchTouchEventParams} params
  * @return {!Promise<chromium.DevTools.Input.DispatchTouchEventResult>}
  */
chromium.DevTools.Input.prototype.dispatchTouchEvent = function(params) {};

/**
  * Emulates touch event from the mouse event parameters.
  *
  * @param {chromium.DevTools.Input.EmulateTouchFromMouseEventParams} params
  * @return {!Promise<chromium.DevTools.Input.EmulateTouchFromMouseEventResult>}
  */
chromium.DevTools.Input.prototype.emulateTouchFromMouseEvent = function(params) {};

/**
  * Ignores input events (useful while auditing page).
  *
  * @param {chromium.DevTools.Input.SetIgnoreInputEventsParams} params
  * @return {!Promise<chromium.DevTools.Input.SetIgnoreInputEventsResult>}
  */
chromium.DevTools.Input.prototype.setIgnoreInputEvents = function(params) {};

/**
  * Synthesizes a pinch gesture over a time period by issuing appropriate touch events.
  *
  * @param {chromium.DevTools.Input.SynthesizePinchGestureParams} params
  * @return {!Promise<chromium.DevTools.Input.SynthesizePinchGestureResult>}
  */
chromium.DevTools.Input.prototype.synthesizePinchGesture = function(params) {};

/**
  * Synthesizes a scroll gesture over a time period by issuing appropriate touch events.
  *
  * @param {chromium.DevTools.Input.SynthesizeScrollGestureParams} params
  * @return {!Promise<chromium.DevTools.Input.SynthesizeScrollGestureResult>}
  */
chromium.DevTools.Input.prototype.synthesizeScrollGesture = function(params) {};

/**
  * Synthesizes a tap gesture over a time period by issuing appropriate touch events.
  *
  * @param {chromium.DevTools.Input.SynthesizeTapGestureParams} params
  * @return {!Promise<chromium.DevTools.Input.SynthesizeTapGestureResult>}
  */
chromium.DevTools.Input.prototype.synthesizeTapGesture = function(params) {};

