// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the DOMDebugger DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalDOMDebugger = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalDOMDebugger.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the DOMDebugger DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.DOMDebugger = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalDOMDebugger} */
chromium.DevTools.DOMDebugger.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.DOMDebugger.prototype.removeEventListener = function(id) {};

/**
 * DOM breakpoint type.
 *
 * @enum {string}
 */
chromium.DevTools.DOMDebugger.DOMBreakpointType = {
    SUBTREE_MODIFIED: "subtree-modified",
    ATTRIBUTE_MODIFIED: "attribute-modified",
    NODE_REMOVED: "node-removed"
};


/**
 * Object event listener.
 *
 * type: `EventListener`'s type.
 * useCapture: `EventListener`'s useCapture.
 * passive: `EventListener`'s passive flag.
 * once: `EventListener`'s once flag.
 * scriptId: Script id of the handler code.
 * lineNumber: Line number in the script (0-based).
 * columnNumber: Column number in the script (0-based).
 * handler: Event handler function value.
 * originalHandler: Event original handler function value.
 * backendNodeId: Node the listener is added to (if any).
 *
 * @typedef {{
 *   type: string,
 *   useCapture: boolean,
 *   passive: boolean,
 *   once: boolean,
 *   scriptId: string,
 *   lineNumber: number,
 *   columnNumber: number,
 *   handler: (!chromium.DevTools.Runtime.RemoteObject|undefined),
 *   originalHandler: (!chromium.DevTools.Runtime.RemoteObject|undefined),
 *   backendNodeId: (number|undefined)
 * }}
 */
chromium.DevTools.DOMDebugger.EventListener;

/**
 * Parameters for the GetEventListeners command.
 *
 * objectId: Identifier of the object to return listeners for.
 * depth: The maximum depth at which Node children should be retrieved, defaults to 1. Use -1 for the
 *    entire subtree or provide an integer larger than 0.
 * pierce: Whether or not iframes and shadow roots should be traversed when returning the subtree
 *    (default is false). Reports listeners for all contexts if pierce is enabled.
 *
 * @typedef {{
 *   objectId: string,
 *   depth: (number|undefined),
 *   pierce: (boolean|undefined)
 * }}
 */
chromium.DevTools.DOMDebugger.GetEventListenersParams;

/**
 * Result for the GetEventListeners command.
 *
 * listeners: Array of relevant listeners.
 *
 * @typedef {{
 *   listeners: !Array.<!chromium.DevTools.DOMDebugger.EventListener>
 * }}
 */
chromium.DevTools.DOMDebugger.GetEventListenersResult;

/**
 * Parameters for the RemoveDOMBreakpoint command.
 *
 * nodeId: Identifier of the node to remove breakpoint from.
 * type: Type of the breakpoint to remove.
 *
 * @typedef {{
 *   nodeId: number,
 *   type: !chromium.DevTools.DOMDebugger.DOMBreakpointType
 * }}
 */
chromium.DevTools.DOMDebugger.RemoveDOMBreakpointParams;

/**
 * Result for the RemoveDOMBreakpoint command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOMDebugger.RemoveDOMBreakpointResult;

/**
 * Parameters for the RemoveEventListenerBreakpoint command.
 *
 * eventName: Event name.
 * targetName: EventTarget interface name.
 *
 * @typedef {{
 *   eventName: string,
 *   targetName: (string|undefined)
 * }}
 */
chromium.DevTools.DOMDebugger.RemoveEventListenerBreakpointParams;

/**
 * Result for the RemoveEventListenerBreakpoint command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOMDebugger.RemoveEventListenerBreakpointResult;

/**
 * Parameters for the RemoveInstrumentationBreakpoint command.
 *
 * eventName: Instrumentation name to stop on.
 *
 * @typedef {{
 *   eventName: string
 * }}
 */
chromium.DevTools.DOMDebugger.RemoveInstrumentationBreakpointParams;

/**
 * Result for the RemoveInstrumentationBreakpoint command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOMDebugger.RemoveInstrumentationBreakpointResult;

/**
 * Parameters for the RemoveXHRBreakpoint command.
 *
 * url: Resource URL substring.
 *
 * @typedef {{
 *   url: string
 * }}
 */
chromium.DevTools.DOMDebugger.RemoveXHRBreakpointParams;

