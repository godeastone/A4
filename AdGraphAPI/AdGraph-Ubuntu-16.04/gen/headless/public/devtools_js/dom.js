// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the DOM Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalDOM');
goog.provide('chromium.DevTools.DOM');
goog.require('chromium.DevTools.Connection');
goog.require('chromium.DevTools.Runtime');
goog.forwardDeclare('chromium.DevTools.DOM.BackendNodeId');
goog.forwardDeclare('chromium.DevTools.Page.FrameId');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;
const Runtime = chromium.DevTools.Runtime;

/**
 * Experimental bindings for the DOM DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalDOM = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalDOM = chromium.DevTools.ExperimentalDOM;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalDOM.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the DOM DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.DOM = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalDOM} */
  this.experimental = new ExperimentalDOM(connection);
}

const DOM = chromium.DevTools.DOM;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
DOM.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Pseudo element type.
 *
 * @enum {string}
 */
DOM.PseudoType = {
    FIRST_LINE: "first-line",
    FIRST_LETTER: "first-letter",
    BEFORE: "before",
    AFTER: "after",
    BACKDROP: "backdrop",
    SELECTION: "selection",
    FIRST_LINE_INHERITED: "first-line-inherited",
    SCROLLBAR: "scrollbar",
    SCROLLBAR_THUMB: "scrollbar-thumb",
    SCROLLBAR_BUTTON: "scrollbar-button",
    SCROLLBAR_TRACK: "scrollbar-track",
    SCROLLBAR_TRACK_PIECE: "scrollbar-track-piece",
    SCROLLBAR_CORNER: "scrollbar-corner",
    RESIZER: "resizer",
    INPUT_LIST_BUTTON: "input-list-button"
};

/**
 * Shadow root type.
 *
 * @enum {string}
 */
DOM.ShadowRootType = {
    USER_AGENT: "user-agent",
    OPEN: "open",
    CLOSED: "closed"
};


/**
 * Backend node with a friendly name.
 *
 * nodeType: `Node`'s nodeType.
 * nodeName: `Node`'s nodeName.
 *
 * @typedef {{
 *   nodeType: number,
 *   nodeName: string,
 *   backendNodeId: number
 * }}
 */
DOM.BackendNode;

/**
 * DOM interaction is implemented in terms of mirror objects that represent the actual DOM nodes.
 * DOMNode is a base node mirror type.
 *
 * nodeId: Node identifier that is passed into the rest of the DOM messages as the `nodeId`. Backend
 *   will only push node with given `id` once. It is aware of all requested nodes and will only
 *   fire DOM events for nodes known to the client.
 * parentId: The id of the parent node if any.
 * backendNodeId: The BackendNodeId for this node.
 * nodeType: `Node`'s nodeType.
 * nodeName: `Node`'s nodeName.
 * localName: `Node`'s localName.
 * nodeValue: `Node`'s nodeValue.
 * childNodeCount: Child count for `Container` nodes.
 * children: Child nodes of this node when requested with children.
 * attributes: Attributes of the `Element` node in the form of flat array `[name1, value1, name2, value2]`.
 * documentURL: Document URL that `Document` or `FrameOwner` node points to.
 * baseURL: Base URL that `Document` or `FrameOwner` node uses for URL completion.
 * publicId: `DocumentType`'s publicId.
 * systemId: `DocumentType`'s systemId.
 * internalSubset: `DocumentType`'s internalSubset.
 * xmlVersion: `Document`'s XML version in case of XML documents.
 * name: `Attr`'s name.
 * value: `Attr`'s value.
 * pseudoType: Pseudo element type for this node.
 * shadowRootType: Shadow root type.
 * frameId: Frame ID for frame owner elements.
 * contentDocument: Content document for frame owner elements.
 * shadowRoots: Shadow root list for given element host.
 * templateContent: Content document fragment for template elements.
 * pseudoElements: Pseudo elements associated with this node.
 * importedDocument: Import document for the HTMLImport links.
 * distributedNodes: Distributed nodes for given insertion point.
 * isSVG: Whether the node is SVG.
 *
 * @typedef {{
 *   nodeId: number,
 *   parentId: (number|undefined),
 *   backendNodeId: number,
 *   nodeType: number,
 *   nodeName: string,
 *   localName: string,
 *   nodeValue: string,
 *   childNodeCount: (number|undefined),
 *   children: (!Array.<!DOM.Node>|undefined),
 *   attributes: (!Array.<string>|undefined),
 *   documentURL: (string|undefined),
 *   baseURL: (string|undefined),
 *   publicId: (string|undefined),
 *   systemId: (string|undefined),
 *   internalSubset: (string|undefined),
 *   xmlVersion: (string|undefined),
 *   name: (string|undefined),
 *   value: (string|undefined),
 *   pseudoType: (!DOM.PseudoType|undefined),
 *   shadowRootType: (!DOM.ShadowRootType|undefined),
 *   frameId: (string|undefined),
 *   contentDocument: (!DOM.Node|undefined),
 *   shadowRoots: (!Array.<!DOM.Node>|undefined),
 *   templateContent: (!DOM.Node|undefined),
 *   pseudoElements: (!Array.<!DOM.Node>|undefined),
 *   importedDocument: (!DOM.Node|undefined),
 *   distributedNodes: (!Array.<!DOM.BackendNode>|undefined),
 *   isSVG: (boolean|undefined)
 * }}
 */
DOM.Node;

/**
 * A structure holding an RGBA color.
 *
 * r: The red component, in the [0-255] range.
 * g: The green component, in the [0-255] range.
 * b: The blue component, in the [0-255] range.
 * a: The alpha component, in the [0-1] range (default: 1).
 *
 * @typedef {{
 *   r: number,
 *   g: number,
 *   b: number,
 *   a: (number|undefined)
 * }}
 */
DOM.RGBA;

/**
 * Box model.
 *
 * content: Content box
 * padding: Padding box
 * border: Border box
 * margin: Margin box
 * width: Node width
 * height: Node height
 * shapeOutside: Shape outside coordinates
 *
 * @typedef {{
 *   content: !Array.<number>,
 *   padding: !Array.<number>,
 *   border: !Array.<number>,
 *   margin: !Array.<number>,
 *   width: number,
 *   height: number,
 *   shapeOutside: (!DOM.ShapeOutsideInfo|undefined)
 * }}
 */
DOM.BoxModel;

/**
 * CSS Shape Outside details.
 *
 * bounds: Shape bounds
 * shape: Shape coordinate details
 * marginShape: Margin shape bounds
 *
 * @typedef {{
 *   bounds: !Array.<number>,
 *   shape: !Array.<*>,
 *   marginShape: !Array.<*>
 * }}
 */
DOM.ShapeOutsideInfo;

/**
 * Rectangle.
 *
 * x: X coordinate
 * y: Y coordinate
 * width: Rectangle width
 * height: Rectangle height
 *
 * @typedef {{
 *   x: number,
 *   y: number,
 *   width: number,
 *   height: number
 * }}
 */
DOM.Rect;

/**
 * Parameters for the CollectClassNamesFromSubtree command.
 *
 * nodeId: Id of the node to collect class names.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
DOM.CollectClassNamesFromSubtreeParams;

/**
 * Result for the CollectClassNamesFromSubtree command.
 *
 * classNames: Class name list.
 *
 * @typedef {{
 *   classNames: !Array.<string>
 * }}
 */
DOM.CollectClassNamesFromSubtreeResult;

/**
 * Parameters for the CopyTo command.
 *
 * nodeId: Id of the node to copy.
 * targetNodeId: Id of the element to drop the copy into.
 * insertBeforeNodeId: Drop the copy before this node (if absent, the copy becomes the last child of
 *   `targetNodeId`).
 *
 * @typedef {{
 *   nodeId: number,
 *   targetNodeId: number,
 *   insertBeforeNodeId: (number|undefined)
 * }}
 */
