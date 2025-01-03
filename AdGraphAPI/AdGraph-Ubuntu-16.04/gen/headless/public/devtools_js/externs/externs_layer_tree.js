// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the LayerTree DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalLayerTree = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalLayerTree.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the LayerTree DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.LayerTree = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalLayerTree} */
chromium.DevTools.LayerTree.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.LayerTree.prototype.removeEventListener = function(id) {};

/**
 * Reason for rectangle to force scrolling on the main thread
 *
 * @enum {string}
 */
chromium.DevTools.LayerTree.ScrollRectType = {
    REPAINTS_ON_SCROLL: "RepaintsOnScroll",
    TOUCH_EVENT_HANDLER: "TouchEventHandler",
    WHEEL_EVENT_HANDLER: "WheelEventHandler"
};


/**
 * Rectangle where scrolling happens on the main thread.
 *
 * rect: Rectangle itself.
 * type: Reason for rectangle to force scrolling on the main thread
 *
 * @typedef {{
 *   rect: !chromium.DevTools.DOM.Rect,
 *   type: !chromium.DevTools.LayerTree.ScrollRectType
 * }}
 */
chromium.DevTools.LayerTree.ScrollRect;

/**
 * Sticky position constraints.
 *
 * stickyBoxRect: Layout rectangle of the sticky element before being shifted
 * containingBlockRect: Layout rectangle of the containing block of the sticky element
 * nearestLayerShiftingStickyBox: The nearest sticky layer that shifts the sticky box
 * nearestLayerShiftingContainingBlock: The nearest sticky layer that shifts the containing block
 *
 * @typedef {{
 *   stickyBoxRect: !chromium.DevTools.DOM.Rect,
 *   containingBlockRect: !chromium.DevTools.DOM.Rect,
 *   nearestLayerShiftingStickyBox: (string|undefined),
 *   nearestLayerShiftingContainingBlock: (string|undefined)
 * }}
 */
chromium.DevTools.LayerTree.StickyPositionConstraint;

/**
 * Serialized fragment of layer picture along with its offset within the layer.
 *
 * x: Offset from owning layer left boundary
 * y: Offset from owning layer top boundary
 * picture: Base64-encoded snapshot data.
 *
 * @typedef {{
 *   x: number,
 *   y: number,
 *   picture: string
 * }}
 */
chromium.DevTools.LayerTree.PictureTile;

/**
 * Information about a compositing layer.
 *
 * layerId: The unique id for this layer.
 * parentLayerId: The id of parent (not present for root).
 * backendNodeId: The backend id for the node associated with this layer.
 * offsetX: Offset from parent layer, X coordinate.
 * offsetY: Offset from parent layer, Y coordinate.
 * width: Layer width.
 * height: Layer height.
 * transform: Transformation matrix for layer, default is identity matrix
 * anchorX: Transform anchor point X, absent if no transform specified
 * anchorY: Transform anchor point Y, absent if no transform specified
 * anchorZ: Transform anchor point Z, absent if no transform specified
 * paintCount: Indicates how many time this layer has painted.
 * drawsContent: Indicates whether this layer hosts any content, rather than being used for
 *    transform/scrolling purposes only.
 * invisible: Set if layer is not visible.
 * scrollRects: Rectangles scrolling on main thread only.
 * stickyPositionConstraint: Sticky position constraint information
 *
 * @typedef {{
 *   layerId: string,
 *   parentLayerId: (string|undefined),
 *   backendNodeId: (number|undefined),
 *   offsetX: number,
 *   offsetY: number,
 *   width: number,
 *   height: number,
 *   transform: (!Array.<number>|undefined),
 *   anchorX: (number|undefined),
 *   anchorY: (number|undefined),
 *   anchorZ: (number|undefined),
 *   paintCount: number,
 *   drawsContent: boolean,
 *   invisible: (boolean|undefined),
 *   scrollRects: (!Array.<!chromium.DevTools.LayerTree.ScrollRect>|undefined),
 *   stickyPositionConstraint: (!chromium.DevTools.LayerTree.StickyPositionConstraint|undefined)
 * }}
 */
