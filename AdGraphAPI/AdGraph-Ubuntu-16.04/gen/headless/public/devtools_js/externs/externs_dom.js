// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the DOM DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalDOM = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalDOM.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the DOM DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.DOM = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalDOM} */
chromium.DevTools.DOM.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.DOM.prototype.removeEventListener = function(id) {};

/**
 * Pseudo element type.
 *
 * @enum {string}
 */
chromium.DevTools.DOM.PseudoType = {
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
chromium.DevTools.DOM.ShadowRootType = {
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
chromium.DevTools.DOM.BackendNode;

/**
 * DOM interaction is implemented in terms of mirror objects that represent the actual DOM nodes.
 * DOMNode is a base node mirror type.
 *
 * nodeId: Node identifier that is passed into the rest of the DOM messages as the `nodeId`. Backend
 *    will only push node with given `id` once. It is aware of all requested nodes and will only
 *    fire DOM events for nodes known to the client.
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
 *   children: (!Array.<!chromium.DevTools.DOM.Node>|undefined),
 *   attributes: (!Array.<string>|undefined),
 *   documentURL: (string|undefined),
 *   baseURL: (string|undefined),
 *   publicId: (string|undefined),
 *   systemId: (string|undefined),
 *   internalSubset: (string|undefined),
 *   xmlVersion: (string|undefined),
 *   name: (string|undefined),
 *   value: (string|undefined),
 *   pseudoType: (!chromium.DevTools.DOM.PseudoType|undefined),
 *   shadowRootType: (!chromium.DevTools.DOM.ShadowRootType|undefined),
 *   frameId: (string|undefined),
 *   contentDocument: (!chromium.DevTools.DOM.Node|undefined),
 *   shadowRoots: (!Array.<!chromium.DevTools.DOM.Node>|undefined),
 *   templateContent: (!chromium.DevTools.DOM.Node|undefined),
 *   pseudoElements: (!Array.<!chromium.DevTools.DOM.Node>|undefined),
 *   importedDocument: (!chromium.DevTools.DOM.Node|undefined),
 *   distributedNodes: (!Array.<!chromium.DevTools.DOM.BackendNode>|undefined),
 *   isSVG: (boolean|undefined)
 * }}
 */
chromium.DevTools.DOM.Node;

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
chromium.DevTools.DOM.RGBA;

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
 *   shapeOutside: (!chromium.DevTools.DOM.ShapeOutsideInfo|undefined)
 * }}
 */
chromium.DevTools.DOM.BoxModel;

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
chromium.DevTools.DOM.ShapeOutsideInfo;

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
chromium.DevTools.DOM.Rect;

/**
 * Parameters for the CollectClassNamesFromSubtree command.
 *
 * nodeId: Id of the node to collect class names.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
chromium.DevTools.DOM.CollectClassNamesFromSubtreeParams;

/**
 * Result for the CollectClassNamesFromSubtree command.
 *
 * classNames: Class name list.
 *
 * @typedef {{
 *   classNames: !Array.<string>
 * }}
 */
chromium.DevTools.DOM.CollectClassNamesFromSubtreeResult;

/**
 * Parameters for the CopyTo command.
 *
 * nodeId: Id of the node to copy.
 * targetNodeId: Id of the element to drop the copy into.
 * insertBeforeNodeId: Drop the copy before this node (if absent, the copy becomes the last child of
 *    `targetNodeId`).
 *
 * @typedef {{
 *   nodeId: number,
 *   targetNodeId: number,
 *   insertBeforeNodeId: (number|undefined)
 * }}
 */
chromium.DevTools.DOM.CopyToParams;

/**
 * Result for the CopyTo command.
 *
 * nodeId: Id of the node clone.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
chromium.DevTools.DOM.CopyToResult;

/**
 * Parameters for the DescribeNode command.
 *
 * nodeId: Identifier of the node.
 * backendNodeId: Identifier of the backend node.
 * objectId: JavaScript object id of the node wrapper.
 * depth: The maximum depth at which children should be retrieved, defaults to 1. Use -1 for the
 *    entire subtree or provide an integer larger than 0.
 * pierce: Whether or not iframes and shadow roots should be traversed when returning the subtree
 *    (default is false).
 *
 * @typedef {{
 *   nodeId: (number|undefined),
 *   backendNodeId: (number|undefined),
 *   objectId: (string|undefined),
 *   depth: (number|undefined),
 *   pierce: (boolean|undefined)
 * }}
 */
chromium.DevTools.DOM.DescribeNodeParams;

/**
 * Result for the DescribeNode command.
 *
 * node: Node description.
 *
 * @typedef {{
 *   node: !chromium.DevTools.DOM.Node
 * }}
 */
chromium.DevTools.DOM.DescribeNodeResult;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.DisableResult;

/**
 * Parameters for the DiscardSearchResults command.
 *
 * searchId: Unique search session identifier.
 *
 * @typedef {{
 *   searchId: string
 * }}
 */
chromium.DevTools.DOM.DiscardSearchResultsParams;

/**
 * Result for the DiscardSearchResults command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.DiscardSearchResultsResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.EnableResult;

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
chromium.DevTools.DOM.FocusParams;

/**
 * Result for the Focus command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.FocusResult;

/**
 * Parameters for the GetAttributes command.
 *
 * nodeId: Id of the node to retrieve attibutes for.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
chromium.DevTools.DOM.GetAttributesParams;

/**
 * Result for the GetAttributes command.
 *
 * attributes: An interleaved array of node attribute names and values.
 *
 * @typedef {{
 *   attributes: !Array.<string>
 * }}
 */
chromium.DevTools.DOM.GetAttributesResult;

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
chromium.DevTools.DOM.GetBoxModelParams;

/**
 * Result for the GetBoxModel command.
 *
 * model: Box model for the node.
 *
 * @typedef {{
 *   model: !chromium.DevTools.DOM.BoxModel
 * }}
 */
chromium.DevTools.DOM.GetBoxModelResult;