DOM.CopyToParams;

/**
 * Result for the CopyTo command.
 *
 * nodeId: Id of the node clone.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
DOM.CopyToResult;

/**
 * Parameters for the DescribeNode command.
 *
 * nodeId: Identifier of the node.
 * backendNodeId: Identifier of the backend node.
 * objectId: JavaScript object id of the node wrapper.
 * depth: The maximum depth at which children should be retrieved, defaults to 1. Use -1 for the
 *   entire subtree or provide an integer larger than 0.
 * pierce: Whether or not iframes and shadow roots should be traversed when returning the subtree
 *   (default is false).
 *
 * @typedef {{
 *   nodeId: (number|undefined),
 *   backendNodeId: (number|undefined),
 *   objectId: (string|undefined),
 *   depth: (number|undefined),
 *   pierce: (boolean|undefined)
 * }}
 */
DOM.DescribeNodeParams;

/**
 * Result for the DescribeNode command.
 *
 * node: Node description.
 *
 * @typedef {{
 *   node: !DOM.Node
 * }}
 */
DOM.DescribeNodeResult;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
DOM.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
DOM.DisableResult;

/**
 * Parameters for the DiscardSearchResults command.
 *
 * searchId: Unique search session identifier.
 *
 * @typedef {{
 *   searchId: string
 * }}
 */
DOM.DiscardSearchResultsParams;

/**
 * Result for the DiscardSearchResults command.
 *
 *
 * @typedef {undefined}
 */
DOM.DiscardSearchResultsResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
DOM.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
DOM.EnableResult;

/**
 * Parameters for the Focus command.
 *
 * nodeId: Identifier of the node.
 * backendNodeId: Identifier of the backend node.
 * objectId: JavaScript object id of the node wrapper.
 *
 * @typedef {{
 *   nodeId: (number|undefined),
 *   backendNodeId: (number|undefined),
 *   objectId: (string|undefined)
 * }}
 */
DOM.FocusParams;

/**
 * Result for the Focus command.
 *
 *
 * @typedef {undefined}
 */
DOM.FocusResult;

/**
 * Parameters for the GetAttributes command.
 *
 * nodeId: Id of the node to retrieve attibutes for.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
DOM.GetAttributesParams;

/**
 * Result for the GetAttributes command.
 *
 * attributes: An interleaved array of node attribute names and values.
 *
 * @typedef {{
 *   attributes: !Array.<string>
 * }}
 */
DOM.GetAttributesResult;

/**
 * Parameters for the GetBoxModel command.
 *
 * nodeId: Identifier of the node.
 * backendNodeId: Identifier of the backend node.
 * objectId: JavaScript object id of the node wrapper.
 *
 * @typedef {{
 *   nodeId: (number|undefined),
 *   backendNodeId: (number|undefined),
 *   objectId: (string|undefined)
 * }}
 */
DOM.GetBoxModelParams;

/**
 * Result for the GetBoxModel command.
 *
 * model: Box model for the node.
 *
 * @typedef {{
 *   model: !DOM.BoxModel
 * }}
 */
DOM.GetBoxModelResult;

/**
 * Parameters for the GetDocument command.
 *
 * depth: The maximum depth at which children should be retrieved, defaults to 1. Use -1 for the
 *   entire subtree or provide an integer larger than 0.
 * pierce: Whether or not iframes and shadow roots should be traversed when returning the subtree
 *   (default is false).
 *
 * @typedef {{
 *   depth: (number|undefined),
 *   pierce: (boolean|undefined)
 * }}
 */
DOM.GetDocumentParams;

/**
 * Result for the GetDocument command.
 *
 * root: Resulting node.
 *
 * @typedef {{
 *   root: !DOM.Node
 * }}
 */
DOM.GetDocumentResult;

/**
 * Parameters for the GetFlattenedDocument command.
 *
 * depth: The maximum depth at which children should be retrieved, defaults to 1. Use -1 for the
 *   entire subtree or provide an integer larger than 0.
 * pierce: Whether or not iframes and shadow roots should be traversed when returning the subtree
 *   (default is false).
 *
 * @typedef {{
 *   depth: (number|undefined),
 *   pierce: (boolean|undefined)
 * }}
 */
DOM.GetFlattenedDocumentParams;

/**
 * Result for the GetFlattenedDocument command.
 *
 * nodes: Resulting node.
 *
 * @typedef {{
 *   nodes: !Array.<!DOM.Node>
 * }}
 */
DOM.GetFlattenedDocumentResult;

/**
 * Parameters for the GetNodeForLocation command.
 *
 * x: X coordinate.
 * y: Y coordinate.
 * includeUserAgentShadowDOM: False to skip to the nearest non-UA shadow root ancestor (default: false).
 *
 * @typedef {{
 *   x: number,
 *   y: number,
 *   includeUserAgentShadowDOM: (boolean|undefined)
 * }}
 */
DOM.GetNodeForLocationParams;

/**
 * Result for the GetNodeForLocation command.
 *
 * nodeId: Id of the node at given coordinates.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
DOM.GetNodeForLocationResult;

/**
 * Parameters for the GetOuterHTML command.
 *
 * nodeId: Identifier of the node.
 * backendNodeId: Identifier of the backend node.
 * objectId: JavaScript object id of the node wrapper.
 *
 * @typedef {{
 *   nodeId: (number|undefined),
 *   backendNodeId: (number|undefined),
 *   objectId: (string|undefined)
 * }}
 */
DOM.GetOuterHTMLParams;

/**
 * Result for the GetOuterHTML command.
 *
 * outerHTML: Outer HTML markup.
 *
 * @typedef {{
 *   outerHTML: string
 * }}
 */
DOM.GetOuterHTMLResult;

/**
 * Parameters for the GetRelayoutBoundary command.
 *
 * nodeId: Id of the node.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
DOM.GetRelayoutBoundaryParams;

/**
 * Result for the GetRelayoutBoundary command.
 *
 * nodeId: Relayout boundary node id for the given node.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
DOM.GetRelayoutBoundaryResult;

/**
 * Parameters for the GetSearchResults command.
 *
 * searchId: Unique search session identifier.
 * fromIndex: Start index of the search result to be returned.
 * toIndex: End index of the search result to be returned.
 *
 * @typedef {{
 *   searchId: string,
 *   fromIndex: number,
 *   toIndex: number
 * }}
 */
DOM.GetSearchResultsParams;

/**
 * Result for the GetSearchResults command.
 *
 * nodeIds: Ids of the search result nodes.
 *
 * @typedef {{
 *   nodeIds: !Array.<number>
 * }}
 */
DOM.GetSearchResultsResult;

/**
 * Parameters for the HideHighlight command.
 *
 *
 * @typedef {undefined}
 */
DOM.HideHighlightParams;

/**
 * Result for the HideHighlight command.
 *
 *
 * @typedef {undefined}
 */
DOM.HideHighlightResult;

/**
 * Parameters for the HighlightNode command.
 *
 *
 * @typedef {undefined}
 */
DOM.HighlightNodeParams;

/**
 * Result for the HighlightNode command.
 *
 *
 * @typedef {undefined}
 */
DOM.HighlightNodeResult;

/**
 * Parameters for the HighlightRect command.
 *
 *
 * @typedef {undefined}
 */
DOM.HighlightRectParams;

/**
 * Result for the HighlightRect command.
 *
 *
 * @typedef {undefined}
 */
DOM.HighlightRectResult;

