// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the CSS Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalCSS');
goog.provide('chromium.DevTools.CSS');
goog.require('chromium.DevTools.Connection');
goog.require('chromium.DevTools.DOM');
goog.forwardDeclare('chromium.DevTools.Page.FrameId');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;
const DOM = chromium.DevTools.DOM;

/**
 * Experimental bindings for the CSS DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalCSS = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalCSS = chromium.DevTools.ExperimentalCSS;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalCSS.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the CSS DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.CSS = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalCSS} */
  this.experimental = new ExperimentalCSS(connection);
}

const CSS = chromium.DevTools.CSS;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
CSS.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Stylesheet type: "injected" for stylesheets injected via extension, "user-agent" for user-agent
 * stylesheets, "inspector" for stylesheets created by the inspector (i.e. those holding the "via
 * inspector" rules), "regular" for regular stylesheets.
 *
 * @enum {string}
 */
CSS.StyleSheetOrigin = {
    INJECTED: "injected",
    USER_AGENT: "user-agent",
    INSPECTOR: "inspector",
    REGULAR: "regular"
};

/**
 * Source of the media query: "mediaRule" if specified by a @media rule, "importRule" if
 * specified by an @import rule, "linkedSheet" if specified by a "media" attribute in a linked
 * stylesheet's LINK tag, "inlineSheet" if specified by a "media" attribute in an inline
 * stylesheet's STYLE tag.
 *
 * @enum {string}
 */
CSS.CSSMediaSource = {
    MEDIA_RULE: "mediaRule",
    IMPORT_RULE: "importRule",
    LINKED_SHEET: "linkedSheet",
    INLINE_SHEET: "inlineSheet"
};


/**
 * CSS rule collection for a single pseudo style.
 *
 * pseudoType: Pseudo element type.
 * matches: Matches of CSS rules applicable to the pseudo style.
 *
 * @typedef {{
 *   pseudoType: !DOM.PseudoType,
 *   matches: !Array.<!CSS.RuleMatch>
 * }}
 */
CSS.PseudoElementMatches;

/**
 * Inherited CSS rule collection from ancestor node.
 *
 * inlineStyle: The ancestor node's inline style, if any, in the style inheritance chain.
 * matchedCSSRules: Matches of CSS rules matching the ancestor node in the style inheritance chain.
 *
 * @typedef {{
 *   inlineStyle: (!CSS.CSSStyle|undefined),
 *   matchedCSSRules: !Array.<!CSS.RuleMatch>
 * }}
 */
CSS.InheritedStyleEntry;

/**
 * Match data for a CSS rule.
 *
 * rule: CSS rule in the match.
 * matchingSelectors: Matching selector indices in the rule's selectorList selectors (0-based).
 *
 * @typedef {{
 *   rule: !CSS.CSSRule,
 *   matchingSelectors: !Array.<number>
 * }}
 */
CSS.RuleMatch;

/**
 * Data for a simple selector (these are delimited by commas in a selector list).
 *
 * text: Value text.
 * range: Value range in the underlying resource (if available).
 *
 * @typedef {{
 *   text: string,
 *   range: (!CSS.SourceRange|undefined)
 * }}
 */
CSS.Value;

/**
 * Selector list data.
 *
 * selectors: Selectors in the list.
 * text: Rule selector text.
 *
 * @typedef {{
 *   selectors: !Array.<!CSS.Value>,
 *   text: string
 * }}
 */
CSS.SelectorList;

/**
 * CSS stylesheet metainformation.
 *
 * styleSheetId: The stylesheet identifier.
 * frameId: Owner frame identifier.
 * sourceURL: Stylesheet resource URL.
 * sourceMapURL: URL of source map associated with the stylesheet (if any).
 * origin: Stylesheet origin.
 * title: Stylesheet title.
 * ownerNode: The backend id for the owner node of the stylesheet.
 * disabled: Denotes whether the stylesheet is disabled.
 * hasSourceURL: Whether the sourceURL field value comes from the sourceURL comment.
 * isInline: Whether this stylesheet is created for STYLE tag by parser. This flag is not set for
 *   document.written STYLE tags.
 * startLine: Line offset of the stylesheet within the resource (zero based).
 * startColumn: Column offset of the stylesheet within the resource (zero based).
 * length: Size of the content (in characters).
 *
 * @typedef {{
 *   styleSheetId: string,
 *   frameId: string,
 *   sourceURL: string,
 *   sourceMapURL: (string|undefined),
 *   origin: !CSS.StyleSheetOrigin,
 *   title: string,
 *   ownerNode: (number|undefined),
 *   disabled: boolean,
 *   hasSourceURL: (boolean|undefined),
 *   isInline: boolean,
 *   startLine: number,
 *   startColumn: number,
 *   length: number
 * }}
 */
CSS.CSSStyleSheetHeader;

/**
 * CSS rule representation.
 *
 * styleSheetId: The css style sheet identifier (absent for user agent stylesheet and user-specified
 *   stylesheet rules) this rule came from.
 * selectorList: Rule selector data.
 * origin: Parent stylesheet's origin.
 * style: Associated style declaration.
 * media: Media list array (for rules involving media queries). The array enumerates media queries
 *   starting with the innermost one, going outwards.
 *
 * @typedef {{
 *   styleSheetId: (string|undefined),
 *   selectorList: !CSS.SelectorList,
 *   origin: !CSS.StyleSheetOrigin,
 *   style: !CSS.CSSStyle,
 *   media: (!Array.<!CSS.CSSMedia>|undefined)
 * }}
 */
CSS.CSSRule;

/**
 * CSS coverage information.
 *
 * styleSheetId: The css style sheet identifier (absent for user agent stylesheet and user-specified
 *   stylesheet rules) this rule came from.
 * startOffset: Offset of the start of the rule (including selector) from the beginning of the stylesheet.
 * endOffset: Offset of the end of the rule body from the beginning of the stylesheet.
 * used: Indicates whether the rule was actually used by some element in the page.
 *
 * @typedef {{
 *   styleSheetId: string,
 *   startOffset: number,
 *   endOffset: number,
 *   used: boolean
 * }}
 */
CSS.RuleUsage;

/**
 * Text range within a resource. All numbers are zero-based.
 *
 * startLine: Start line of range.
 * startColumn: Start column of range (inclusive).
 * endLine: End line of range
 * endColumn: End column of range (exclusive).
 *
 * @typedef {{
 *   startLine: number,
 *   startColumn: number,
 *   endLine: number,
 *   endColumn: number
 * }}
 */
CSS.SourceRange;

/**
 * name: Shorthand name.
 * value: Shorthand value.
 * important: Whether the property has "!important" annotation (implies `false` if absent).
 *
 * @typedef {{
 *   name: string,
 *   value: string,
 *   important: (boolean|undefined)
 * }}
 */
CSS.ShorthandEntry;

/**
 * name: Computed style property name.
 * value: Computed style property value.
 *
 * @typedef {{
 *   name: string,
 *   value: string
 * }}
 */
CSS.CSSComputedStyleProperty;

/**
 * CSS style representation.
 *
 * styleSheetId: The css style sheet identifier (absent for user agent stylesheet and user-specified
 *   stylesheet rules) this rule came from.
 * cssProperties: CSS properties in the style.
 * shorthandEntries: Computed values for all shorthands found in the style.
 * cssText: Style declaration text (if available).
 * range: Style declaration range in the enclosing stylesheet (if available).
 *
 * @typedef {{
 *   styleSheetId: (string|undefined),
 *   cssProperties: !Array.<!CSS.CSSProperty>,
 *   shorthandEntries: !Array.<!CSS.ShorthandEntry>,
 *   cssText: (string|undefined),
 *   range: (!CSS.SourceRange|undefined)
 * }}
 */
CSS.CSSStyle;

/**
 * CSS property declaration data.
 *
 * name: The property name.
 * value: The property value.
 * important: Whether the property has "!important" annotation (implies `false` if absent).
 * implicit: Whether the property is implicit (implies `false` if absent).
 * text: The full property text as specified in the style.
 * parsedOk: Whether the property is understood by the browser (implies `true` if absent).
 * disabled: Whether the property is disabled by the user (present for source-based properties only).
 * range: The entire property range in the enclosing style declaration (if available).
 *
 * @typedef {{
 *   name: string,
 *   value: string,
 *   important: (boolean|undefined),
 *   implicit: (boolean|undefined),
 *   text: (string|undefined),
 *   parsedOk: (boolean|undefined),
 *   disabled: (boolean|undefined),
 *   range: (!CSS.SourceRange|undefined)
 * }}
 */
CSS.CSSProperty;

/**
 * CSS media rule descriptor.
 *
 * text: Media query text.
 * source: Source of the media query: "mediaRule" if specified by a @media rule, "importRule" if
 *   specified by an @import rule, "linkedSheet" if specified by a "media" attribute in a linked
 *   stylesheet's LINK tag, "inlineSheet" if specified by a "media" attribute in an inline
 *   stylesheet's STYLE tag.
 * sourceURL: URL of the document containing the media query description.
 * range: The associated rule (@media or @import) header range in the enclosing stylesheet (if
 *   available).
 * styleSheetId: Identifier of the stylesheet containing this object (if exists).
 * mediaList: Array of media queries.
 *
 * @typedef {{
 *   text: string,
 *   source: !CSS.CSSMediaSource,
 *   sourceURL: (string|undefined),
 *   range: (!CSS.SourceRange|undefined),
 *   styleSheetId: (string|undefined),
 *   mediaList: (!Array.<!CSS.MediaQuery>|undefined)
 * }}
 */
CSS.CSSMedia;

/**
 * Media query descriptor.
 *
 * expressions: Array of media query expressions.
 * active: Whether the media query condition is satisfied.
 *
 * @typedef {{
 *   expressions: !Array.<!CSS.MediaQueryExpression>,
 *   active: boolean
 * }}
 */
CSS.MediaQuery;

/**
 * Media query expression descriptor.
 *
 * value: Media query expression value.
 * unit: Media query expression units.
 * feature: Media query expression feature.
 * valueRange: The associated range of the value text in the enclosing stylesheet (if available).
 * computedLength: Computed length of media query expression (if applicable).
 *
 * @typedef {{
 *   value: number,
 *   unit: string,
 *   feature: string,
 *   valueRange: (!CSS.SourceRange|undefined),
 *   computedLength: (number|undefined)
 * }}
 */
CSS.MediaQueryExpression;

/**
 * Information about amount of glyphs that were rendered with given font.
 *
 * familyName: Font's family name reported by platform.
 * isCustomFont: Indicates if the font was downloaded or resolved locally.
 * glyphCount: Amount of glyphs that were rendered with this font.
 *
 * @typedef {{
 *   familyName: string,
 *   isCustomFont: boolean,
 *   glyphCount: number
 * }}
 */
CSS.PlatformFontUsage;

/**
 * Properties of a web font: https://www.w3.org/TR/2008/REC-CSS2-20080411/fonts.html#font-descriptions
 *
 * fontFamily: The font-family.
 * fontStyle: The font-style.
 * fontVariant: The font-variant.
 * fontWeight: The font-weight.
 * fontStretch: The font-stretch.
 * unicodeRange: The unicode-range.
 * src: The src.
 * platformFontFamily: The resolved platform font family
 *
 * @typedef {{
 *   fontFamily: string,
 *   fontStyle: string,
 *   fontVariant: string,
 *   fontWeight: string,
 *   fontStretch: string,
 *   unicodeRange: string,
 *   src: string,
 *   platformFontFamily: string
 * }}
 */
CSS.FontFace;

/**
 * CSS keyframes rule representation.
 *
 * animationName: Animation name.
 * keyframes: List of keyframes.
 *
 * @typedef {{
 *   animationName: !CSS.Value,
 *   keyframes: !Array.<!CSS.CSSKeyframeRule>
 * }}
 */
CSS.CSSKeyframesRule;

/**
 * CSS keyframe rule representation.
 *
 * styleSheetId: The css style sheet identifier (absent for user agent stylesheet and user-specified
 *   stylesheet rules) this rule came from.
 * origin: Parent stylesheet's origin.
 * keyText: Associated key text.
 * style: Associated style declaration.
 *
 * @typedef {{
 *   styleSheetId: (string|undefined),
 *   origin: !CSS.StyleSheetOrigin,
 *   keyText: !CSS.Value,
 *   style: !CSS.CSSStyle
 * }}
 */
CSS.CSSKeyframeRule;

/**
 * A descriptor of operation to mutate style declaration text.
 *
 * styleSheetId: The css style sheet identifier.
 * range: The range of the style text in the enclosing stylesheet.
 * text: New style text.
 *
 * @typedef {{
 *   styleSheetId: string,
 *   range: !CSS.SourceRange,
 *   text: string
 * }}
 */
CSS.StyleDeclarationEdit;

/**
 * Parameters for the AddRule command.
 *
 * styleSheetId: The css style sheet identifier where a new rule should be inserted.
 * ruleText: The text of a new rule.
 * location: Text position of a new rule in the target style sheet.
 *
 * @typedef {{
 *   styleSheetId: string,
 *   ruleText: string,
 *   location: !CSS.SourceRange
 * }}
 */
CSS.AddRuleParams;

/**
 * Result for the AddRule command.
 *
 * rule: The newly created rule.
 *
 * @typedef {{
 *   rule: !CSS.CSSRule
 * }}
 */
CSS.AddRuleResult;

/**
 * Parameters for the CollectClassNames command.
 *
 *
 * @typedef {{
 *   styleSheetId: string
 * }}
 */
CSS.CollectClassNamesParams;

/**
 * Result for the CollectClassNames command.
 *
 * classNames: Class name list.
 *
 * @typedef {{
 *   classNames: !Array.<string>
 * }}
 */
CSS.CollectClassNamesResult;

/**
 * Parameters for the CreateStyleSheet command.
 *
 * frameId: Identifier of the frame where "via-inspector" stylesheet should be created.
 *
 * @typedef {{
 *   frameId: string
 * }}
 */
CSS.CreateStyleSheetParams;

/**
 * Result for the CreateStyleSheet command.
 *
 * styleSheetId: Identifier of the created "via-inspector" stylesheet.
 *
 * @typedef {{
 *   styleSheetId: string
 * }}
 */
CSS.CreateStyleSheetResult;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
CSS.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
CSS.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
CSS.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
CSS.EnableResult;

/**
 * Parameters for the ForcePseudoState command.
 *
 * nodeId: The element id for which to force the pseudo state.
 * forcedPseudoClasses: Element pseudo classes to force when computing the element's style.
 *
 * @typedef {{
 *   nodeId: number,
 *   forcedPseudoClasses: !Array.<string>
 * }}
 */
CSS.ForcePseudoStateParams;

/**
 * Result for the ForcePseudoState command.
 *
 *
 * @typedef {undefined}
 */
CSS.ForcePseudoStateResult;

/**
 * Parameters for the GetBackgroundColors command.
 *
 * nodeId: Id of the node to get background colors for.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
CSS.GetBackgroundColorsParams;

/**
 * Result for the GetBackgroundColors command.
 *
 * backgroundColors: The range of background colors behind this element, if it contains any visible text. If no
 *   visible text is present, this will be undefined. In the case of a flat background color,
 *   this will consist of simply that color. In the case of a gradient, this will consist of each
 *   of the color stops. For anything more complicated, this will be an empty array. Images will
 *   be ignored (as if the image had failed to load).
 * computedFontSize: The computed font size for this node, as a CSS computed value string (e.g. '12px').
 * computedFontWeight: The computed font weight for this node, as a CSS computed value string (e.g. 'normal' or
 *   '100').
 * computedBodyFontSize: The computed font size for the document body, as a computed CSS value string (e.g. '16px').
 *
 * @typedef {{
 *   backgroundColors: (!Array.<string>|undefined),
 *   computedFontSize: (string|undefined),
 *   computedFontWeight: (string|undefined),
 *   computedBodyFontSize: (string|undefined)
 * }}
 */
CSS.GetBackgroundColorsResult;

/**
 * Parameters for the GetComputedStyleForNode command.
 *
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
CSS.GetComputedStyleForNodeParams;

/**
 * Result for the GetComputedStyleForNode command.
 *
 * computedStyle: Computed style for the specified DOM node.
 *
 * @typedef {{
 *   computedStyle: !Array.<!CSS.CSSComputedStyleProperty>
 * }}
 */
CSS.GetComputedStyleForNodeResult;

/**
 * Parameters for the GetInlineStylesForNode command.
 *
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
CSS.GetInlineStylesForNodeParams;

/**
 * Result for the GetInlineStylesForNode command.
 *
 * inlineStyle: Inline style for the specified DOM node.
 * attributesStyle: Attribute-defined element style (e.g. resulting from "width=20 height=100%").
 *
 * @typedef {{
 *   inlineStyle: (!CSS.CSSStyle|undefined),
 *   attributesStyle: (!CSS.CSSStyle|undefined)
 * }}
 */
CSS.GetInlineStylesForNodeResult;

/**
 * Parameters for the GetMatchedStylesForNode command.
 *
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
CSS.GetMatchedStylesForNodeParams;

/**
 * Result for the GetMatchedStylesForNode command.
 *
 * inlineStyle: Inline style for the specified DOM node.
 * attributesStyle: Attribute-defined element style (e.g. resulting from "width=20 height=100%").
 * matchedCSSRules: CSS rules matching this node, from all applicable stylesheets.
 * pseudoElements: Pseudo style matches for this node.
 * inherited: A chain of inherited styles (from the immediate node parent up to the DOM tree root).
 * cssKeyframesRules: A list of CSS keyframed animations matching this node.
 *
 * @typedef {{
 *   inlineStyle: (!CSS.CSSStyle|undefined),
 *   attributesStyle: (!CSS.CSSStyle|undefined),
 *   matchedCSSRules: (!Array.<!CSS.RuleMatch>|undefined),
 *   pseudoElements: (!Array.<!CSS.PseudoElementMatches>|undefined),
 *   inherited: (!Array.<!CSS.InheritedStyleEntry>|undefined),
 *   cssKeyframesRules: (!Array.<!CSS.CSSKeyframesRule>|undefined)
 * }}
 */
CSS.GetMatchedStylesForNodeResult;

/**
 * Parameters for the GetMediaQueries command.
 *
 *
 * @typedef {undefined}
 */
CSS.GetMediaQueriesParams;

/**
 * Result for the GetMediaQueries command.
 *
 *
 * @typedef {{
 *   medias: !Array.<!CSS.CSSMedia>
 * }}
 */
CSS.GetMediaQueriesResult;

/**
 * Parameters for the GetPlatformFontsForNode command.
 *
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
CSS.GetPlatformFontsForNodeParams;

/**
 * Result for the GetPlatformFontsForNode command.
 *
 * fonts: Usage statistics for every employed platform font.
 *
 * @typedef {{
 *   fonts: !Array.<!CSS.PlatformFontUsage>
 * }}
 */
CSS.GetPlatformFontsForNodeResult;

/**
 * Parameters for the GetStyleSheetText command.
 *
 *
 * @typedef {{
 *   styleSheetId: string
 * }}
 */
CSS.GetStyleSheetTextParams;

/**
 * Result for the GetStyleSheetText command.
 *
 * text: The stylesheet text.
 *
 * @typedef {{
 *   text: string
 * }}
 */
CSS.GetStyleSheetTextResult;

/**
 * Parameters for the SetEffectivePropertyValueForNode command.
 *
 * nodeId: The element id for which to set property.
 *
 * @typedef {{
 *   nodeId: number,
 *   propertyName: string,
 *   value: string
 * }}
 */
CSS.SetEffectivePropertyValueForNodeParams;

/**
 * Result for the SetEffectivePropertyValueForNode command.
 *
 *
 * @typedef {undefined}
 */
CSS.SetEffectivePropertyValueForNodeResult;

/**
 * Parameters for the SetKeyframeKey command.
 *
 *
 * @typedef {{
 *   styleSheetId: string,
 *   range: !CSS.SourceRange,
 *   keyText: string
 * }}
 */
CSS.SetKeyframeKeyParams;

/**
 * Result for the SetKeyframeKey command.
 *
 * keyText: The resulting key text after modification.
 *
 * @typedef {{
 *   keyText: !CSS.Value
 * }}
 */
CSS.SetKeyframeKeyResult;

/**
 * Parameters for the SetMediaText command.
 *
 *
 * @typedef {{
 *   styleSheetId: string,
 *   range: !CSS.SourceRange,
 *   text: string
 * }}
 */
CSS.SetMediaTextParams;

/**
 * Result for the SetMediaText command.
 *
 * media: The resulting CSS media rule after modification.
 *
 * @typedef {{
 *   media: !CSS.CSSMedia
 * }}
 */
CSS.SetMediaTextResult;

/**
 * Parameters for the SetRuleSelector command.
 *
 *
 * @typedef {{
 *   styleSheetId: string,
 *   range: !CSS.SourceRange,
 *   selector: string
 * }}
 */
CSS.SetRuleSelectorParams;

/**
 * Result for the SetRuleSelector command.
 *
 * selectorList: The resulting selector list after modification.
 *
 * @typedef {{
 *   selectorList: !CSS.SelectorList
 * }}
 */
CSS.SetRuleSelectorResult;

/**
 * Parameters for the SetStyleSheetText command.
 *
 *
 * @typedef {{
 *   styleSheetId: string,
 *   text: string
 * }}
 */
CSS.SetStyleSheetTextParams;

/**
 * Result for the SetStyleSheetText command.
 *
 * sourceMapURL: URL of source map associated with script (if any).
 *
 * @typedef {{
 *   sourceMapURL: (string|undefined)
 * }}
 */
CSS.SetStyleSheetTextResult;

/**
 * Parameters for the SetStyleTexts command.
 *
 *
 * @typedef {{
 *   edits: !Array.<!CSS.StyleDeclarationEdit>
 * }}
 */
CSS.SetStyleTextsParams;

/**
 * Result for the SetStyleTexts command.
 *
 * styles: The resulting styles after modification.
 *
 * @typedef {{
 *   styles: !Array.<!CSS.CSSStyle>
 * }}
 */
CSS.SetStyleTextsResult;

/**
 * Parameters for the StartRuleUsageTracking command.
 *
 *
 * @typedef {undefined}
 */
CSS.StartRuleUsageTrackingParams;

/**
 * Result for the StartRuleUsageTracking command.
 *
 *
 * @typedef {undefined}
 */
CSS.StartRuleUsageTrackingResult;

/**
 * Parameters for the StopRuleUsageTracking command.
 *
 *
 * @typedef {undefined}
 */
CSS.StopRuleUsageTrackingParams;

/**
 * Result for the StopRuleUsageTracking command.
 *
 *
 * @typedef {{
 *   ruleUsage: !Array.<!CSS.RuleUsage>
 * }}
 */
CSS.StopRuleUsageTrackingResult;

/**
 * Parameters for the TakeCoverageDelta command.
 *
 *
 * @typedef {undefined}
 */
CSS.TakeCoverageDeltaParams;

/**
 * Result for the TakeCoverageDelta command.
 *
 *
 * @typedef {{
 *   coverage: !Array.<!CSS.RuleUsage>
 * }}
 */
CSS.TakeCoverageDeltaResult;

/**
 * Parameters for the FontsUpdated event.
 *
 * font: The web font that has loaded.
 *
 * @typedef {{
 *   font: (!CSS.FontFace|undefined)
 * }}
 */
CSS.FontsUpdatedParams;

/**
 * Parameters for the MediaQueryResultChanged event.
 *
 *
 * @typedef {undefined}
 */
CSS.MediaQueryResultChangedParams;

/**
 * Parameters for the StyleSheetAdded event.
 *
 * header: Added stylesheet metainfo.
 *
 * @typedef {{
 *   header: !CSS.CSSStyleSheetHeader
 * }}
 */
CSS.StyleSheetAddedParams;

/**
 * Parameters for the StyleSheetChanged event.
 *
 *
 * @typedef {{
 *   styleSheetId: string
 * }}
 */
CSS.StyleSheetChangedParams;

/**
 * Parameters for the StyleSheetRemoved event.
 *
 * styleSheetId: Identifier of the removed stylesheet.
 *
 * @typedef {{
 *   styleSheetId: string
 * }}
 */
CSS.StyleSheetRemovedParams;



/**
  * Inserts a new rule with the given `ruleText` in a stylesheet with given `styleSheetId`, at the
 * position specified by `location`.
  *
  * @param {CSS.AddRuleParams} params
  * @return {!Promise<CSS.AddRuleResult>}
  */
ExperimentalCSS.prototype.addRule = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.addRule', params);
};

