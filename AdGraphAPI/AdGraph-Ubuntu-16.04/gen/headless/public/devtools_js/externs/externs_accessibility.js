// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the Accessibility DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalAccessibility = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalAccessibility.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the Accessibility DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Accessibility = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalAccessibility} */
chromium.DevTools.Accessibility.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.Accessibility.prototype.removeEventListener = function(id) {};

/**
 * Enum of possible property types.
 *
 * @enum {string}
 */
chromium.DevTools.Accessibility.AXValueType = {
    BOOLEAN: "boolean",
    TRISTATE: "tristate",
    BOOLEAN_OR_UNDEFINED: "booleanOrUndefined",
    IDREF: "idref",
    IDREF_LIST: "idrefList",
    INTEGER: "integer",
    NODE: "node",
    NODE_LIST: "nodeList",
    NUMBER: "number",
    STRING: "string",
    COMPUTED_STRING: "computedString",
    TOKEN: "token",
    TOKEN_LIST: "tokenList",
    DOM_RELATION: "domRelation",
    ROLE: "role",
    INTERNAL_ROLE: "internalRole",
    VALUE_UNDEFINED: "valueUndefined"
};

/**
 * Enum of possible property sources.
 *
 * @enum {string}
 */
chromium.DevTools.Accessibility.AXValueSourceType = {
    ATTRIBUTE: "attribute",
    IMPLICIT: "implicit",
    STYLE: "style",
    CONTENTS: "contents",
    PLACEHOLDER: "placeholder",
    RELATED_ELEMENT: "relatedElement"
};

/**
 * Enum of possible native property sources (as a subtype of a particular AXValueSourceType).
 *
 * @enum {string}
 */
chromium.DevTools.Accessibility.AXValueNativeSourceType = {
    FIGCAPTION: "figcaption",
    LABEL: "label",
    LABELFOR: "labelfor",
    LABELWRAPPED: "labelwrapped",
    LEGEND: "legend",
    TABLECAPTION: "tablecaption",
    TITLE: "title",
    OTHER: "other"
};

/**
 * Values of AXProperty name: from 'busy' to 'roledescription' - states which apply to every AX
 * node, from 'live' to 'root' - attributes which apply to nodes in live regions, from
 * 'autocomplete' to 'valuetext' - attributes which apply to widgets, from 'checked' to 'selected'
 * - states which apply to widgets, from 'activedescendant' to 'owns' - relationships between
 * elements other than parent/child/sibling.
 *
 * @enum {string}
 */
chromium.DevTools.Accessibility.AXPropertyName = {
    BUSY: "busy",
    DISABLED: "disabled",
    HIDDEN: "hidden",
    HIDDEN_ROOT: "hiddenRoot",
    INVALID: "invalid",
    KEYSHORTCUTS: "keyshortcuts",
    ROLEDESCRIPTION: "roledescription",
    LIVE: "live",
    ATOMIC: "atomic",
    RELEVANT: "relevant",
    ROOT: "root",
    AUTOCOMPLETE: "autocomplete",
    HAS_POPUP: "hasPopup",
    LEVEL: "level",
    MULTISELECTABLE: "multiselectable",
    ORIENTATION: "orientation",
    MULTILINE: "multiline",
    READONLY: "readonly",
    REQUIRED: "required",
    VALUEMIN: "valuemin",
    VALUEMAX: "valuemax",
    VALUETEXT: "valuetext",
    CHECKED: "checked",
    EXPANDED: "expanded",
    MODAL: "modal",
    PRESSED: "pressed",
    SELECTED: "selected",
    ACTIVEDESCENDANT: "activedescendant",
    CONTROLS: "controls",
    DESCRIBEDBY: "describedby",
    DETAILS: "details",
    ERRORMESSAGE: "errormessage",
    FLOWTO: "flowto",
    LABELLEDBY: "labelledby",
    OWNS: "owns"
};


/**
 * A single source for a computed AX property.
 *
 * type: What type of source this is.
 * value: The value of this property source.
 * attribute: The name of the relevant attribute, if any.
 * attributeValue: The value of the relevant attribute, if any.
 * superseded: Whether this source is superseded by a higher priority source.
 * nativeSource: The native markup source for this value, e.g. a <label> element.
 * nativeSourceValue: The value, such as a node or node list, of the native source.
 * invalid: Whether the value for this property is invalid.
 * invalidReason: Reason for the value being invalid, if it is.
 *
 * @typedef {{
 *   type: !chromium.DevTools.Accessibility.AXValueSourceType,
 *   value: (!chromium.DevTools.Accessibility.AXValue|undefined),
 *   attribute: (string|undefined),
 *   attributeValue: (!chromium.DevTools.Accessibility.AXValue|undefined),
 *   superseded: (boolean|undefined),
 *   nativeSource: (!chromium.DevTools.Accessibility.AXValueNativeSourceType|undefined),
 *   nativeSourceValue: (!chromium.DevTools.Accessibility.AXValue|undefined),
 *   invalid: (boolean|undefined),
 *   invalidReason: (string|undefined)
 * }}
 */