/**
 * Parameters for the MarkUndoableState command.
 *
 *
 * @typedef {undefined}
 */
DOM.MarkUndoableStateParams;

/**
 * Result for the MarkUndoableState command.
 *
 *
 * @typedef {undefined}
 */
DOM.MarkUndoableStateResult;

/**
 * Parameters for the MoveTo command.
 *
 * nodeId: Id of the node to move.
 * targetNodeId: Id of the element to drop the moved node into.
 * insertBeforeNodeId: Drop node before this one (if absent, the moved node becomes the last child of
 *   `targetNodeId`).
 *
 * @typedef {{
 *   nodeId: number,
 *   targetNodeId: number,
 *   insertBeforeNodeId: (number|undefined)
 * }}
 */
DOM.MoveToParams;

/**
 * Result for the MoveTo command.
 *
 * nodeId: New id of the moved node.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
DOM.MoveToResult;

/**
 * Parameters for the PerformSearch command.
 *
 * query: Plain text or query selector or XPath search query.
 * includeUserAgentShadowDOM: True to search in user agent shadow DOM.
 *
 * @typedef {{
 *   query: string,
 *   includeUserAgentShadowDOM: (boolean|undefined)
 * }}
 */
DOM.PerformSearchParams;

/**
 * Result for the PerformSearch command.
 *
 * searchId: Unique search session identifier.
 * resultCount: Number of search results.
 *
 * @typedef {{
 *   searchId: string,
 *   resultCount: number
 * }}
 */
DOM.PerformSearchResult;

/**
 * Parameters for the PushNodeByPathToFrontend command.
 *
 * path: Path to node in the proprietary format.
 *
 * @typedef {{
 *   path: string
 * }}
 */
DOM.PushNodeByPathToFrontendParams;

/**
 * Result for the PushNodeByPathToFrontend command.
 *
 * nodeId: Id of the node for given path.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
DOM.PushNodeByPathToFrontendResult;

/**
 * Parameters for the PushNodesByBackendIdsToFrontend command.
 *
 * backendNodeIds: The array of backend node ids.
 *
 * @typedef {{
 *   backendNodeIds: !Array.<number>
 * }}
 */
DOM.PushNodesByBackendIdsToFrontendParams;

/**
 * Result for the PushNodesByBackendIdsToFrontend command.
 *
 * nodeIds: The array of ids of pushed nodes that correspond to the backend ids specified in
 *   backendNodeIds.
 *
 * @typedef {{
 *   nodeIds: !Array.<number>
 * }}
 */
DOM.PushNodesByBackendIdsToFrontendResult;

/**
 * Parameters for the QuerySelector command.
 *
 * nodeId: Id of the node to query upon.
 * selector: Selector string.
 *
 * @typedef {{
 *   nodeId: number,
 *   selector: string
 * }}
 */
DOM.QuerySelectorParams;

/**
 * Result for the QuerySelector command.
 *
 * nodeId: Query selector result.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
DOM.QuerySelectorResult;

/**
 * Parameters for the QuerySelectorAll command.
 *
 * nodeId: Id of the node to query upon.
 * selector: Selector string.
 *
 * @typedef {{
 *   nodeId: number,
 *   selector: string
 * }}
 */
DOM.QuerySelectorAllParams;

/**
 * Result for the QuerySelectorAll command.
 *
 * nodeIds: Query selector result.
 *
 * @typedef {{
 *   nodeIds: !Array.<number>
 * }}
 */
DOM.QuerySelectorAllResult;

/**
 * Parameters for the Redo command.
 *
 *
 * @typedef {undefined}
 */
DOM.RedoParams;

/**
 * Result for the Redo command.
 *
 *
 * @typedef {undefined}
 */
DOM.RedoResult;

/**
 * Parameters for the RemoveAttribute command.
 *
 * nodeId: Id of the element to remove attribute from.
 * name: Name of the attribute to remove.
 *
 * @typedef {{
 *   nodeId: number,
 *   name: string
 * }}
 */
DOM.RemoveAttributeParams;

/**
 * Result for the RemoveAttribute command.
 *
 *
 * @typedef {undefined}
 */
DOM.RemoveAttributeResult;

/**
 * Parameters for the RemoveNode command.
 *
 * nodeId: Id of the node to remove.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
DOM.RemoveNodeParams;

/**
 * Result for the RemoveNode command.
 *
 *
 * @typedef {undefined}
 */
DOM.RemoveNodeResult;

/**
 * Parameters for the RequestChildNodes command.
 *
 * nodeId: Id of the node to get children for.
 * depth: The maximum depth at which children should be retrieved, defaults to 1. Use -1 for the
 *   entire subtree or provide an integer larger than 0.
 * pierce: Whether or not iframes and shadow roots should be traversed when returning the sub-tree
 *   (default is false).
 *
 * @typedef {{
 *   nodeId: number,
 *   depth: (number|undefined),
 *   pierce: (boolean|undefined)
 * }}
 */
DOM.RequestChildNodesParams;

/**
 * Result for the RequestChildNodes command.
 *
 *
 * @typedef {undefined}
 */
DOM.RequestChildNodesResult;

/**
 * Parameters for the RequestNode command.
 *
 * objectId: JavaScript object id to convert into node.
 *
 * @typedef {{
 *   objectId: string
 * }}
 */
DOM.RequestNodeParams;

/**
 * Result for the RequestNode command.
 *
 * nodeId: Node id for given object.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
DOM.RequestNodeResult;

/**
 * Parameters for the ResolveNode command.
 *
 * nodeId: Id of the node to resolve.
 * backendNodeId: Backend identifier of the node to resolve.
 * objectGroup: Symbolic group name that can be used to release multiple objects.
 *
 * @typedef {{
 *   nodeId: (number|undefined),
 *   backendNodeId: (number|undefined),
 *   objectGroup: (string|undefined)
 * }}
 */
DOM.ResolveNodeParams;

/**
 * Result for the ResolveNode command.
 *
 * object: JavaScript object wrapper for given node.
 *
 * @typedef {{
 *   object: !Runtime.RemoteObject
 * }}
 */
DOM.ResolveNodeResult;

/**
 * Parameters for the SetAttributeValue command.
 *
 * nodeId: Id of the element to set attribute for.
 * name: Attribute name.
 * value: Attribute value.
 *
 * @typedef {{
 *   nodeId: number,
 *   name: string,
 *   value: string
 * }}
 */
DOM.SetAttributeValueParams;

/**
 * Result for the SetAttributeValue command.
 *
 *
 * @typedef {undefined}
 */
DOM.SetAttributeValueResult;

/**
 * Parameters for the SetAttributesAsText command.
 *
 * nodeId: Id of the element to set attributes for.
 * text: Text with a number of attributes. Will parse this text using HTML parser.
 * name: Attribute name to replace with new attributes derived from text in case text parsed
 *   successfully.
 *
 * @typedef {{
 *   nodeId: number,
 *   text: string,
 *   name: (string|undefined)
 * }}
 */
DOM.SetAttributesAsTextParams;

/**
 * Result for the SetAttributesAsText command.
 *
 *
 * @typedef {undefined}
 */
DOM.SetAttributesAsTextResult;

/**
 * Parameters for the SetFileInputFiles command.
 *
 * files: Array of file paths to set.
 * nodeId: Identifier of the node.
 * backendNodeId: Identifier of the backend node.
 * objectId: JavaScript object id of the node wrapper.
 *
 * @typedef {{
 *   files: !Array.<string>,
 *   nodeId: (number|undefined),
 *   backendNodeId: (number|undefined),
 *   objectId: (string|undefined)
 * }}
 */
DOM.SetFileInputFilesParams;

