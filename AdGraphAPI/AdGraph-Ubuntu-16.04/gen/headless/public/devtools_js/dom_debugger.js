// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the DOMDebugger Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalDOMDebugger');
goog.provide('chromium.DevTools.DOMDebugger');
goog.require('chromium.DevTools.Connection');
goog.require('chromium.DevTools.DOM');
goog.require('chromium.DevTools.Debugger');
goog.forwardDeclare('chromium.DevTools.Runtime.ScriptId');
goog.forwardDeclare('chromium.DevTools.Runtime.RemoteObjectId');
goog.forwardDeclare('chromium.DevTools.Runtime.RemoteObject');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;
const DOM = chromium.DevTools.DOM;
const Debugger = chromium.DevTools.Debugger;

/**
 * Experimental bindings for the DOMDebugger DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalDOMDebugger = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalDOMDebugger = chromium.DevTools.ExperimentalDOMDebugger;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalDOMDebugger.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the DOMDebugger DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.DOMDebugger = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalDOMDebugger} */
  this.experimental = new ExperimentalDOMDebugger(connection);
}

const DOMDebugger = chromium.DevTools.DOMDebugger;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
DOMDebugger.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * DOM breakpoint type.
 *
 * @enum {string}
 */
DOMDebugger.DOMBreakpointType = {
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
DOMDebugger.EventListener;

/**
 * Parameters for the GetEventListeners command.
 *
 * objectId: Identifier of the object to return listeners for.
 * depth: The maximum depth at which Node children should be retrieved, defaults to 1. Use -1 for the
 *   entire subtree or provide an integer larger than 0.
 * pierce: Whether or not iframes and shadow roots should be traversed when returning the subtree
 *   (default is false). Reports listeners for all contexts if pierce is enabled.
 *
 * @typedef {{
 *   objectId: string,
 *   depth: (number|undefined),
 *   pierce: (boolean|undefined)
 * }}
 */
DOMDebugger.GetEventListenersParams;

/**
 * Result for the GetEventListeners command.
 *
 * listeners: Array of relevant listeners.
 *
 * @typedef {{
 *   listeners: !Array.<!DOMDebugger.EventListener>
 * }}
 */
DOMDebugger.GetEventListenersResult;

/**
 * Parameters for the RemoveDOMBreakpoint command.
 *
 * nodeId: Identifier of the node to remove breakpoint from.
 * type: Type of the breakpoint to remove.
 *
 * @typedef {{
 *   nodeId: number,
 *   type: !DOMDebugger.DOMBreakpointType
 * }}
 */
DOMDebugger.RemoveDOMBreakpointParams;

/**
 * Result for the RemoveDOMBreakpoint command.
 *
 *
 * @typedef {undefined}
 */
DOMDebugger.RemoveDOMBreakpointResult;

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
DOMDebugger.RemoveEventListenerBreakpointParams;

/**
 * Result for the RemoveEventListenerBreakpoint command.
 *
 *
 * @typedef {undefined}
 */
DOMDebugger.RemoveEventListenerBreakpointResult;

/**
 * Parameters for the RemoveInstrumentationBreakpoint command.
 *
 * eventName: Instrumentation name to stop on.
 *
 * @typedef {{
 *   eventName: string
 * }}
 */
DOMDebugger.RemoveInstrumentationBreakpointParams;

/**
 * Result for the RemoveInstrumentationBreakpoint command.
 *
 *
 * @typedef {undefined}
 */
DOMDebugger.RemoveInstrumentationBreakpointResult;

/**
 * Parameters for the RemoveXHRBreakpoint command.
 *
 * url: Resource URL substring.
 *
 * @typedef {{
 *   url: string
 * }}
 */
DOMDebugger.RemoveXHRBreakpointParams;

/**
 * Result for the RemoveXHRBreakpoint command.
 *
 *
 * @typedef {undefined}
 */
DOMDebugger.RemoveXHRBreakpointResult;

/**
 * Parameters for the SetDOMBreakpoint command.
 *
 * nodeId: Identifier of the node to set breakpoint on.
 * type: Type of the operation to stop upon.
 *
 * @typedef {{
 *   nodeId: number,
 *   type: !DOMDebugger.DOMBreakpointType
 * }}
 */
DOMDebugger.SetDOMBreakpointParams;

/**
 * Result for the SetDOMBreakpoint command.
 *
 *
 * @typedef {undefined}
 */
DOMDebugger.SetDOMBreakpointResult;

/**
 * Parameters for the SetEventListenerBreakpoint command.
 *
 * eventName: DOM Event name to stop on (any DOM event will do).
 * targetName: EventTarget interface name to stop on. If equal to `"*"` or not provided, will stop on any
 *   EventTarget.
 *
 * @typedef {{
 *   eventName: string,
 *   targetName: (string|undefined)
 * }}
 */
DOMDebugger.SetEventListenerBreakpointParams;

/**
 * Result for the SetEventListenerBreakpoint command.
 *
 *
 * @typedef {undefined}
 */
DOMDebugger.SetEventListenerBreakpointResult;

/**
 * Parameters for the SetInstrumentationBreakpoint command.
 *
 * eventName: Instrumentation name to stop on.
 *
 * @typedef {{
 *   eventName: string
 * }}
 */
DOMDebugger.SetInstrumentationBreakpointParams;

/**
 * Result for the SetInstrumentationBreakpoint command.
 *
 *
 * @typedef {undefined}
 */
DOMDebugger.SetInstrumentationBreakpointResult;

/**
 * Parameters for the SetXHRBreakpoint command.
 *
 * url: Resource URL substring. All XHRs having this substring in the URL will get stopped upon.
 *
 * @typedef {{
 *   url: string
 * }}
 */
DOMDebugger.SetXHRBreakpointParams;

/**
 * Result for the SetXHRBreakpoint command.
 *
 *
 * @typedef {undefined}
 */
DOMDebugger.SetXHRBreakpointResult;



/**
  * Returns event listeners of the given object.
  *
  * @param {DOMDebugger.GetEventListenersParams} params
  * @return {!Promise<DOMDebugger.GetEventListenersResult>}
  */
ExperimentalDOMDebugger.prototype.getEventListeners = function(params) {
  return this.connection_.sendDevToolsMessage('DOMDebugger.getEventListeners', params);
};

/**
  * Removes DOM breakpoint that was set using `setDOMBreakpoint`.
  *
  * @param {DOMDebugger.RemoveDOMBreakpointParams} params
  * @return {!Promise<DOMDebugger.RemoveDOMBreakpointResult>}
  */
ExperimentalDOMDebugger.prototype.removeDOMBreakpoint = function(params) {
  return this.connection_.sendDevToolsMessage('DOMDebugger.removeDOMBreakpoint', params);
};

/**
  * Removes breakpoint on particular DOM event.
  *
  * @param {DOMDebugger.RemoveEventListenerBreakpointParams} params
  * @return {!Promise<DOMDebugger.RemoveEventListenerBreakpointResult>}
  */
ExperimentalDOMDebugger.prototype.removeEventListenerBreakpoint = function(params) {
  return this.connection_.sendDevToolsMessage('DOMDebugger.removeEventListenerBreakpoint', params);
};

/**
  * Removes breakpoint on particular native event.
  *
  * @param {DOMDebugger.RemoveInstrumentationBreakpointParams} params
  * @return {!Promise<DOMDebugger.RemoveInstrumentationBreakpointResult>}
  */
ExperimentalDOMDebugger.prototype.removeInstrumentationBreakpoint = function(params) {
  return this.connection_.sendDevToolsMessage('DOMDebugger.removeInstrumentationBreakpoint', params);
};

/**
  * Removes breakpoint from XMLHttpRequest.
  *
  * @param {DOMDebugger.RemoveXHRBreakpointParams} params
  * @return {!Promise<DOMDebugger.RemoveXHRBreakpointResult>}
  */
ExperimentalDOMDebugger.prototype.removeXHRBreakpoint = function(params) {
  return this.connection_.sendDevToolsMessage('DOMDebugger.removeXHRBreakpoint', params);
};

/**
  * Sets breakpoint on particular operation with DOM.
  *
  * @param {DOMDebugger.SetDOMBreakpointParams} params
  * @return {!Promise<DOMDebugger.SetDOMBreakpointResult>}
  */
ExperimentalDOMDebugger.prototype.setDOMBreakpoint = function(params) {
  return this.connection_.sendDevToolsMessage('DOMDebugger.setDOMBreakpoint', params);
};

/**
  * Sets breakpoint on particular DOM event.
  *
  * @param {DOMDebugger.SetEventListenerBreakpointParams} params
  * @return {!Promise<DOMDebugger.SetEventListenerBreakpointResult>}
  */
ExperimentalDOMDebugger.prototype.setEventListenerBreakpoint = function(params) {
  return this.connection_.sendDevToolsMessage('DOMDebugger.setEventListenerBreakpoint', params);
};

/**
  * Sets breakpoint on particular native event.
  *
  * @param {DOMDebugger.SetInstrumentationBreakpointParams} params
  * @return {!Promise<DOMDebugger.SetInstrumentationBreakpointResult>}
  */
ExperimentalDOMDebugger.prototype.setInstrumentationBreakpoint = function(params) {
  return this.connection_.sendDevToolsMessage('DOMDebugger.setInstrumentationBreakpoint', params);
};

/**
  * Sets breakpoint on XMLHttpRequest.
  *
  * @param {DOMDebugger.SetXHRBreakpointParams} params
  * @return {!Promise<DOMDebugger.SetXHRBreakpointResult>}
  */
ExperimentalDOMDebugger.prototype.setXHRBreakpoint = function(params) {
  return this.connection_.sendDevToolsMessage('DOMDebugger.setXHRBreakpoint', params);
};




/**
  * Returns event listeners of the given object.
  *
  * @param {DOMDebugger.GetEventListenersParams} params
  * @return {!Promise<DOMDebugger.GetEventListenersResult>}
  */
DOMDebugger.prototype.getEventListeners = function(params) {
  return this.connection_.sendDevToolsMessage('DOMDebugger.getEventListeners', params);
};

/**
  * Removes DOM breakpoint that was set using `setDOMBreakpoint`.
  *
  * @param {DOMDebugger.RemoveDOMBreakpointParams} params
  * @return {!Promise<DOMDebugger.RemoveDOMBreakpointResult>}
  */
DOMDebugger.prototype.removeDOMBreakpoint = function(params) {
  return this.connection_.sendDevToolsMessage('DOMDebugger.removeDOMBreakpoint', params);
};

/**
  * Removes breakpoint on particular DOM event.
  *
  * @param {DOMDebugger.RemoveEventListenerBreakpointParams} params
  * @return {!Promise<DOMDebugger.RemoveEventListenerBreakpointResult>}
  */
DOMDebugger.prototype.removeEventListenerBreakpoint = function(params) {
  return this.connection_.sendDevToolsMessage('DOMDebugger.removeEventListenerBreakpoint', params);
};

/**
  * Removes breakpoint on particular native event.
  *
  * @param {DOMDebugger.RemoveInstrumentationBreakpointParams} params
  * @return {!Promise<DOMDebugger.RemoveInstrumentationBreakpointResult>}
  */
DOMDebugger.prototype.removeInstrumentationBreakpoint = function(params) {
  return this.connection_.sendDevToolsMessage('DOMDebugger.removeInstrumentationBreakpoint', params);
};

/**
  * Removes breakpoint from XMLHttpRequest.
  *
  * @param {DOMDebugger.RemoveXHRBreakpointParams} params
  * @return {!Promise<DOMDebugger.RemoveXHRBreakpointResult>}
  */
DOMDebugger.prototype.removeXHRBreakpoint = function(params) {
  return this.connection_.sendDevToolsMessage('DOMDebugger.removeXHRBreakpoint', params);
};

/**
  * Sets breakpoint on particular operation with DOM.
  *
  * @param {DOMDebugger.SetDOMBreakpointParams} params
  * @return {!Promise<DOMDebugger.SetDOMBreakpointResult>}
  */
DOMDebugger.prototype.setDOMBreakpoint = function(params) {
  return this.connection_.sendDevToolsMessage('DOMDebugger.setDOMBreakpoint', params);
};

/**
  * Sets breakpoint on particular DOM event.
  *
  * @param {DOMDebugger.SetEventListenerBreakpointParams} params
  * @return {!Promise<DOMDebugger.SetEventListenerBreakpointResult>}
  */
DOMDebugger.prototype.setEventListenerBreakpoint = function(params) {
  return this.connection_.sendDevToolsMessage('DOMDebugger.setEventListenerBreakpoint', params);
};

/**
  * Sets breakpoint on particular native event.
  *
  * @param {DOMDebugger.SetInstrumentationBreakpointParams} params
  * @return {!Promise<DOMDebugger.SetInstrumentationBreakpointResult>}
  */
DOMDebugger.prototype.setInstrumentationBreakpoint = function(params) {
  return this.connection_.sendDevToolsMessage('DOMDebugger.setInstrumentationBreakpoint', params);
};

/**
  * Sets breakpoint on XMLHttpRequest.
  *
  * @param {DOMDebugger.SetXHRBreakpointParams} params
  * @return {!Promise<DOMDebugger.SetXHRBreakpointResult>}
  */
DOMDebugger.prototype.setXHRBreakpoint = function(params) {
  return this.connection_.sendDevToolsMessage('DOMDebugger.setXHRBreakpoint', params);
};


});  // goog.scope

