// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the CSS DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalCSS = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalCSS.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the CSS DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.CSS = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalCSS} */
chromium.DevTools.CSS.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.CSS.prototype.removeEventListener = function(id) {};

/**
 * Stylesheet type: "injected" for stylesheets injected via extension, "user-agent" for user-agent
 * stylesheets, "inspector" for stylesheets created by the inspector (i.e. those holding the "via
 * inspector" rules), "regular" for regular stylesheets.
 *
 * @enum {string}
 */
chromium.DevTools.CSS.StyleSheetOrigin = {
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
chromium.DevTools.CSS.CSSMediaSource = {
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
 *   pseudoType: !chromium.DevTools.DOM.PseudoType,
 *   matches: !Array.<!chromium.DevTools.CSS.RuleMatch>
 * }}
 */
chromium.DevTools.CSS.PseudoElementMatches;

/**
 * Inherited CSS rule collection from ancestor node.
 *
 * inlineStyle: The ancestor node's inline style, if any, in the style inheritance chain.
 * matchedCSSRules: Matches of CSS rules matching the ancestor node in the style inheritance chain.
 *
 * @typedef {{
 *   inlineStyle: (!chromium.DevTools.CSS.CSSStyle|undefined),
 *   matchedCSSRules: !Array.<!chromium.DevTools.CSS.RuleMatch>
 * }}
 */
chromium.DevTools.CSS.InheritedStyleEntry;

/**
 * Match data for a CSS rule.
 *
 * rule: CSS rule in the match.
 * matchingSelectors: Matching selector indices in the rule's selectorList selectors (0-based).
 *
 * @typedef {{
 *   rule: !chromium.DevTools.CSS.CSSRule,
 *   matchingSelectors: !Array.<number>
 * }}
 */
chromium.DevTools.CSS.RuleMatch;

/**
 * Data for a simple selector (these are delimited by commas in a selector list).
 *
 * text: Value text.
 * range: Value range in the underlying resource (if available).
 *
 * @typedef {{
 *   text: string,
 *   range: (!chromium.DevTools.CSS.SourceRange|undefined)
 * }}
 */
chromium.DevTools.CSS.Value;

/**
 * Selector list data.
 *
 * selectors: Selectors in the list.
 * text: Rule selector text.
 *
 * @typedef {{
 *   selectors: !Array.<!chromium.DevTools.CSS.Value>,
 *   text: string
 * }}
 */
chromium.DevTools.CSS.SelectorList;

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
 *    document.written STYLE tags.
 * startLine: Line offset of the stylesheet within the resource (zero based).
 * startColumn: Column offset of the stylesheet within the resource (zero based).
 * length: Size of the content (in characters).
 *
 * @typedef {{
 *   styleSheetId: string,
 *   frameId: string,
 *   sourceURL: string,
 *   sourceMapURL: (string|undefined),
 *   origin: !chromium.DevTools.CSS.StyleSheetOrigin,
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
chromium.DevTools.CSS.CSSStyleSheetHeader;

/**
 * CSS rule representation.
 *
 * styleSheetId: The css style sheet identifier (absent for user agent stylesheet and user-specified
 *    stylesheet rules) this rule came from.
 * selectorList: Rule selector data.
 * origin: Parent stylesheet's origin.
 * style: Associated style declaration.
 * media: Media list array (for rules involving media queries). The array enumerates media queries
 *    starting with the innermost one, going outwards.
 *
 * @typedef {{
 *   styleSheetId: (string|undefined),
 *   selectorList: !chromium.DevTools.CSS.SelectorList,
 *   origin: !chromium.DevTools.CSS.StyleSheetOrigin,
 *   style: !chromium.DevTools.CSS.CSSStyle,
 *   media: (!Array.<!chromium.DevTools.CSS.CSSMedia>|undefined)
 * }}
 */
chromium.DevTools.CSS.CSSRule;

/**
 * CSS coverage information.
 *
 * styleSheetId: The css style sheet identifier (absent for user agent stylesheet and user-specified
 *    stylesheet rules) this rule came from.
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
chromium.DevTools.CSS.RuleUsage;

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
chromium.DevTools.CSS.SourceRange;

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
chromium.DevTools.CSS.ShorthandEntry;

/**
 * name: Computed style property name.
 * value: Computed style property value.
 *
 * @typedef {{
 *   name: string,
 *   value: string
 * }}
 */
chromium.DevTools.CSS.CSSComputedStyleProperty;

/**
 * CSS style representation.
 *
 * styleSheetId: The css style sheet identifier (absent for user agent stylesheet and user-specified
 *    stylesheet rules) this rule came from.
 * cssProperties: CSS properties in the style.
 * shorthandEntries: Computed values for all shorthands found in the style.
 * cssText: Style declaration text (if available).
 * range: Style declaration range in the enclosing stylesheet (if available).
 *
 * @typedef {{
 *   styleSheetId: (string|undefined),
 *   cssProperties: !Array.<!chromium.DevTools.CSS.CSSProperty>,
 *   shorthandEntries: !Array.<!chromium.DevTools.CSS.ShorthandEntry>,
 *   cssText: (string|undefined),
 *   range: (!chromium.DevTools.CSS.SourceRange|undefined)
 * }}
 */
chromium.DevTools.CSS.CSSStyle;

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
 *   range: (!chromium.DevTools.CSS.SourceRange|undefined)
 * }}
 */