/**
 * Result for the SetFileInputFiles command.
 *
 *
 * @typedef {undefined}
 */
DOM.SetFileInputFilesResult;

/**
 * Parameters for the SetInspectedNode command.
 *
 * nodeId: DOM node id to be accessible by means of $x command line API.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
DOM.SetInspectedNodeParams;

/**
 * Result for the SetInspectedNode command.
 *
 *
 * @typedef {undefined}
 */
DOM.SetInspectedNodeResult;

/**
 * Parameters for the SetNodeName command.
 *
 * nodeId: Id of the node to set name for.
 * name: New node's name.
 *
 * @typedef {{
 *   nodeId: number,
 *   name: string
 * }}
 */
DOM.SetNodeNameParams;

/**
 * Result for the SetNodeName command.
 *
 * nodeId: New node's id.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
DOM.SetNodeNameResult;

/**
 * Parameters for the SetNodeValue command.
 *
 * nodeId: Id of the node to set value for.
 * value: New node's value.
 *
 * @typedef {{
 *   nodeId: number,
 *   value: string
 * }}
 */
DOM.SetNodeValueParams;

/**
 * Result for the SetNodeValue command.
 *
 *
 * @typedef {undefined}
 */
DOM.SetNodeValueResult;

/**
 * Parameters for the SetOuterHTML command.
 *
 * nodeId: Id of the node to set markup for.
 * outerHTML: Outer HTML markup to set.
 *
 * @typedef {{
 *   nodeId: number,
 *   outerHTML: string
 * }}
 */
DOM.SetOuterHTMLParams;

/**
 * Result for the SetOuterHTML command.
 *
 *
 * @typedef {undefined}
 */
DOM.SetOuterHTMLResult;

/**
 * Parameters for the Undo command.
 *
 *
 * @typedef {undefined}
 */
DOM.UndoParams;

/**
 * Result for the Undo command.
 *
 *
 * @typedef {undefined}
 */
DOM.UndoResult;

/**
 * Parameters for the GetFrameOwner command.
 *
 *
 * @typedef {{
 *   frameId: string
 * }}
 */
DOM.GetFrameOwnerParams;

/**
 * Result for the GetFrameOwner command.
 *
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
DOM.GetFrameOwnerResult;

/**
 * Parameters for the AttributeModified event.
 *
 * nodeId: Id of the node that has changed.
 * name: Attribute name.
 * value: Attribute value.
 *
 * @typedef {{
 *   nodeId: number,
 *   name: string,
 *   value: string
 * }}
 */
DOM.AttributeModifiedParams;

/**
 * Parameters for the AttributeRemoved event.
 *
 * nodeId: Id of the node that has changed.
 * name: A ttribute name.
 *
 * @typedef {{
 *   nodeId: number,
 *   name: string
 * }}
 */
DOM.AttributeRemovedParams;

/**
 * Parameters for the CharacterDataModified event.
 *
 * nodeId: Id of the node that has changed.
 * characterData: New text value.
 *
 * @typedef {{
 *   nodeId: number,
 *   characterData: string
 * }}
 */
DOM.CharacterDataModifiedParams;

/**
 * Parameters for the ChildNodeCountUpdated event.
 *
 * nodeId: Id of the node that has changed.
 * childNodeCount: New node count.
 *
 * @typedef {{
 *   nodeId: number,
 *   childNodeCount: number
 * }}
 */
DOM.ChildNodeCountUpdatedParams;

/**
 * Parameters for the ChildNodeInserted event.
 *
 * parentNodeId: Id of the node that has changed.
 * previousNodeId: If of the previous siblint.
 * node: Inserted node data.
 *
 * @typedef {{
 *   parentNodeId: number,
 *   previousNodeId: number,
 *   node: !DOM.Node
 * }}
 */
DOM.ChildNodeInsertedParams;

/**
 * Parameters for the ChildNodeRemoved event.
 *
 * parentNodeId: Parent id.
 * nodeId: Id of the node that has been removed.
 *
 * @typedef {{
 *   parentNodeId: number,
 *   nodeId: number
 * }}
 */
DOM.ChildNodeRemovedParams;

/**
 * Parameters for the DistributedNodesUpdated event.
 *
 * insertionPointId: Insertion point where distrubuted nodes were updated.
 * distributedNodes: Distributed nodes for given insertion point.
 *
 * @typedef {{
 *   insertionPointId: number,
 *   distributedNodes: !Array.<!DOM.BackendNode>
 * }}
 */
DOM.DistributedNodesUpdatedParams;

/**
 * Parameters for the DocumentUpdated event.
 *
 *
 * @typedef {undefined}
 */
DOM.DocumentUpdatedParams;

/**
 * Parameters for the InlineStyleInvalidated event.
 *
 * nodeIds: Ids of the nodes for which the inline styles have been invalidated.
 *
 * @typedef {{
 *   nodeIds: !Array.<number>
 * }}
 */
DOM.InlineStyleInvalidatedParams;

/**
 * Parameters for the PseudoElementAdded event.
 *
 * parentId: Pseudo element's parent element id.
 * pseudoElement: The added pseudo element.
 *
 * @typedef {{
 *   parentId: number,
 *   pseudoElement: !DOM.Node
 * }}
 */
DOM.PseudoElementAddedParams;

/**
 * Parameters for the PseudoElementRemoved event.
 *
 * parentId: Pseudo element's parent element id.
 * pseudoElementId: The removed pseudo element id.
 *
 * @typedef {{
 *   parentId: number,
 *   pseudoElementId: number
 * }}
 */
DOM.PseudoElementRemovedParams;

/**
 * Parameters for the SetChildNodes event.
 *
 * parentId: Parent node id to populate with children.
 * nodes: Child nodes array.
 *
 * @typedef {{
 *   parentId: number,
 *   nodes: !Array.<!DOM.Node>
 * }}
 */
DOM.SetChildNodesParams;

/**
 * Parameters for the ShadowRootPopped event.
 *
 * hostId: Host element id.
 * rootId: Shadow root id.
 *
 * @typedef {{
 *   hostId: number,
 *   rootId: number
 * }}
 */
DOM.ShadowRootPoppedParams;

/**
 * Parameters for the ShadowRootPushed event.
 *
 * hostId: Host element id.
 * root: Shadow root.
 *
 * @typedef {{
 *   hostId: number,
 *   root: !DOM.Node
 * }}
 */
DOM.ShadowRootPushedParams;



/**
  * Collects class names for the node with given id and all of it's child nodes.
  *
  * @param {DOM.CollectClassNamesFromSubtreeParams} params
  * @return {!Promise<DOM.CollectClassNamesFromSubtreeResult>}
  */
ExperimentalDOM.prototype.collectClassNamesFromSubtree = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.collectClassNamesFromSubtree', params);
};

/**
  * Creates a deep copy of the specified node and places it into the target container before the
 * given anchor.
  *
  * @param {DOM.CopyToParams} params
  * @return {!Promise<DOM.CopyToResult>}
  */
ExperimentalDOM.prototype.copyTo = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.copyTo', params);
};

/**
  * Describes node given its id, does not require domain to be enabled. Does not start tracking any
 * objects, can be used for automation.
  *
  * @param {DOM.DescribeNodeParams=} opt_params
  * @return {!Promise<DOM.DescribeNodeResult>}
  */
ExperimentalDOM.prototype.describeNode = function(opt_params) {
  return this.connection_.sendDevToolsMessage('DOM.describeNode', opt_params || {});
};

/**
  * Disables DOM agent for the given page.
  *
  * @return {!Promise<DOM.DisableResult>}
  */
ExperimentalDOM.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('DOM.disable', {});
};