/**
  * Returns all class names from specified stylesheet.
  *
  * @param {CSS.CollectClassNamesParams} params
  * @return {!Promise<CSS.CollectClassNamesResult>}
  */
ExperimentalCSS.prototype.collectClassNames = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.collectClassNames', params);
};

/**
  * Creates a new special "via-inspector" stylesheet in the frame with given `frameId`.
  *
  * @param {CSS.CreateStyleSheetParams} params
  * @return {!Promise<CSS.CreateStyleSheetResult>}
  */
ExperimentalCSS.prototype.createStyleSheet = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.createStyleSheet', params);
};

/**
  * Disables the CSS agent for the given page.
  *
  * @return {!Promise<CSS.DisableResult>}
  */
ExperimentalCSS.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('CSS.disable', {});
};

/**
  * Enables the CSS agent for the given page. Clients should not assume that the CSS agent has been
 * enabled until the result of this command is received.
  *
  * @return {!Promise<CSS.EnableResult>}
  */
ExperimentalCSS.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('CSS.enable', {});
};

/**
  * Ensures that the given node will have specified pseudo-classes whenever its style is computed by
 * the browser.
  *
  * @param {CSS.ForcePseudoStateParams} params
  * @return {!Promise<CSS.ForcePseudoStateResult>}
  */