chromium.DevTools.CSS.CSSProperty;

/**
 * CSS media rule descriptor.
 *
 * text: Media query text.
 * source: Source of the media query: "mediaRule" if specified by a @media rule, "importRule" if
 *    specified by an @import rule, "linkedSheet" if specified by a "media" attribute in a linked
 *    stylesheet's LINK tag, "inlineSheet" if specified by a "media" attribute in an inline
 *    stylesheet's STYLE tag.
 * sourceURL: URL of the document containing the media query description.
 * range: The associated rule (@media or @import) header range in the enclosing stylesheet (if
 *    available).
 * styleSheetId: Identifier of the stylesheet containing this object (if exists).
 * mediaList: Array of media queries.
 *
 * @typedef {{
 *   text: string,
 *   source: !chromium.DevTools.CSS.CSSMediaSource,
 *   sourceURL: (string|undefined),
 *   range: (!chromium.DevTools.CSS.SourceRange|undefined),
 *   styleSheetId: (string|undefined),
 *   mediaList: (!Array.<!chromium.DevTools.CSS.MediaQuery>|undefined)
 * }}
 */
chromium.DevTools.CSS.CSSMedia;

/**
 * Media query descriptor.
 *
 * expressions: Array of media query expressions.
 * active: Whether the media query condition is satisfied.
 *
 * @typedef {{
 *   expressions: !Array.<!chromium.DevTools.CSS.MediaQueryExpression>,
 *   active: boolean
 * }}
 */
chromium.DevTools.CSS.MediaQuery;

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
 *   valueRange: (!chromium.DevTools.CSS.SourceRange|undefined),
 *   computedLength: (number|undefined)
 * }}
 */
chromium.DevTools.CSS.MediaQueryExpression;

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
chromium.DevTools.CSS.PlatformFontUsage;

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
chromium.DevTools.CSS.FontFace;

/**
 * CSS keyframes rule representation.
 *
 * animationName: Animation name.
 * keyframes: List of keyframes.
 *
 * @typedef {{
 *   animationName: !chromium.DevTools.CSS.Value,
 *   keyframes: !Array.<!chromium.DevTools.CSS.CSSKeyframeRule>
 * }}
 */
chromium.DevTools.CSS.CSSKeyframesRule;

/**
 * CSS keyframe rule representation.
 *
 * styleSheetId: The css style sheet identifier (absent for user agent stylesheet and user-specified
 *    stylesheet rules) this rule came from.
 * origin: Parent stylesheet's origin.
 * keyText: Associated key text.
 * style: Associated style declaration.
 *
 * @typedef {{
 *   styleSheetId: (string|undefined),
 *   origin: !chromium.DevTools.CSS.StyleSheetOrigin,
 *   keyText: !chromium.DevTools.CSS.Value,
 *   style: !chromium.DevTools.CSS.CSSStyle
 * }}
 */
chromium.DevTools.CSS.CSSKeyframeRule;

/**
 * A descriptor of operation to mutate style declaration text.
 *
 * styleSheetId: The css style sheet identifier.
 * range: The range of the style text in the enclosing stylesheet.
 * text: New style text.
 *
 * @typedef {{
 *   styleSheetId: string,
 *   range: !chromium.DevTools.CSS.SourceRange,
 *   text: string
 * }}
 */
chromium.DevTools.CSS.StyleDeclarationEdit;

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
 *   location: !chromium.DevTools.CSS.SourceRange
 * }}
 */
chromium.DevTools.CSS.AddRuleParams;

/**
 * Result for the AddRule command.
 *
 * rule: The newly created rule.
 *
 * @typedef {{
 *   rule: !chromium.DevTools.CSS.CSSRule
 * }}
 */
chromium.DevTools.CSS.AddRuleResult;

/**
 * Parameters for the CollectClassNames command.
 *
 *
 * @typedef {{
 *   styleSheetId: string
 * }}
 */
chromium.DevTools.CSS.CollectClassNamesParams;

