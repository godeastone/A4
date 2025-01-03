// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the DOMSnapshot Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalDOMSnapshot');
goog.provide('chromium.DevTools.DOMSnapshot');
goog.require('chromium.DevTools.Connection');
goog.require('chromium.DevTools.CSS');
goog.require('chromium.DevTools.DOM');
goog.require('chromium.DevTools.DOMDebugger');
goog.require('chromium.DevTools.Page');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;
const CSS = chromium.DevTools.CSS;
const DOM = chromium.DevTools.DOM;
const DOMDebugger = chromium.DevTools.DOMDebugger;
const Page = chromium.DevTools.Page;

/**
 * Experimental bindings for the DOMSnapshot DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalDOMSnapshot = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalDOMSnapshot = chromium.DevTools.ExperimentalDOMSnapshot;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalDOMSnapshot.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the DOMSnapshot DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.DOMSnapshot = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalDOMSnapshot} */
  this.experimental = new ExperimentalDOMSnapshot(connection);
}

const DOMSnapshot = chromium.DevTools.DOMSnapshot;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
DOMSnapshot.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}


/**
 * A Node in the DOM tree.
 *
 * nodeType: `Node`'s nodeType.
 * nodeName: `Node`'s nodeName.
 * nodeValue: `Node`'s nodeValue.
 * textValue: Only set for textarea elements, contains the text value.
 * inputValue: Only set for input elements, contains the input's associated text value.
 * inputChecked: Only set for radio and checkbox input elements, indicates if the element has been checked
 * optionSelected: Only set for option elements, indicates if the element has been selected
 * backendNodeId: `Node`'s id, corresponds to DOM.Node.backendNodeId.
 * childNodeIndexes: The indexes of the node's child nodes in the `domNodes` array returned by `getSnapshot`, if
 *   any.
 * attributes: Attributes of an `Element` node.
 * pseudoElementIndexes: Indexes of pseudo elements associated with this node in the `domNodes` array returned by
 *   `getSnapshot`, if any.
 * layoutNodeIndex: The index of the node's related layout tree node in the `layoutTreeNodes` array returned by
 *   `getSnapshot`, if any.
 * documentURL: Document URL that `Document` or `FrameOwner` node points to.
 * baseURL: Base URL that `Document` or `FrameOwner` node uses for URL completion.
 * contentLanguage: Only set for documents, contains the document's content language.
 * documentEncoding: Only set for documents, contains the document's character set encoding.
 * publicId: `DocumentType` node's publicId.
 * systemId: `DocumentType` node's systemId.
 * frameId: Frame ID for frame owner elements and also for the document node.
 * contentDocumentIndex: The index of a frame owner element's content document in the `domNodes` array returned by
 *   `getSnapshot`, if any.
 * importedDocumentIndex: Index of the imported document's node of a link element in the `domNodes` array returned by
 *   `getSnapshot`, if any.
 * templateContentIndex: Index of the content node of a template element in the `domNodes` array returned by
 *   `getSnapshot`.
 * pseudoType: Type of a pseudo element node.
 * shadowRootType: Shadow root type.
 * isClickable: Whether this DOM node responds to mouse clicks. This includes nodes that have had click
 *   event listeners attached via JavaScript as well as anchor tags that naturally navigate when
 *   clicked.
 * eventListeners: Details of the node's event listeners, if any.
 * currentSourceURL: The selected url for nodes with a srcset attribute.
 * originURL: The url of the script (if any) that generates this node.
 *
 * @typedef {{
 *   nodeType: number,
 *   nodeName: string,
 *   nodeValue: string,
 *   textValue: (string|undefined),
 *   inputValue: (string|undefined),
 *   inputChecked: (boolean|undefined),
 *   optionSelected: (boolean|undefined),
 *   backendNodeId: number,
 *   childNodeIndexes: (!Array.<number>|undefined),
 *   attributes: (!Array.<!DOMSnapshot.NameValue>|undefined),
 *   pseudoElementIndexes: (!Array.<number>|undefined),
 *   layoutNodeIndex: (number|undefined),
 *   documentURL: (string|undefined),
 *   baseURL: (string|undefined),
 *   contentLanguage: (string|undefined),
 *   documentEncoding: (string|undefined),
 *   publicId: (string|undefined),
 *   systemId: (string|undefined),
 *   frameId: (string|undefined),
 *   contentDocumentIndex: (number|undefined),
 *   importedDocumentIndex: (number|undefined),
 *   templateContentIndex: (number|undefined),
 *   pseudoType: (!DOM.PseudoType|undefined),
 *   shadowRootType: (!DOM.ShadowRootType|undefined),
 *   isClickable: (boolean|undefined),
 *   eventListeners: (!Array.<!DOMDebugger.EventListener>|undefined),
 *   currentSourceURL: (string|undefined),
 *   originURL: (string|undefined)
 * }}
 */
DOMSnapshot.DOMNode;

/**
 * Details of post layout rendered text positions. The exact layout should not be regarded as
 * stable and may change between versions.
 *
 * boundingBox: The absolute position bounding box.
 * startCharacterIndex: The starting index in characters, for this post layout textbox substring. Characters that
 *   would be represented as a surrogate pair in UTF-16 have length 2.
 * numCharacters: The number of characters in this post layout textbox substring. Characters that would be
 *   represented as a surrogate pair in UTF-16 have length 2.
 *
 * @typedef {{
 *   boundingBox: !DOM.Rect,
 *   startCharacterIndex: number,
 *   numCharacters: number
 * }}
 */