/**
  * Discards search results from the session with the given id. `getSearchResults` should no longer
 * be called for that search.
  *
  * @param {DOM.DiscardSearchResultsParams} params
  * @return {!Promise<DOM.DiscardSearchResultsResult>}
  */
ExperimentalDOM.prototype.discardSearchResults = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.discardSearchResults', params);
};

/**
  * Enables DOM agent for the given page.
  *
  * @return {!Promise<DOM.EnableResult>}
  */
ExperimentalDOM.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('DOM.enable', {});
};

/**
  * Focuses the given element.
  *
  * @param {DOM.FocusParams=} opt_params
  * @return {!Promise<DOM.FocusResult>}
  */
ExperimentalDOM.prototype.focus = function(opt_params) {
  return this.connection_.sendDevToolsMessage('DOM.focus', opt_params || {});
};

/**
  * Returns attributes for the specified node.
  *
  * @param {DOM.GetAttributesParams} params
  * @return {!Promise<DOM.GetAttributesResult>}
  */
ExperimentalDOM.prototype.getAttributes = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.getAttributes', params);
};

/**
  * Returns boxes for the given node.
  *
  * @param {DOM.GetBoxModelParams=} opt_params
  * @return {!Promise<DOM.GetBoxModelResult>}
  */
ExperimentalDOM.prototype.getBoxModel = function(opt_params) {
  return this.connection_.sendDevToolsMessage('DOM.getBoxModel', opt_params || {});
};

/**
  * Returns the root DOM node (and optionally the subtree) to the caller.
  *
  * @param {DOM.GetDocumentParams=} opt_params
  * @return {!Promise<DOM.GetDocumentResult>}
  */
ExperimentalDOM.prototype.getDocument = function(opt_params) {
  return this.connection_.sendDevToolsMessage('DOM.getDocument', opt_params || {});
};

/**
  * Returns the root DOM node (and optionally the subtree) to the caller.
  *
  * @param {DOM.GetFlattenedDocumentParams=} opt_params
  * @return {!Promise<DOM.GetFlattenedDocumentResult>}
  */
ExperimentalDOM.prototype.getFlattenedDocument = function(opt_params) {
  return this.connection_.sendDevToolsMessage('DOM.getFlattenedDocument', opt_params || {});
};

/**
  * Returns node id at given location.
  *
  * @param {DOM.GetNodeForLocationParams} params
  * @return {!Promise<DOM.GetNodeForLocationResult>}
  */
ExperimentalDOM.prototype.getNodeForLocation = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.getNodeForLocation', params);
};

/**
  * Returns node's HTML markup.
  *
  * @param {DOM.GetOuterHTMLParams=} opt_params
  * @return {!Promise<DOM.GetOuterHTMLResult>}
  */
ExperimentalDOM.prototype.getOuterHTML = function(opt_params) {
  return this.connection_.sendDevToolsMessage('DOM.getOuterHTML', opt_params || {});
};

/**
  * Returns the id of the nearest ancestor that is a relayout boundary.
  *
  * @param {DOM.GetRelayoutBoundaryParams} params
  * @return {!Promise<DOM.GetRelayoutBoundaryResult>}
  */
ExperimentalDOM.prototype.getRelayoutBoundary = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.getRelayoutBoundary', params);
};

/**
  * Returns search results from given `fromIndex` to given `toIndex` from the search with the given
 * identifier.
  *
  * @param {DOM.GetSearchResultsParams} params
  * @return {!Promise<DOM.GetSearchResultsResult>}
  */
ExperimentalDOM.prototype.getSearchResults = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.getSearchResults', params);
};

/**
  * Hides any highlight.
  *
  * @return {!Promise<DOM.HideHighlightResult>}
  */
ExperimentalDOM.prototype.hideHighlight = function() {
  return this.connection_.sendDevToolsMessage('DOM.hideHighlight', {});
};

/**
  * Highlights DOM node.
  *
  * @return {!Promise<DOM.HighlightNodeResult>}
  */
ExperimentalDOM.prototype.highlightNode = function() {
  return this.connection_.sendDevToolsMessage('DOM.highlightNode', {});
};

/**
  * Highlights given rectangle.
  *
  * @return {!Promise<DOM.HighlightRectResult>}
  */
ExperimentalDOM.prototype.highlightRect = function() {
  return this.connection_.sendDevToolsMessage('DOM.highlightRect', {});
};

/**
  * Marks last undoable state.
  *
  * @return {!Promise<DOM.MarkUndoableStateResult>}
  */
ExperimentalDOM.prototype.markUndoableState = function() {
  return this.connection_.sendDevToolsMessage('DOM.markUndoableState', {});
};

/**
  * Moves node into the new container, places it before the given anchor.
  *
  * @param {DOM.MoveToParams} params
  * @return {!Promise<DOM.MoveToResult>}
  */
ExperimentalDOM.prototype.moveTo = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.moveTo', params);
};

/**
  * Searches for a given string in the DOM tree. Use `getSearchResults` to access search results or
 * `cancelSearch` to end this search session.
  *
  * @param {DOM.PerformSearchParams} params
  * @return {!Promise<DOM.PerformSearchResult>}
  */
ExperimentalDOM.prototype.performSearch = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.performSearch', params);
};

/**
  * Requests that the node is sent to the caller given its path. // FIXME, use XPath
  *
  * @param {DOM.PushNodeByPathToFrontendParams} params
  * @return {!Promise<DOM.PushNodeByPathToFrontendResult>}
  */
ExperimentalDOM.prototype.pushNodeByPathToFrontend = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.pushNodeByPathToFrontend', params);
};

/**
  * Requests that a batch of nodes is sent to the caller given their backend node ids.
  *
  * @param {DOM.PushNodesByBackendIdsToFrontendParams} params
  * @return {!Promise<DOM.PushNodesByBackendIdsToFrontendResult>}
  */
ExperimentalDOM.prototype.pushNodesByBackendIdsToFrontend = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.pushNodesByBackendIdsToFrontend', params);
};

/**
  * Executes `querySelector` on a given node.
  *
  * @param {DOM.QuerySelectorParams} params
  * @return {!Promise<DOM.QuerySelectorResult>}
  */
ExperimentalDOM.prototype.querySelector = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.querySelector', params);
};

/**
  * Executes `querySelectorAll` on a given node.
  *
  * @param {DOM.QuerySelectorAllParams} params
  * @return {!Promise<DOM.QuerySelectorAllResult>}
  */
ExperimentalDOM.prototype.querySelectorAll = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.querySelectorAll', params);
};

/**
  * Re-does the last undone action.
  *
  * @return {!Promise<DOM.RedoResult>}
  */
ExperimentalDOM.prototype.redo = function() {
  return this.connection_.sendDevToolsMessage('DOM.redo', {});
};

/**
  * Removes attribute with given name from an element with given id.
  *
  * @param {DOM.RemoveAttributeParams} params
  * @return {!Promise<DOM.RemoveAttributeResult>}
  */
ExperimentalDOM.prototype.removeAttribute = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.removeAttribute', params);
};

/**
  * Removes node with given id.
  *
  * @param {DOM.RemoveNodeParams} params
  * @return {!Promise<DOM.RemoveNodeResult>}
  */
ExperimentalDOM.prototype.removeNode = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.removeNode', params);
};

/**
  * Requests that children of the node with given id are returned to the caller in form of
 * `setChildNodes` events where not only immediate children are retrieved, but all children down to
 * the specified depth.
  *
  * @param {DOM.RequestChildNodesParams} params
  * @return {!Promise<DOM.RequestChildNodesResult>}
  */
ExperimentalDOM.prototype.requestChildNodes = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.requestChildNodes', params);
};