/**
 * Parameters for the GetDocument command.
 *
 * depth: The maximum depth at which children should be retrieved, defaults to 1. Use -1 for the
 *    entire subtree or provide an integer larger than 0.
 * pierce: Whether or not iframes and shadow roots should be traversed when returning the subtree
 *    (default is false).
 *
 * @typedef {{
 *   depth: (number|undefined),
 *   pierce: (boolean|undefined)
 * }}
 */
chromium.DevTools.DOM.GetDocumentParams;

/**
 * Result for the GetDocument command.
 *
 * root: Resulting node.
 *
 * @typedef {{
 *   root: !chromium.DevTools.DOM.Node
 * }}
 */
chromium.DevTools.DOM.GetDocumentResult;

/**
 * Parameters for the GetFlattenedDocument command.
 *
 * depth: The maximum depth at which children should be retrieved, defaults to 1. Use -1 for the
 *    entire subtree or provide an integer larger than 0.
 * pierce: Whether or not iframes and shadow roots should be traversed when returning the subtree
 *    (default is false).
 *
 * @typedef {{
 *   depth: (number|undefined),
 *   pierce: (boolean|undefined)
 * }}
 */
chromium.DevTools.DOM.GetFlattenedDocumentParams;

/**
 * Result for the GetFlattenedDocument command.
 *
 * nodes: Resulting node.
 *
 * @typedef {{
 *   nodes: !Array.<!chromium.DevTools.DOM.Node>
 * }}
 */
chromium.DevTools.DOM.GetFlattenedDocumentResult;

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
chromium.DevTools.DOM.GetNodeForLocationParams;

/**
 * Result for the GetNodeForLocation command.
 *
 * nodeId: Id of the node at given coordinates.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
chromium.DevTools.DOM.GetNodeForLocationResult;

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
chromium.DevTools.DOM.GetOuterHTMLParams;

/**
 * Result for the GetOuterHTML command.
 *
 * outerHTML: Outer HTML markup.
 *
 * @typedef {{
 *   outerHTML: string
 * }}
 */
chromium.DevTools.DOM.GetOuterHTMLResult;

/**
 * Parameters for the GetRelayoutBoundary command.
 *
 * nodeId: Id of the node.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
chromium.DevTools.DOM.GetRelayoutBoundaryParams;

/**
 * Result for the GetRelayoutBoundary command.
 *
 * nodeId: Relayout boundary node id for the given node.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
chromium.DevTools.DOM.GetRelayoutBoundaryResult;

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
chromium.DevTools.DOM.GetSearchResultsParams;

/**
 * Result for the GetSearchResults command.
 *
 * nodeIds: Ids of the search result nodes.
 *
 * @typedef {{
 *   nodeIds: !Array.<number>
 * }}
 */
chromium.DevTools.DOM.GetSearchResultsResult;

/**
 * Parameters for the HideHighlight command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.HideHighlightParams;

/**
 * Result for the HideHighlight command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.HideHighlightResult;

/**
 * Parameters for the HighlightNode command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.HighlightNodeParams;

/**
 * Result for the HighlightNode command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.HighlightNodeResult;

/**
 * Parameters for the HighlightRect command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.HighlightRectParams;

/**
 * Result for the HighlightRect command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.HighlightRectResult;

/**
 * Parameters for the MarkUndoableState command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.MarkUndoableStateParams;

/**
 * Result for the MarkUndoableState command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.MarkUndoableStateResult;

/**
 * Parameters for the MoveTo command.
 *
 * nodeId: Id of the node to move.
 * targetNodeId: Id of the element to drop the moved node into.
 * insertBeforeNodeId: Drop node before this one (if absent, the moved node becomes the last child of
 *    `targetNodeId`).
 *
 * @typedef {{
 *   nodeId: number,
 *   targetNodeId: number,
 *   insertBeforeNodeId: (number|undefined)
 * }}
 */
chromium.DevTools.DOM.MoveToParams;

/**
 * Result for the MoveTo command.
 *
 * nodeId: New id of the moved node.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
chromium.DevTools.DOM.MoveToResult;

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
chromium.DevTools.DOM.PerformSearchParams;

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
chromium.DevTools.DOM.PerformSearchResult;

/**
 * Parameters for the PushNodeByPathToFrontend command.
 *
 * path: Path to node in the proprietary format.
 *
 * @typedef {{
 *   path: string
 * }}
 */
chromium.DevTools.DOM.PushNodeByPathToFrontendParams;

/**
 * Result for the PushNodeByPathToFrontend command.
 *
 * nodeId: Id of the node for given path.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
chromium.DevTools.DOM.PushNodeByPathToFrontendResult;

/**
 * Parameters for the PushNodesByBackendIdsToFrontend command.
 *
 * backendNodeIds: The array of backend node ids.
 *
 * @typedef {{
 *   backendNodeIds: !Array.<number>
 * }}
 */
chromium.DevTools.DOM.PushNodesByBackendIdsToFrontendParams;

/**
 * Result for the PushNodesByBackendIdsToFrontend command.
 *
 * nodeIds: The array of ids of pushed nodes that correspond to the backend ids specified in
 *    backendNodeIds.
 *
 * @typedef {{
 *   nodeIds: !Array.<number>
 * }}
 */
chromium.DevTools.DOM.PushNodesByBackendIdsToFrontendResult;

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
chromium.DevTools.DOM.QuerySelectorParams;

/**
 * Result for the QuerySelector command.
 *
 * nodeId: Query selector result.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
chromium.DevTools.DOM.QuerySelectorResult;

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
chromium.DevTools.DOM.QuerySelectorAllParams;

/**
 * Result for the QuerySelectorAll command.
 *
 * nodeIds: Query selector result.
 *
 * @typedef {{
 *   nodeIds: !Array.<number>
 * }}
 */
chromium.DevTools.DOM.QuerySelectorAllResult;

