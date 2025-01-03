// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the Overlay DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalOverlay = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalOverlay.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the Overlay DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Overlay = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalOverlay} */
chromium.DevTools.Overlay.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.Overlay.prototype.removeEventListener = function(id) {};

/**
 * @enum {string}
 */
chromium.DevTools.Overlay.InspectMode = {
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
 *   contentColor: (!chromium.DevTools.DOM.RGBA|undefined),
 *   paddingColor: (!chromium.DevTools.DOM.RGBA|undefined),
 *   borderColor: (!chromium.DevTools.DOM.RGBA|undefined),
 *   marginColor: (!chromium.DevTools.DOM.RGBA|undefined),
 *   eventTargetColor: (!chromium.DevTools.DOM.RGBA|undefined),
 *   shapeColor: (!chromium.DevTools.DOM.RGBA|undefined),
 *   shapeMarginColor: (!chromium.DevTools.DOM.RGBA|undefined),
 *   selectorList: (string|undefined),
 *   cssGridColor: (!chromium.DevTools.DOM.RGBA|undefined)
 * }}
 */
chromium.DevTools.Overlay.HighlightConfig;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Overlay.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Overlay.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Overlay.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Overlay.EnableResult;

/**
 * Parameters for the GetHighlightObjectForTest command.
 *
 * nodeId: Id of the node to get highlight object for.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
chromium.DevTools.Overlay.GetHighlightObjectForTestParams;

/**
 * Result for the GetHighlightObjectForTest command.
 *
 * highlight: Highlight data for the node.
 *
 * @typedef {{
 *   highlight: !Object
 * }}
 */
chromium.DevTools.Overlay.GetHighlightObjectForTestResult;

/**
 * Parameters for the HideHighlight command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Overlay.HideHighlightParams;

/**
 * Result for the HideHighlight command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Overlay.HideHighlightResult;

/**
 * Parameters for the HighlightFrame command.
 *
 * frameId: Identifier of the frame to highlight.
 * contentColor: The content box highlight fill color (default: transparent).
 * contentOutlineColor: The content box highlight outline color (default: transparent).
 *
 * @typedef {{
 *   frameId: string,
 *   contentColor: (!chromium.DevTools.DOM.RGBA|undefined),
 *   contentOutlineColor: (!chromium.DevTools.DOM.RGBA|undefined)
 * }}
 */
chromium.DevTools.Overlay.HighlightFrameParams;

/**
 * Result for the HighlightFrame command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Overlay.HighlightFrameResult;

/**
 * Parameters for the HighlightNode command.
 *
 * highlightConfig: A descriptor for the highlight appearance.
 * nodeId: Identifier of the node to highlight.
 * backendNodeId: Identifier of the backend node to highlight.
 * objectId: JavaScript object id of the node to be highlighted.
 *
 * @typedef {{
 *   highlightConfig: !chromium.DevTools.Overlay.HighlightConfig,
 *   nodeId: (number|undefined),
 *   backendNodeId: (number|undefined),
 *   objectId: (string|undefined)
 * }}
 */
chromium.DevTools.Overlay.HighlightNodeParams;

/**
 * Result for the HighlightNode command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Overlay.HighlightNodeResult;

/**
 * Parameters for the HighlightQuad command.
 *
 * quad: Quad to highlight
 * color: The highlight fill color (default: transparent).
 * outlineColor: The highlight outline color (default: transparent).
 *
 * @typedef {{
 *   quad: !Array.<number>,
 *   color: (!chromium.DevTools.DOM.RGBA|undefined),
 *   outlineColor: (!chromium.DevTools.DOM.RGBA|undefined)
 * }}
 */
chromium.DevTools.Overlay.HighlightQuadParams;

/**
 * Result for the HighlightQuad command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Overlay.HighlightQuadResult;

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
 *   color: (!chromium.DevTools.DOM.RGBA|undefined),
 *   outlineColor: (!chromium.DevTools.DOM.RGBA|undefined)
 * }}
 */
chromium.DevTools.Overlay.HighlightRectParams;

