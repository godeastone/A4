// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the Overlay Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalOverlay');
goog.provide('chromium.DevTools.Overlay');
goog.require('chromium.DevTools.Connection');
goog.require('chromium.DevTools.DOM');
goog.require('chromium.DevTools.Page');
goog.require('chromium.DevTools.Runtime');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;
const DOM = chromium.DevTools.DOM;
const Page = chromium.DevTools.Page;
const Runtime = chromium.DevTools.Runtime;

/**
 * Experimental bindings for the Overlay DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalOverlay = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalOverlay = chromium.DevTools.ExperimentalOverlay;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalOverlay.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the Overlay DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Overlay = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalOverlay} */
  this.experimental = new ExperimentalOverlay(connection);
}

const Overlay = chromium.DevTools.Overlay;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
Overlay.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * @enum {string}
 */
Overlay.InspectMode = {
    SEARCH_FOR_NODE: "searchForNode",
    SEARCH_FORUA_SHADOWDOM: "searchForUAShadowDOM",
    NONE: "none"
};


/**
 * Configuration data for the highlighting of page elements.
 *
 * showInfo: Whether the node info tooltip should be shown (default: false).
 * showRulers: Whether the rulers should be shown (default: false).
 * showExtensionLines: Whether the extension lines from node to the rulers should be shown (default: false).
 * contentColor: The content box highlight fill color (default: transparent).
 * paddingColor: The padding highlight fill color (default: transparent).
 * borderColor: The border highlight fill color (default: transparent).
 * marginColor: The margin highlight fill color (default: transparent).
 * eventTargetColor: The event target element highlight fill color (default: transparent).
 * shapeColor: The shape outside fill color (default: transparent).
 * shapeMarginColor: The shape margin fill color (default: transparent).
 * selectorList: Selectors to highlight relevant nodes.
 * cssGridColor: The grid layout color (default: transparent).
 *
 * @typedef {{
 *   showInfo: (boolean|undefined),
 *   showRulers: (boolean|undefined),
 *   showExtensionLines: (boolean|undefined),
 *   displayAsMaterial: (boolean|undefined),
 *   contentColor: (!DOM.RGBA|undefined),
 *   paddingColor: (!DOM.RGBA|undefined),
 *   borderColor: (!DOM.RGBA|undefined),
 *   marginColor: (!DOM.RGBA|undefined),
 *   eventTargetColor: (!DOM.RGBA|undefined),
 *   shapeColor: (!DOM.RGBA|undefined),
 *   shapeMarginColor: (!DOM.RGBA|undefined),
 *   selectorList: (string|undefined),
 *   cssGridColor: (!DOM.RGBA|undefined)
 * }}
 */
Overlay.HighlightConfig;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
Overlay.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
Overlay.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
Overlay.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
Overlay.EnableResult;

/**
 * Parameters for the GetHighlightObjectForTest command.
 *
 * nodeId: Id of the node to get highlight object for.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
Overlay.GetHighlightObjectForTestParams;

/**
 * Result for the GetHighlightObjectForTest command.
 *
 * highlight: Highlight data for the node.
 *
 * @typedef {{
 *   highlight: !Object
 * }}
 */
Overlay.GetHighlightObjectForTestResult;

/**
 * Parameters for the HideHighlight command.
 *
 *
 * @typedef {undefined}
 */
Overlay.HideHighlightParams;

/**
 * Result for the HideHighlight command.
 *
 *
 * @typedef {undefined}
 */
Overlay.HideHighlightResult;

/**
 * Parameters for the HighlightFrame command.
 *
 * frameId: Identifier of the frame to highlight.
 * contentColor: The content box highlight fill color (default: transparent).
 * contentOutlineColor: The content box highlight outline color (default: transparent).
 *
 * @typedef {{
 *   frameId: string,
 *   contentColor: (!DOM.RGBA|undefined),
 *   contentOutlineColor: (!DOM.RGBA|undefined)
 * }}
 */