/**
 * Parameters for the Redo command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.RedoParams;

/**
 * Result for the Redo command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.RedoResult;

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
chromium.DevTools.DOM.RemoveAttributeParams;

/**
 * Result for the RemoveAttribute command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.RemoveAttributeResult;

/**
 * Parameters for the RemoveNode command.
 *
 * nodeId: Id of the node to remove.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
chromium.DevTools.DOM.RemoveNodeParams;

/**
 * Result for the RemoveNode command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.RemoveNodeResult;

/**
 * Parameters for the RequestChildNodes command.
 *
 * nodeId: Id of the node to get children for.
 * depth: The maximum depth at which children should be retrieved, defaults to 1. Use -1 for the
 *    entire subtree or provide an integer larger than 0.
 * pierce: Whether or not iframes and shadow roots should be traversed when returning the sub-tree
 *    (default is false).
 *
 * @typedef {{
 *   nodeId: number,
 *   depth: (number|undefined),
 *   pierce: (boolean|undefined)
 * }}
 */
chromium.DevTools.DOM.RequestChildNodesParams;

/**
 * Result for the RequestChildNodes command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.RequestChildNodesResult;

/**
 * Parameters for the RequestNode command.
 *
 * objectId: JavaScript object id to convert into node.
 *
 * @typedef {{
 *   objectId: string
 * }}
 */
chromium.DevTools.DOM.RequestNodeParams;

/**
 * Result for the RequestNode command.
 *
 * nodeId: Node id for given object.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
chromium.DevTools.DOM.RequestNodeResult;

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
chromium.DevTools.DOM.ResolveNodeParams;

/**
 * Result for the ResolveNode command.
 *
 * object: JavaScript object wrapper for given node.
 *
 * @typedef {{
 *   object: !chromium.DevTools.Runtime.RemoteObject
 * }}
 */
chromium.DevTools.DOM.ResolveNodeResult;

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
chromium.DevTools.DOM.SetAttributeValueParams;

/**
 * Result for the SetAttributeValue command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.SetAttributeValueResult;

/**
 * Parameters for the SetAttributesAsText command.
 *
 * nodeId: Id of the element to set attributes for.
 * text: Text with a number of attributes. Will parse this text using HTML parser.
 * name: Attribute name to replace with new attributes derived from text in case text parsed
 *    successfully.
 *
 * @typedef {{
 *   nodeId: number,
 *   text: string,
 *   name: (string|undefined)
 * }}
 */
chromium.DevTools.DOM.SetAttributesAsTextParams;

/**
 * Result for the SetAttributesAsText command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.SetAttributesAsTextResult;

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
chromium.DevTools.DOM.SetFileInputFilesParams;

/**
 * Result for the SetFileInputFiles command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.SetFileInputFilesResult;

/**
 * Parameters for the SetInspectedNode command.
 *
 * nodeId: DOM node id to be accessible by means of $x command line API.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
chromium.DevTools.DOM.SetInspectedNodeParams;

/**
 * Result for the SetInspectedNode command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.SetInspectedNodeResult;

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
chromium.DevTools.DOM.SetNodeNameParams;

/**
 * Result for the SetNodeName command.
 *
 * nodeId: New node's id.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
chromium.DevTools.DOM.SetNodeNameResult;

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
chromium.DevTools.DOM.SetNodeValueParams;

/**
 * Result for the SetNodeValue command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.SetNodeValueResult;

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
chromium.DevTools.DOM.SetOuterHTMLParams;

/**
 * Result for the SetOuterHTML command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.SetOuterHTMLResult;

/**
 * Parameters for the Undo command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.UndoParams;

/**
 * Result for the Undo command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.UndoResult;

/**
 * Parameters for the GetFrameOwner command.
 *
 *
 * @typedef {{
 *   frameId: string
 * }}
 */
chromium.DevTools.DOM.GetFrameOwnerParams;

/**
 * Result for the GetFrameOwner command.
 *
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
chromium.DevTools.DOM.GetFrameOwnerResult;

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
chromium.DevTools.DOM.AttributeModifiedParams;

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
chromium.DevTools.DOM.AttributeRemovedParams;

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
chromium.DevTools.DOM.CharacterDataModifiedParams;

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
chromium.DevTools.DOM.ChildNodeCountUpdatedParams;

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
 *   node: !chromium.DevTools.DOM.Node
 * }}
 */
chromium.DevTools.DOM.ChildNodeInsertedParams;

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
chromium.DevTools.DOM.ChildNodeRemovedParams;

/**
 * Parameters for the DistributedNodesUpdated event.
 *
 * insertionPointId: Insertion point where distrubuted nodes were updated.
 * distributedNodes: Distributed nodes for given insertion point.
 *
 * @typedef {{
 *   insertionPointId: number,
 *   distributedNodes: !Array.<!chromium.DevTools.DOM.BackendNode>
 * }}
 */
chromium.DevTools.DOM.DistributedNodesUpdatedParams;

/**
 * Parameters for the DocumentUpdated event.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.DOM.DocumentUpdatedParams;

/**
 * Parameters for the InlineStyleInvalidated event.
 *
 * nodeIds: Ids of the nodes for which the inline styles have been invalidated.
 *
 * @typedef {{
 *   nodeIds: !Array.<number>
 * }}
 */
chromium.DevTools.DOM.InlineStyleInvalidatedParams;

/**
 * Parameters for the PseudoElementAdded event.
 *
 * parentId: Pseudo element's parent element id.
 * pseudoElement: The added pseudo element.
 *
 * @typedef {{
 *   parentId: number,
 *   pseudoElement: !chromium.DevTools.DOM.Node
 * }}
 */
chromium.DevTools.DOM.PseudoElementAddedParams;

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
chromium.DevTools.DOM.PseudoElementRemovedParams;

/**
 * Parameters for the SetChildNodes event.
 *
 * parentId: Parent node id to populate with children.
 * nodes: Child nodes array.
 *
 * @typedef {{
 *   parentId: number,
 *   nodes: !Array.<!chromium.DevTools.DOM.Node>
 * }}
 */