/**
  * Requests that the node is sent to the caller given the JavaScript node object reference. All
 * nodes that form the path from the node to the root are also sent to the client as a series of
 * `setChildNodes` notifications.
  *
  * @param {DOM.RequestNodeParams} params
  * @return {!Promise<DOM.RequestNodeResult>}
  */
ExperimentalDOM.prototype.requestNode = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.requestNode', params);
};

/**
  * Resolves the JavaScript node object for a given NodeId or BackendNodeId.
  *
  * @param {DOM.ResolveNodeParams=} opt_params
  * @return {!Promise<DOM.ResolveNodeResult>}
  */
ExperimentalDOM.prototype.resolveNode = function(opt_params) {
  return this.connection_.sendDevToolsMessage('DOM.resolveNode', opt_params || {});
};

/**
  * Sets attribute for an element with given id.
  *
  * @param {DOM.SetAttributeValueParams} params
  * @return {!Promise<DOM.SetAttributeValueResult>}
  */
ExperimentalDOM.prototype.setAttributeValue = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.setAttributeValue', params);
};

/**
  * Sets attributes on element with given id. This method is useful when user edits some existing
 * attribute value and types in several attribute name/value pairs.
  *
  * @param {DOM.SetAttributesAsTextParams} params
  * @return {!Promise<DOM.SetAttributesAsTextResult>}
  */
ExperimentalDOM.prototype.setAttributesAsText = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.setAttributesAsText', params);
};

/**
  * Sets files for the given file input element.
  *
  * @param {DOM.SetFileInputFilesParams} params
  * @return {!Promise<DOM.SetFileInputFilesResult>}
  */
ExperimentalDOM.prototype.setFileInputFiles = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.setFileInputFiles', params);
};

/**
  * Enables console to refer to the node with given id via $x (see Command Line API for more details
 * $x functions).
  *
  * @param {DOM.SetInspectedNodeParams} params
  * @return {!Promise<DOM.SetInspectedNodeResult>}
  */
ExperimentalDOM.prototype.setInspectedNode = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.setInspectedNode', params);
};

/**
  * Sets node name for a node with given id.
  *
  * @param {DOM.SetNodeNameParams} params
  * @return {!Promise<DOM.SetNodeNameResult>}
  */
ExperimentalDOM.prototype.setNodeName = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.setNodeName', params);
};

/**
  * Sets node value for a node with given id.
  *
  * @param {DOM.SetNodeValueParams} params
  * @return {!Promise<DOM.SetNodeValueResult>}
  */
ExperimentalDOM.prototype.setNodeValue = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.setNodeValue', params);
};

/**
  * Sets node HTML markup, returns new node id.
  *
  * @param {DOM.SetOuterHTMLParams} params
  * @return {!Promise<DOM.SetOuterHTMLResult>}
  */
ExperimentalDOM.prototype.setOuterHTML = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.setOuterHTML', params);
};

/**
  * Undoes the last performed action.
  *
  * @return {!Promise<DOM.UndoResult>}
  */
ExperimentalDOM.prototype.undo = function() {
  return this.connection_.sendDevToolsMessage('DOM.undo', {});
};

/**
  * Returns iframe node that owns iframe with the given domain.
  *
  * @param {DOM.GetFrameOwnerParams} params
  * @return {!Promise<DOM.GetFrameOwnerResult>}
  */
ExperimentalDOM.prototype.getFrameOwner = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.getFrameOwner', params);
};


/**
  * Fired when `Element`'s attribute is modified.
  *
  * @param {!function(!DOM.AttributeModifiedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalDOM.prototype.onAttributeModified = function(listener) {
  return this.connection_.addEventListener(
      'DOM.attributeModified', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when `Element`'s attribute is removed.
  *
  * @param {!function(!DOM.AttributeRemovedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalDOM.prototype.onAttributeRemoved = function(listener) {
  return this.connection_.addEventListener(
      'DOM.attributeRemoved', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Mirrors `DOMCharacterDataModified` event.
  *
  * @param {!function(!DOM.CharacterDataModifiedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalDOM.prototype.onCharacterDataModified = function(listener) {
  return this.connection_.addEventListener(
      'DOM.characterDataModified', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when `Container`'s child node count has changed.
  *
  * @param {!function(!DOM.ChildNodeCountUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalDOM.prototype.onChildNodeCountUpdated = function(listener) {
  return this.connection_.addEventListener(
      'DOM.childNodeCountUpdated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Mirrors `DOMNodeInserted` event.
  *
  * @param {!function(!DOM.ChildNodeInsertedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalDOM.prototype.onChildNodeInserted = function(listener) {
  return this.connection_.addEventListener(
      'DOM.childNodeInserted', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Mirrors `DOMNodeRemoved` event.
  *
  * @param {!function(!DOM.ChildNodeRemovedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalDOM.prototype.onChildNodeRemoved = function(listener) {
  return this.connection_.addEventListener(
      'DOM.childNodeRemoved', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Called when distrubution is changed.
  *
  * @param {!function(!DOM.DistributedNodesUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalDOM.prototype.onDistributedNodesUpdated = function(listener) {
  return this.connection_.addEventListener(
      'DOM.distributedNodesUpdated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when `Document` has been totally updated. Node ids are no longer valid.
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
ExperimentalDOM.prototype.onDocumentUpdated = function(listener) {
  return this.connection_.addEventListener(
      'DOM.documentUpdated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when `Element`'s inline style is modified via a CSS property modification.
  *
  * @param {!function(!DOM.InlineStyleInvalidatedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalDOM.prototype.onInlineStyleInvalidated = function(listener) {
  return this.connection_.addEventListener(
      'DOM.inlineStyleInvalidated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Called when a pseudo element is added to an element.
  *
  * @param {!function(!DOM.PseudoElementAddedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalDOM.prototype.onPseudoElementAdded = function(listener) {
  return this.connection_.addEventListener(
      'DOM.pseudoElementAdded', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Called when a pseudo element is removed from an element.
  *
  * @param {!function(!DOM.PseudoElementRemovedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalDOM.prototype.onPseudoElementRemoved = function(listener) {
  return this.connection_.addEventListener(
      'DOM.pseudoElementRemoved', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when backend wants to provide client with the missing DOM structure. This happens upon
 * most of the calls requesting node ids.
  *
  * @param {!function(!DOM.SetChildNodesParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalDOM.prototype.onSetChildNodes = function(listener) {
  return this.connection_.addEventListener(
      'DOM.setChildNodes', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Called when shadow root is popped from the element.
  *
  * @param {!function(!DOM.ShadowRootPoppedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalDOM.prototype.onShadowRootPopped = function(listener) {
  return this.connection_.addEventListener(
      'DOM.shadowRootPopped', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Called when shadow root is pushed into the element.
  *
  * @param {!function(!DOM.ShadowRootPushedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalDOM.prototype.onShadowRootPushed = function(listener) {
  return this.connection_.addEventListener(
      'DOM.shadowRootPushed', /** @type {!function(!Object): undefined} */ (listener));
};



/**
  * Collects class names for the node with given id and all of it's child nodes.
  *
  * @param {DOM.CollectClassNamesFromSubtreeParams} params
  * @return {!Promise<DOM.CollectClassNamesFromSubtreeResult>}
  */
DOM.prototype.collectClassNamesFromSubtree = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.collectClassNamesFromSubtree', params);
};

/**
  * Creates a deep copy of the specified node and places it into the target container before the
 * given anchor.
  *
  * @param {DOM.CopyToParams} params
  * @return {!Promise<DOM.CopyToResult>}
  */
DOM.prototype.copyTo = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.copyTo', params);
};