/**
 * Result for the RemoveXHRBreakpoint command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOMDebugger.RemoveXHRBreakpointResult;

/**
 * Parameters for the SetDOMBreakpoint command.
 *
 * nodeId: Identifier of the node to set breakpoint on.
 * type: Type of the operation to stop upon.
 *
 * @typedef {{
 *   nodeId: number,
 *   type: !chromium.DevTools.DOMDebugger.DOMBreakpointType
 * }}
 */
chromium.DevTools.DOMDebugger.SetDOMBreakpointParams;

/**
 * Result for the SetDOMBreakpoint command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOMDebugger.SetDOMBreakpointResult;

/**
 * Parameters for the SetEventListenerBreakpoint command.
 *
 * eventName: DOM Event name to stop on (any DOM event will do).
 * targetName: EventTarget interface name to stop on. If equal to `"*"` or not provided, will stop on any
 *    EventTarget.
 *
 * @typedef {{
 *   eventName: string,
 *   targetName: (string|undefined)
 * }}
 */
chromium.DevTools.DOMDebugger.SetEventListenerBreakpointParams;

/**
 * Result for the SetEventListenerBreakpoint command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOMDebugger.SetEventListenerBreakpointResult;

/**
 * Parameters for the SetInstrumentationBreakpoint command.
 *
 * eventName: Instrumentation name to stop on.
 *
 * @typedef {{
 *   eventName: string
 * }}
 */
chromium.DevTools.DOMDebugger.SetInstrumentationBreakpointParams;

/**
 * Result for the SetInstrumentationBreakpoint command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOMDebugger.SetInstrumentationBreakpointResult;

/**
 * Parameters for the SetXHRBreakpoint command.
 *
 * url: Resource URL substring. All XHRs having this substring in the URL will get stopped upon.
 *
 * @typedef {{
 *   url: string
 * }}
 */
chromium.DevTools.DOMDebugger.SetXHRBreakpointParams;

/**
 * Result for the SetXHRBreakpoint command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOMDebugger.SetXHRBreakpointResult;



/**
  * Returns event listeners of the given object.
  *
  * @param {chromium.DevTools.DOMDebugger.GetEventListenersParams} params
  * @return {!Promise<chromium.DevTools.DOMDebugger.GetEventListenersResult>}
  */
chromium.DevTools.ExperimentalDOMDebugger.prototype.getEventListeners = function(params) {};

/**
  * Removes DOM breakpoint that was set using `setDOMBreakpoint`.
  *
  * @param {chromium.DevTools.DOMDebugger.RemoveDOMBreakpointParams} params
  * @return {!Promise<chromium.DevTools.DOMDebugger.RemoveDOMBreakpointResult>}
  */
chromium.DevTools.ExperimentalDOMDebugger.prototype.removeDOMBreakpoint = function(params) {};

/**
  * Removes breakpoint on particular DOM event.
  *
  * @param {chromium.DevTools.DOMDebugger.RemoveEventListenerBreakpointParams} params
  * @return {!Promise<chromium.DevTools.DOMDebugger.RemoveEventListenerBreakpointResult>}
  */
chromium.DevTools.ExperimentalDOMDebugger.prototype.removeEventListenerBreakpoint = function(params) {};

/**
  * Removes breakpoint on particular native event.
  *
  * @param {chromium.DevTools.DOMDebugger.RemoveInstrumentationBreakpointParams} params
  * @return {!Promise<chromium.DevTools.DOMDebugger.RemoveInstrumentationBreakpointResult>}
  */
chromium.DevTools.ExperimentalDOMDebugger.prototype.removeInstrumentationBreakpoint = function(params) {};

/**
  * Removes breakpoint from XMLHttpRequest.
  *
  * @param {chromium.DevTools.DOMDebugger.RemoveXHRBreakpointParams} params
  * @return {!Promise<chromium.DevTools.DOMDebugger.RemoveXHRBreakpointResult>}
  */
chromium.DevTools.ExperimentalDOMDebugger.prototype.removeXHRBreakpoint = function(params) {};

/**
  * Sets breakpoint on particular operation with DOM.
  *
  * @param {chromium.DevTools.DOMDebugger.SetDOMBreakpointParams} params
  * @return {!Promise<chromium.DevTools.DOMDebugger.SetDOMBreakpointResult>}
  */
chromium.DevTools.ExperimentalDOMDebugger.prototype.setDOMBreakpoint = function(params) {};

/**
  * Sets breakpoint on particular DOM event.
  *
  * @param {chromium.DevTools.DOMDebugger.SetEventListenerBreakpointParams} params
  * @return {!Promise<chromium.DevTools.DOMDebugger.SetEventListenerBreakpointResult>}
  */