/**
 * Result for the CollectClassNames command.
 *
 * classNames: Class name list.
 *
 * @typedef {{
 *   classNames: !Array.<string>
 * }}
 */
chromium.DevTools.CSS.CollectClassNamesResult;

/**
 * Parameters for the CreateStyleSheet command.
 *
 * frameId: Identifier of the frame where "via-inspector" stylesheet should be created.
 *
 * @typedef {{
 *   frameId: string
 * }}
 */
chromium.DevTools.CSS.CreateStyleSheetParams;

/**
 * Result for the CreateStyleSheet command.
 *
 * styleSheetId: Identifier of the created "via-inspector" stylesheet.
 *
 * @typedef {{
 *   styleSheetId: string
 * }}
 */
chromium.DevTools.CSS.CreateStyleSheetResult;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.CSS.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.CSS.DisableResult;

/**
 * Parameters for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.CSS.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.CSS.EnableResult;

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
chromium.DevTools.CSS.ForcePseudoStateParams;

/**
 * Result for the ForcePseudoState command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.CSS.ForcePseudoStateResult;

/**
 * Parameters for the GetBackgroundColors command.
 *
 * nodeId: Id of the node to get background colors for.
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
chromium.DevTools.CSS.GetBackgroundColorsParams;

/**
 * Result for the GetBackgroundColors command.
 *
 * backgroundColors: The range of background colors behind this element, if it contains any visible text. If no
 *    visible text is present, this will be undefined. In the case of a flat background color,
 *    this will consist of simply that color. In the case of a gradient, this will consist of each
 *    of the color stops. For anything more complicated, this will be an empty array. Images will
 *    be ignored (as if the image had failed to load).
 * computedFontSize: The computed font size for this node, as a CSS computed value string (e.g. '12px').
 * computedFontWeight: The computed font weight for this node, as a CSS computed value string (e.g. 'normal' or
 *    '100').
 * computedBodyFontSize: The computed font size for the document body, as a computed CSS value string (e.g. '16px').
 *
 * @typedef {{
 *   backgroundColors: (!Array.<string>|undefined),
 *   computedFontSize: (string|undefined),
 *   computedFontWeight: (string|undefined),
 *   computedBodyFontSize: (string|undefined)
 * }}
 */
chromium.DevTools.CSS.GetBackgroundColorsResult;

/**
 * Parameters for the GetComputedStyleForNode command.
 *
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
chromium.DevTools.CSS.GetComputedStyleForNodeParams;

/**
 * Result for the GetComputedStyleForNode command.
 *
 * computedStyle: Computed style for the specified DOM node.
 *
 * @typedef {{
 *   computedStyle: !Array.<!chromium.DevTools.CSS.CSSComputedStyleProperty>
 * }}
 */
chromium.DevTools.CSS.GetComputedStyleForNodeResult;

/**
 * Parameters for the GetInlineStylesForNode command.
 *
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
chromium.DevTools.CSS.GetInlineStylesForNodeParams;

/**
 * Result for the GetInlineStylesForNode command.
 *
 * inlineStyle: Inline style for the specified DOM node.
 * attributesStyle: Attribute-defined element style (e.g. resulting from "width=20 height=100%").
 *
 * @typedef {{
 *   inlineStyle: (!chromium.DevTools.CSS.CSSStyle|undefined),
 *   attributesStyle: (!chromium.DevTools.CSS.CSSStyle|undefined)
 * }}
 */
chromium.DevTools.CSS.GetInlineStylesForNodeResult;

/**
 * Parameters for the GetMatchedStylesForNode command.
 *
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
chromium.DevTools.CSS.GetMatchedStylesForNodeParams;

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
 *   inlineStyle: (!chromium.DevTools.CSS.CSSStyle|undefined),
 *   attributesStyle: (!chromium.DevTools.CSS.CSSStyle|undefined),
 *   matchedCSSRules: (!Array.<!chromium.DevTools.CSS.RuleMatch>|undefined),
 *   pseudoElements: (!Array.<!chromium.DevTools.CSS.PseudoElementMatches>|undefined),
 *   inherited: (!Array.<!chromium.DevTools.CSS.InheritedStyleEntry>|undefined),
 *   cssKeyframesRules: (!Array.<!chromium.DevTools.CSS.CSSKeyframesRule>|undefined)
 * }}
 */
chromium.DevTools.CSS.GetMatchedStylesForNodeResult;

/**
 * Parameters for the GetMediaQueries command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.CSS.GetMediaQueriesParams;

/**
 * Result for the GetMediaQueries command.
 *
 *
 * @typedef {{
 *   medias: !Array.<!chromium.DevTools.CSS.CSSMedia>
 * }}
 */