chromium.DevTools.DOM.SetChildNodesParams;

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
chromium.DevTools.DOM.ShadowRootPoppedParams;

/**
 * Parameters for the ShadowRootPushed event.
 *
 * hostId: Host element id.
 * root: Shadow root.
 *
 * @typedef {{
 *   hostId: number,
 *   root: !chromium.DevTools.DOM.Node
 * }}
 */
chromium.DevTools.DOM.ShadowRootPushedParams;



/**
  * Collects class names for the node with given id and all of it's child nodes.
  *
  * @param {chromium.DevTools.DOM.CollectClassNamesFromSubtreeParams} params
  * @return {!Promise<chromium.DevTools.DOM.CollectClassNamesFromSubtreeResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.collectClassNamesFromSubtree = function(params) {};

/**
  * Creates a deep copy of the specified node and places it into the target container before the
 * given anchor.
  *
  * @param {chromium.DevTools.DOM.CopyToParams} params
  * @return {!Promise<chromium.DevTools.DOM.CopyToResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.copyTo = function(params) {};

/**
  * Describes node given its id, does not require domain to be enabled. Does not start tracking any
 * objects, can be used for automation.
  *
  * @param {chromium.DevTools.DOM.DescribeNodeParams=} opt_params
  * @return {!Promise<chromium.DevTools.DOM.DescribeNodeResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.describeNode = function(opt_params) {};

/**
  * Disables DOM agent for the given page.
  *
  * @return {!Promise<chromium.DevTools.DOM.DisableResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.disable = function() {};

/**
  * Discards search results from the session with the given id. `getSearchResults` should no longer
 * be called for that search.
  *
  * @param {chromium.DevTools.DOM.DiscardSearchResultsParams} params
  * @return {!Promise<chromium.DevTools.DOM.DiscardSearchResultsResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.discardSearchResults = function(params) {};

/**
  * Enables DOM agent for the given page.
  *
  * @return {!Promise<chromium.DevTools.DOM.EnableResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.enable = function() {};

/**
  * Focuses the given element.
  *
  * @param {chromium.DevTools.DOM.FocusParams=} opt_params
  * @return {!Promise<chromium.DevTools.DOM.FocusResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.focus = function(opt_params) {};

/**
  * Returns attributes for the specified node.
  *
  * @param {chromium.DevTools.DOM.GetAttributesParams} params
  * @return {!Promise<chromium.DevTools.DOM.GetAttributesResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.getAttributes = function(params) {};

/**
  * Returns boxes for the given node.
  *
  * @param {chromium.DevTools.DOM.GetBoxModelParams=} opt_params
  * @return {!Promise<chromium.DevTools.DOM.GetBoxModelResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.getBoxModel = function(opt_params) {};

/**
  * Returns the root DOM node (and optionally the subtree) to the caller.
  *
  * @param {chromium.DevTools.DOM.GetDocumentParams=} opt_params
  * @return {!Promise<chromium.DevTools.DOM.GetDocumentResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.getDocument = function(opt_params) {};

/**
  * Returns the root DOM node (and optionally the subtree) to the caller.
  *
  * @param {chromium.DevTools.DOM.GetFlattenedDocumentParams=} opt_params
  * @return {!Promise<chromium.DevTools.DOM.GetFlattenedDocumentResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.getFlattenedDocument = function(opt_params) {};

/**
  * Returns node id at given location.
  *
  * @param {chromium.DevTools.DOM.GetNodeForLocationParams} params
  * @return {!Promise<chromium.DevTools.DOM.GetNodeForLocationResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.getNodeForLocation = function(params) {};

/**
  * Returns node's HTML markup.
  *
  * @param {chromium.DevTools.DOM.GetOuterHTMLParams=} opt_params
  * @return {!Promise<chromium.DevTools.DOM.GetOuterHTMLResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.getOuterHTML = function(opt_params) {};

/**
  * Returns the id of the nearest ancestor that is a relayout boundary.
  *
  * @param {chromium.DevTools.DOM.GetRelayoutBoundaryParams} params
  * @return {!Promise<chromium.DevTools.DOM.GetRelayoutBoundaryResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.getRelayoutBoundary = function(params) {};

/**
  * Returns search results from given `fromIndex` to given `toIndex` from the search with the given
 * identifier.
  *
  * @param {chromium.DevTools.DOM.GetSearchResultsParams} params
  * @return {!Promise<chromium.DevTools.DOM.GetSearchResultsResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.getSearchResults = function(params) {};

/**
  * Hides any highlight.
  *
  * @return {!Promise<chromium.DevTools.DOM.HideHighlightResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.hideHighlight = function() {};

/**
  * Highlights DOM node.
  *
  * @return {!Promise<chromium.DevTools.DOM.HighlightNodeResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.highlightNode = function() {};

/**
  * Highlights given rectangle.
  *
  * @return {!Promise<chromium.DevTools.DOM.HighlightRectResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.highlightRect = function() {};

/**
  * Marks last undoable state.
  *
  * @return {!Promise<chromium.DevTools.DOM.MarkUndoableStateResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.markUndoableState = function() {};

/**
  * Moves node into the new container, places it before the given anchor.
  *
  * @param {chromium.DevTools.DOM.MoveToParams} params
  * @return {!Promise<chromium.DevTools.DOM.MoveToResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.moveTo = function(params) {};

/**
  * Searches for a given string in the DOM tree. Use `getSearchResults` to access search results or
 * `cancelSearch` to end this search session.
  *
  * @param {chromium.DevTools.DOM.PerformSearchParams} params
  * @return {!Promise<chromium.DevTools.DOM.PerformSearchResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.performSearch = function(params) {};

/**
  * Requests that the node is sent to the caller given its path. // FIXME, use XPath
  *
  * @param {chromium.DevTools.DOM.PushNodeByPathToFrontendParams} params
  * @return {!Promise<chromium.DevTools.DOM.PushNodeByPathToFrontendResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.pushNodeByPathToFrontend = function(params) {};

/**
  * Requests that a batch of nodes is sent to the caller given their backend node ids.
  *
  * @param {chromium.DevTools.DOM.PushNodesByBackendIdsToFrontendParams} params
  * @return {!Promise<chromium.DevTools.DOM.PushNodesByBackendIdsToFrontendResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.pushNodesByBackendIdsToFrontend = function(params) {};

/**
  * Executes `querySelector` on a given node.
  *
  * @param {chromium.DevTools.DOM.QuerySelectorParams} params
  * @return {!Promise<chromium.DevTools.DOM.QuerySelectorResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.querySelector = function(params) {};

/**
  * Executes `querySelectorAll` on a given node.
  *
  * @param {chromium.DevTools.DOM.QuerySelectorAllParams} params
  * @return {!Promise<chromium.DevTools.DOM.QuerySelectorAllResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.querySelectorAll = function(params) {};

/**
  * Re-does the last undone action.
  *
  * @return {!Promise<chromium.DevTools.DOM.RedoResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.redo = function() {};

/**
  * Removes attribute with given name from an element with given id.
  *
  * @param {chromium.DevTools.DOM.RemoveAttributeParams} params
  * @return {!Promise<chromium.DevTools.DOM.RemoveAttributeResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.removeAttribute = function(params) {};

/**
  * Removes node with given id.
  *
  * @param {chromium.DevTools.DOM.RemoveNodeParams} params
  * @return {!Promise<chromium.DevTools.DOM.RemoveNodeResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.removeNode = function(params) {};

/**
  * Requests that children of the node with given id are returned to the caller in form of
 * `setChildNodes` events where not only immediate children are retrieved, but all children down to
 * the specified depth.
  *
  * @param {chromium.DevTools.DOM.RequestChildNodesParams} params
  * @return {!Promise<chromium.DevTools.DOM.RequestChildNodesResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.requestChildNodes = function(params) {};

/**
  * Requests that the node is sent to the caller given the JavaScript node object reference. All
 * nodes that form the path from the node to the root are also sent to the client as a series of
 * `setChildNodes` notifications.
  *
  * @param {chromium.DevTools.DOM.RequestNodeParams} params
  * @return {!Promise<chromium.DevTools.DOM.RequestNodeResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.requestNode = function(params) {};

/**
  * Resolves the JavaScript node object for a given NodeId or BackendNodeId.
  *
  * @param {chromium.DevTools.DOM.ResolveNodeParams=} opt_params
  * @return {!Promise<chromium.DevTools.DOM.ResolveNodeResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.resolveNode = function(opt_params) {};

/**
  * Sets attribute for an element with given id.
  *
  * @param {chromium.DevTools.DOM.SetAttributeValueParams} params
  * @return {!Promise<chromium.DevTools.DOM.SetAttributeValueResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.setAttributeValue = function(params) {};

/**
  * Sets attributes on element with given id. This method is useful when user edits some existing
 * attribute value and types in several attribute name/value pairs.
  *
  * @param {chromium.DevTools.DOM.SetAttributesAsTextParams} params
  * @return {!Promise<chromium.DevTools.DOM.SetAttributesAsTextResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.setAttributesAsText = function(params) {};

/**
  * Sets files for the given file input element.
  *
  * @param {chromium.DevTools.DOM.SetFileInputFilesParams} params
  * @return {!Promise<chromium.DevTools.DOM.SetFileInputFilesResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.setFileInputFiles = function(params) {};

/**
  * Enables console to refer to the node with given id via $x (see Command Line API for more details
 * $x functions).
  *
  * @param {chromium.DevTools.DOM.SetInspectedNodeParams} params
  * @return {!Promise<chromium.DevTools.DOM.SetInspectedNodeResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.setInspectedNode = function(params) {};

/**
  * Sets node name for a node with given id.
  *
  * @param {chromium.DevTools.DOM.SetNodeNameParams} params
  * @return {!Promise<chromium.DevTools.DOM.SetNodeNameResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.setNodeName = function(params) {};

/**
  * Sets node value for a node with given id.
  *
  * @param {chromium.DevTools.DOM.SetNodeValueParams} params
  * @return {!Promise<chromium.DevTools.DOM.SetNodeValueResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.setNodeValue = function(params) {};

/**
  * Sets node HTML markup, returns new node id.
  *
  * @param {chromium.DevTools.DOM.SetOuterHTMLParams} params
  * @return {!Promise<chromium.DevTools.DOM.SetOuterHTMLResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.setOuterHTML = function(params) {};

/**
  * Undoes the last performed action.
  *
  * @return {!Promise<chromium.DevTools.DOM.UndoResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.undo = function() {};

/**
  * Returns iframe node that owns iframe with the given domain.
  *
  * @param {chromium.DevTools.DOM.GetFrameOwnerParams} params
  * @return {!Promise<chromium.DevTools.DOM.GetFrameOwnerResult>}
  */