chromium.DevTools.LayerTree.Layer;

/**
 * Parameters for the CompositingReasons command.
 *
 * layerId: The id of the layer for which we want to get the reasons it was composited.
 *
 * @typedef {{
 *   layerId: string
 * }}
 */
chromium.DevTools.LayerTree.CompositingReasonsParams;

/**
 * Result for the CompositingReasons command.
 *
 * compositingReasons: A list of strings specifying reasons for the given layer to become composited.
 *
 * @typedef {{
 *   compositingReasons: !Array.<string>
 * }}
 */
chromium.DevTools.LayerTree.CompositingReasonsResult;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.LayerTree.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.LayerTree.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.LayerTree.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.LayerTree.EnableResult;

/**
 * Parameters for the LoadSnapshot command.
 *
 * tiles: An array of tiles composing the snapshot.
 *
 * @typedef {{
 *   tiles: !Array.<!chromium.DevTools.LayerTree.PictureTile>
 * }}
 */
chromium.DevTools.LayerTree.LoadSnapshotParams;

/**
 * Result for the LoadSnapshot command.
 *
 * snapshotId: The id of the snapshot.
 *
 * @typedef {{
 *   snapshotId: string
 * }}
 */
chromium.DevTools.LayerTree.LoadSnapshotResult;

/**
 * Parameters for the MakeSnapshot command.
 *
 * layerId: The id of the layer.
 *
 * @typedef {{
 *   layerId: string
 * }}
 */
chromium.DevTools.LayerTree.MakeSnapshotParams;

/**
 * Result for the MakeSnapshot command.
 *
 * snapshotId: The id of the layer snapshot.
 *
 * @typedef {{
 *   snapshotId: string
 * }}
 */
chromium.DevTools.LayerTree.MakeSnapshotResult;

/**
 * Parameters for the ProfileSnapshot command.
 *
 * snapshotId: The id of the layer snapshot.
 * minRepeatCount: The maximum number of times to replay the snapshot (1, if not specified).
 * minDuration: The minimum duration (in seconds) to replay the snapshot.
 * clipRect: The clip rectangle to apply when replaying the snapshot.
 *
 * @typedef {{
 *   snapshotId: string,
 *   minRepeatCount: (number|undefined),
 *   minDuration: (number|undefined),
 *   clipRect: (!chromium.DevTools.DOM.Rect|undefined)
 * }}
 */
chromium.DevTools.LayerTree.ProfileSnapshotParams;

/**
 * Result for the ProfileSnapshot command.
 *
 * timings: The array of paint profiles, one per run.
 *
 * @typedef {{
 *   timings: !Array.<!Array.<number>>
 * }}
 */
chromium.DevTools.LayerTree.ProfileSnapshotResult;

/**
 * Parameters for the ReleaseSnapshot command.
 *
 * snapshotId: The id of the layer snapshot.
 *
 * @typedef {{
 *   snapshotId: string
 * }}
 */
chromium.DevTools.LayerTree.ReleaseSnapshotParams;

/**
 * Result for the ReleaseSnapshot command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.LayerTree.ReleaseSnapshotResult;

/**
 * Parameters for the ReplaySnapshot command.
 *
 * snapshotId: The id of the layer snapshot.
 * fromStep: The first step to replay from (replay from the very start if not specified).
 * toStep: The last step to replay to (replay till the end if not specified).
 * scale: The scale to apply while replaying (defaults to 1).
 *
 * @typedef {{
 *   snapshotId: string,
 *   fromStep: (number|undefined),
 *   toStep: (number|undefined),
 *   scale: (number|undefined)
 * }}
 */
chromium.DevTools.LayerTree.ReplaySnapshotParams;