chromium.DevTools.CSS.GetMediaQueriesResult;

/**
 * Parameters for the GetPlatformFontsForNode command.
 *
 *
 * @typedef {{
 *   nodeId: number
 * }}
 */
chromium.DevTools.CSS.GetPlatformFontsForNodeParams;

/**
 * Result for the GetPlatformFontsForNode command.
 *
 * fonts: Usage statistics for every employed platform font.
 *
 * @typedef {{
 *   fonts: !Array.<!chromium.DevTools.CSS.PlatformFontUsage>
 * }}
 */
chromium.DevTools.CSS.GetPlatformFontsForNodeResult;

/**
 * Parameters for the GetStyleSheetText command.
 *
 *
 * @typedef {{
 *   styleSheetId: string
 * }}
 */
chromium.DevTools.CSS.GetStyleSheetTextParams;

/**
 * Result for the GetStyleSheetText command.
 *
 * text: The stylesheet text.
 *
 * @typedef {{
 *   text: string
 * }}
 */
chromium.DevTools.CSS.GetStyleSheetTextResult;

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
chromium.DevTools.CSS.SetEffectivePropertyValueForNodeParams;

/**
 * Result for the SetEffectivePropertyValueForNode command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.CSS.SetEffectivePropertyValueForNodeResult;

/**
 * Parameters for the SetKeyframeKey command.
 *
 *
 * @typedef {{
 *   styleSheetId: string,
 *   range: !chromium.DevTools.CSS.SourceRange,
 *   keyText: string
 * }}
 */
chromium.DevTools.CSS.SetKeyframeKeyParams;

/**
 * Result for the SetKeyframeKey command.
 *
 * keyText: The resulting key text after modification.
 *
 * @typedef {{
 *   keyText: !chromium.DevTools.CSS.Value
 * }}
 */
chromium.DevTools.CSS.SetKeyframeKeyResult;

/**
 * Parameters for the SetMediaText command.
 *
 *
 * @typedef {{
 *   styleSheetId: string,
 *   range: !chromium.DevTools.CSS.SourceRange,
 *   text: string
 * }}
 */
chromium.DevTools.CSS.SetMediaTextParams;

/**
 * Result for the SetMediaText command.
 *
 * media: The resulting CSS media rule after modification.
 *
 * @typedef {{
 *   media: !chromium.DevTools.CSS.CSSMedia
 * }}
 */
chromium.DevTools.CSS.SetMediaTextResult;

/**
 * Parameters for the SetRuleSelector command.
 *
 *
 * @typedef {{
 *   styleSheetId: string,
 *   range: !chromium.DevTools.CSS.SourceRange,
 *   selector: string
 * }}
 */
chromium.DevTools.CSS.SetRuleSelectorParams;

/**
 * Result for the SetRuleSelector command.
 *
 * selectorList: The resulting selector list after modification.
 *
 * @typedef {{
 *   selectorList: !chromium.DevTools.CSS.SelectorList
 * }}
 */
chromium.DevTools.CSS.SetRuleSelectorResult;

/**
 * Parameters for the SetStyleSheetText command.
 *
 *
 * @typedef {{
 *   styleSheetId: string,
 *   text: string
 * }}
 */
chromium.DevTools.CSS.SetStyleSheetTextParams;

/**
 * Result for the SetStyleSheetText command.
 *
 * sourceMapURL: URL of source map associated with script (if any).
 *
 * @typedef {{
 *   sourceMapURL: (string|undefined)
 * }}
 */
chromium.DevTools.CSS.SetStyleSheetTextResult;

/**
 * Parameters for the SetStyleTexts command.
 *
 *
 * @typedef {{
 *   edits: !Array.<!chromium.DevTools.CSS.StyleDeclarationEdit>
 * }}
 */
chromium.DevTools.CSS.SetStyleTextsParams;

/**
 * Result for the SetStyleTexts command.
 *
 * styles: The resulting styles after modification.
 *
 * @typedef {{
 *   styles: !Array.<!chromium.DevTools.CSS.CSSStyle>
 * }}
 */
chromium.DevTools.CSS.SetStyleTextsResult;

/**
 * Parameters for the StartRuleUsageTracking command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.CSS.StartRuleUsageTrackingParams;

/**
 * Result for the StartRuleUsageTracking command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.CSS.StartRuleUsageTrackingResult;

/**
 * Parameters for the StopRuleUsageTracking command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.CSS.StopRuleUsageTrackingParams;

/**
 * Result for the StopRuleUsageTracking command.
 *
 *
 * @typedef {{
 *   ruleUsage: !Array.<!chromium.DevTools.CSS.RuleUsage>
 * }}
 */