chromium.DevTools.ExperimentalDOM.prototype.getFrameOwner = function(params) {};


/**
  * Fired when `Element`'s attribute is modified.
  *
  * @param {!function(!chromium.DevTools.DOM.AttributeModifiedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalDOM.prototype.onAttributeModified = function(listener) {};

/**
  * Fired when `Element`'s attribute is removed.
  *
  * @param {!function(!chromium.DevTools.DOM.AttributeRemovedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalDOM.prototype.onAttributeRemoved = function(listener) {};

/**
  * Mirrors `DOMCharacterDataModified` event.
  *
  * @param {!function(!chromium.DevTools.DOM.CharacterDataModifiedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalDOM.prototype.onCharacterDataModified = function(listener) {};

/**
  * Fired when `Container`'s child node count has changed.
  *
  * @param {!function(!chromium.DevTools.DOM.ChildNodeCountUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalDOM.prototype.onChildNodeCountUpdated = function(listener) {};

/**
  * Mirrors `DOMNodeInserted` event.
  *
  * @param {!function(!chromium.DevTools.DOM.ChildNodeInsertedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalDOM.prototype.onChildNodeInserted = function(listener) {};

/**
  * Mirrors `DOMNodeRemoved` event.
  *
  * @param {!function(!chromium.DevTools.DOM.ChildNodeRemovedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalDOM.prototype.onChildNodeRemoved = function(listener) {};

/**
  * Called when distrubution is changed.
  *
  * @param {!function(!chromium.DevTools.DOM.DistributedNodesUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalDOM.prototype.onDistributedNodesUpdated = function(listener) {};

/**
  * Fired when `Document` has been totally updated. Node ids are no longer valid.
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalDOM.prototype.onDocumentUpdated = function(listener) {};

/**
  * Fired when `Element`'s inline style is modified via a CSS property modification.
  *
  * @param {!function(!chromium.DevTools.DOM.InlineStyleInvalidatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalDOM.prototype.onInlineStyleInvalidated = function(listener) {};

/**
  * Called when a pseudo element is added to an element.
  *
  * @param {!function(!chromium.DevTools.DOM.PseudoElementAddedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalDOM.prototype.onPseudoElementAdded = function(listener) {};

/**
  * Called when a pseudo element is removed from an element.
  *
  * @param {!function(!chromium.DevTools.DOM.PseudoElementRemovedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalDOM.prototype.onPseudoElementRemoved = function(listener) {};

/**
  * Fired when backend wants to provide client with the missing DOM structure. This happens upon
 * most of the calls requesting node ids.
  *
  * @param {!function(!chromium.DevTools.DOM.SetChildNodesParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalDOM.prototype.onSetChildNodes = function(listener) {};

/**
  * Called when shadow root is popped from the element.
  *
  * @param {!function(!chromium.DevTools.DOM.ShadowRootPoppedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalDOM.prototype.onShadowRootPopped = function(listener) {};

/**
  * Called when shadow root is pushed into the element.
  *
  * @param {!function(!chromium.DevTools.DOM.ShadowRootPushedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalDOM.prototype.onShadowRootPushed = function(listener) {};



/**
  * Collects class names for the node with given id and all of it's child nodes.
  *
  * @param {chromium.DevTools.DOM.CollectClassNamesFromSubtreeParams} params
  * @return {!Promise<chromium.DevTools.DOM.CollectClassNamesFromSubtreeResult>}
  */