/**
  * Describes node given its id, does not require domain to be enabled. Does not start tracking any
 * objects, can be used for automation.
  *
  * @param {DOM.DescribeNodeParams=} opt_params
  * @return {!Promise<DOM.DescribeNodeResult>}
  */
DOM.prototype.describeNode = function(opt_params) {
  return this.connection_.sendDevToolsMessage('DOM.describeNode', opt_params || {});
};

/**
  * Disables DOM agent for the given page.
  *
  * @return {!Promise<DOM.DisableResult>}
  */
DOM.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('DOM.disable', {});
};

/**
  * Discards search results from the session with the given id. `getSearchResults` should no longer
 * be called for that search.
  *
  * @param {DOM.DiscardSearchResultsParams} params
  * @return {!Promise<DOM.DiscardSearchResultsResult>}
  */
DOM.prototype.discardSearchResults = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.discardSearchResults', params);
};

/**
  * Enables DOM agent for the given page.
  *
  * @return {!Promise<DOM.EnableResult>}
  */
DOM.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('DOM.enable', {});
};

/**
  * Focuses the given element.
  *
  * @param {DOM.FocusParams=} opt_params
  * @return {!Promise<DOM.FocusResult>}
  */
DOM.prototype.focus = function(opt_params) {
  return this.connection_.sendDevToolsMessage('DOM.focus', opt_params || {});
};

/**
  * Returns attributes for the specified node.
  *
  * @param {DOM.GetAttributesParams} params
  * @return {!Promise<DOM.GetAttributesResult>}
  */
DOM.prototype.getAttributes = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.getAttributes', params);
};

/**
  * Returns boxes for the given node.
  *
  * @param {DOM.GetBoxModelParams=} opt_params
  * @return {!Promise<DOM.GetBoxModelResult>}
  */
DOM.prototype.getBoxModel = function(opt_params) {
  return this.connection_.sendDevToolsMessage('DOM.getBoxModel', opt_params || {});
};

/**
  * Returns the root DOM node (and optionally the subtree) to the caller.
  *
  * @param {DOM.GetDocumentParams=} opt_params
  * @return {!Promise<DOM.GetDocumentResult>}
  */
DOM.prototype.getDocument = function(opt_params) {
  return this.connection_.sendDevToolsMessage('DOM.getDocument', opt_params || {});
};

/**
  * Returns the root DOM node (and optionally the subtree) to the caller.
  *
  * @param {DOM.GetFlattenedDocumentParams=} opt_params
  * @return {!Promise<DOM.GetFlattenedDocumentResult>}
  */
DOM.prototype.getFlattenedDocument = function(opt_params) {
  return this.connection_.sendDevToolsMessage('DOM.getFlattenedDocument', opt_params || {});
};

/**
  * Returns node id at given location.
  *
  * @param {DOM.GetNodeForLocationParams} params
  * @return {!Promise<DOM.GetNodeForLocationResult>}
  */
DOM.prototype.getNodeForLocation = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.getNodeForLocation', params);
};

/**
  * Returns node's HTML markup.
  *
  * @param {DOM.GetOuterHTMLParams=} opt_params
  * @return {!Promise<DOM.GetOuterHTMLResult>}
  */
DOM.prototype.getOuterHTML = function(opt_params) {
  return this.connection_.sendDevToolsMessage('DOM.getOuterHTML', opt_params || {});
};

/**
  * Returns the id of the nearest ancestor that is a relayout boundary.
  *
  * @param {DOM.GetRelayoutBoundaryParams} params
  * @return {!Promise<DOM.GetRelayoutBoundaryResult>}
  */
DOM.prototype.getRelayoutBoundary = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.getRelayoutBoundary', params);
};

/**
  * Returns search results from given `fromIndex` to given `toIndex` from the search with the given
 * identifier.
  *
  * @param {DOM.GetSearchResultsParams} params
  * @return {!Promise<DOM.GetSearchResultsResult>}
  */
DOM.prototype.getSearchResults = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.getSearchResults', params);
};

/**
  * Hides any highlight.
  *
  * @return {!Promise<DOM.HideHighlightResult>}
  */
DOM.prototype.hideHighlight = function() {
  return this.connection_.sendDevToolsMessage('DOM.hideHighlight', {});
};

/**
  * Highlights DOM node.
  *
  * @return {!Promise<DOM.HighlightNodeResult>}
  */
DOM.prototype.highlightNode = function() {
  return this.connection_.sendDevToolsMessage('DOM.highlightNode', {});
};

/**
  * Highlights given rectangle.
  *
  * @return {!Promise<DOM.HighlightRectResult>}
  */
DOM.prototype.highlightRect = function() {
  return this.connection_.sendDevToolsMessage('DOM.highlightRect', {});
};

/**
  * Marks last undoable state.
  *
  * @return {!Promise<DOM.MarkUndoableStateResult>}
  */
DOM.prototype.markUndoableState = function() {
  return this.connection_.sendDevToolsMessage('DOM.markUndoableState', {});
};

/**
  * Moves node into the new container, places it before the given anchor.
  *
  * @param {DOM.MoveToParams} params
  * @return {!Promise<DOM.MoveToResult>}
  */
DOM.prototype.moveTo = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.moveTo', params);
};

/**
  * Searches for a given string in the DOM tree. Use `getSearchResults` to access search results or
 * `cancelSearch` to end this search session.
  *
  * @param {DOM.PerformSearchParams} params
  * @return {!Promise<DOM.PerformSearchResult>}
  */
DOM.prototype.performSearch = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.performSearch', params);
};

/**
  * Requests that the node is sent to the caller given its path. // FIXME, use XPath
  *
  * @param {DOM.PushNodeByPathToFrontendParams} params
  * @return {!Promise<DOM.PushNodeByPathToFrontendResult>}
  */
DOM.prototype.pushNodeByPathToFrontend = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.pushNodeByPathToFrontend', params);
};

/**
  * Requests that a batch of nodes is sent to the caller given their backend node ids.
  *
  * @param {DOM.PushNodesByBackendIdsToFrontendParams} params
  * @return {!Promise<DOM.PushNodesByBackendIdsToFrontendResult>}
  */
DOM.prototype.pushNodesByBackendIdsToFrontend = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.pushNodesByBackendIdsToFrontend', params);
};

/**
  * Executes `querySelector` on a given node.
  *
  * @param {DOM.QuerySelectorParams} params
  * @return {!Promise<DOM.QuerySelectorResult>}
  */
DOM.prototype.querySelector = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.querySelector', params);
};

/**
  * Executes `querySelectorAll` on a given node.
  *
  * @param {DOM.QuerySelectorAllParams} params
  * @return {!Promise<DOM.QuerySelectorAllResult>}
  */
DOM.prototype.querySelectorAll = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.querySelectorAll', params);
};

/**
  * Re-does the last undone action.
  *
  * @return {!Promise<DOM.RedoResult>}
  */
DOM.prototype.redo = function() {
  return this.connection_.sendDevToolsMessage('DOM.redo', {});
};

/**
  * Removes attribute with given name from an element with given id.
  *
  * @param {DOM.RemoveAttributeParams} params
  * @return {!Promise<DOM.RemoveAttributeResult>}
  */
DOM.prototype.removeAttribute = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.removeAttribute', params);
};

/**
  * Removes node with given id.
  *
  * @param {DOM.RemoveNodeParams} params
  * @return {!Promise<DOM.RemoveNodeResult>}
  */
DOM.prototype.removeNode = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.removeNode', params);
};

/**
  * Requests that children of the node with given id are returned to the caller in form of
 * `setChildNodes` events where not only immediate children are retrieved, but all children down to
 * the specified depth.
  *
  * @param {DOM.RequestChildNodesParams} params
  * @return {!Promise<DOM.RequestChildNodesResult>}
  */