chromium.DevTools.CSS.StopRuleUsageTrackingResult;

/**
 * Parameters for the TakeCoverageDelta command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.CSS.TakeCoverageDeltaParams;

/**
 * Result for the TakeCoverageDelta command.
 *
 *
 * @typedef {{
 *   coverage: !Array.<!chromium.DevTools.CSS.RuleUsage>
 * }}
 */
chromium.DevTools.CSS.TakeCoverageDeltaResult;

/**
 * Parameters for the FontsUpdated event.
 *
 * font: The web font that has loaded.
 *
 * @typedef {{
 *   font: (!chromium.DevTools.CSS.FontFace|undefined)
 * }}
 */
chromium.DevTools.CSS.FontsUpdatedParams;

/**
 * Parameters for the MediaQueryResultChanged event.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.CSS.MediaQueryResultChangedParams;

/**
 * Parameters for the StyleSheetAdded event.
 *
 * header: Added stylesheet metainfo.
 *
 * @typedef {{
 *   header: !chromium.DevTools.CSS.CSSStyleSheetHeader
 * }}
 */
chromium.DevTools.CSS.StyleSheetAddedParams;

/**
 * Parameters for the StyleSheetChanged event.
 *
 *
 * @typedef {{
 *   styleSheetId: string
 * }}
 */
chromium.DevTools.CSS.StyleSheetChangedParams;

/**
 * Parameters for the StyleSheetRemoved event.
 *
 * styleSheetId: Identifier of the removed stylesheet.
 *
 * @typedef {{
 *   styleSheetId: string
 * }}
 */
chromium.DevTools.CSS.StyleSheetRemovedParams;



/**
  * Inserts a new rule with the given `ruleText` in a stylesheet with given `styleSheetId`, at the
 * position specified by `location`.
  *
  * @param {chromium.DevTools.CSS.AddRuleParams} params
  * @return {!Promise<chromium.DevTools.CSS.AddRuleResult>}
  */
chromium.DevTools.ExperimentalCSS.prototype.addRule = function(params) {};

/**
  * Returns all class names from specified stylesheet.
  *
  * @param {chromium.DevTools.CSS.CollectClassNamesParams} params
  * @return {!Promise<chromium.DevTools.CSS.CollectClassNamesResult>}
  */
chromium.DevTools.ExperimentalCSS.prototype.collectClassNames = function(params) {};

/**
  * Creates a new special "via-inspector" stylesheet in the frame with given `frameId`.
  *
  * @param {chromium.DevTools.CSS.CreateStyleSheetParams} params
  * @return {!Promise<chromium.DevTools.CSS.CreateStyleSheetResult>}
  */
chromium.DevTools.ExperimentalCSS.prototype.createStyleSheet = function(params) {};

/**
  * Disables the CSS agent for the given page.
  *
  * @return {!Promise<chromium.DevTools.CSS.DisableResult>}
  */
chromium.DevTools.ExperimentalCSS.prototype.disable = function() {};

/**
  * Enables the CSS agent for the given page. Clients should not assume that the CSS agent has been
 * enabled until the result of this command is received.
  *
  * @return {!Promise<chromium.DevTools.CSS.EnableResult>}
  */
chromium.DevTools.ExperimentalCSS.prototype.enable = function() {};

/**
  * Ensures that the given node will have specified pseudo-classes whenever its style is computed by
 * the browser.
  *
  * @param {chromium.DevTools.CSS.ForcePseudoStateParams} params
  * @return {!Promise<chromium.DevTools.CSS.ForcePseudoStateResult>}
  */
chromium.DevTools.ExperimentalCSS.prototype.forcePseudoState = function(params) {};

/**
  * @param {chromium.DevTools.CSS.GetBackgroundColorsParams} params
  * @return {!Promise<chromium.DevTools.CSS.GetBackgroundColorsResult>}
  */
chromium.DevTools.ExperimentalCSS.prototype.getBackgroundColors = function(params) {};

/**
  * Returns the computed style for a DOM node identified by `nodeId`.
  *
  * @param {chromium.DevTools.CSS.GetComputedStyleForNodeParams} params
  * @return {!Promise<chromium.DevTools.CSS.GetComputedStyleForNodeResult>}
  */
chromium.DevTools.ExperimentalCSS.prototype.getComputedStyleForNode = function(params) {};

/**
  * Returns the styles defined inline (explicitly in the "style" attribute and implicitly, using DOM
 * attributes) for a DOM node identified by `nodeId`.
  *
  * @param {chromium.DevTools.CSS.GetInlineStylesForNodeParams} params
  * @return {!Promise<chromium.DevTools.CSS.GetInlineStylesForNodeResult>}
  */