ExperimentalCSS.prototype.forcePseudoState = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.forcePseudoState', params);
};

/**
  * @param {CSS.GetBackgroundColorsParams} params
  * @return {!Promise<CSS.GetBackgroundColorsResult>}
  */
ExperimentalCSS.prototype.getBackgroundColors = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.getBackgroundColors', params);
};

/**
  * Returns the computed style for a DOM node identified by `nodeId`.
  *
  * @param {CSS.GetComputedStyleForNodeParams} params
  * @return {!Promise<CSS.GetComputedStyleForNodeResult>}
  */
ExperimentalCSS.prototype.getComputedStyleForNode = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.getComputedStyleForNode', params);
};

/**
  * Returns the styles defined inline (explicitly in the "style" attribute and implicitly, using DOM
 * attributes) for a DOM node identified by `nodeId`.
  *
  * @param {CSS.GetInlineStylesForNodeParams} params
  * @return {!Promise<CSS.GetInlineStylesForNodeResult>}
  */
ExperimentalCSS.prototype.getInlineStylesForNode = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.getInlineStylesForNode', params);
};

/**
  * Returns requested styles for a DOM node identified by `nodeId`.
  *
  * @param {CSS.GetMatchedStylesForNodeParams} params
  * @return {!Promise<CSS.GetMatchedStylesForNodeResult>}
  */