DOM.prototype.requestChildNodes = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.requestChildNodes', params);
};

/**
  * Requests that the node is sent to the caller given the JavaScript node object reference. All
 * nodes that form the path from the node to the root are also sent to the client as a series of
 * `setChildNodes` notifications.
  *
  * @param {DOM.RequestNodeParams} params
  * @return {!Promise<DOM.RequestNodeResult>}
  */
DOM.prototype.requestNode = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.requestNode', params);
};

/**
  * Resolves the JavaScript node object for a given NodeId or BackendNodeId.
  *
  * @param {DOM.ResolveNodeParams=} opt_params
  * @return {!Promise<DOM.ResolveNodeResult>}
  */
DOM.prototype.resolveNode = function(opt_params) {
  return this.connection_.sendDevToolsMessage('DOM.resolveNode', opt_params || {});
};

/**
  * Sets attribute for an element with given id.
  *
  * @param {DOM.SetAttributeValueParams} params
  * @return {!Promise<DOM.SetAttributeValueResult>}
  */
DOM.prototype.setAttributeValue = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.setAttributeValue', params);
};

/**
  * Sets attributes on element with given id. This method is useful when user edits some existing
 * attribute value and types in several attribute name/value pairs.
  *
  * @param {DOM.SetAttributesAsTextParams} params
  * @return {!Promise<DOM.SetAttributesAsTextResult>}
  */
DOM.prototype.setAttributesAsText = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.setAttributesAsText', params);
};

/**
  * Sets files for the given file input element.
  *
  * @param {DOM.SetFileInputFilesParams} params
  * @return {!Promise<DOM.SetFileInputFilesResult>}
  */
DOM.prototype.setFileInputFiles = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.setFileInputFiles', params);
};

/**
  * Enables console to refer to the node with given id via $x (see Command Line API for more details
 * $x functions).
  *
  * @param {DOM.SetInspectedNodeParams} params
  * @return {!Promise<DOM.SetInspectedNodeResult>}
  */
DOM.prototype.setInspectedNode = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.setInspectedNode', params);
};

/**
  * Sets node name for a node with given id.
  *
  * @param {DOM.SetNodeNameParams} params
  * @return {!Promise<DOM.SetNodeNameResult>}
  */
DOM.prototype.setNodeName = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.setNodeName', params);
};

/**
  * Sets node value for a node with given id.
  *
  * @param {DOM.SetNodeValueParams} params
  * @return {!Promise<DOM.SetNodeValueResult>}
  */
DOM.prototype.setNodeValue = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.setNodeValue', params);
};

/**
  * Sets node HTML markup, returns new node id.
  *
  * @param {DOM.SetOuterHTMLParams} params
  * @return {!Promise<DOM.SetOuterHTMLResult>}
  */
DOM.prototype.setOuterHTML = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.setOuterHTML', params);
};

/**
  * Undoes the last performed action.
  *
  * @return {!Promise<DOM.UndoResult>}
  */
DOM.prototype.undo = function() {
  return this.connection_.sendDevToolsMessage('DOM.undo', {});
};

/**
  * Returns iframe node that owns iframe with the given domain.
  *
  * @param {DOM.GetFrameOwnerParams} params
  * @return {!Promise<DOM.GetFrameOwnerResult>}
  */
DOM.prototype.getFrameOwner = function(params) {
  return this.connection_.sendDevToolsMessage('DOM.getFrameOwner', params);
};


/**
  * Fired when `Element`'s attribute is modified.
  *
  * @param {!function(!DOM.AttributeModifiedParams)} listener
  * @return {number} The id of this event listener.
  */
DOM.prototype.onAttributeModified = function(listener) {
  return this.connection_.addEventListener(
      'DOM.attributeModified', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when `Element`'s attribute is removed.
  *
  * @param {!function(!DOM.AttributeRemovedParams)} listener
  * @return {number} The id of this event listener.
  */
DOM.prototype.onAttributeRemoved = function(listener) {
  return this.connection_.addEventListener(
      'DOM.attributeRemoved', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Mirrors `DOMCharacterDataModified` event.
  *
  * @param {!function(!DOM.CharacterDataModifiedParams)} listener
  * @return {number} The id of this event listener.
  */
DOM.prototype.onCharacterDataModified = function(listener) {
  return this.connection_.addEventListener(
      'DOM.characterDataModified', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when `Container`'s child node count has changed.
  *
  * @param {!function(!DOM.ChildNodeCountUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
DOM.prototype.onChildNodeCountUpdated = function(listener) {
  return this.connection_.addEventListener(
      'DOM.childNodeCountUpdated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Mirrors `DOMNodeInserted` event.
  *
  * @param {!function(!DOM.ChildNodeInsertedParams)} listener
  * @return {number} The id of this event listener.
  */
DOM.prototype.onChildNodeInserted = function(listener) {
  return this.connection_.addEventListener(
      'DOM.childNodeInserted', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Mirrors `DOMNodeRemoved` event.
  *
  * @param {!function(!DOM.ChildNodeRemovedParams)} listener
  * @return {number} The id of this event listener.
  */
DOM.prototype.onChildNodeRemoved = function(listener) {
  return this.connection_.addEventListener(
      'DOM.childNodeRemoved', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Called when distrubution is changed.
  *
  * @param {!function(!DOM.DistributedNodesUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
DOM.prototype.onDistributedNodesUpdated = function(listener) {
  return this.connection_.addEventListener(
      'DOM.distributedNodesUpdated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when `Document` has been totally updated. Node ids are no longer valid.
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
DOM.prototype.onDocumentUpdated = function(listener) {
  return this.connection_.addEventListener(
      'DOM.documentUpdated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when `Element`'s inline style is modified via a CSS property modification.
  *
  * @param {!function(!DOM.InlineStyleInvalidatedParams)} listener
  * @return {number} The id of this event listener.
  */
DOM.prototype.onInlineStyleInvalidated = function(listener) {
  return this.connection_.addEventListener(
      'DOM.inlineStyleInvalidated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Called when a pseudo element is added to an element.
  *
  * @param {!function(!DOM.PseudoElementAddedParams)} listener
  * @return {number} The id of this event listener.
  */
DOM.prototype.onPseudoElementAdded = function(listener) {
  return this.connection_.addEventListener(
      'DOM.pseudoElementAdded', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Called when a pseudo element is removed from an element.
  *
  * @param {!function(!DOM.PseudoElementRemovedParams)} listener
  * @return {number} The id of this event listener.
  */
DOM.prototype.onPseudoElementRemoved = function(listener) {
  return this.connection_.addEventListener(
      'DOM.pseudoElementRemoved', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when backend wants to provide client with the missing DOM structure. This happens upon
 * most of the calls requesting node ids.
  *
  * @param {!function(!DOM.SetChildNodesParams)} listener
  * @return {number} The id of this event listener.
  */
DOM.prototype.onSetChildNodes = function(listener) {
  return this.connection_.addEventListener(
      'DOM.setChildNodes', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Called when shadow root is popped from the element.
  *
  * @param {!function(!DOM.ShadowRootPoppedParams)} listener
  * @return {number} The id of this event listener.
  */
DOM.prototype.onShadowRootPopped = function(listener) {
  return this.connection_.addEventListener(
      'DOM.shadowRootPopped', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Called when shadow root is pushed into the element.
  *
  * @param {!function(!DOM.ShadowRootPushedParams)} listener
  * @return {number} The id of this event listener.
  */
DOM.prototype.onShadowRootPushed = function(listener) {
  return this.connection_.addEventListener(
      'DOM.shadowRootPushed', /** @type {!function(!Object): undefined} */ (listener));
};

});  // goog.scope

