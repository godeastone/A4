// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the LayerTree Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalLayerTree');
goog.provide('chromium.DevTools.LayerTree');
goog.require('chromium.DevTools.Connection');
goog.require('chromium.DevTools.DOM');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;
const DOM = chromium.DevTools.DOM;

/**
 * Experimental bindings for the LayerTree DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalLayerTree = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalLayerTree = chromium.DevTools.ExperimentalLayerTree;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalLayerTree.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the LayerTree DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.LayerTree = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalLayerTree} */
  this.experimental = new ExperimentalLayerTree(connection);
}

const LayerTree = chromium.DevTools.LayerTree;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
LayerTree.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Reason for rectangle to force scrolling on the main thread
 *
 * @enum {string}
 */
LayerTree.ScrollRectType = {
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
 *   rect: !DOM.Rect,
 *   type: !LayerTree.ScrollRectType
 * }}
 */
LayerTree.ScrollRect;

/**
 * Sticky position constraints.
 *
 * stickyBoxRect: Layout rectangle of the sticky element before being shifted
 * containingBlockRect: Layout rectangle of the containing block of the sticky element
 * nearestLayerShiftingStickyBox: The nearest sticky layer that shifts the sticky box
 * nearestLayerShiftingContainingBlock: The nearest sticky layer that shifts the containing block
 *
 * @typedef {{
 *   stickyBoxRect: !DOM.Rect,
 *   containingBlockRect: !DOM.Rect,
 *   nearestLayerShiftingStickyBox: (string|undefined),
 *   nearestLayerShiftingContainingBlock: (string|undefined)
 * }}
 */
LayerTree.StickyPositionConstraint;

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
LayerTree.PictureTile;

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
 *   transform/scrolling purposes only.
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
 *   scrollRects: (!Array.<!LayerTree.ScrollRect>|undefined),
 *   stickyPositionConstraint: (!LayerTree.StickyPositionConstraint|undefined)
 * }}
 */
LayerTree.Layer;

/**
 * Parameters for the CompositingReasons command.
 *
 * layerId: The id of the layer for which we want to get the reasons it was composited.
 *
 * @typedef {{
 *   layerId: string
 * }}
 */
LayerTree.CompositingReasonsParams;

/**
 * Result for the CompositingReasons command.
 *
 * compositingReasons: A list of strings specifying reasons for the given layer to become composited.
 *
 * @typedef {{
 *   compositingReasons: !Array.<string>
 * }}
 */
LayerTree.CompositingReasonsResult;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
LayerTree.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
LayerTree.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
LayerTree.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
LayerTree.EnableResult;

/**
 * Parameters for the LoadSnapshot command.
 *
 * tiles: An array of tiles composing the snapshot.
 *
 * @typedef {{
 *   tiles: !Array.<!LayerTree.PictureTile>
 * }}
 */
LayerTree.LoadSnapshotParams;

/**
 * Result for the LoadSnapshot command.
 *
 * snapshotId: The id of the snapshot.
 *
 * @typedef {{
 *   snapshotId: string
 * }}
 */
LayerTree.LoadSnapshotResult;

/**
 * Parameters for the MakeSnapshot command.
 *
 * layerId: The id of the layer.
 *
 * @typedef {{
 *   layerId: string
 * }}
 */
LayerTree.MakeSnapshotParams;

/**
 * Result for the MakeSnapshot command.
 *
 * snapshotId: The id of the layer snapshot.
 *
 * @typedef {{
 *   snapshotId: string
 * }}
 */
LayerTree.MakeSnapshotResult;

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
 *   clipRect: (!DOM.Rect|undefined)
 * }}
 */
LayerTree.ProfileSnapshotParams;

/**
 * Result for the ProfileSnapshot command.
 *
 * timings: The array of paint profiles, one per run.
 *
 * @typedef {{
 *   timings: !Array.<!Array.<number>>
 * }}
 */
LayerTree.ProfileSnapshotResult;

/**
 * Parameters for the ReleaseSnapshot command.
 *
 * snapshotId: The id of the layer snapshot.
 *
 * @typedef {{
 *   snapshotId: string
 * }}
 */
LayerTree.ReleaseSnapshotParams;

/**
 * Result for the ReleaseSnapshot command.
 *
 *
 * @typedef {undefined}
 */