chromium.DevTools.ExperimentalCSS.prototype.getInlineStylesForNode = function(params) {};

/**
  * Returns requested styles for a DOM node identified by `nodeId`.
  *
  * @param {chromium.DevTools.CSS.GetMatchedStylesForNodeParams} params
  * @return {!Promise<chromium.DevTools.CSS.GetMatchedStylesForNodeResult>}
  */
chromium.DevTools.ExperimentalCSS.prototype.getMatchedStylesForNode = function(params) {};

/**
  * Returns all media queries parsed by the rendering engine.
  *
  * @return {!Promise<chromium.DevTools.CSS.GetMediaQueriesResult>}
  */
chromium.DevTools.ExperimentalCSS.prototype.getMediaQueries = function() {};

/**
  * Requests information about platform fonts which we used to render child TextNodes in the given
 * node.
  *
  * @param {chromium.DevTools.CSS.GetPlatformFontsForNodeParams} params
  * @return {!Promise<chromium.DevTools.CSS.GetPlatformFontsForNodeResult>}
  */
chromium.DevTools.ExperimentalCSS.prototype.getPlatformFontsForNode = function(params) {};

/**
  * Returns the current textual content for a stylesheet.
  *
  * @param {chromium.DevTools.CSS.GetStyleSheetTextParams} params
  * @return {!Promise<chromium.DevTools.CSS.GetStyleSheetTextResult>}
  */
chromium.DevTools.ExperimentalCSS.prototype.getStyleSheetText = function(params) {};

/**
  * Find a rule with the given active property for the given node and set the new value for this
 * property
  *
  * @param {chromium.DevTools.CSS.SetEffectivePropertyValueForNodeParams} params
  * @return {!Promise<chromium.DevTools.CSS.SetEffectivePropertyValueForNodeResult>}
  */
chromium.DevTools.ExperimentalCSS.prototype.setEffectivePropertyValueForNode = function(params) {};

/**
  * Modifies the keyframe rule key text.
  *
  * @param {chromium.DevTools.CSS.SetKeyframeKeyParams} params
  * @return {!Promise<chromium.DevTools.CSS.SetKeyframeKeyResult>}
  */
chromium.DevTools.ExperimentalCSS.prototype.setKeyframeKey = function(params) {};

/**
  * Modifies the rule selector.
  *
  * @param {chromium.DevTools.CSS.SetMediaTextParams} params
  * @return {!Promise<chromium.DevTools.CSS.SetMediaTextResult>}
  */
chromium.DevTools.ExperimentalCSS.prototype.setMediaText = function(params) {};

/**
  * Modifies the rule selector.
  *
  * @param {chromium.DevTools.CSS.SetRuleSelectorParams} params
  * @return {!Promise<chromium.DevTools.CSS.SetRuleSelectorResult>}
  */
chromium.DevTools.ExperimentalCSS.prototype.setRuleSelector = function(params) {};

/**
  * Sets the new stylesheet text.
  *
  * @param {chromium.DevTools.CSS.SetStyleSheetTextParams} params
  * @return {!Promise<chromium.DevTools.CSS.SetStyleSheetTextResult>}
  */
chromium.DevTools.ExperimentalCSS.prototype.setStyleSheetText = function(params) {};

/**
  * Applies specified style edits one after another in the given order.
  *
  * @param {chromium.DevTools.CSS.SetStyleTextsParams} params
  * @return {!Promise<chromium.DevTools.CSS.SetStyleTextsResult>}
  */
chromium.DevTools.ExperimentalCSS.prototype.setStyleTexts = function(params) {};

/**
  * Enables the selector recording.
  *
  * @return {!Promise<chromium.DevTools.CSS.StartRuleUsageTrackingResult>}
  */
chromium.DevTools.ExperimentalCSS.prototype.startRuleUsageTracking = function() {};

/**
  * Stop tracking rule usage and return the list of rules that were used since last call to
 * `takeCoverageDelta` (or since start of coverage instrumentation)
  *
  * @return {!Promise<chromium.DevTools.CSS.StopRuleUsageTrackingResult>}
  */
chromium.DevTools.ExperimentalCSS.prototype.stopRuleUsageTracking = function() {};

/**
  * Obtain list of rules that became used since last call to this method (or since start of coverage
 * instrumentation)
  *
  * @return {!Promise<chromium.DevTools.CSS.TakeCoverageDeltaResult>}
  */
chromium.DevTools.ExperimentalCSS.prototype.takeCoverageDelta = function() {};