Overlay.HighlightFrameParams;

/**
 * Result for the HighlightFrame command.
 *
 *
 * @typedef {undefined}
 */
Overlay.HighlightFrameResult;

/**
 * Parameters for the HighlightNode command.
 *
 * highlightConfig: A descriptor for the highlight appearance.
 * nodeId: Identifier of the node to highlight.
 * backendNodeId: Identifier of the backend node to highlight.
 * objectId: JavaScript object id of the node to be highlighted.
 *
 * @typedef {{
 *   highlightConfig: !Overlay.HighlightConfig,
 *   nodeId: (number|undefined),
 *   backendNodeId: (number|undefined),
 *   objectId: (string|undefined)
 * }}
 */
Overlay.HighlightNodeParams;

/**
 * Result for the HighlightNode command.
 *
 *
 * @typedef {undefined}
 */
Overlay.HighlightNodeResult;

/**
 * Parameters for the HighlightQuad command.
 *
 * quad: Quad to highlight
 * color: The highlight fill color (default: transparent).
 * outlineColor: The highlight outline color (default: transparent).
 *
 * @typedef {{
 *   quad: !Array.<number>,
 *   color: (!DOM.RGBA|undefined),
 *   outlineColor: (!DOM.RGBA|undefined)
 * }}
 */
Overlay.HighlightQuadParams;

/**
 * Result for the HighlightQuad command.
 *
 *
 * @typedef {undefined}
 */
Overlay.HighlightQuadResult;

/**
 * Parameters for the HighlightRect command.
 *
 * x: X coordinate
 * y: Y coordinate
 * width: Rectangle width
 * height: Rectangle height
 * color: The highlight fill color (default: transparent).
 * outlineColor: The highlight outline color (default: transparent).
 *
 * @typedef {{
 *   x: number,
 *   y: number,
 *   width: number,
 *   height: number,
 *   color: (!DOM.RGBA|undefined),
 *   outlineColor: (!DOM.RGBA|undefined)
 * }}
 */
Overlay.HighlightRectParams;

/**
 * Result for the HighlightRect command.
 *
 *
 * @typedef {undefined}
 */
Overlay.HighlightRectResult;

/**
 * Parameters for the SetInspectMode command.
 *
 * mode: Set an inspection mode.
 * highlightConfig: A descriptor for the highlight appearance of hovered-over nodes. May be omitted if `enabled
 *   == false`.
 *
 * @typedef {{
 *   mode: !Overlay.InspectMode,
 *   highlightConfig: (!Overlay.HighlightConfig|undefined)
 * }}
 */
Overlay.SetInspectModeParams;

/**
 * Result for the SetInspectMode command.
 *
 *
 * @typedef {undefined}
 */
Overlay.SetInspectModeResult;

/**
 * Parameters for the SetPausedInDebuggerMessage command.
 *
 * message: The message to display, also triggers resume and step over controls.
 *
 * @typedef {{
 *   message: (string|undefined)
 * }}
 */
Overlay.SetPausedInDebuggerMessageParams;

/**
 * Result for the SetPausedInDebuggerMessage command.
 *
 *
 * @typedef {undefined}
 */
Overlay.SetPausedInDebuggerMessageResult;

/**
 * Parameters for the SetShowDebugBorders command.
 *
 * show: True for showing debug borders
 *
 * @typedef {{
 *   show: boolean
 * }}
 */
Overlay.SetShowDebugBordersParams;

/**
 * Result for the SetShowDebugBorders command.
 *
 *
 * @typedef {undefined}
 */
Overlay.SetShowDebugBordersResult;

/**
 * Parameters for the SetShowFPSCounter command.
 *
 * show: True for showing the FPS counter
 *
 * @typedef {{
 *   show: boolean
 * }}
 */
Overlay.SetShowFPSCounterParams;