LayerTree.ReleaseSnapshotResult;

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
LayerTree.ReplaySnapshotParams;

/**
 * Result for the ReplaySnapshot command.
 *
 * dataURL: A data: URL for resulting image.
 *
 * @typedef {{
 *   dataURL: string
 * }}
 */
LayerTree.ReplaySnapshotResult;

/**
 * Parameters for the SnapshotCommandLog command.
 *
 * snapshotId: The id of the layer snapshot.
 *
 * @typedef {{
 *   snapshotId: string
 * }}
 */
LayerTree.SnapshotCommandLogParams;

/**
 * Result for the SnapshotCommandLog command.
 *
 * commandLog: The array of canvas function calls.
 *
 * @typedef {{
 *   commandLog: !Array.<!Object>
 * }}
 */
LayerTree.SnapshotCommandLogResult;

/**
 * Parameters for the LayerPainted event.
 *
 * layerId: The id of the painted layer.
 * clip: Clip rectangle.
 *
 * @typedef {{
 *   layerId: string,
 *   clip: !DOM.Rect
 * }}
 */
LayerTree.LayerPaintedParams;

/**
 * Parameters for the LayerTreeDidChange event.
 *
 * layers: Layer tree, absent if not in the comspositing mode.
 *
 * @typedef {{
 *   layers: (!Array.<!LayerTree.Layer>|undefined)
 * }}
 */
LayerTree.LayerTreeDidChangeParams;



/**
  * Provides the reasons why the given layer was composited.
  *
  * @param {LayerTree.CompositingReasonsParams} params
  * @return {!Promise<LayerTree.CompositingReasonsResult>}
  */
ExperimentalLayerTree.prototype.compositingReasons = function(params) {
  return this.connection_.sendDevToolsMessage('LayerTree.compositingReasons', params);
};

/**
  * Disables compositing tree inspection.
  *
  * @return {!Promise<LayerTree.DisableResult>}
  */
ExperimentalLayerTree.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('LayerTree.disable', {});
};

/**
  * Enables compositing tree inspection.
  *
  * @return {!Promise<LayerTree.EnableResult>}
  */
ExperimentalLayerTree.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('LayerTree.enable', {});
};

/**
  * Returns the snapshot identifier.
  *
  * @param {LayerTree.LoadSnapshotParams} params
  * @return {!Promise<LayerTree.LoadSnapshotResult>}
  */
ExperimentalLayerTree.prototype.loadSnapshot = function(params) {
  return this.connection_.sendDevToolsMessage('LayerTree.loadSnapshot', params);
};

/**
  * Returns the layer snapshot identifier.
  *
  * @param {LayerTree.MakeSnapshotParams} params
  * @return {!Promise<LayerTree.MakeSnapshotResult>}
  */
ExperimentalLayerTree.prototype.makeSnapshot = function(params) {
  return this.connection_.sendDevToolsMessage('LayerTree.makeSnapshot', params);
};

/**
  * @param {LayerTree.ProfileSnapshotParams} params
  * @return {!Promise<LayerTree.ProfileSnapshotResult>}
  */
ExperimentalLayerTree.prototype.profileSnapshot = function(params) {
  return this.connection_.sendDevToolsMessage('LayerTree.profileSnapshot', params);
};

/**
  * Releases layer snapshot captured by the back-end.
  *
  * @param {LayerTree.ReleaseSnapshotParams} params
  * @return {!Promise<LayerTree.ReleaseSnapshotResult>}
  */
ExperimentalLayerTree.prototype.releaseSnapshot = function(params) {
  return this.connection_.sendDevToolsMessage('LayerTree.releaseSnapshot', params);
};

/**
  * Replays the layer snapshot and returns the resulting bitmap.
  *
  * @param {LayerTree.ReplaySnapshotParams} params
  * @return {!Promise<LayerTree.ReplaySnapshotResult>}
  */
ExperimentalLayerTree.prototype.replaySnapshot = function(params) {
  return this.connection_.sendDevToolsMessage('LayerTree.replaySnapshot', params);
};

/**
  * Replays the layer snapshot and returns canvas log.
  *
  * @param {LayerTree.SnapshotCommandLogParams} params
  * @return {!Promise<LayerTree.SnapshotCommandLogResult>}
  */