chromium.DevTools.DOM.prototype.collectClassNamesFromSubtree = function(params) {};

/**
  * Creates a deep copy of the specified node and places it into the target container before the
 * given anchor.
  *
  * @param {chromium.DevTools.DOM.CopyToParams} params
  * @return {!Promise<chromium.DevTools.DOM.CopyToResult>}
  */
chromium.DevTools.DOM.prototype.copyTo = function(params) {};

/**
  * Describes node given its id, does not require domain to be enabled. Does not start tracking any
 * objects, can be used for automation.
  *
  * @param {chromium.DevTools.DOM.DescribeNodeParams=} opt_params
  * @return {!Promise<chromium.DevTools.DOM.DescribeNodeResult>}
  */
chromium.DevTools.DOM.prototype.describeNode = function(opt_params) {};

/**
  * Disables DOM agent for the given page.
  *
  * @return {!Promise<chromium.DevTools.DOM.DisableResult>}
  */
chromium.DevTools.DOM.prototype.disable = function() {};

/**
  * Discards search results from the session with the given id. `getSearchResults` should no longer
 * be called for that search.
  *
  * @param {chromium.DevTools.DOM.DiscardSearchResultsParams} params
  * @return {!Promise<chromium.DevTools.DOM.DiscardSearchResultsResult>}
  */
chromium.DevTools.DOM.prototype.discardSearchResults = function(params) {};

/**
  * Enables DOM agent for the given page.
  *
  * @return {!Promise<chromium.DevTools.DOM.EnableResult>}
  */
chromium.DevTools.DOM.prototype.enable = function() {};

/**
  * Focuses the given element.
  *
  * @param {chromium.DevTools.DOM.FocusParams=} opt_params
  * @return {!Promise<chromium.DevTools.DOM.FocusResult>}
  */
chromium.DevTools.DOM.prototype.focus = function(opt_params) {};

/**
  * Returns attributes for the specified node.
  *
  * @param {chromium.DevTools.DOM.GetAttributesParams} params
  * @return {!Promise<chromium.DevTools.DOM.GetAttributesResult>}
  */
chromium.DevTools.DOM.prototype.getAttributes = function(params) {};

/**
  * Returns boxes for the given node.
  *
  * @param {chromium.DevTools.DOM.GetBoxModelParams=} opt_params
  * @return {!Promise<chromium.DevTools.DOM.GetBoxModelResult>}
  */
chromium.DevTools.DOM.prototype.getBoxModel = function(opt_params) {};

/**
  * Returns the root DOM node (and optionally the subtree) to the caller.
  *
  * @param {chromium.DevTools.DOM.GetDocumentParams=} opt_params
  * @return {!Promise<chromium.DevTools.DOM.GetDocumentResult>}
  */
chromium.DevTools.DOM.prototype.getDocument = function(opt_params) {};

/**
  * Returns the root DOM node (and optionally the subtree) to the caller.
  *
  * @param {chromium.DevTools.DOM.GetFlattenedDocumentParams=} opt_params
  * @return {!Promise<chromium.DevTools.DOM.GetFlattenedDocumentResult>}
  */
chromium.DevTools.DOM.prototype.getFlattenedDocument = function(opt_params) {};

/**
  * Returns node id at given location.
  *
  * @param {chromium.DevTools.DOM.GetNodeForLocationParams} params
  * @return {!Promise<chromium.DevTools.DOM.GetNodeForLocationResult>}
  */
chromium.DevTools.DOM.prototype.getNodeForLocation = function(params) {};