/**
 * Result for the ReplaySnapshot command.
 *
 * dataURL: A data: URL for resulting image.
 *
 * @typedef {{
 *   dataURL: string
 * }}
 */
chromium.DevTools.LayerTree.ReplaySnapshotResult;

/**
 * Parameters for the SnapshotCommandLog command.
 *
 * snapshotId: The id of the layer snapshot.
 *
 * @typedef {{
 *   snapshotId: string
 * }}
 */
chromium.DevTools.LayerTree.SnapshotCommandLogParams;

/**
 * Result for the SnapshotCommandLog command.
 *
 * commandLog: The array of canvas function calls.
 *
 * @typedef {{
 *   commandLog: !Array.<!Object>
 * }}
 */
chromium.DevTools.LayerTree.SnapshotCommandLogResult;

/**
 * Parameters for the LayerPainted event.
 *
 * layerId: The id of the painted layer.
 * clip: Clip rectangle.
 *
 * @typedef {{
 *   layerId: string,
 *   clip: !chromium.DevTools.DOM.Rect
 * }}
 */
chromium.DevTools.LayerTree.LayerPaintedParams;

/**
 * Parameters for the LayerTreeDidChange event.
 *
 * layers: Layer tree, absent if not in the comspositing mode.
 *
 * @typedef {{
 *   layers: (!Array.<!chromium.DevTools.LayerTree.Layer>|undefined)
 * }}
 */
chromium.DevTools.LayerTree.LayerTreeDidChangeParams;



/**
  * Provides the reasons why the given layer was composited.
  *
  * @param {chromium.DevTools.LayerTree.CompositingReasonsParams} params
  * @return {!Promise<chromium.DevTools.LayerTree.CompositingReasonsResult>}
  */
chromium.DevTools.ExperimentalLayerTree.prototype.compositingReasons = function(params) {};

/**
  * Disables compositing tree inspection.
  *
  * @return {!Promise<chromium.DevTools.LayerTree.DisableResult>}
  */
chromium.DevTools.ExperimentalLayerTree.prototype.disable = function() {};

/**
  * Enables compositing tree inspection.
  *
  * @return {!Promise<chromium.DevTools.LayerTree.EnableResult>}
  */
chromium.DevTools.ExperimentalLayerTree.prototype.enable = function() {};

/**
  * Returns the snapshot identifier.
  *
  * @param {chromium.DevTools.LayerTree.LoadSnapshotParams} params
  * @return {!Promise<chromium.DevTools.LayerTree.LoadSnapshotResult>}
  */
chromium.DevTools.ExperimentalLayerTree.prototype.loadSnapshot = function(params) {};

/**
  * Returns the layer snapshot identifier.
  *
  * @param {chromium.DevTools.LayerTree.MakeSnapshotParams} params
  * @return {!Promise<chromium.DevTools.LayerTree.MakeSnapshotResult>}
  */
chromium.DevTools.ExperimentalLayerTree.prototype.makeSnapshot = function(params) {};

/**
  * @param {chromium.DevTools.LayerTree.ProfileSnapshotParams} params
  * @return {!Promise<chromium.DevTools.LayerTree.ProfileSnapshotResult>}
  */
chromium.DevTools.ExperimentalLayerTree.prototype.profileSnapshot = function(params) {};

/**
  * Releases layer snapshot captured by the back-end.
  *
  * @param {chromium.DevTools.LayerTree.ReleaseSnapshotParams} params
  * @return {!Promise<chromium.DevTools.LayerTree.ReleaseSnapshotResult>}
  */
chromium.DevTools.ExperimentalLayerTree.prototype.releaseSnapshot = function(params) {};

/**
  * Replays the layer snapshot and returns the resulting bitmap.
  *
  * @param {chromium.DevTools.LayerTree.ReplaySnapshotParams} params
  * @return {!Promise<chromium.DevTools.LayerTree.ReplaySnapshotResult>}
  */