ExperimentalLayerTree.prototype.snapshotCommandLog = function(params) {
  return this.connection_.sendDevToolsMessage('LayerTree.snapshotCommandLog', params);
};


/**
  * @param {!function(!LayerTree.LayerPaintedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalLayerTree.prototype.onLayerPainted = function(listener) {
  return this.connection_.addEventListener(
      'LayerTree.layerPainted', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * @param {!function(!LayerTree.LayerTreeDidChangeParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalLayerTree.prototype.onLayerTreeDidChange = function(listener) {
  return this.connection_.addEventListener(
      'LayerTree.layerTreeDidChange', /** @type {!function(!Object): undefined} */ (listener));
};



/**
  * Provides the reasons why the given layer was composited.
  *
  * @param {LayerTree.CompositingReasonsParams} params
  * @return {!Promise<LayerTree.CompositingReasonsResult>}
  */
LayerTree.prototype.compositingReasons = function(params) {
  return this.connection_.sendDevToolsMessage('LayerTree.compositingReasons', params);
};

/**
  * Disables compositing tree inspection.
  *
  * @return {!Promise<LayerTree.DisableResult>}
  */
LayerTree.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('LayerTree.disable', {});
};

/**
  * Enables compositing tree inspection.
  *
  * @return {!Promise<LayerTree.EnableResult>}
  */
LayerTree.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('LayerTree.enable', {});
};

/**
  * Returns the snapshot identifier.
  *
  * @param {LayerTree.LoadSnapshotParams} params
  * @return {!Promise<LayerTree.LoadSnapshotResult>}
  */
LayerTree.prototype.loadSnapshot = function(params) {
  return this.connection_.sendDevToolsMessage('LayerTree.loadSnapshot', params);
};

/**
  * Returns the layer snapshot identifier.
  *
  * @param {LayerTree.MakeSnapshotParams} params
  * @return {!Promise<LayerTree.MakeSnapshotResult>}
  */
LayerTree.prototype.makeSnapshot = function(params) {
  return this.connection_.sendDevToolsMessage('LayerTree.makeSnapshot', params);
};

/**
  * @param {LayerTree.ProfileSnapshotParams} params
  * @return {!Promise<LayerTree.ProfileSnapshotResult>}
  */
LayerTree.prototype.profileSnapshot = function(params) {
  return this.connection_.sendDevToolsMessage('LayerTree.profileSnapshot', params);
};

/**
  * Releases layer snapshot captured by the back-end.
  *
  * @param {LayerTree.ReleaseSnapshotParams} params
  * @return {!Promise<LayerTree.ReleaseSnapshotResult>}
  */
LayerTree.prototype.releaseSnapshot = function(params) {
  return this.connection_.sendDevToolsMessage('LayerTree.releaseSnapshot', params);
};

/**
  * Replays the layer snapshot and returns the resulting bitmap.
  *
  * @param {LayerTree.ReplaySnapshotParams} params
  * @return {!Promise<LayerTree.ReplaySnapshotResult>}
  */
LayerTree.prototype.replaySnapshot = function(params) {
  return this.connection_.sendDevToolsMessage('LayerTree.replaySnapshot', params);
};

/**
  * Replays the layer snapshot and returns canvas log.
  *
  * @param {LayerTree.SnapshotCommandLogParams} params
  * @return {!Promise<LayerTree.SnapshotCommandLogResult>}
  */
LayerTree.prototype.snapshotCommandLog = function(params) {
  return this.connection_.sendDevToolsMessage('LayerTree.snapshotCommandLog', params);
};


/**
  * @param {!function(!LayerTree.LayerPaintedParams)} listener
  * @return {number} The id of this event listener.
  */
LayerTree.prototype.onLayerPainted = function(listener) {
  return this.connection_.addEventListener(
      'LayerTree.layerPainted', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * @param {!function(!LayerTree.LayerTreeDidChangeParams)} listener
  * @return {number} The id of this event listener.
  */
LayerTree.prototype.onLayerTreeDidChange = function(listener) {
  return this.connection_.addEventListener(
      'LayerTree.layerTreeDidChange', /** @type {!function(!Object): undefined} */ (listener));
};

});  // goog.scope