ExperimentalCSS.prototype.getMatchedStylesForNode = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.getMatchedStylesForNode', params);
};

/**
  * Returns all media queries parsed by the rendering engine.
  *
  * @return {!Promise<CSS.GetMediaQueriesResult>}
  */
ExperimentalCSS.prototype.getMediaQueries = function() {
  return this.connection_.sendDevToolsMessage('CSS.getMediaQueries', {});
};

/**
  * Requests information about platform fonts which we used to render child TextNodes in the given
 * node.
  *
  * @param {CSS.GetPlatformFontsForNodeParams} params
  * @return {!Promise<CSS.GetPlatformFontsForNodeResult>}
  */
ExperimentalCSS.prototype.getPlatformFontsForNode = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.getPlatformFontsForNode', params);
};

/**
  * Returns the current textual content for a stylesheet.
  *
  * @param {CSS.GetStyleSheetTextParams} params
  * @return {!Promise<CSS.GetStyleSheetTextResult>}
  */
ExperimentalCSS.prototype.getStyleSheetText = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.getStyleSheetText', params);
};

/**
  * Find a rule with the given active property for the given node and set the new value for this
 * property
  *
  * @param {CSS.SetEffectivePropertyValueForNodeParams} params
  * @return {!Promise<CSS.SetEffectivePropertyValueForNodeResult>}
  */