/**
 * Result for the SetShowFPSCounter command.
 *
 *
 * @typedef {undefined}
 */
Overlay.SetShowFPSCounterResult;

/**
 * Parameters for the SetShowPaintRects command.
 *
 * result: True for showing paint rectangles
 *
 * @typedef {{
 *   result: boolean
 * }}
 */
Overlay.SetShowPaintRectsParams;

/**
 * Result for the SetShowPaintRects command.
 *
 *
 * @typedef {undefined}
 */
Overlay.SetShowPaintRectsResult;

/**
 * Parameters for the SetShowScrollBottleneckRects command.
 *
 * show: True for showing scroll bottleneck rects
 *
 * @typedef {{
 *   show: boolean
 * }}
 */
Overlay.SetShowScrollBottleneckRectsParams;

/**
 * Result for the SetShowScrollBottleneckRects command.
 *
 *
 * @typedef {undefined}
 */
Overlay.SetShowScrollBottleneckRectsResult;

/**
 * Parameters for the SetShowViewportSizeOnResize command.
 *
 * show: Whether to paint size or not.
 *
 * @typedef {{
 *   show: boolean
 * }}
 */
Overlay.SetShowViewportSizeOnResizeParams;

/**
 * Result for the SetShowViewportSizeOnResize command.
 *
 *
 * @typedef {undefined}
 */
Overlay.SetShowViewportSizeOnResizeResult;

/**
 * Parameters for the SetSuspended command.
 *
 * suspended: Whether overlay should be suspended and not consume any resources until resumed.
 *
 * @typedef {{
 *   suspended: boolean
 * }}
 */
Overlay.SetSuspendedParams;

/**
 * Result for the SetSuspended command.
 *
 *
 * @typedef {undefined}
 */
Overlay.SetSuspendedResult;

/**
 * Parameters for the InspectNodeRequested event.
 *
 * backendNodeId: Id of the node to inspect.
 *
 * @typedef {{
 *   backendNodeId: number
 * }}
 */
Overlay.InspectNodeRequestedParams;

/**
 * Parameters for the NodeHighlightRequested event.
 *
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
Overlay.NodeHighlightRequestedParams;

/**
 * Parameters for the ScreenshotRequested event.
 *
 * viewport: Viewport to capture, in CSS.
 *
 * @typedef {{
 *   viewport: !Page.Viewport
 * }}
 */
Overlay.ScreenshotRequestedParams;



/**
  * Disables domain notifications.
  *
  * @return {!Promise<Overlay.DisableResult>}
  */
ExperimentalOverlay.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('Overlay.disable', {});
};

/**
  * Enables domain notifications.
  *
  * @return {!Promise<Overlay.EnableResult>}
  */
ExperimentalOverlay.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('Overlay.enable', {});
};

/**
  * For testing.
  *
  * @param {Overlay.GetHighlightObjectForTestParams} params
  * @return {!Promise<Overlay.GetHighlightObjectForTestResult>}
  */
ExperimentalOverlay.prototype.getHighlightObjectForTest = function(params) {
  return this.connection_.sendDevToolsMessage('Overlay.getHighlightObjectForTest', params);
};

/**
  * Hides any highlight.
  *
  * @return {!Promise<Overlay.HideHighlightResult>}
  */
ExperimentalOverlay.prototype.hideHighlight = function() {
  return this.connection_.sendDevToolsMessage('Overlay.hideHighlight', {});
};

/**
  * Highlights owner element of the frame with given id.
  *
  * @param {Overlay.HighlightFrameParams} params
  * @return {!Promise<Overlay.HighlightFrameResult>}
  */
ExperimentalOverlay.prototype.highlightFrame = function(params) {
  return this.connection_.sendDevToolsMessage('Overlay.highlightFrame', params);
};

/**
  * Highlights DOM node with given id or with the given JavaScript object wrapper. Either nodeId or
 * objectId must be specified.
  *
  * @param {Overlay.HighlightNodeParams} params
  * @return {!Promise<Overlay.HighlightNodeResult>}
  */
