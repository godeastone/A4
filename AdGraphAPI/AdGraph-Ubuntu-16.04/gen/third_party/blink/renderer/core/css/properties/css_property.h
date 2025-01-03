// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/ComputedStyleFieldAliases.json5
//   ../../third_party/blink/renderer/core/css/CSSProperties.json5

// clang-format off

#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTY_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTY_H_

#include "third_party/blink/renderer/core/css_property_names.h"
#include "third_party/blink/renderer/core/css/css_value.h"
#include "third_party/blink/renderer/core/css/properties/css_unresolved_property.h"
#include "third_party/blink/renderer/platform/heap/heap_allocator.h"
#include "third_party/blink/renderer/platform/text/text_direction.h"
#include "third_party/blink/renderer/platform/text/writing_mode.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class ComputedStyle;
class CSSParserContext;
class CSSParserLocalContext;
class CSSParserTokenRange;
class LayoutObject;
class Longhand;
class Shorthand;
class SVGComputedStyle;
class StylePropertyShorthand;

enum PhysicalBoxSide { kTopSide, kRightSide, kBottomSide, kLeftSide };

class CSSProperty : public CSSUnresolvedProperty {
 public:
  CORE_EXPORT static const CSSProperty& Get(CSSPropertyID);

  // For backwards compatibility when passing around CSSUnresolvedProperty
  // references. In case we need to call a function that hasn't been converted
  // to using property classes yet.
  virtual CSSPropertyID PropertyID() const {
    NOTREACHED();
    return CSSPropertyInvalid;
  }
  bool IDEquals(CSSPropertyID id) const { return PropertyID() == id; }
  bool IsResolvedProperty() const override { return true; }
  virtual bool IsInterpolable() const { return false; }
  virtual bool IsInherited() const { return false; }
  virtual bool IsCompositableProperty() const { return false; }
  virtual bool IsRepeated() const { return false; }
  virtual char RepetitionSeparator() const {
    NOTREACHED();
    return 0;
  }
  virtual bool IsDescriptor() const { return false; }
  virtual bool SupportsPercentage() const { return false; }
  virtual bool IsProperty() const { return true; }
  virtual bool IsAffectedByAll() const { return IsEnabled() && IsProperty(); }
  virtual bool IsLayoutDependentProperty() const { return false; }
  virtual bool IsLayoutDependent(const ComputedStyle* style, LayoutObject* layout_object) const { return false; }

  // Properties that do not override this method:
  // CSSPropertyWebkitFontSizeDelta
  // CSSPropertyWebkitTextEmphasis
  // CSSPropertyFontDisplay
  // CSSPropertySrc
  // CSSPropertyUnicodeRange
  // CSSPropertyPage
  // CSSPropertySize
  // CSSPropertyWebkitMarginCollapse
  // CSSPropertyWebkitMask
  // CSSPropertyWebkitMaskRepeatX
  // CSSPropertyWebkitMaskRepeatY
  // CSSPropertyWebkitPerspectiveOriginX
  // CSSPropertyWebkitPerspectiveOriginY
  // CSSPropertyWebkitTextStroke
  // CSSPropertyWebkitTransformOriginX
  // CSSPropertyWebkitTransformOriginY
  // CSSPropertyWebkitTransformOriginZ
  // CSSPropertyMaxZoom
  // CSSPropertyMinZoom
  // CSSPropertyOrientation
  // CSSPropertyUserZoom
  // CSSPropertyMarker
  // CSSPropertyAll
  // CSSPropertyVariable (Variables are retrieved via Get(AtomicString))
  virtual const CSSValue* CSSValueFromComputedStyleInternal(const ComputedStyle&,
                                                            const SVGComputedStyle&,
                                                            const LayoutObject*,
                                                            Node*,
                                                            bool allow_visited_style) const { return nullptr; }
  // FIXME: Resolve computed auto alignment in applyProperty/ComputedStyle and
  // remove this non-const Node parameter.
  CORE_EXPORT const CSSValue* CSSValueFromComputedStyle(const ComputedStyle&,
                                                        const LayoutObject*,
                                                        Node*,
                                                        bool allow_visited_style) const;
  virtual const CSSProperty& ResolveDirectionAwareProperty(
      TextDirection,
      WritingMode) const {
    return *this;
  }
  virtual bool IsShorthand() const { return false; }
  virtual bool IsLonghand() const { return false; }
  static void FilterEnabledCSSPropertiesIntoVector(const CSSPropertyID*,
                                                   size_t length,
                                                   Vector<const CSSProperty*>&);