/**
  * Fires whenever a web font is updated.  A non-empty font parameter indicates a successfully loaded
 * web font
  *
  * @param {!function(!chromium.DevTools.CSS.FontsUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalCSS.prototype.onFontsUpdated = function(listener) {};

/**
  * Fires whenever a MediaQuery result changes (for example, after a browser window has been
 * resized.) The current implementation considers only viewport-dependent media features.
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalCSS.prototype.onMediaQueryResultChanged = function(listener) {};

/**
  * Fired whenever an active document stylesheet is added.
  *
  * @param {!function(!chromium.DevTools.CSS.StyleSheetAddedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalCSS.prototype.onStyleSheetAdded = function(listener) {};

/**
  * Fired whenever a stylesheet is changed as a result of the client operation.
  *
  * @param {!function(!chromium.DevTools.CSS.StyleSheetChangedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalCSS.prototype.onStyleSheetChanged = function(listener) {};

/**
  * Fired whenever an active document stylesheet is removed.
  *
  * @param {!function(!chromium.DevTools.CSS.StyleSheetRemovedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalCSS.prototype.onStyleSheetRemoved = function(listener) {};



/**
  * Inserts a new rule with the given `ruleText` in a stylesheet with given `styleSheetId`, at the
 * position specified by `location`.
  *
  * @param {chromium.DevTools.CSS.AddRuleParams} params
  * @return {!Promise<chromium.DevTools.CSS.AddRuleResult>}
  */
chromium.DevTools.CSS.prototype.addRule = function(params) {};

/**
  * Returns all class names from specified stylesheet.
  *
  * @param {chromium.DevTools.CSS.CollectClassNamesParams} params
  * @return {!Promise<chromium.DevTools.CSS.CollectClassNamesResult>}
  */
chromium.DevTools.CSS.prototype.collectClassNames = function(params) {};

/**
  * Creates a new special "via-inspector" stylesheet in the frame with given `frameId`.
  *
  * @param {chromium.DevTools.CSS.CreateStyleSheetParams} params
  * @return {!Promise<chromium.DevTools.CSS.CreateStyleSheetResult>}
  */
chromium.DevTools.CSS.prototype.createStyleSheet = function(params) {};

/**
  * Disables the CSS agent for the given page.
  *
  * @return {!Promise<chromium.DevTools.CSS.DisableResult>}
  */
chromium.DevTools.CSS.prototype.disable = function() {};

/**
  * Enables the CSS agent for the given page. Clients should not assume that the CSS agent has been
 * enabled until the result of this command is received.
  *
  * @return {!Promise<chromium.DevTools.CSS.EnableResult>}
  */
chromium.DevTools.CSS.prototype.enable = function() {};

/**
  * Ensures that the given node will have specified pseudo-classes whenever its style is computed by
 * the browser.
  *
  * @param {chromium.DevTools.CSS.ForcePseudoStateParams} params
  * @return {!Promise<chromium.DevTools.CSS.ForcePseudoStateResult>}
  */
chromium.DevTools.CSS.prototype.forcePseudoState = function(params) {};

/**
  * @param {chromium.DevTools.CSS.GetBackgroundColorsParams} params
  * @return {!Promise<chromium.DevTools.CSS.GetBackgroundColorsResult>}
  */
chromium.DevTools.CSS.prototype.getBackgroundColors = function(params) {};

/**
  * Returns the computed style for a DOM node identified by `nodeId`.
  *
  * @param {chromium.DevTools.CSS.GetComputedStyleForNodeParams} params
  * @return {!Promise<chromium.DevTools.CSS.GetComputedStyleForNodeResult>}
  */
chromium.DevTools.CSS.prototype.getComputedStyleForNode = function(params) {};

/**
  * Returns the styles defined inline (explicitly in the "style" attribute and implicitly, using DOM
 * attributes) for a DOM node identified by `nodeId`.
  *
  * @param {chromium.DevTools.CSS.GetInlineStylesForNodeParams} params
  * @return {!Promise<chromium.DevTools.CSS.GetInlineStylesForNodeResult>}
  */
chromium.DevTools.CSS.prototype.getInlineStylesForNode = function(params) {};

/**
  * Returns requested styles for a DOM node identified by `nodeId`.
  *
  * @param {chromium.DevTools.CSS.GetMatchedStylesForNodeParams} params
  * @return {!Promise<chromium.DevTools.CSS.GetMatchedStylesForNodeResult>}
  */
chromium.DevTools.CSS.prototype.getMatchedStylesForNode = function(params) {};

/**
  * Returns all media queries parsed by the rendering engine.
  *
  * @return {!Promise<chromium.DevTools.CSS.GetMediaQueriesResult>}
  */
chromium.DevTools.CSS.prototype.getMediaQueries = function() {};