ExperimentalCSS.prototype.setEffectivePropertyValueForNode = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.setEffectivePropertyValueForNode', params);
};

/**
  * Modifies the keyframe rule key text.
  *
  * @param {CSS.SetKeyframeKeyParams} params
  * @return {!Promise<CSS.SetKeyframeKeyResult>}
  */
ExperimentalCSS.prototype.setKeyframeKey = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.setKeyframeKey', params);
};

/**
  * Modifies the rule selector.
  *
  * @param {CSS.SetMediaTextParams} params
  * @return {!Promise<CSS.SetMediaTextResult>}
  */
ExperimentalCSS.prototype.setMediaText = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.setMediaText', params);
};

/**
  * Modifies the rule selector.
  *
  * @param {CSS.SetRuleSelectorParams} params
  * @return {!Promise<CSS.SetRuleSelectorResult>}
  */
ExperimentalCSS.prototype.setRuleSelector = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.setRuleSelector', params);
};

/**
  * Sets the new stylesheet text.
  *
  * @param {CSS.SetStyleSheetTextParams} params
  * @return {!Promise<CSS.SetStyleSheetTextResult>}
  */
ExperimentalCSS.prototype.setStyleSheetText = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.setStyleSheetText', params);
};

/**
  * Applies specified style edits one after another in the given order.
  *
  * @param {CSS.SetStyleTextsParams} params
  * @return {!Promise<CSS.SetStyleTextsResult>}
  */