/**
  * Returns node's HTML markup.
  *
  * @param {chromium.DevTools.DOM.GetOuterHTMLParams=} opt_params
  * @return {!Promise<chromium.DevTools.DOM.GetOuterHTMLResult>}
  */
chromium.DevTools.DOM.prototype.getOuterHTML = function(opt_params) {};

/**
  * Returns the id of the nearest ancestor that is a relayout boundary.
  *
  * @param {chromium.DevTools.DOM.GetRelayoutBoundaryParams} params
  * @return {!Promise<chromium.DevTools.DOM.GetRelayoutBoundaryResult>}
  */
chromium.DevTools.DOM.prototype.getRelayoutBoundary = function(params) {};

/**
  * Returns search results from given `fromIndex` to given `toIndex` from the search with the given
 * identifier.
  *
  * @param {chromium.DevTools.DOM.GetSearchResultsParams} params
  * @return {!Promise<chromium.DevTools.DOM.GetSearchResultsResult>}
  */
chromium.DevTools.DOM.prototype.getSearchResults = function(params) {};

/**
  * Hides any highlight.
  *
  * @return {!Promise<chromium.DevTools.DOM.HideHighlightResult>}
  */
chromium.DevTools.DOM.prototype.hideHighlight = function() {};

/**
  * Highlights DOM node.
  *
  * @return {!Promise<chromium.DevTools.DOM.HighlightNodeResult>}
  */
chromium.DevTools.DOM.prototype.highlightNode = function() {};

/**
  * Highlights given rectangle.
  *
  * @return {!Promise<chromium.DevTools.DOM.HighlightRectResult>}
  */
chromium.DevTools.DOM.prototype.highlightRect = function() {};

/**
  * Marks last undoable state.
  *
  * @return {!Promise<chromium.DevTools.DOM.MarkUndoableStateResult>}
  */
chromium.DevTools.DOM.prototype.markUndoableState = function() {};

/**
  * Moves node into the new container, places it before the given anchor.
  *
  * @param {chromium.DevTools.DOM.MoveToParams} params
  * @return {!Promise<chromium.DevTools.DOM.MoveToResult>}
  */
chromium.DevTools.DOM.prototype.moveTo = function(params) {};

/**
  * Searches for a given string in the DOM tree. Use `getSearchResults` to access search results or
 * `cancelSearch` to end this search session.
  *
  * @param {chromium.DevTools.DOM.PerformSearchParams} params
  * @return {!Promise<chromium.DevTools.DOM.PerformSearchResult>}
  */
chromium.DevTools.DOM.prototype.performSearch = function(params) {};

/**
  * Requests that the node is sent to the caller given its path. // FIXME, use XPath
  *
  * @param {chromium.DevTools.DOM.PushNodeByPathToFrontendParams} params
  * @return {!Promise<chromium.DevTools.DOM.PushNodeByPathToFrontendResult>}
  */
chromium.DevTools.DOM.prototype.pushNodeByPathToFrontend = function(params) {};

/**
  * Requests that a batch of nodes is sent to the caller given their backend node ids.
  *
  * @param {chromium.DevTools.DOM.PushNodesByBackendIdsToFrontendParams} params
  * @return {!Promise<chromium.DevTools.DOM.PushNodesByBackendIdsToFrontendResult>}
  */
chromium.DevTools.DOM.prototype.pushNodesByBackendIdsToFrontend = function(params) {};

/**
  * Executes `querySelector` on a given node.
  *
  * @param {chromium.DevTools.DOM.QuerySelectorParams} params
  * @return {!Promise<chromium.DevTools.DOM.QuerySelectorResult>}
  */
chromium.DevTools.DOM.prototype.querySelector = function(params) {};

/**
  * Executes `querySelectorAll` on a given node.
  *
  * @param {chromium.DevTools.DOM.QuerySelectorAllParams} params
  * @return {!Promise<chromium.DevTools.DOM.QuerySelectorAllResult>}
  */
chromium.DevTools.DOM.prototype.querySelectorAll = function(params) {};

/**
  * Re-does the last undone action.
  *
  * @return {!Promise<chromium.DevTools.DOM.RedoResult>}
  */
chromium.DevTools.DOM.prototype.redo = function() {};

/**
  * Removes attribute with given name from an element with given id.
  *
  * @param {chromium.DevTools.DOM.RemoveAttributeParams} params
  * @return {!Promise<chromium.DevTools.DOM.RemoveAttributeResult>}
  */
chromium.DevTools.DOM.prototype.removeAttribute = function(params) {};

/**
  * Removes node with given id.
  *
  * @param {chromium.DevTools.DOM.RemoveNodeParams} params
  * @return {!Promise<chromium.DevTools.DOM.RemoveNodeResult>}
  */
chromium.DevTools.DOM.prototype.removeNode = function(params) {};

/**
  * Requests that children of the node with given id are returned to the caller in form of
 * `setChildNodes` events where not only immediate children are retrieved, but all children down to
 * the specified depth.
  *
  * @param {chromium.DevTools.DOM.RequestChildNodesParams} params
  * @return {!Promise<chromium.DevTools.DOM.RequestChildNodesResult>}
  */
chromium.DevTools.DOM.prototype.requestChildNodes = function(params) {};

/**
  * Requests that the node is sent to the caller given the JavaScript node object reference. All
 * nodes that form the path from the node to the root are also sent to the client as a series of
 * `setChildNodes` notifications.
  *
  * @param {chromium.DevTools.DOM.RequestNodeParams} params
  * @return {!Promise<chromium.DevTools.DOM.RequestNodeResult>}
  */
chromium.DevTools.DOM.prototype.requestNode = function(params) {};

/**
  * Resolves the JavaScript node object for a given NodeId or BackendNodeId.
  *
  * @param {chromium.DevTools.DOM.ResolveNodeParams=} opt_params
  * @return {!Promise<chromium.DevTools.DOM.ResolveNodeResult>}
  */