ExperimentalOverlay.prototype.highlightNode = function(params) {
  return this.connection_.sendDevToolsMessage('Overlay.highlightNode', params);
};

/**
  * Highlights given quad. Coordinates are absolute with respect to the main frame viewport.
  *
  * @param {Overlay.HighlightQuadParams} params
  * @return {!Promise<Overlay.HighlightQuadResult>}
  */
ExperimentalOverlay.prototype.highlightQuad = function(params) {
  return this.connection_.sendDevToolsMessage('Overlay.highlightQuad', params);
};

/**
  * Highlights given rectangle. Coordinates are absolute with respect to the main frame viewport.
  *
  * @param {Overlay.HighlightRectParams} params
  * @return {!Promise<Overlay.HighlightRectResult>}
  */
ExperimentalOverlay.prototype.highlightRect = function(params) {
  return this.connection_.sendDevToolsMessage('Overlay.highlightRect', params);
};

/**
  * Enters the 'inspect' mode. In this mode, elements that user is hovering over are highlighted.
 * Backend then generates 'inspectNodeRequested' event upon element selection.
  *
  * @param {Overlay.SetInspectModeParams} params
  * @return {!Promise<Overlay.SetInspectModeResult>}
  */
ExperimentalOverlay.prototype.setInspectMode = function(params) {
  return this.connection_.sendDevToolsMessage('Overlay.setInspectMode', params);
};

/**
  * @param {Overlay.SetPausedInDebuggerMessageParams=} opt_params
  * @return {!Promise<Overlay.SetPausedInDebuggerMessageResult>}
  */
ExperimentalOverlay.prototype.setPausedInDebuggerMessage = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Overlay.setPausedInDebuggerMessage', opt_params || {});
};

/**
  * Requests that backend shows debug borders on layers
  *
  * @param {Overlay.SetShowDebugBordersParams} params
  * @return {!Promise<Overlay.SetShowDebugBordersResult>}
  */
ExperimentalOverlay.prototype.setShowDebugBorders = function(params) {
  return this.connection_.sendDevToolsMessage('Overlay.setShowDebugBorders', params);
};

/**
  * Requests that backend shows the FPS counter
  *
  * @param {Overlay.SetShowFPSCounterParams} params
  * @return {!Promise<Overlay.SetShowFPSCounterResult>}
  */
ExperimentalOverlay.prototype.setShowFPSCounter = function(params) {
  return this.connection_.sendDevToolsMessage('Overlay.setShowFPSCounter', params);
};

/**
  * Requests that backend shows paint rectangles
  *
  * @param {Overlay.SetShowPaintRectsParams} params
  * @return {!Promise<Overlay.SetShowPaintRectsResult>}
  */
ExperimentalOverlay.prototype.setShowPaintRects = function(params) {
  return this.connection_.sendDevToolsMessage('Overlay.setShowPaintRects', params);
};

/**
  * Requests that backend shows scroll bottleneck rects
  *
  * @param {Overlay.SetShowScrollBottleneckRectsParams} params
  * @return {!Promise<Overlay.SetShowScrollBottleneckRectsResult>}
  */
ExperimentalOverlay.prototype.setShowScrollBottleneckRects = function(params) {
  return this.connection_.sendDevToolsMessage('Overlay.setShowScrollBottleneckRects', params);
};

/**
  * Paints viewport size upon main frame resize.
  *
  * @param {Overlay.SetShowViewportSizeOnResizeParams} params
  * @return {!Promise<Overlay.SetShowViewportSizeOnResizeResult>}
  */
ExperimentalOverlay.prototype.setShowViewportSizeOnResize = function(params) {
  return this.connection_.sendDevToolsMessage('Overlay.setShowViewportSizeOnResize', params);
};