ExperimentalCSS.prototype.setStyleTexts = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.setStyleTexts', params);
};

/**
  * Enables the selector recording.
  *
  * @return {!Promise<CSS.StartRuleUsageTrackingResult>}
  */
ExperimentalCSS.prototype.startRuleUsageTracking = function() {
  return this.connection_.sendDevToolsMessage('CSS.startRuleUsageTracking', {});
};

/**
  * Stop tracking rule usage and return the list of rules that were used since last call to
 * `takeCoverageDelta` (or since start of coverage instrumentation)
  *
  * @return {!Promise<CSS.StopRuleUsageTrackingResult>}
  */
ExperimentalCSS.prototype.stopRuleUsageTracking = function() {
  return this.connection_.sendDevToolsMessage('CSS.stopRuleUsageTracking', {});
};

/**
  * Obtain list of rules that became used since last call to this method (or since start of coverage
 * instrumentation)
  *
  * @return {!Promise<CSS.TakeCoverageDeltaResult>}
  */
ExperimentalCSS.prototype.takeCoverageDelta = function() {
  return this.connection_.sendDevToolsMessage('CSS.takeCoverageDelta', {});
};


/**
  * Fires whenever a web font is updated.  A non-empty font parameter indicates a successfully loaded
 * web font
  *
  * @param {!function(!CSS.FontsUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalCSS.prototype.onFontsUpdated = function(listener) {
  return this.connection_.addEventListener(
      'CSS.fontsUpdated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fires whenever a MediaQuery result changes (for example, after a browser window has been
 * resized.) The current implementation considers only viewport-dependent media features.
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
ExperimentalCSS.prototype.onMediaQueryResultChanged = function(listener) {
  return this.connection_.addEventListener(
      'CSS.mediaQueryResultChanged', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired whenever an active document stylesheet is added.
  *
  * @param {!function(!CSS.StyleSheetAddedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalCSS.prototype.onStyleSheetAdded = function(listener) {
  return this.connection_.addEventListener(
      'CSS.styleSheetAdded', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired whenever a stylesheet is changed as a result of the client operation.
  *
  * @param {!function(!CSS.StyleSheetChangedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalCSS.prototype.onStyleSheetChanged = function(listener) {
  return this.connection_.addEventListener(
      'CSS.styleSheetChanged', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired whenever an active document stylesheet is removed.
  *
  * @param {!function(!CSS.StyleSheetRemovedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalCSS.prototype.onStyleSheetRemoved = function(listener) {
  return this.connection_.addEventListener(
      'CSS.styleSheetRemoved', /** @type {!function(!Object): undefined} */ (listener));
};