chromium.DevTools.Accessibility.AXValueSource;

/**
 * backendDOMNodeId: The BackendNodeId of the related DOM node.
 * idref: The IDRef value provided, if any.
 * text: The text alternative of this node in the current context.
 *
 * @typedef {{
 *   backendDOMNodeId: number,
 *   idref: (string|undefined),
 *   text: (string|undefined)
 * }}
 */
chromium.DevTools.Accessibility.AXRelatedNode;

/**
 * name: The name of this property.
 * value: The value of this property.
 *
 * @typedef {{
 *   name: !chromium.DevTools.Accessibility.AXPropertyName,
 *   value: !chromium.DevTools.Accessibility.AXValue
 * }}
 */
chromium.DevTools.Accessibility.AXProperty;

/**
 * A single computed AX property.
 *
 * type: The type of this value.
 * value: The computed value of this property.
 * relatedNodes: One or more related nodes, if applicable.
 * sources: The sources which contributed to the computation of this property.
 *
 * @typedef {{
 *   type: !chromium.DevTools.Accessibility.AXValueType,
 *   value: (*|undefined),
 *   relatedNodes: (!Array.<!chromium.DevTools.Accessibility.AXRelatedNode>|undefined),
 *   sources: (!Array.<!chromium.DevTools.Accessibility.AXValueSource>|undefined)
 * }}
 */
chromium.DevTools.Accessibility.AXValue;

/**
 * A node in the accessibility tree.
 *
 * nodeId: Unique identifier for this node.
 * ignored: Whether this node is ignored for accessibility
 * ignoredReasons: Collection of reasons why this node is hidden.
 * role: This `Node`'s role, whether explicit or implicit.
 * name: The accessible name for this `Node`.
 * description: The accessible description for this `Node`.
 * value: The value for this `Node`.
 * properties: All other properties
 * childIds: IDs for each of this node's child nodes.
 * backendDOMNodeId: The backend ID for the associated DOM node, if any.
 *
 * @typedef {{
 *   nodeId: string,
 *   ignored: boolean,
 *   ignoredReasons: (!Array.<!chromium.DevTools.Accessibility.AXProperty>|undefined),
 *   role: (!chromium.DevTools.Accessibility.AXValue|undefined),
 *   name: (!chromium.DevTools.Accessibility.AXValue|undefined),
 *   description: (!chromium.DevTools.Accessibility.AXValue|undefined),
 *   value: (!chromium.DevTools.Accessibility.AXValue|undefined),
 *   properties: (!Array.<!chromium.DevTools.Accessibility.AXProperty>|undefined),
 *   childIds: (!Array.<string>|undefined),
 *   backendDOMNodeId: (number|undefined)
 * }}
 */
chromium.DevTools.Accessibility.AXNode;

/**
 * Parameters for the GetPartialAXTree command.
 *
 * nodeId: Identifier of the node to get the partial accessibility tree for.
 * backendNodeId: Identifier of the backend node to get the partial accessibility tree for.
 * objectId: JavaScript object id of the node wrapper to get the partial accessibility tree for.
 * fetchRelatives: Whether to fetch this nodes ancestors, siblings and children. Defaults to true.
 *
 * @typedef {{
 *   nodeId: (number|undefined),
 *   backendNodeId: (number|undefined),
 *   objectId: (string|undefined),
 *   fetchRelatives: (boolean|undefined)
 * }}
 */
chromium.DevTools.Accessibility.GetPartialAXTreeParams;

/**
 * Result for the GetPartialAXTree command.
 *
 * nodes: The `Accessibility.AXNode` for this DOM node, if it exists, plus its ancestors, siblings and
 *    children, if requested.
 *
 * @typedef {{
 *   nodes: !Array.<!chromium.DevTools.Accessibility.AXNode>
 * }}
 */
chromium.DevTools.Accessibility.GetPartialAXTreeResult;



/**
  * Fetches the accessibility node and partial accessibility tree for this DOM node, if it exists.
  *
  * @param {chromium.DevTools.Accessibility.GetPartialAXTreeParams=} opt_params
  * @return {!Promise<chromium.DevTools.Accessibility.GetPartialAXTreeResult>}
  */
chromium.DevTools.ExperimentalAccessibility.prototype.getPartialAXTree = function(opt_params) {};




/**
  * Fetches the accessibility node and partial accessibility tree for this DOM node, if it exists.
  *
  * @param {chromium.DevTools.Accessibility.GetPartialAXTreeParams=} opt_params
  * @return {!Promise<chromium.DevTools.Accessibility.GetPartialAXTreeResult>}
  */
chromium.DevTools.Accessibility.prototype.getPartialAXTree = function(opt_params) {};