/**
 * Result for the HighlightRect command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Overlay.HighlightRectResult;

/**
 * Parameters for the SetInspectMode command.
 *
 * mode: Set an inspection mode.
 * highlightConfig: A descriptor for the highlight appearance of hovered-over nodes. May be omitted if `enabled
 *    == false`.
 *
 * @typedef {{
 *   mode: !chromium.DevTools.Overlay.InspectMode,
 *   highlightConfig: (!chromium.DevTools.Overlay.HighlightConfig|undefined)
 * }}
 */
chromium.DevTools.Overlay.SetInspectModeParams;

/**
 * Result for the SetInspectMode command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Overlay.SetInspectModeResult;

/**
 * Parameters for the SetPausedInDebuggerMessage command.
 *
 * message: The message to display, also triggers resume and step over controls.
 *
 * @typedef {{
 *   message: (string|undefined)
 * }}
 */
chromium.DevTools.Overlay.SetPausedInDebuggerMessageParams;

/**
 * Result for the SetPausedInDebuggerMessage command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Overlay.SetPausedInDebuggerMessageResult;

/**
 * Parameters for the SetShowDebugBorders command.
 *
 * show: True for showing debug borders
 *
 * @typedef {{
 *   show: boolean
 * }}
 */
chromium.DevTools.Overlay.SetShowDebugBordersParams;

/**
 * Result for the SetShowDebugBorders command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Overlay.SetShowDebugBordersResult;

/**
 * Parameters for the SetShowFPSCounter command.
 *
 * show: True for showing the FPS counter
 *
 * @typedef {{
 *   show: boolean
 * }}
 */
chromium.DevTools.Overlay.SetShowFPSCounterParams;

/**
 * Result for the SetShowFPSCounter command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Overlay.SetShowFPSCounterResult;

/**
 * Parameters for the SetShowPaintRects command.
 *
 * result: True for showing paint rectangles
 *
 * @typedef {{
 *   result: boolean
 * }}
 */
chromium.DevTools.Overlay.SetShowPaintRectsParams;

/**
 * Result for the SetShowPaintRects command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Overlay.SetShowPaintRectsResult;

/**
 * Parameters for the SetShowScrollBottleneckRects command.
 *
 * show: True for showing scroll bottleneck rects
 *
 * @typedef {{
 *   show: boolean
 * }}
 */
chromium.DevTools.Overlay.SetShowScrollBottleneckRectsParams;

/**
 * Result for the SetShowScrollBottleneckRects command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Overlay.SetShowScrollBottleneckRectsResult;

/**
 * Parameters for the SetShowViewportSizeOnResize command.
 *
 * show: Whether to paint size or not.
 *
 * @typedef {{
 *   show: boolean
 * }}
 */
chromium.DevTools.Overlay.SetShowViewportSizeOnResizeParams;

/**
 * Result for the SetShowViewportSizeOnResize command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Overlay.SetShowViewportSizeOnResizeResult;

/**
 * Parameters for the SetSuspended command.
 *
 * suspended: Whether overlay should be suspended and not consume any resources until resumed.
 *
 * @typedef {{
 *   suspended: boolean
 * }}
 */
chromium.DevTools.Overlay.SetSuspendedParams;

/**
 * Result for the SetSuspended command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Overlay.SetSuspendedResult;

/**
 * Parameters for the InspectNodeRequested event.
 *
 * backendNodeId: Id of the node to inspect.
 *
 * @typedef {{
 *   backendNodeId: number
 * }}
 */
chromium.DevTools.Overlay.InspectNodeRequestedParams;

/**
 * Parameters for the NodeHighlightRequested event.
 *
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
chromium.DevTools.Overlay.NodeHighlightRequestedParams;

/**
 * Parameters for the ScreenshotRequested event.
 *
 * viewport: Viewport to capture, in CSS.
 *
 * @typedef {{
 *   viewport: !chromium.DevTools.Page.Viewport
 * }}
 */
chromium.DevTools.Overlay.ScreenshotRequestedParams;