DOMSnapshot.InlineTextBox;

/**
 * Details of an element in the DOM tree with a LayoutObject.
 *
 * domNodeIndex: The index of the related DOM node in the `domNodes` array returned by `getSnapshot`.
 * boundingBox: The absolute position bounding box.
 * layoutText: Contents of the LayoutText, if any.
 * inlineTextNodes: The post-layout inline text nodes, if any.
 * styleIndex: Index into the `computedStyles` array returned by `getSnapshot`.
 * paintOrder: Global paint order index, which is determined by the stacking order of the nodes. Nodes
 *   that are painted together will have the same index. Only provided if includePaintOrder in
 *   getSnapshot was true.
 *
 * @typedef {{
 *   domNodeIndex: number,
 *   boundingBox: !DOM.Rect,
 *   layoutText: (string|undefined),
 *   inlineTextNodes: (!Array.<!DOMSnapshot.InlineTextBox>|undefined),
 *   styleIndex: (number|undefined),
 *   paintOrder: (number|undefined)
 * }}
 */
DOMSnapshot.LayoutTreeNode;

/**
 * A subset of the full ComputedStyle as defined by the request whitelist.
 *
 * properties: Name/value pairs of computed style properties.
 *
 * @typedef {{
 *   properties: !Array.<!DOMSnapshot.NameValue>
 * }}
 */
DOMSnapshot.ComputedStyle;

/**
 * A name/value pair.
 *
 * name: Attribute/property name.
 * value: Attribute/property value.
 *
 * @typedef {{
 *   name: string,
 *   value: string
 * }}
 */
DOMSnapshot.NameValue;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
DOMSnapshot.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
DOMSnapshot.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
DOMSnapshot.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
DOMSnapshot.EnableResult;

/**
 * Parameters for the GetSnapshot command.
 *
 * computedStyleWhitelist: Whitelist of computed styles to return.
 * includeEventListeners: Whether or not to retrieve details of DOM listeners (default false).
 * includePaintOrder: Whether to determine and include the paint order index of LayoutTreeNodes (default false).
 * includeUserAgentShadowTree: Whether to include UA shadow tree in the snapshot (default false).
 *
 * @typedef {{
 *   computedStyleWhitelist: !Array.<string>,
 *   includeEventListeners: (boolean|undefined),
 *   includePaintOrder: (boolean|undefined),
 *   includeUserAgentShadowTree: (boolean|undefined)
 * }}
 */
DOMSnapshot.GetSnapshotParams;

/**
 * Result for the GetSnapshot command.
 *
 * domNodes: The nodes in the DOM tree. The DOMNode at index 0 corresponds to the root document.
 * layoutTreeNodes: The nodes in the layout tree.
 * computedStyles: Whitelisted ComputedStyle properties for each node in the layout tree.
 *
 * @typedef {{
 *   domNodes: !Array.<!DOMSnapshot.DOMNode>,
 *   layoutTreeNodes: !Array.<!DOMSnapshot.LayoutTreeNode>,
 *   computedStyles: !Array.<!DOMSnapshot.ComputedStyle>
 * }}
 */
DOMSnapshot.GetSnapshotResult;



/**
  * Disables DOM snapshot agent for the given page.
  *
  * @return {!Promise<DOMSnapshot.DisableResult>}
  */
ExperimentalDOMSnapshot.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('DOMSnapshot.disable', {});
};

/**
  * Enables DOM snapshot agent for the given page.
  *
  * @return {!Promise<DOMSnapshot.EnableResult>}
  */
ExperimentalDOMSnapshot.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('DOMSnapshot.enable', {});
};

/**
  * Returns a document snapshot, including the full DOM tree of the root node (including iframes,
 * template contents, and imported documents) in a flattened array, as well as layout and
 * white-listed computed style information for the nodes. Shadow DOM in the returned DOM tree is
 * flattened.
  *
  * @param {DOMSnapshot.GetSnapshotParams} params
  * @return {!Promise<DOMSnapshot.GetSnapshotResult>}
  */
ExperimentalDOMSnapshot.prototype.getSnapshot = function(params) {
  return this.connection_.sendDevToolsMessage('DOMSnapshot.getSnapshot', params);
};




/**
  * Disables DOM snapshot agent for the given page.
  *
  * @return {!Promise<DOMSnapshot.DisableResult>}
  */
DOMSnapshot.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('DOMSnapshot.disable', {});
};

/**
  * Enables DOM snapshot agent for the given page.
  *
  * @return {!Promise<DOMSnapshot.EnableResult>}
  */
DOMSnapshot.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('DOMSnapshot.enable', {});
};

/**
  * Returns a document snapshot, including the full DOM tree of the root node (including iframes,
 * template contents, and imported documents) in a flattened array, as well as layout and
 * white-listed computed style information for the nodes. Shadow DOM in the returned DOM tree is
 * flattened.
  *
  * @param {DOMSnapshot.GetSnapshotParams} params
  * @return {!Promise<DOMSnapshot.GetSnapshotResult>}
  */
DOMSnapshot.prototype.getSnapshot = function(params) {
  return this.connection_.sendDevToolsMessage('DOMSnapshot.getSnapshot', params);
};


});  // goog.scope