/**
  * Requests information about platform fonts which we used to render child TextNodes in the given
 * node.
  *
  * @param {chromium.DevTools.CSS.GetPlatformFontsForNodeParams} params
  * @return {!Promise<chromium.DevTools.CSS.GetPlatformFontsForNodeResult>}
  */
chromium.DevTools.CSS.prototype.getPlatformFontsForNode = function(params) {};

/**
  * Returns the current textual content for a stylesheet.
  *
  * @param {chromium.DevTools.CSS.GetStyleSheetTextParams} params
  * @return {!Promise<chromium.DevTools.CSS.GetStyleSheetTextResult>}
  */
chromium.DevTools.CSS.prototype.getStyleSheetText = function(params) {};

/**
  * Find a rule with the given active property for the given node and set the new value for this
 * property
  *
  * @param {chromium.DevTools.CSS.SetEffectivePropertyValueForNodeParams} params
  * @return {!Promise<chromium.DevTools.CSS.SetEffectivePropertyValueForNodeResult>}
  */
chromium.DevTools.CSS.prototype.setEffectivePropertyValueForNode = function(params) {};

/**
  * Modifies the keyframe rule key text.
  *
  * @param {chromium.DevTools.CSS.SetKeyframeKeyParams} params
  * @return {!Promise<chromium.DevTools.CSS.SetKeyframeKeyResult>}
  */
chromium.DevTools.CSS.prototype.setKeyframeKey = function(params) {};

/**
  * Modifies the rule selector.
  *
  * @param {chromium.DevTools.CSS.SetMediaTextParams} params
  * @return {!Promise<chromium.DevTools.CSS.SetMediaTextResult>}
  */
chromium.DevTools.CSS.prototype.setMediaText = function(params) {};

/**
  * Modifies the rule selector.
  *
  * @param {chromium.DevTools.CSS.SetRuleSelectorParams} params
  * @return {!Promise<chromium.DevTools.CSS.SetRuleSelectorResult>}
  */
chromium.DevTools.CSS.prototype.setRuleSelector = function(params) {};

/**
  * Sets the new stylesheet text.
  *
  * @param {chromium.DevTools.CSS.SetStyleSheetTextParams} params
  * @return {!Promise<chromium.DevTools.CSS.SetStyleSheetTextResult>}
  */
chromium.DevTools.CSS.prototype.setStyleSheetText = function(params) {};

/**
  * Applies specified style edits one after another in the given order.
  *
  * @param {chromium.DevTools.CSS.SetStyleTextsParams} params
  * @return {!Promise<chromium.DevTools.CSS.SetStyleTextsResult>}
  */
chromium.DevTools.CSS.prototype.setStyleTexts = function(params) {};

/**
  * Enables the selector recording.
  *
  * @return {!Promise<chromium.DevTools.CSS.StartRuleUsageTrackingResult>}
  */
chromium.DevTools.CSS.prototype.startRuleUsageTracking = function() {};

/**
  * Stop tracking rule usage and return the list of rules that were used since last call to
 * `takeCoverageDelta` (or since start of coverage instrumentation)
  *
  * @return {!Promise<chromium.DevTools.CSS.StopRuleUsageTrackingResult>}
  */
chromium.DevTools.CSS.prototype.stopRuleUsageTracking = function() {};

/**
  * Obtain list of rules that became used since last call to this method (or since start of coverage
 * instrumentation)
  *
  * @return {!Promise<chromium.DevTools.CSS.TakeCoverageDeltaResult>}
  */
chromium.DevTools.CSS.prototype.takeCoverageDelta = function() {};


/**
  * Fires whenever a web font is updated.  A non-empty font parameter indicates a successfully loaded
 * web font
  *
  * @param {!function(!chromium.DevTools.CSS.FontsUpdatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.CSS.prototype.onFontsUpdated = function(listener) {};

/**
  * Fires whenever a MediaQuery result changes (for example, after a browser window has been
 * resized.) The current implementation considers only viewport-dependent media features.
  *
  * @param {!function()} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.CSS.prototype.onMediaQueryResultChanged = function(listener) {};

/**
  * Fired whenever an active document stylesheet is added.
  *
  * @param {!function(!chromium.DevTools.CSS.StyleSheetAddedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.CSS.prototype.onStyleSheetAdded = function(listener) {};

/**
  * Fired whenever a stylesheet is changed as a result of the client operation.
  *
  * @param {!function(!chromium.DevTools.CSS.StyleSheetChangedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.CSS.prototype.onStyleSheetChanged = function(listener) {};

/**
  * Fired whenever an active document stylesheet is removed.
  *
  * @param {!function(!chromium.DevTools.CSS.StyleSheetRemovedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.CSS.prototype.onStyleSheetRemoved = function(listener) {};