/**
  * @param {Overlay.SetSuspendedParams} params
  * @return {!Promise<Overlay.SetSuspendedResult>}
  */
ExperimentalOverlay.prototype.setSuspended = function(params) {
  return this.connection_.sendDevToolsMessage('Overlay.setSuspended', params);
};


/**
  * Fired when the node should be inspected. This happens after call to `setInspectMode` or when
 * user manually inspects an element.
  *
  * @param {!function(!Overlay.InspectNodeRequestedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalOverlay.prototype.onInspectNodeRequested = function(listener) {
  return this.connection_.addEventListener(
      'Overlay.inspectNodeRequested', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when the node should be highlighted. This happens after call to `setInspectMode`.
  *
  * @param {!function(!Overlay.NodeHighlightRequestedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalOverlay.prototype.onNodeHighlightRequested = function(listener) {
  return this.connection_.addEventListener(
      'Overlay.nodeHighlightRequested', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when user asks to capture screenshot of some area on the page.
  *
  * @param {!function(!Overlay.ScreenshotRequestedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalOverlay.prototype.onScreenshotRequested = function(listener) {
  return this.connection_.addEventListener(
      'Overlay.screenshotRequested', /** @type {!function(!Object): undefined} */ (listener));
};



/**
  * Disables domain notifications.
  *
  * @return {!Promise<Overlay.DisableResult>}
  */
Overlay.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('Overlay.disable', {});
};

/**
  * Enables domain notifications.
  *
  * @return {!Promise<Overlay.EnableResult>}
  */
Overlay.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('Overlay.enable', {});
};

/**
  * For testing.
  *
  * @param {Overlay.GetHighlightObjectForTestParams} params
  * @return {!Promise<Overlay.GetHighlightObjectForTestResult>}
  */
Overlay.prototype.getHighlightObjectForTest = function(params) {
  return this.connection_.sendDevToolsMessage('Overlay.getHighlightObjectForTest', params);
};

/**
  * Hides any highlight.
  *
  * @return {!Promise<Overlay.HideHighlightResult>}
  */
Overlay.prototype.hideHighlight = function() {
  return this.connection_.sendDevToolsMessage('Overlay.hideHighlight', {});
};

/**
  * Highlights owner element of the frame with given id.
  *
  * @param {Overlay.HighlightFrameParams} params
  * @return {!Promise<Overlay.HighlightFrameResult>}
  */
Overlay.prototype.highlightFrame = function(params) {
  return this.connection_.sendDevToolsMessage('Overlay.highlightFrame', params);
};

/**
  * Highlights DOM node with given id or with the given JavaScript object wrapper. Either nodeId or
 * objectId must be specified.
  *
  * @param {Overlay.HighlightNodeParams} params
  * @return {!Promise<Overlay.HighlightNodeResult>}
  */
Overlay.prototype.highlightNode = function(params) {
  return this.connection_.sendDevToolsMessage('Overlay.highlightNode', params);
};

/**
  * Highlights given quad. Coordinates are absolute with respect to the main frame viewport.
  *
  * @param {Overlay.HighlightQuadParams} params
  * @return {!Promise<Overlay.HighlightQuadResult>}
  */
Overlay.prototype.highlightQuad = function(params) {
  return this.connection_.sendDevToolsMessage('Overlay.highlightQuad', params);
};

/**
  * Highlights given rectangle. Coordinates are absolute with respect to the main frame viewport.
  *
  * @param {Overlay.HighlightRectParams} params
  * @return {!Promise<Overlay.HighlightRectResult>}
  */
Overlay.prototype.highlightRect = function(params) {
  return this.connection_.sendDevToolsMessage('Overlay.highlightRect', params);
};

/**
  * Enters the 'inspect' mode. In this mode, elements that user is hovering over are highlighted.
 * Backend then generates 'inspectNodeRequested' event upon element selection.
  *
  * @param {Overlay.SetInspectModeParams} params
  * @return {!Promise<Overlay.SetInspectModeResult>}
  */