/**
  * Inserts a new rule with the given `ruleText` in a stylesheet with given `styleSheetId`, at the
 * position specified by `location`.
  *
  * @param {CSS.AddRuleParams} params
  * @return {!Promise<CSS.AddRuleResult>}
  */
CSS.prototype.addRule = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.addRule', params);
};

/**
  * Returns all class names from specified stylesheet.
  *
  * @param {CSS.CollectClassNamesParams} params
  * @return {!Promise<CSS.CollectClassNamesResult>}
  */
CSS.prototype.collectClassNames = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.collectClassNames', params);
};

/**
  * Creates a new special "via-inspector" stylesheet in the frame with given `frameId`.
  *
  * @param {CSS.CreateStyleSheetParams} params
  * @return {!Promise<CSS.CreateStyleSheetResult>}
  */
CSS.prototype.createStyleSheet = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.createStyleSheet', params);
};

/**
  * Disables the CSS agent for the given page.
  *
  * @return {!Promise<CSS.DisableResult>}
  */
CSS.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('CSS.disable', {});
};

/**
  * Enables the CSS agent for the given page. Clients should not assume that the CSS agent has been
 * enabled until the result of this command is received.
  *
  * @return {!Promise<CSS.EnableResult>}
  */
CSS.prototype.enable = function() {
  return this.connection_.sendDevToolsMessage('CSS.enable', {});
};

/**
  * Ensures that the given node will have specified pseudo-classes whenever its style is computed by
 * the browser.
  *
  * @param {CSS.ForcePseudoStateParams} params
  * @return {!Promise<CSS.ForcePseudoStateResult>}
  */
CSS.prototype.forcePseudoState = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.forcePseudoState', params);
};

/**
  * @param {CSS.GetBackgroundColorsParams} params
  * @return {!Promise<CSS.GetBackgroundColorsResult>}
  */
CSS.prototype.getBackgroundColors = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.getBackgroundColors', params);
};

/**
  * Returns the computed style for a DOM node identified by `nodeId`.
  *
  * @param {CSS.GetComputedStyleForNodeParams} params
  * @return {!Promise<CSS.GetComputedStyleForNodeResult>}
  */
CSS.prototype.getComputedStyleForNode = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.getComputedStyleForNode', params);
};

/**
  * Returns the styles defined inline (explicitly in the "style" attribute and implicitly, using DOM
 * attributes) for a DOM node identified by `nodeId`.
  *
  * @param {CSS.GetInlineStylesForNodeParams} params
  * @return {!Promise<CSS.GetInlineStylesForNodeResult>}
  */
CSS.prototype.getInlineStylesForNode = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.getInlineStylesForNode', params);
};

/**
  * Returns requested styles for a DOM node identified by `nodeId`.
  *
  * @param {CSS.GetMatchedStylesForNodeParams} params
  * @return {!Promise<CSS.GetMatchedStylesForNodeResult>}
  */
CSS.prototype.getMatchedStylesForNode = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.getMatchedStylesForNode', params);
};

/**
  * Returns all media queries parsed by the rendering engine.
  *
  * @return {!Promise<CSS.GetMediaQueriesResult>}
  */