chromium.DevTools.DOM.prototype.resolveNode = function(opt_params) {};

/**
  * Sets attribute for an element with given id.
  *
  * @param {chromium.DevTools.DOM.SetAttributeValueParams} params
  * @return {!Promise<chromium.DevTools.DOM.SetAttributeValueResult>}
  */
chromium.DevTools.DOM.prototype.setAttributeValue = function(params) {};

/**
  * Sets attributes on element with given id. This method is useful when user edits some existing
 * attribute value and types in several attribute name/value pairs.
  *
  * @param {chromium.DevTools.DOM.SetAttributesAsTextParams} params
  * @return {!Promise<chromium.DevTools.DOM.SetAttributesAsTextResult>}
  */
chromium.DevTools.DOM.prototype.setAttributesAsText = function(params) {};

/**
  * Sets files for the given file input element.
  *
  * @param {chromium.DevTools.DOM.SetFileInputFilesParams} params
  * @return {!Promise<chromium.DevTools.DOM.SetFileInputFilesResult>}
  */
chromium.DevTools.DOM.prototype.setFileInputFiles = function(params) {};

/**
  * Enables console to refer to the node with given id via $x (see Command Line API for more details
 * $x functions).
  *
  * @param {chromium.DevTools.DOM.SetInspectedNodeParams} params
  * @return {!Promise<chromium.DevTools.DOM.SetInspectedNodeResult>}
  */
chromium.DevTools.DOM.prototype.setInspectedNode = function(params) {};

/**
  * Sets node name for a node with given id.
  *
  * @param {chromium.DevTools.DOM.SetNodeNameParams} params
  * @return {!Promise<chromium.DevTools.DOM.SetNodeNameResult>}
  */
chromium.DevTools.DOM.prototype.setNodeName = function(params) {};

/**
  * Sets node value for a node with given id.
  *
  * @param {chromium.DevTools.DOM.SetNodeValueParams} params
  * @return {!Promise<chromium.DevTools.DOM.SetNodeValueResult>}
  */
chromium.DevTools.DOM.prototype.setNodeValue = function(params) {};

/**
  * Sets node HTML markup, returns new node id.
  *
  * @param {chromium.DevTools.DOM.SetOuterHTMLParams} params
  * @return {!Promise<chromium.DevTools.DOM.SetOuterHTMLResult>}
  */
chromium.DevTools.DOM.prototype.setOuterHTML = function(params) {};

/**
  * Undoes the last performed action.
  *
  * @return {!Promise<chromium.DevTools.DOM.UndoResult>}
  */
chromium.DevTools.DOM.prototype.undo = function() {};

/**
  * Returns iframe node that owns iframe with the given domain.
  *
  * @param {chromium.DevTools.DOM.GetFrameOwnerParams} params
  * @return {!Promise<chromium.DevTools.DOM.GetFrameOwnerResult>}
  */
chromium.DevTools.DOM.prototype.getFrameOwner = function(params) {};


/**
  * Fired when `Element`'s attribute is modified.
  *
  * @param {!function(!chromium.DevTools.DOM.AttributeModifiedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.DOM.prototype.onAttributeModified = function(listener) {};

/**
  * Fired when `Element`'s attribute is removed.
  *
  * @param {!function(!chromium.DevTools.DOM.AttributeRemovedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.DOM.prototype.onAttributeRemoved = function(listener) {};

/**
  * Mirrors `DOMCharacterDataModified` event.
  *
  * @param {!function(!chromium.DevTools.DOM.CharacterDataModifiedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.DOM.prototype.onCharacterDataModified = function(listener) {};

/**
  * Fired when `Container`'s child node count has changed.
  *
  * @param {!function(!chromium.DevTools.DOM.ChildNodeCountUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.DOM.prototype.onChildNodeCountUpdated = function(listener) {};

/**
  * Mirrors `DOMNodeInserted` event.
  *
  * @param {!function(!chromium.DevTools.DOM.ChildNodeInsertedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.DOM.prototype.onChildNodeInserted = function(listener) {};

/**
  * Mirrors `DOMNodeRemoved` event.
  *
  * @param {!function(!chromium.DevTools.DOM.ChildNodeRemovedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.DOM.prototype.onChildNodeRemoved = function(listener) {};

/**
  * Called when distrubution is changed.
  *
  * @param {!function(!chromium.DevTools.DOM.DistributedNodesUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.DOM.prototype.onDistributedNodesUpdated = function(listener) {};

/**
  * Fired when `Document` has been totally updated. Node ids are no longer valid.
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.DOM.prototype.onDocumentUpdated = function(listener) {};

/**
  * Fired when `Element`'s inline style is modified via a CSS property modification.
  *
  * @param {!function(!chromium.DevTools.DOM.InlineStyleInvalidatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.DOM.prototype.onInlineStyleInvalidated = function(listener) {};

/**
  * Called when a pseudo element is added to an element.
  *
  * @param {!function(!chromium.DevTools.DOM.PseudoElementAddedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.DOM.prototype.onPseudoElementAdded = function(listener) {};

/**
  * Called when a pseudo element is removed from an element.
  *
  * @param {!function(!chromium.DevTools.DOM.PseudoElementRemovedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.DOM.prototype.onPseudoElementRemoved = function(listener) {};

/**
  * Fired when backend wants to provide client with the missing DOM structure. This happens upon
 * most of the calls requesting node ids.
  *
  * @param {!function(!chromium.DevTools.DOM.SetChildNodesParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.DOM.prototype.onSetChildNodes = function(listener) {};

/**
  * Called when shadow root is popped from the element.
  *
  * @param {!function(!chromium.DevTools.DOM.ShadowRootPoppedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.DOM.prototype.onShadowRootPopped = function(listener) {};

/**
  * Called when shadow root is pushed into the element.
  *
  * @param {!function(!chromium.DevTools.DOM.ShadowRootPushedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.DOM.prototype.onShadowRootPushed = function(listener) {};