Overlay.prototype.setInspectMode = function(params) {
  return this.connection_.sendDevToolsMessage('Overlay.setInspectMode', params);
};

/**
  * @param {Overlay.SetPausedInDebuggerMessageParams=} opt_params
  * @return {!Promise<Overlay.SetPausedInDebuggerMessageResult>}
  */
Overlay.prototype.setPausedInDebuggerMessage = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Overlay.setPausedInDebuggerMessage', opt_params || {});
};

/**
  * Requests that backend shows debug borders on layers
  *
  * @param {Overlay.SetShowDebugBordersParams} params
  * @return {!Promise<Overlay.SetShowDebugBordersResult>}
  */
Overlay.prototype.setShowDebugBorders = function(params) {
  return this.connection_.sendDevToolsMessage('Overlay.setShowDebugBorders', params);
};

/**
  * Requests that backend shows the FPS counter
  *
  * @param {Overlay.SetShowFPSCounterParams} params
  * @return {!Promise<Overlay.SetShowFPSCounterResult>}
  */
Overlay.prototype.setShowFPSCounter = function(params) {
  return this.connection_.sendDevToolsMessage('Overlay.setShowFPSCounter', params);
};

/**
  * Requests that backend shows paint rectangles
  *
  * @param {Overlay.SetShowPaintRectsParams} params
  * @return {!Promise<Overlay.SetShowPaintRectsResult>}
  */
Overlay.prototype.setShowPaintRects = function(params) {
  return this.connection_.sendDevToolsMessage('Overlay.setShowPaintRects', params);
};

/**
  * Requests that backend shows scroll bottleneck rects
  *
  * @param {Overlay.SetShowScrollBottleneckRectsParams} params
  * @return {!Promise<Overlay.SetShowScrollBottleneckRectsResult>}
  */
Overlay.prototype.setShowScrollBottleneckRects = function(params) {
  return this.connection_.sendDevToolsMessage('Overlay.setShowScrollBottleneckRects', params);
};

/**
  * Paints viewport size upon main frame resize.
  *
  * @param {Overlay.SetShowViewportSizeOnResizeParams} params
  * @return {!Promise<Overlay.SetShowViewportSizeOnResizeResult>}
  */
Overlay.prototype.setShowViewportSizeOnResize = function(params) {
  return this.connection_.sendDevToolsMessage('Overlay.setShowViewportSizeOnResize', params);
};

/**
  * @param {Overlay.SetSuspendedParams} params
  * @return {!Promise<Overlay.SetSuspendedResult>}
  */
Overlay.prototype.setSuspended = function(params) {
  return this.connection_.sendDevToolsMessage('Overlay.setSuspended', params);
};


/**
  * Fired when the node should be inspected. This happens after call to `setInspectMode` or when
 * user manually inspects an element.
  *
  * @param {!function(!Overlay.InspectNodeRequestedParams)} listener
  * @return {number} The id of this event listener.
  */
Overlay.prototype.onInspectNodeRequested = function(listener) {
  return this.connection_.addEventListener(
      'Overlay.inspectNodeRequested', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when the node should be highlighted. This happens after call to `setInspectMode`.
  *
  * @param {!function(!Overlay.NodeHighlightRequestedParams)} listener
  * @return {number} The id of this event listener.
  */
Overlay.prototype.onNodeHighlightRequested = function(listener) {
  return this.connection_.addEventListener(
      'Overlay.nodeHighlightRequested', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when user asks to capture screenshot of some area on the page.
  *
  * @param {!function(!Overlay.ScreenshotRequestedParams)} listener
  * @return {number} The id of this event listener.
  */
Overlay.prototype.onScreenshotRequested = function(listener) {
  return this.connection_.addEventListener(
      'Overlay.screenshotRequested', /** @type {!function(!Object): undefined} */ (listener));
};

});  // goog.scope