/**
  * Disables domain notifications.
  *
  * @return {!Promise<chromium.DevTools.Overlay.DisableResult>}
  */
chromium.DevTools.ExperimentalOverlay.prototype.disable = function() {};

/**
  * Enables domain notifications.
  *
  * @return {!Promise<chromium.DevTools.Overlay.EnableResult>}
  */
chromium.DevTools.ExperimentalOverlay.prototype.enable = function() {};

/**
  * For testing.
  *
  * @param {chromium.DevTools.Overlay.GetHighlightObjectForTestParams} params
  * @return {!Promise<chromium.DevTools.Overlay.GetHighlightObjectForTestResult>}
  */
chromium.DevTools.ExperimentalOverlay.prototype.getHighlightObjectForTest = function(params) {};

/**
  * Hides any highlight.
  *
  * @return {!Promise<chromium.DevTools.Overlay.HideHighlightResult>}
  */
chromium.DevTools.ExperimentalOverlay.prototype.hideHighlight = function() {};

/**
  * Highlights owner element of the frame with given id.
  *
  * @param {chromium.DevTools.Overlay.HighlightFrameParams} params
  * @return {!Promise<chromium.DevTools.Overlay.HighlightFrameResult>}
  */
chromium.DevTools.ExperimentalOverlay.prototype.highlightFrame = function(params) {};

/**
  * Highlights DOM node with given id or with the given JavaScript object wrapper. Either nodeId or
 * objectId must be specified.
  *
  * @param {chromium.DevTools.Overlay.HighlightNodeParams} params
  * @return {!Promise<chromium.DevTools.Overlay.HighlightNodeResult>}
  */
chromium.DevTools.ExperimentalOverlay.prototype.highlightNode = function(params) {};

/**
  * Highlights given quad. Coordinates are absolute with respect to the main frame viewport.
  *
  * @param {chromium.DevTools.Overlay.HighlightQuadParams} params
  * @return {!Promise<chromium.DevTools.Overlay.HighlightQuadResult>}
  */
chromium.DevTools.ExperimentalOverlay.prototype.highlightQuad = function(params) {};

/**
  * Highlights given rectangle. Coordinates are absolute with respect to the main frame viewport.
  *
  * @param {chromium.DevTools.Overlay.HighlightRectParams} params
  * @return {!Promise<chromium.DevTools.Overlay.HighlightRectResult>}
  */
chromium.DevTools.ExperimentalOverlay.prototype.highlightRect = function(params) {};

/**
  * Enters the 'inspect' mode. In this mode, elements that user is hovering over are highlighted.
 * Backend then generates 'inspectNodeRequested' event upon element selection.
  *
  * @param {chromium.DevTools.Overlay.SetInspectModeParams} params
  * @return {!Promise<chromium.DevTools.Overlay.SetInspectModeResult>}
  */
chromium.DevTools.ExperimentalOverlay.prototype.setInspectMode = function(params) {};

/**
  * @param {chromium.DevTools.Overlay.SetPausedInDebuggerMessageParams=} opt_params
  * @return {!Promise<chromium.DevTools.Overlay.SetPausedInDebuggerMessageResult>}
  */
chromium.DevTools.ExperimentalOverlay.prototype.setPausedInDebuggerMessage = function(opt_params) {};

/**
  * Requests that backend shows debug borders on layers
  *
  * @param {chromium.DevTools.Overlay.SetShowDebugBordersParams} params
  * @return {!Promise<chromium.DevTools.Overlay.SetShowDebugBordersResult>}
  */
chromium.DevTools.ExperimentalOverlay.prototype.setShowDebugBorders = function(params) {};

/**
  * Requests that backend shows the FPS counter
  *
  * @param {chromium.DevTools.Overlay.SetShowFPSCounterParams} params
  * @return {!Promise<chromium.DevTools.Overlay.SetShowFPSCounterResult>}
  */
chromium.DevTools.ExperimentalOverlay.prototype.setShowFPSCounter = function(params) {};