chromium.DevTools.ExperimentalDOMDebugger.prototype.setEventListenerBreakpoint = function(params) {};

/**
  * Sets breakpoint on particular native event.
  *
  * @param {chromium.DevTools.DOMDebugger.SetInstrumentationBreakpointParams} params
  * @return {!Promise<chromium.DevTools.DOMDebugger.SetInstrumentationBreakpointResult>}
  */
chromium.DevTools.ExperimentalDOMDebugger.prototype.setInstrumentationBreakpoint = function(params) {};

/**
  * Sets breakpoint on XMLHttpRequest.
  *
  * @param {chromium.DevTools.DOMDebugger.SetXHRBreakpointParams} params
  * @return {!Promise<chromium.DevTools.DOMDebugger.SetXHRBreakpointResult>}
  */
chromium.DevTools.ExperimentalDOMDebugger.prototype.setXHRBreakpoint = function(params) {};




/**
  * Returns event listeners of the given object.
  *
  * @param {chromium.DevTools.DOMDebugger.GetEventListenersParams} params
  * @return {!Promise<chromium.DevTools.DOMDebugger.GetEventListenersResult>}
  */
chromium.DevTools.DOMDebugger.prototype.getEventListeners = function(params) {};

/**
  * Removes DOM breakpoint that was set using `setDOMBreakpoint`.
  *
  * @param {chromium.DevTools.DOMDebugger.RemoveDOMBreakpointParams} params
  * @return {!Promise<chromium.DevTools.DOMDebugger.RemoveDOMBreakpointResult>}
  */
chromium.DevTools.DOMDebugger.prototype.removeDOMBreakpoint = function(params) {};

/**
  * Removes breakpoint on particular DOM event.
  *
  * @param {chromium.DevTools.DOMDebugger.RemoveEventListenerBreakpointParams} params
  * @return {!Promise<chromium.DevTools.DOMDebugger.RemoveEventListenerBreakpointResult>}
  */
chromium.DevTools.DOMDebugger.prototype.removeEventListenerBreakpoint = function(params) {};

/**
  * Removes breakpoint on particular native event.
  *
  * @param {chromium.DevTools.DOMDebugger.RemoveInstrumentationBreakpointParams} params
  * @return {!Promise<chromium.DevTools.DOMDebugger.RemoveInstrumentationBreakpointResult>}
  */
chromium.DevTools.DOMDebugger.prototype.removeInstrumentationBreakpoint = function(params) {};

/**
  * Removes breakpoint from XMLHttpRequest.
  *
  * @param {chromium.DevTools.DOMDebugger.RemoveXHRBreakpointParams} params
  * @return {!Promise<chromium.DevTools.DOMDebugger.RemoveXHRBreakpointResult>}
  */
chromium.DevTools.DOMDebugger.prototype.removeXHRBreakpoint = function(params) {};

/**
  * Sets breakpoint on particular operation with DOM.
  *
  * @param {chromium.DevTools.DOMDebugger.SetDOMBreakpointParams} params
  * @return {!Promise<chromium.DevTools.DOMDebugger.SetDOMBreakpointResult>}
  */
chromium.DevTools.DOMDebugger.prototype.setDOMBreakpoint = function(params) {};

/**
  * Sets breakpoint on particular DOM event.
  *
  * @param {chromium.DevTools.DOMDebugger.SetEventListenerBreakpointParams} params
  * @return {!Promise<chromium.DevTools.DOMDebugger.SetEventListenerBreakpointResult>}
  */
chromium.DevTools.DOMDebugger.prototype.setEventListenerBreakpoint = function(params) {};

/**
  * Sets breakpoint on particular native event.
  *
  * @param {chromium.DevTools.DOMDebugger.SetInstrumentationBreakpointParams} params
  * @return {!Promise<chromium.DevTools.DOMDebugger.SetInstrumentationBreakpointResult>}
  */
chromium.DevTools.DOMDebugger.prototype.setInstrumentationBreakpoint = function(params) {};

/**
  * Sets breakpoint on XMLHttpRequest.
  *
  * @param {chromium.DevTools.DOMDebugger.SetXHRBreakpointParams} params
  * @return {!Promise<chromium.DevTools.DOMDebugger.SetXHRBreakpointResult>}
  */
chromium.DevTools.DOMDebugger.prototype.setXHRBreakpoint = function(params) {};