 protected:
  constexpr CSSProperty() : CSSUnresolvedProperty() {}

  static const StylePropertyShorthand& BorderDirections();
  static const CSSProperty& ResolveAfterToPhysicalProperty(
      TextDirection,
      WritingMode,
      const StylePropertyShorthand&);
  static const CSSProperty& ResolveBeforeToPhysicalProperty(
      TextDirection,
      WritingMode,
      const StylePropertyShorthand&);
  static const CSSProperty& ResolveEndToPhysicalProperty(
      TextDirection,
      WritingMode,
      const StylePropertyShorthand&);
  static const CSSProperty& ResolveStartToPhysicalProperty(
      TextDirection,
      WritingMode,
      const StylePropertyShorthand&);
};

DEFINE_TYPE_CASTS(CSSProperty,
                  CSSUnresolvedProperty,
                  unresolved,
                  unresolved->IsResolvedProperty(),
                  unresolved.IsResolvedProperty());

CORE_EXPORT const CSSProperty& GetCSSPropertyVariable();
CORE_EXPORT const CSSProperty& GetCSSPropertyAnimationDelay();
CORE_EXPORT const CSSProperty& GetCSSPropertyAnimationDirection();
CORE_EXPORT const CSSProperty& GetCSSPropertyAnimationDuration();
CORE_EXPORT const CSSProperty& GetCSSPropertyAnimationFillMode();
CORE_EXPORT const CSSProperty& GetCSSPropertyAnimationIterationCount();
CORE_EXPORT const CSSProperty& GetCSSPropertyAnimationName();
CORE_EXPORT const CSSProperty& GetCSSPropertyAnimationPlayState();
CORE_EXPORT const CSSProperty& GetCSSPropertyAnimationTimingFunction();
CORE_EXPORT const CSSProperty& GetCSSPropertyTransitionDelay();
CORE_EXPORT const CSSProperty& GetCSSPropertyTransitionDuration();
CORE_EXPORT const CSSProperty& GetCSSPropertyTransitionProperty();
CORE_EXPORT const CSSProperty& GetCSSPropertyTransitionTimingFunction();
CORE_EXPORT const CSSProperty& GetCSSPropertyColor();
CORE_EXPORT const CSSProperty& GetCSSPropertyDirection();
CORE_EXPORT const CSSProperty& GetCSSPropertyFontFamily();
CORE_EXPORT const CSSProperty& GetCSSPropertyFontFeatureSettings();
CORE_EXPORT const CSSProperty& GetCSSPropertyFontKerning();
CORE_EXPORT const CSSProperty& GetCSSPropertyFontSize();
CORE_EXPORT const CSSProperty& GetCSSPropertyFontSizeAdjust();
CORE_EXPORT const CSSProperty& GetCSSPropertyFontStretch();
CORE_EXPORT const CSSProperty& GetCSSPropertyFontStyle();
CORE_EXPORT const CSSProperty& GetCSSPropertyFontVariantCaps();
CORE_EXPORT const CSSProperty& GetCSSPropertyFontVariantEastAsian();
CORE_EXPORT const CSSProperty& GetCSSPropertyFontVariantLigatures();
CORE_EXPORT const CSSProperty& GetCSSPropertyFontVariantNumeric();
CORE_EXPORT const CSSProperty& GetCSSPropertyFontVariationSettings();
CORE_EXPORT const CSSProperty& GetCSSPropertyFontWeight();
CORE_EXPORT const CSSProperty& GetCSSPropertyTextOrientation();
CORE_EXPORT const CSSProperty& GetCSSPropertyTextRendering();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitFontSmoothing();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitLocale();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitTextOrientation();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitWritingMode();
CORE_EXPORT const CSSProperty& GetCSSPropertyWritingMode();
CORE_EXPORT const CSSProperty& GetCSSPropertyZoom();
CORE_EXPORT const CSSProperty& GetCSSPropertyAlignContent();
CORE_EXPORT const CSSProperty& GetCSSPropertyAlignItems();
CORE_EXPORT const CSSProperty& GetCSSPropertyAlignSelf();
CORE_EXPORT const CSSProperty& GetCSSPropertyAlignmentBaseline();
CORE_EXPORT const CSSProperty& GetCSSPropertyAll();
CORE_EXPORT const CSSProperty& GetCSSPropertyBackdropFilter();
CORE_EXPORT const CSSProperty& GetCSSPropertyBackfaceVisibility();
CORE_EXPORT const CSSProperty& GetCSSPropertyBackgroundAttachment();
CORE_EXPORT const CSSProperty& GetCSSPropertyBackgroundBlendMode();
CORE_EXPORT const CSSProperty& GetCSSPropertyBackgroundClip();
CORE_EXPORT const CSSProperty& GetCSSPropertyBackgroundColor();
CORE_EXPORT const CSSProperty& GetCSSPropertyBackgroundImage();
CORE_EXPORT const CSSProperty& GetCSSPropertyBackgroundOrigin();
CORE_EXPORT const CSSProperty& GetCSSPropertyBackgroundPositionX();
CORE_EXPORT const CSSProperty& GetCSSPropertyBackgroundPositionY();
CORE_EXPORT const CSSProperty& GetCSSPropertyBackgroundRepeatX();
CORE_EXPORT const CSSProperty& GetCSSPropertyBackgroundRepeatY();
CORE_EXPORT const CSSProperty& GetCSSPropertyBackgroundSize();
CORE_EXPORT const CSSProperty& GetCSSPropertyBaselineShift();
CORE_EXPORT const CSSProperty& GetCSSPropertyBlockSize();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderBottomColor();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderBottomLeftRadius();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderBottomRightRadius();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderBottomStyle();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderBottomWidth();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderCollapse();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderImageOutset();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderImageRepeat();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderImageSlice();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderImageSource();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderImageWidth();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderLeftColor();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderLeftStyle();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderLeftWidth();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderRightColor();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderRightStyle();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderRightWidth();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderTopColor();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderTopLeftRadius();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderTopRightRadius();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderTopStyle();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderTopWidth();
CORE_EXPORT const CSSProperty& GetCSSPropertyBottom();
CORE_EXPORT const CSSProperty& GetCSSPropertyBoxShadow();
CORE_EXPORT const CSSProperty& GetCSSPropertyBoxSizing();
CORE_EXPORT const CSSProperty& GetCSSPropertyBreakAfter();
CORE_EXPORT const CSSProperty& GetCSSPropertyBreakBefore();
CORE_EXPORT const CSSProperty& GetCSSPropertyBreakInside();
CORE_EXPORT const CSSProperty& GetCSSPropertyBufferedRendering();
CORE_EXPORT const CSSProperty& GetCSSPropertyCaptionSide();
CORE_EXPORT const CSSProperty& GetCSSPropertyCaretColor();
CORE_EXPORT const CSSProperty& GetCSSPropertyClear();
CORE_EXPORT const CSSProperty& GetCSSPropertyClip();
CORE_EXPORT const CSSProperty& GetCSSPropertyClipPath();
CORE_EXPORT const CSSProperty& GetCSSPropertyClipRule();
CORE_EXPORT const CSSProperty& GetCSSPropertyColorInterpolation();
CORE_EXPORT const CSSProperty& GetCSSPropertyColorInterpolationFilters();
CORE_EXPORT const CSSProperty& GetCSSPropertyColorRendering();
CORE_EXPORT const CSSProperty& GetCSSPropertyColumnCount();
CORE_EXPORT const CSSProperty& GetCSSPropertyColumnFill();
CORE_EXPORT const CSSProperty& GetCSSPropertyColumnGap();
CORE_EXPORT const CSSProperty& GetCSSPropertyColumnRuleColor();
CORE_EXPORT const CSSProperty& GetCSSPropertyColumnRuleStyle();
CORE_EXPORT const CSSProperty& GetCSSPropertyColumnRuleWidth();
CORE_EXPORT const CSSProperty& GetCSSPropertyColumnSpan();
CORE_EXPORT const CSSProperty& GetCSSPropertyColumnWidth();
CORE_EXPORT const CSSProperty& GetCSSPropertyContain();
CORE_EXPORT const CSSProperty& GetCSSPropertyContent();
CORE_EXPORT const CSSProperty& GetCSSPropertyCounterIncrement();
CORE_EXPORT const CSSProperty& GetCSSPropertyCounterReset();
CORE_EXPORT const CSSProperty& GetCSSPropertyCursor();
CORE_EXPORT const CSSProperty& GetCSSPropertyCx();
CORE_EXPORT const CSSProperty& GetCSSPropertyCy();
CORE_EXPORT const CSSProperty& GetCSSPropertyD();
CORE_EXPORT const CSSProperty& GetCSSPropertyDisplay();
CORE_EXPORT const CSSProperty& GetCSSPropertyDominantBaseline();
CORE_EXPORT const CSSProperty& GetCSSPropertyEmptyCells();
CORE_EXPORT const CSSProperty& GetCSSPropertyFill();
CORE_EXPORT const CSSProperty& GetCSSPropertyFillOpacity();
CORE_EXPORT const CSSProperty& GetCSSPropertyFillRule();
CORE_EXPORT const CSSProperty& GetCSSPropertyFilter();
CORE_EXPORT const CSSProperty& GetCSSPropertyFlexBasis();
CORE_EXPORT const CSSProperty& GetCSSPropertyFlexDirection();
CORE_EXPORT const CSSProperty& GetCSSPropertyFlexGrow();
CORE_EXPORT const CSSProperty& GetCSSPropertyFlexShrink();
CORE_EXPORT const CSSProperty& GetCSSPropertyFlexWrap();
CORE_EXPORT const CSSProperty& GetCSSPropertyFloat();
CORE_EXPORT const CSSProperty& GetCSSPropertyFloodColor();
CORE_EXPORT const CSSProperty& GetCSSPropertyFloodOpacity();
CORE_EXPORT const CSSProperty& GetCSSPropertyFontDisplay();
CORE_EXPORT const CSSProperty& GetCSSPropertyGridAutoColumns();
CORE_EXPORT const CSSProperty& GetCSSPropertyGridAutoFlow();
CORE_EXPORT const CSSProperty& GetCSSPropertyGridAutoRows();
CORE_EXPORT const CSSProperty& GetCSSPropertyGridColumnEnd();
CORE_EXPORT const CSSProperty& GetCSSPropertyGridColumnStart();
CORE_EXPORT const CSSProperty& GetCSSPropertyGridRowEnd();
CORE_EXPORT const CSSProperty& GetCSSPropertyGridRowStart();
CORE_EXPORT const CSSProperty& GetCSSPropertyGridTemplateAreas();
CORE_EXPORT const CSSProperty& GetCSSPropertyGridTemplateColumns();
CORE_EXPORT const CSSProperty& GetCSSPropertyGridTemplateRows();
CORE_EXPORT const CSSProperty& GetCSSPropertyHeight();
CORE_EXPORT const CSSProperty& GetCSSPropertyHyphens();
CORE_EXPORT const CSSProperty& GetCSSPropertyImageOrientation();
CORE_EXPORT const CSSProperty& GetCSSPropertyImageRendering();
CORE_EXPORT const CSSProperty& GetCSSPropertyInlineSize();
CORE_EXPORT const CSSProperty& GetCSSPropertyIsolation();
CORE_EXPORT const CSSProperty& GetCSSPropertyJustifyContent();
CORE_EXPORT const CSSProperty& GetCSSPropertyJustifyItems();
CORE_EXPORT const CSSProperty& GetCSSPropertyJustifySelf();
CORE_EXPORT const CSSProperty& GetCSSPropertyLeft();
CORE_EXPORT const CSSProperty& GetCSSPropertyLetterSpacing();
CORE_EXPORT const CSSProperty& GetCSSPropertyLightingColor();
CORE_EXPORT const CSSProperty& GetCSSPropertyLineBreak();
CORE_EXPORT const CSSProperty& GetCSSPropertyLineHeight();
CORE_EXPORT const CSSProperty& GetCSSPropertyLineHeightStep();
CORE_EXPORT const CSSProperty& GetCSSPropertyListStyleImage();
CORE_EXPORT const CSSProperty& GetCSSPropertyListStylePosition();
CORE_EXPORT const CSSProperty& GetCSSPropertyListStyleType();
CORE_EXPORT const CSSProperty& GetCSSPropertyMarginBottom();
CORE_EXPORT const CSSProperty& GetCSSPropertyMarginLeft();
CORE_EXPORT const CSSProperty& GetCSSPropertyMarginRight();
CORE_EXPORT const CSSProperty& GetCSSPropertyMarginTop();
CORE_EXPORT const CSSProperty& GetCSSPropertyMarkerEnd();
CORE_EXPORT const CSSProperty& GetCSSPropertyMarkerMid();
CORE_EXPORT const CSSProperty& GetCSSPropertyMarkerStart();
CORE_EXPORT const CSSProperty& GetCSSPropertyMask();
CORE_EXPORT const CSSProperty& GetCSSPropertyMaskSourceType();
CORE_EXPORT const CSSProperty& GetCSSPropertyMaskType();
CORE_EXPORT const CSSProperty& GetCSSPropertyMaxBlockSize();
CORE_EXPORT const CSSProperty& GetCSSPropertyMaxHeight();
CORE_EXPORT const CSSProperty& GetCSSPropertyMaxInlineSize();
CORE_EXPORT const CSSProperty& GetCSSPropertyMaxWidth();
CORE_EXPORT const CSSProperty& GetCSSPropertyMaxZoom();
CORE_EXPORT const CSSProperty& GetCSSPropertyMinBlockSize();
CORE_EXPORT const CSSProperty& GetCSSPropertyMinHeight();
CORE_EXPORT const CSSProperty& GetCSSPropertyMinInlineSize();
CORE_EXPORT const CSSProperty& GetCSSPropertyMinWidth();
CORE_EXPORT const CSSProperty& GetCSSPropertyMinZoom();
CORE_EXPORT const CSSProperty& GetCSSPropertyMixBlendMode();
CORE_EXPORT const CSSProperty& GetCSSPropertyObjectFit();
CORE_EXPORT const CSSProperty& GetCSSPropertyObjectPosition();
CORE_EXPORT const CSSProperty& GetCSSPropertyOffsetAnchor();
CORE_EXPORT const CSSProperty& GetCSSPropertyOffsetDistance();
CORE_EXPORT const CSSProperty& GetCSSPropertyOffsetPath();
CORE_EXPORT const CSSProperty& GetCSSPropertyOffsetPosition();
CORE_EXPORT const CSSProperty& GetCSSPropertyOffsetRotate();
CORE_EXPORT const CSSProperty& GetCSSPropertyOpacity();
CORE_EXPORT const CSSProperty& GetCSSPropertyOrder();
CORE_EXPORT const CSSProperty& GetCSSPropertyOrientation();
CORE_EXPORT const CSSProperty& GetCSSPropertyOrphans();
CORE_EXPORT const CSSProperty& GetCSSPropertyOutlineColor();
CORE_EXPORT const CSSProperty& GetCSSPropertyOutlineOffset();
CORE_EXPORT const CSSProperty& GetCSSPropertyOutlineStyle();
CORE_EXPORT const CSSProperty& GetCSSPropertyOutlineWidth();
CORE_EXPORT const CSSProperty& GetCSSPropertyOverflowAnchor();
CORE_EXPORT const CSSProperty& GetCSSPropertyOverflowWrap();
CORE_EXPORT const CSSProperty& GetCSSPropertyOverflowX();
CORE_EXPORT const CSSProperty& GetCSSPropertyOverflowY();
CORE_EXPORT const CSSProperty& GetCSSPropertyOverscrollBehaviorX();
CORE_EXPORT const CSSProperty& GetCSSPropertyOverscrollBehaviorY();
CORE_EXPORT const CSSProperty& GetCSSPropertyPaddingBottom();
CORE_EXPORT const CSSProperty& GetCSSPropertyPaddingLeft();
CORE_EXPORT const CSSProperty& GetCSSPropertyPaddingRight();
CORE_EXPORT const CSSProperty& GetCSSPropertyPaddingTop();
CORE_EXPORT const CSSProperty& GetCSSPropertyPage();
CORE_EXPORT const CSSProperty& GetCSSPropertyPaintOrder();
CORE_EXPORT const CSSProperty& GetCSSPropertyPerspective();
CORE_EXPORT const CSSProperty& GetCSSPropertyPerspectiveOrigin();
CORE_EXPORT const CSSProperty& GetCSSPropertyPointerEvents();
CORE_EXPORT const CSSProperty& GetCSSPropertyPosition();
CORE_EXPORT const CSSProperty& GetCSSPropertyQuotes();
CORE_EXPORT const CSSProperty& GetCSSPropertyR();
CORE_EXPORT const CSSProperty& GetCSSPropertyResize();
CORE_EXPORT const CSSProperty& GetCSSPropertyRight();
CORE_EXPORT const CSSProperty& GetCSSPropertyRotate();
CORE_EXPORT const CSSProperty& GetCSSPropertyRowGap();
CORE_EXPORT const CSSProperty& GetCSSPropertyRx();
CORE_EXPORT const CSSProperty& GetCSSPropertyRy();
CORE_EXPORT const CSSProperty& GetCSSPropertyScale();
CORE_EXPORT const CSSProperty& GetCSSPropertyScrollBehavior();
CORE_EXPORT const CSSProperty& GetCSSPropertyScrollCustomization();
CORE_EXPORT const CSSProperty& GetCSSPropertyScrollMarginBlockEnd();
CORE_EXPORT const CSSProperty& GetCSSPropertyScrollMarginBlockStart();
CORE_EXPORT const CSSProperty& GetCSSPropertyScrollMarginBottom();
CORE_EXPORT const CSSProperty& GetCSSPropertyScrollMarginInlineEnd();
CORE_EXPORT const CSSProperty& GetCSSPropertyScrollMarginInlineStart();
CORE_EXPORT const CSSProperty& GetCSSPropertyScrollMarginLeft();
CORE_EXPORT const CSSProperty& GetCSSPropertyScrollMarginRight();
CORE_EXPORT const CSSProperty& GetCSSPropertyScrollMarginTop();
CORE_EXPORT const CSSProperty& GetCSSPropertyScrollPaddingBlockEnd();
CORE_EXPORT const CSSProperty& GetCSSPropertyScrollPaddingBlockStart();
CORE_EXPORT const CSSProperty& GetCSSPropertyScrollPaddingBottom();
CORE_EXPORT const CSSProperty& GetCSSPropertyScrollPaddingInlineEnd();
CORE_EXPORT const CSSProperty& GetCSSPropertyScrollPaddingInlineStart();
CORE_EXPORT const CSSProperty& GetCSSPropertyScrollPaddingLeft();
CORE_EXPORT const CSSProperty& GetCSSPropertyScrollPaddingRight();
CORE_EXPORT const CSSProperty& GetCSSPropertyScrollPaddingTop();
CORE_EXPORT const CSSProperty& GetCSSPropertyScrollSnapAlign();
CORE_EXPORT const CSSProperty& GetCSSPropertyScrollSnapStop();
CORE_EXPORT const CSSProperty& GetCSSPropertyScrollSnapType();
CORE_EXPORT const CSSProperty& GetCSSPropertyShapeImageThreshold();
CORE_EXPORT const CSSProperty& GetCSSPropertyShapeMargin();
CORE_EXPORT const CSSProperty& GetCSSPropertyShapeOutside();
CORE_EXPORT const CSSProperty& GetCSSPropertyShapeRendering();
CORE_EXPORT const CSSProperty& GetCSSPropertySize();
CORE_EXPORT const CSSProperty& GetCSSPropertySpeak();
CORE_EXPORT const CSSProperty& GetCSSPropertySrc();
CORE_EXPORT const CSSProperty& GetCSSPropertyStopColor();
CORE_EXPORT const CSSProperty& GetCSSPropertyStopOpacity();
CORE_EXPORT const CSSProperty& GetCSSPropertyStroke();
CORE_EXPORT const CSSProperty& GetCSSPropertyStrokeDasharray();
CORE_EXPORT const CSSProperty& GetCSSPropertyStrokeDashoffset();
CORE_EXPORT const CSSProperty& GetCSSPropertyStrokeLinecap();
CORE_EXPORT const CSSProperty& GetCSSPropertyStrokeLinejoin();
CORE_EXPORT const CSSProperty& GetCSSPropertyStrokeMiterlimit();
CORE_EXPORT const CSSProperty& GetCSSPropertyStrokeOpacity();
CORE_EXPORT const CSSProperty& GetCSSPropertyStrokeWidth();
CORE_EXPORT const CSSProperty& GetCSSPropertyTabSize();
CORE_EXPORT const CSSProperty& GetCSSPropertyTableLayout();
CORE_EXPORT const CSSProperty& GetCSSPropertyTextAlign();
CORE_EXPORT const CSSProperty& GetCSSPropertyTextAlignLast();
CORE_EXPORT const CSSProperty& GetCSSPropertyTextAnchor();
CORE_EXPORT const CSSProperty& GetCSSPropertyTextCombineUpright();
CORE_EXPORT const CSSProperty& GetCSSPropertyTextDecorationColor();
CORE_EXPORT const CSSProperty& GetCSSPropertyTextDecorationLine();
CORE_EXPORT const CSSProperty& GetCSSPropertyTextDecorationSkipInk();
CORE_EXPORT const CSSProperty& GetCSSPropertyTextDecorationStyle();
CORE_EXPORT const CSSProperty& GetCSSPropertyTextIndent();
CORE_EXPORT const CSSProperty& GetCSSPropertyTextJustify();
CORE_EXPORT const CSSProperty& GetCSSPropertyTextOverflow();
CORE_EXPORT const CSSProperty& GetCSSPropertyTextShadow();
CORE_EXPORT const CSSProperty& GetCSSPropertyTextSizeAdjust();
CORE_EXPORT const CSSProperty& GetCSSPropertyTextTransform();
CORE_EXPORT const CSSProperty& GetCSSPropertyTextUnderlinePosition();
CORE_EXPORT const CSSProperty& GetCSSPropertyTop();
CORE_EXPORT const CSSProperty& GetCSSPropertyTouchAction();
CORE_EXPORT const CSSProperty& GetCSSPropertyTransform();
CORE_EXPORT const CSSProperty& GetCSSPropertyTransformBox();
CORE_EXPORT const CSSProperty& GetCSSPropertyTransformOrigin();
CORE_EXPORT const CSSProperty& GetCSSPropertyTransformStyle();
CORE_EXPORT const CSSProperty& GetCSSPropertyTranslate();
CORE_EXPORT const CSSProperty& GetCSSPropertyUnicodeBidi();
CORE_EXPORT const CSSProperty& GetCSSPropertyUnicodeRange();
CORE_EXPORT const CSSProperty& GetCSSPropertyUserSelect();
CORE_EXPORT const CSSProperty& GetCSSPropertyUserZoom();
CORE_EXPORT const CSSProperty& GetCSSPropertyVectorEffect();
CORE_EXPORT const CSSProperty& GetCSSPropertyVerticalAlign();
CORE_EXPORT const CSSProperty& GetCSSPropertyViewportFit();
CORE_EXPORT const CSSProperty& GetCSSPropertyVisibility();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitAppRegion();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitAppearance();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitBorderAfterColor();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitBorderAfterStyle();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitBorderAfterWidth();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitBorderBeforeColor();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitBorderBeforeStyle();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitBorderBeforeWidth();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitBorderEndColor();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitBorderEndStyle();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitBorderEndWidth();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitBorderHorizontalSpacing();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitBorderImage();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitBorderStartColor();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitBorderStartStyle();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitBorderStartWidth();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitBorderVerticalSpacing();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitBoxAlign();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitBoxDecorationBreak();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitBoxDirection();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitBoxFlex();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitBoxOrdinalGroup();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitBoxOrient();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitBoxPack();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitBoxReflect();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitFontSizeDelta();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitHighlight();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitHyphenateCharacter();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitLineBreak();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitLineClamp();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitLogicalHeight();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitLogicalWidth();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMarginAfter();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMarginAfterCollapse();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMarginBefore();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMarginBeforeCollapse();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMarginBottomCollapse();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMarginEnd();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMarginStart();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMarginTopCollapse();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMaskBoxImageOutset();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMaskBoxImageRepeat();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMaskBoxImageSlice();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMaskBoxImageSource();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMaskBoxImageWidth();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMaskClip();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMaskComposite();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMaskImage();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMaskOrigin();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMaskPositionX();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMaskPositionY();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMaskRepeatX();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMaskRepeatY();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMaskSize();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMaxLogicalHeight();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMaxLogicalWidth();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMinLogicalHeight();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMinLogicalWidth();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitPaddingAfter();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitPaddingBefore();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitPaddingEnd();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitPaddingStart();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitPerspectiveOriginX();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitPerspectiveOriginY();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitPrintColorAdjust();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitRtlOrdering();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitRubyPosition();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitTapHighlightColor();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitTextCombine();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitTextDecorationsInEffect();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitTextEmphasisColor();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitTextEmphasisPosition();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitTextEmphasisStyle();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitTextFillColor();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitTextSecurity();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitTextStrokeColor();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitTextStrokeWidth();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitTransformOriginX();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitTransformOriginY();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitTransformOriginZ();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitUserDrag();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitUserModify();
CORE_EXPORT const CSSProperty& GetCSSPropertyWhiteSpace();
CORE_EXPORT const CSSProperty& GetCSSPropertyWidows();
CORE_EXPORT const CSSProperty& GetCSSPropertyWidth();
CORE_EXPORT const CSSProperty& GetCSSPropertyWillChange();
CORE_EXPORT const CSSProperty& GetCSSPropertyWordBreak();
CORE_EXPORT const CSSProperty& GetCSSPropertyWordSpacing();
CORE_EXPORT const CSSProperty& GetCSSPropertyWordWrap();
CORE_EXPORT const CSSProperty& GetCSSPropertyX();
CORE_EXPORT const CSSProperty& GetCSSPropertyY();
CORE_EXPORT const CSSProperty& GetCSSPropertyZIndex();
CORE_EXPORT const CSSProperty& GetCSSPropertyAnimation();
CORE_EXPORT const CSSProperty& GetCSSPropertyBackground();
CORE_EXPORT const CSSProperty& GetCSSPropertyBackgroundPosition();
CORE_EXPORT const CSSProperty& GetCSSPropertyBackgroundRepeat();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorder();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderBottom();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderColor();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderImage();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderLeft();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderRadius();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderRight();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderSpacing();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderStyle();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderTop();
CORE_EXPORT const CSSProperty& GetCSSPropertyBorderWidth();
CORE_EXPORT const CSSProperty& GetCSSPropertyColumnRule();
CORE_EXPORT const CSSProperty& GetCSSPropertyColumns();
CORE_EXPORT const CSSProperty& GetCSSPropertyFlex();
CORE_EXPORT const CSSProperty& GetCSSPropertyFlexFlow();
CORE_EXPORT const CSSProperty& GetCSSPropertyFont();
CORE_EXPORT const CSSProperty& GetCSSPropertyFontVariant();
CORE_EXPORT const CSSProperty& GetCSSPropertyGap();
CORE_EXPORT const CSSProperty& GetCSSPropertyGrid();
CORE_EXPORT const CSSProperty& GetCSSPropertyGridArea();
CORE_EXPORT const CSSProperty& GetCSSPropertyGridColumn();
CORE_EXPORT const CSSProperty& GetCSSPropertyGridColumnGap();
CORE_EXPORT const CSSProperty& GetCSSPropertyGridGap();
CORE_EXPORT const CSSProperty& GetCSSPropertyGridRow();
CORE_EXPORT const CSSProperty& GetCSSPropertyGridRowGap();
CORE_EXPORT const CSSProperty& GetCSSPropertyGridTemplate();
CORE_EXPORT const CSSProperty& GetCSSPropertyListStyle();
CORE_EXPORT const CSSProperty& GetCSSPropertyMargin();
CORE_EXPORT const CSSProperty& GetCSSPropertyMarker();
CORE_EXPORT const CSSProperty& GetCSSPropertyOffset();
CORE_EXPORT const CSSProperty& GetCSSPropertyOutline();
CORE_EXPORT const CSSProperty& GetCSSPropertyOverflow();
CORE_EXPORT const CSSProperty& GetCSSPropertyOverscrollBehavior();
CORE_EXPORT const CSSProperty& GetCSSPropertyPadding();
CORE_EXPORT const CSSProperty& GetCSSPropertyPageBreakAfter();
CORE_EXPORT const CSSProperty& GetCSSPropertyPageBreakBefore();
CORE_EXPORT const CSSProperty& GetCSSPropertyPageBreakInside();
CORE_EXPORT const CSSProperty& GetCSSPropertyPlaceContent();
CORE_EXPORT const CSSProperty& GetCSSPropertyPlaceItems();
CORE_EXPORT const CSSProperty& GetCSSPropertyPlaceSelf();
CORE_EXPORT const CSSProperty& GetCSSPropertyScrollMargin();
CORE_EXPORT const CSSProperty& GetCSSPropertyScrollMarginBlock();
CORE_EXPORT const CSSProperty& GetCSSPropertyScrollMarginInline();
CORE_EXPORT const CSSProperty& GetCSSPropertyScrollPadding();
CORE_EXPORT const CSSProperty& GetCSSPropertyScrollPaddingBlock();
CORE_EXPORT const CSSProperty& GetCSSPropertyScrollPaddingInline();
CORE_EXPORT const CSSProperty& GetCSSPropertyTextDecoration();
CORE_EXPORT const CSSProperty& GetCSSPropertyTransition();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitBorderAfter();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitBorderBefore();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitBorderEnd();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitBorderStart();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitColumnBreakAfter();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitColumnBreakBefore();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitColumnBreakInside();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMarginCollapse();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMask();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMaskBoxImage();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMaskPosition();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitMaskRepeat();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitTextEmphasis();
CORE_EXPORT const CSSProperty& GetCSSPropertyWebkitTextStroke();

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTY_H_