/**
  * Requests that backend shows paint rectangles
  *
  * @param {chromium.DevTools.Overlay.SetShowPaintRectsParams} params
  * @return {!Promise<chromium.DevTools.Overlay.SetShowPaintRectsResult>}
  */
chromium.DevTools.ExperimentalOverlay.prototype.setShowPaintRects = function(params) {};

/**
  * Requests that backend shows scroll bottleneck rects
  *
  * @param {chromium.DevTools.Overlay.SetShowScrollBottleneckRectsParams} params
  * @return {!Promise<chromium.DevTools.Overlay.SetShowScrollBottleneckRectsResult>}
  */
chromium.DevTools.ExperimentalOverlay.prototype.setShowScrollBottleneckRects = function(params) {};

/**
  * Paints viewport size upon main frame resize.
  *
  * @param {chromium.DevTools.Overlay.SetShowViewportSizeOnResizeParams} params
  * @return {!Promise<chromium.DevTools.Overlay.SetShowViewportSizeOnResizeResult>}
  */
chromium.DevTools.ExperimentalOverlay.prototype.setShowViewportSizeOnResize = function(params) {};

/**
  * @param {chromium.DevTools.Overlay.SetSuspendedParams} params
  * @return {!Promise<chromium.DevTools.Overlay.SetSuspendedResult>}
  */
chromium.DevTools.ExperimentalOverlay.prototype.setSuspended = function(params) {};


/**
  * Fired when the node should be inspected. This happens after call to `setInspectMode` or when
 * user manually inspects an element.
  *
  * @param {!function(!chromium.DevTools.Overlay.InspectNodeRequestedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalOverlay.prototype.onInspectNodeRequested = function(listener) {};

/**
  * Fired when the node should be highlighted. This happens after call to `setInspectMode`.
  *
  * @param {!function(!chromium.DevTools.Overlay.NodeHighlightRequestedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalOverlay.prototype.onNodeHighlightRequested = function(listener) {};

/**
  * Fired when user asks to capture screenshot of some area on the page.
  *
  * @param {!function(!chromium.DevTools.Overlay.ScreenshotRequestedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalOverlay.prototype.onScreenshotRequested = function(listener) {};



/**
  * Disables domain notifications.
  *
  * @return {!Promise<chromium.DevTools.Overlay.DisableResult>}
  */
chromium.DevTools.Overlay.prototype.disable = function() {};

/**
  * Enables domain notifications.
  *
  * @return {!Promise<chromium.DevTools.Overlay.EnableResult>}
  */
chromium.DevTools.Overlay.prototype.enable = function() {};

/**
  * For testing.
  *
  * @param {chromium.DevTools.Overlay.GetHighlightObjectForTestParams} params
  * @return {!Promise<chromium.DevTools.Overlay.GetHighlightObjectForTestResult>}
  */
chromium.DevTools.Overlay.prototype.getHighlightObjectForTest = function(params) {};

/**
  * Hides any highlight.
  *
  * @return {!Promise<chromium.DevTools.Overlay.HideHighlightResult>}
  */
chromium.DevTools.Overlay.prototype.hideHighlight = function() {};

/**
  * Highlights owner element of the frame with given id.
  *
  * @param {chromium.DevTools.Overlay.HighlightFrameParams} params
  * @return {!Promise<chromium.DevTools.Overlay.HighlightFrameResult>}
  */
chromium.DevTools.Overlay.prototype.highlightFrame = function(params) {};

/**
  * Highlights DOM node with given id or with the given JavaScript object wrapper. Either nodeId or
 * objectId must be specified.
  *
  * @param {chromium.DevTools.Overlay.HighlightNodeParams} params
  * @return {!Promise<chromium.DevTools.Overlay.HighlightNodeResult>}
  */
chromium.DevTools.Overlay.prototype.highlightNode = function(params) {};

/**
  * Highlights given quad. Coordinates are absolute with respect to the main frame viewport.
  *
  * @param {chromium.DevTools.Overlay.HighlightQuadParams} params
  * @return {!Promise<chromium.DevTools.Overlay.HighlightQuadResult>}
  */