CSS.prototype.getMediaQueries = function() {
  return this.connection_.sendDevToolsMessage('CSS.getMediaQueries', {});
};

/**
  * Requests information about platform fonts which we used to render child TextNodes in the given
 * node.
  *
  * @param {CSS.GetPlatformFontsForNodeParams} params
  * @return {!Promise<CSS.GetPlatformFontsForNodeResult>}
  */
CSS.prototype.getPlatformFontsForNode = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.getPlatformFontsForNode', params);
};

/**
  * Returns the current textual content for a stylesheet.
  *
  * @param {CSS.GetStyleSheetTextParams} params
  * @return {!Promise<CSS.GetStyleSheetTextResult>}
  */
CSS.prototype.getStyleSheetText = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.getStyleSheetText', params);
};

/**
  * Find a rule with the given active property for the given node and set the new value for this
 * property
  *
  * @param {CSS.SetEffectivePropertyValueForNodeParams} params
  * @return {!Promise<CSS.SetEffectivePropertyValueForNodeResult>}
  */
CSS.prototype.setEffectivePropertyValueForNode = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.setEffectivePropertyValueForNode', params);
};

/**
  * Modifies the keyframe rule key text.
  *
  * @param {CSS.SetKeyframeKeyParams} params
  * @return {!Promise<CSS.SetKeyframeKeyResult>}
  */
CSS.prototype.setKeyframeKey = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.setKeyframeKey', params);
};

/**
  * Modifies the rule selector.
  *
  * @param {CSS.SetMediaTextParams} params
  * @return {!Promise<CSS.SetMediaTextResult>}
  */
CSS.prototype.setMediaText = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.setMediaText', params);
};

/**
  * Modifies the rule selector.
  *
  * @param {CSS.SetRuleSelectorParams} params
  * @return {!Promise<CSS.SetRuleSelectorResult>}
  */
CSS.prototype.setRuleSelector = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.setRuleSelector', params);
};

/**
  * Sets the new stylesheet text.
  *
  * @param {CSS.SetStyleSheetTextParams} params
  * @return {!Promise<CSS.SetStyleSheetTextResult>}
  */
CSS.prototype.setStyleSheetText = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.setStyleSheetText', params);
};

/**
  * Applies specified style edits one after another in the given order.
  *
  * @param {CSS.SetStyleTextsParams} params
  * @return {!Promise<CSS.SetStyleTextsResult>}
  */
CSS.prototype.setStyleTexts = function(params) {
  return this.connection_.sendDevToolsMessage('CSS.setStyleTexts', params);
};

/**
  * Enables the selector recording.
  *
  * @return {!Promise<CSS.StartRuleUsageTrackingResult>}
  */
CSS.prototype.startRuleUsageTracking = function() {
  return this.connection_.sendDevToolsMessage('CSS.startRuleUsageTracking', {});
};

/**
  * Stop tracking rule usage and return the list of rules that were used since last call to
 * `takeCoverageDelta` (or since start of coverage instrumentation)
  *
  * @return {!Promise<CSS.StopRuleUsageTrackingResult>}
  */
CSS.prototype.stopRuleUsageTracking = function() {
  return this.connection_.sendDevToolsMessage('CSS.stopRuleUsageTracking', {});
};

/**
  * Obtain list of rules that became used since last call to this method (or since start of coverage
 * instrumentation)
  *
  * @return {!Promise<CSS.TakeCoverageDeltaResult>}
  */
CSS.prototype.takeCoverageDelta = function() {
  return this.connection_.sendDevToolsMessage('CSS.takeCoverageDelta', {});
};


/**
  * Fires whenever a web font is updated.  A non-empty font parameter indicates a successfully loaded
 * web font
  *
  * @param {!function(!CSS.FontsUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
CSS.prototype.onFontsUpdated = function(listener) {
  return this.connection_.addEventListener(
      'CSS.fontsUpdated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fires whenever a MediaQuery result changes (for example, after a browser window has been
 * resized.) The current implementation considers only viewport-dependent media features.
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
CSS.prototype.onMediaQueryResultChanged = function(listener) {
  return this.connection_.addEventListener(
      'CSS.mediaQueryResultChanged', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired whenever an active document stylesheet is added.
  *
  * @param {!function(!CSS.StyleSheetAddedParams)} listener
  * @return {number} The id of this event listener.
  */
CSS.prototype.onStyleSheetAdded = function(listener) {
  return this.connection_.addEventListener(
      'CSS.styleSheetAdded', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired whenever a stylesheet is changed as a result of the client operation.
  *
  * @param {!function(!CSS.StyleSheetChangedParams)} listener
  * @return {number} The id of this event listener.
  */
CSS.prototype.onStyleSheetChanged = function(listener) {
  return this.connection_.addEventListener(
      'CSS.styleSheetChanged', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired whenever an active document stylesheet is removed.
  *
  * @param {!function(!CSS.StyleSheetRemovedParams)} listener
  * @return {number} The id of this event listener.
  */
CSS.prototype.onStyleSheetRemoved = function(listener) {
  return this.connection_.addEventListener(
      'CSS.styleSheetRemoved', /** @type {!function(!Object): undefined} */ (listener));
};

});  // goog.scope