chromium.DevTools.ExperimentalLayerTree.prototype.replaySnapshot = function(params) {};

/**
  * Replays the layer snapshot and returns canvas log.
  *
  * @param {chromium.DevTools.LayerTree.SnapshotCommandLogParams} params
  * @return {!Promise<chromium.DevTools.LayerTree.SnapshotCommandLogResult>}
  */
chromium.DevTools.ExperimentalLayerTree.prototype.snapshotCommandLog = function(params) {};


/**
  * @param {!function(!chromium.DevTools.LayerTree.LayerPaintedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalLayerTree.prototype.onLayerPainted = function(listener) {};

/**
  * @param {!function(!chromium.DevTools.LayerTree.LayerTreeDidChangeParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalLayerTree.prototype.onLayerTreeDidChange = function(listener) {};



/**
  * Provides the reasons why the given layer was composited.
  *
  * @param {chromium.DevTools.LayerTree.CompositingReasonsParams} params
  * @return {!Promise<chromium.DevTools.LayerTree.CompositingReasonsResult>}
  */
chromium.DevTools.LayerTree.prototype.compositingReasons = function(params) {};

/**
  * Disables compositing tree inspection.
  *
  * @return {!Promise<chromium.DevTools.LayerTree.DisableResult>}
  */
chromium.DevTools.LayerTree.prototype.disable = function() {};

/**
  * Enables compositing tree inspection.
  *
  * @return {!Promise<chromium.DevTools.LayerTree.EnableResult>}
  */
chromium.DevTools.LayerTree.prototype.enable = function() {};

/**
  * Returns the snapshot identifier.
  *
  * @param {chromium.DevTools.LayerTree.LoadSnapshotParams} params
  * @return {!Promise<chromium.DevTools.LayerTree.LoadSnapshotResult>}
  */
chromium.DevTools.LayerTree.prototype.loadSnapshot = function(params) {};

/**
  * Returns the layer snapshot identifier.
  *
  * @param {chromium.DevTools.LayerTree.MakeSnapshotParams} params
  * @return {!Promise<chromium.DevTools.LayerTree.MakeSnapshotResult>}
  */
chromium.DevTools.LayerTree.prototype.makeSnapshot = function(params) {};

/**
  * @param {chromium.DevTools.LayerTree.ProfileSnapshotParams} params
  * @return {!Promise<chromium.DevTools.LayerTree.ProfileSnapshotResult>}
  */
chromium.DevTools.LayerTree.prototype.profileSnapshot = function(params) {};

/**
  * Releases layer snapshot captured by the back-end.
  *
  * @param {chromium.DevTools.LayerTree.ReleaseSnapshotParams} params
  * @return {!Promise<chromium.DevTools.LayerTree.ReleaseSnapshotResult>}
  */
chromium.DevTools.LayerTree.prototype.releaseSnapshot = function(params) {};

/**
  * Replays the layer snapshot and returns the resulting bitmap.
  *
  * @param {chromium.DevTools.LayerTree.ReplaySnapshotParams} params
  * @return {!Promise<chromium.DevTools.LayerTree.ReplaySnapshotResult>}
  */
chromium.DevTools.LayerTree.prototype.replaySnapshot = function(params) {};

/**
  * Replays the layer snapshot and returns canvas log.
  *
  * @param {chromium.DevTools.LayerTree.SnapshotCommandLogParams} params
  * @return {!Promise<chromium.DevTools.LayerTree.SnapshotCommandLogResult>}
  */
chromium.DevTools.LayerTree.prototype.snapshotCommandLog = function(params) {};


/**
  * @param {!function(!chromium.DevTools.LayerTree.LayerPaintedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.LayerTree.prototype.onLayerPainted = function(listener) {};

/**
  * @param {!function(!chromium.DevTools.LayerTree.LayerTreeDidChangeParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.LayerTree.prototype.onLayerTreeDidChange = function(listener) {};