chromium.DevTools.Overlay.prototype.highlightQuad = function(params) {};

/**
  * Highlights given rectangle. Coordinates are absolute with respect to the main frame viewport.
  *
  * @param {chromium.DevTools.Overlay.HighlightRectParams} params
  * @return {!Promise<chromium.DevTools.Overlay.HighlightRectResult>}
  */
chromium.DevTools.Overlay.prototype.highlightRect = function(params) {};

/**
  * Enters the 'inspect' mode. In this mode, elements that user is hovering over are highlighted.
 * Backend then generates 'inspectNodeRequested' event upon element selection.
  *
  * @param {chromium.DevTools.Overlay.SetInspectModeParams} params
  * @return {!Promise<chromium.DevTools.Overlay.SetInspectModeResult>}
  */
chromium.DevTools.Overlay.prototype.setInspectMode = function(params) {};

/**
  * @param {chromium.DevTools.Overlay.SetPausedInDebuggerMessageParams=} opt_params
  * @return {!Promise<chromium.DevTools.Overlay.SetPausedInDebuggerMessageResult>}
  */
chromium.DevTools.Overlay.prototype.setPausedInDebuggerMessage = function(opt_params) {};

/**
  * Requests that backend shows debug borders on layers
  *
  * @param {chromium.DevTools.Overlay.SetShowDebugBordersParams} params
  * @return {!Promise<chromium.DevTools.Overlay.SetShowDebugBordersResult>}
  */
chromium.DevTools.Overlay.prototype.setShowDebugBorders = function(params) {};

/**
  * Requests that backend shows the FPS counter
  *
  * @param {chromium.DevTools.Overlay.SetShowFPSCounterParams} params
  * @return {!Promise<chromium.DevTools.Overlay.SetShowFPSCounterResult>}
  */
chromium.DevTools.Overlay.prototype.setShowFPSCounter = function(params) {};

/**
  * Requests that backend shows paint rectangles
  *
  * @param {chromium.DevTools.Overlay.SetShowPaintRectsParams} params
  * @return {!Promise<chromium.DevTools.Overlay.SetShowPaintRectsResult>}
  */
chromium.DevTools.Overlay.prototype.setShowPaintRects = function(params) {};

/**
  * Requests that backend shows scroll bottleneck rects
  *
  * @param {chromium.DevTools.Overlay.SetShowScrollBottleneckRectsParams} params
  * @return {!Promise<chromium.DevTools.Overlay.SetShowScrollBottleneckRectsResult>}
  */
chromium.DevTools.Overlay.prototype.setShowScrollBottleneckRects = function(params) {};

/**
  * Paints viewport size upon main frame resize.
  *
  * @param {chromium.DevTools.Overlay.SetShowViewportSizeOnResizeParams} params
  * @return {!Promise<chromium.DevTools.Overlay.SetShowViewportSizeOnResizeResult>}
  */
chromium.DevTools.Overlay.prototype.setShowViewportSizeOnResize = function(params) {};

/**
  * @param {chromium.DevTools.Overlay.SetSuspendedParams} params
  * @return {!Promise<chromium.DevTools.Overlay.SetSuspendedResult>}
  */
chromium.DevTools.Overlay.prototype.setSuspended = function(params) {};


/**
  * Fired when the node should be inspected. This happens after call to `setInspectMode` or when
 * user manually inspects an element.
  *
  * @param {!function(!chromium.DevTools.Overlay.InspectNodeRequestedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Overlay.prototype.onInspectNodeRequested = function(listener) {};

/**
  * Fired when the node should be highlighted. This happens after call to `setInspectMode`.
  *
  * @param {!function(!chromium.DevTools.Overlay.NodeHighlightRequestedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Overlay.prototype.onNodeHighlightRequested = function(listener) {};

/**
  * Fired when user asks to capture screenshot of some area on the page.
  *
  * @param {!function(!chromium.DevTools.Overlay.ScreenshotRequestedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Overlay.prototype.onScreenshotRequested = function(listener) {};
