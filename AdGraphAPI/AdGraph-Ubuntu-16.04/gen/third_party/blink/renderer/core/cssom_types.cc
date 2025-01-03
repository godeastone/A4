// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/templates/cssom_types.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/ComputedStyleFieldAliases.json5
//   ../../third_party/blink/renderer/core/css/CSSProperties.json5


#include "third_party/blink/renderer/core/css/cssom/cssom_types.h"

#include "third_party/blink/renderer/core/css/cssom/cssom_keywords.h"
#include "third_party/blink/renderer/core/css/cssom/css_keyword_value.h"
#include "third_party/blink/renderer/core/css/cssom/css_numeric_value.h"
#include "third_party/blink/renderer/core/css/cssom/css_style_value.h"
#include "third_party/blink/renderer/core/css/cssom/css_unsupported_style_value.h"
#include "third_party/blink/renderer/core/css/properties/css_property.h"

namespace blink {

namespace {

bool IsCSSStyleValueLength(const CSSStyleValue& value) {
  if (!value.IsNumericValue())
    return false;
  return static_cast<const CSSNumericValue&>(value).Type().
    MatchesBaseType(CSSNumericValueType::BaseType::kLength);
}

bool IsCSSStyleValueNumber(const CSSStyleValue& value) {
  if (!value.IsNumericValue())
    return false;
  return static_cast<const CSSNumericValue&>(value).Type().
    MatchesNumber();
}

bool IsCSSStyleValueTime(const CSSStyleValue& value) {
  if (!value.IsNumericValue())
    return false;
  return static_cast<const CSSNumericValue&>(value).Type().
    MatchesBaseType(CSSNumericValueType::BaseType::kTime);
}

bool IsCSSStyleValueAngle(const CSSStyleValue& value) {
  if (!value.IsNumericValue())
    return false;
  return static_cast<const CSSNumericValue&>(value).Type().
    MatchesBaseType(CSSNumericValueType::BaseType::kAngle);
}

bool IsCSSStyleValuePercentage(const CSSStyleValue& value) {
  if (!value.IsNumericValue())
    return false;
  return static_cast<const CSSNumericValue&>(value).Type().
    MatchesPercentage();
}

bool IsCSSStyleValueFlex(const CSSStyleValue& value) {
  if (!value.IsNumericValue())
    return false;
  return static_cast<const CSSNumericValue&>(value).Type().
    MatchesBaseType(CSSNumericValueType::BaseType::kFlex);
}

bool IsCSSStyleValueImage(const CSSStyleValue& value) {
  return value.GetType() == CSSStyleValue::kURLImageType;
}

bool IsCSSStyleValueTransform(const CSSStyleValue& value) {
  return value.GetType() == CSSStyleValue::kTransformType;
}

bool IsCSSStyleValuePosition(const CSSStyleValue& value) {
  return value.GetType() == CSSStyleValue::kPositionType;
}

}

bool CSSOMTypes::IsPropertySupported(CSSPropertyID id) {
  switch (id) {
    case CSSPropertyVariable:
    case CSSPropertyAnimationDelay:
    case CSSPropertyAnimationDirection:
    case CSSPropertyAnimationDuration:
    case CSSPropertyAnimationFillMode:
    case CSSPropertyAnimationIterationCount:
    case CSSPropertyAnimationName:
    case CSSPropertyAnimationPlayState:
    case CSSPropertyAnimationTimingFunction:
    case CSSPropertyTransitionDelay:
    case CSSPropertyTransitionDuration:
    case CSSPropertyTransitionProperty:
    case CSSPropertyTransitionTimingFunction:
    case CSSPropertyColor:
    case CSSPropertyDirection:
    case CSSPropertyFontFeatureSettings:
    case CSSPropertyFontKerning:
    case CSSPropertyFontSize:
    case CSSPropertyFontSizeAdjust:
    case CSSPropertyFontStretch:
    case CSSPropertyFontStyle:
    case CSSPropertyFontVariantCaps:
    case CSSPropertyFontVariantEastAsian:
    case CSSPropertyFontVariantLigatures:
    case CSSPropertyFontVariantNumeric:
    case CSSPropertyFontVariationSettings:
    case CSSPropertyFontWeight:
    case CSSPropertyTextOrientation:
    case CSSPropertyTextRendering:
    case CSSPropertyWritingMode:
    case CSSPropertyAlignmentBaseline:
    case CSSPropertyBackdropFilter:
    case CSSPropertyBackfaceVisibility:
    case CSSPropertyBackgroundAttachment:
    case CSSPropertyBackgroundBlendMode:
    case CSSPropertyBackgroundClip:
    case CSSPropertyBackgroundColor:
    case CSSPropertyBackgroundImage:
    case CSSPropertyBackgroundOrigin:
    case CSSPropertyBackgroundSize:
    case CSSPropertyBaselineShift:
    case CSSPropertyBlockSize:
    case CSSPropertyBorderBottomColor:
    case CSSPropertyBorderBottomLeftRadius:
    case CSSPropertyBorderBottomRightRadius:
    case CSSPropertyBorderBottomStyle:
    case CSSPropertyBorderBottomWidth:
    case CSSPropertyBorderCollapse:
    case CSSPropertyBorderImageOutset:
    case CSSPropertyBorderImageRepeat:
    case CSSPropertyBorderImageSlice:
    case CSSPropertyBorderImageSource:
    case CSSPropertyBorderImageWidth:
    case CSSPropertyBorderLeftColor:
    case CSSPropertyBorderLeftStyle:
    case CSSPropertyBorderLeftWidth:
    case CSSPropertyBorderRightColor:
    case CSSPropertyBorderRightStyle:
    case CSSPropertyBorderRightWidth:
    case CSSPropertyBorderTopColor:
    case CSSPropertyBorderTopLeftRadius:
    case CSSPropertyBorderTopRightRadius:
    case CSSPropertyBorderTopStyle:
    case CSSPropertyBorderTopWidth:
    case CSSPropertyBottom:
    case CSSPropertyBoxShadow:
    case CSSPropertyBoxSizing:
    case CSSPropertyBreakAfter:
    case CSSPropertyBreakBefore:
    case CSSPropertyBreakInside:
    case CSSPropertyCaptionSide:
    case CSSPropertyCaretColor:
    case CSSPropertyClear:
    case CSSPropertyClip:
    case CSSPropertyClipPath:
    case CSSPropertyClipRule:
    case CSSPropertyColorInterpolation:
    case CSSPropertyColorRendering:
    case CSSPropertyColumnCount:
    case CSSPropertyColumnFill:
    case CSSPropertyColumnGap:
    case CSSPropertyColumnRuleColor:
    case CSSPropertyColumnRuleStyle:
    case CSSPropertyColumnRuleWidth:
    case CSSPropertyColumnSpan:
    case CSSPropertyColumnWidth:
    case CSSPropertyContain:
    case CSSPropertyCounterIncrement:
    case CSSPropertyCounterReset:
    case CSSPropertyCursor:
    case CSSPropertyCx:
    case CSSPropertyCy:
    case CSSPropertyD:
    case CSSPropertyDisplay:
    case CSSPropertyDominantBaseline:
    case CSSPropertyEmptyCells:
    case CSSPropertyFillOpacity:
    case CSSPropertyFillRule:
    case CSSPropertyFilter:
    case CSSPropertyFlexBasis:
    case CSSPropertyFlexDirection:
    case CSSPropertyFlexGrow:
    case CSSPropertyFlexShrink:
    case CSSPropertyFlexWrap:
    case CSSPropertyFloat:
    case CSSPropertyFloodColor:
    case CSSPropertyFloodOpacity:
    case CSSPropertyGridAutoColumns:
    case CSSPropertyGridAutoFlow:
    case CSSPropertyGridAutoRows:
    case CSSPropertyGridColumnEnd:
    case CSSPropertyGridColumnStart:
    case CSSPropertyGridRowEnd:
    case CSSPropertyGridRowStart:
    case CSSPropertyGridTemplateAreas:
    case CSSPropertyGridTemplateColumns:
    case CSSPropertyGridTemplateRows:
    case CSSPropertyHeight:
    case CSSPropertyHyphens:
    case CSSPropertyImageRendering:
    case CSSPropertyInlineSize:
    case CSSPropertyIsolation:
    case CSSPropertyLeft:
    case CSSPropertyLetterSpacing:
    case CSSPropertyLightingColor:
    case CSSPropertyLineBreak:
    case CSSPropertyLineHeight:
    case CSSPropertyLineHeightStep:
    case CSSPropertyListStyleImage:
    case CSSPropertyListStylePosition:
    case CSSPropertyMarginBottom:
    case CSSPropertyMarginLeft:
    case CSSPropertyMarginRight:
    case CSSPropertyMarginTop:
    case CSSPropertyMarkerEnd:
    case CSSPropertyMarkerMid:
    case CSSPropertyMarkerStart:
    case CSSPropertyMaskType:
    case CSSPropertyMaxBlockSize:
    case CSSPropertyMaxHeight:
    case CSSPropertyMaxInlineSize:
    case CSSPropertyMaxWidth:
    case CSSPropertyMinBlockSize:
    case CSSPropertyMinHeight:
    case CSSPropertyMinInlineSize:
    case CSSPropertyMinWidth:
    case CSSPropertyMixBlendMode:
    case CSSPropertyObjectFit:
    case CSSPropertyObjectPosition:
    case CSSPropertyOffsetAnchor:
    case CSSPropertyOffsetDistance:
    case CSSPropertyOffsetPath:
    case CSSPropertyOffsetPosition:
    case CSSPropertyOffsetRotate:
    case CSSPropertyOpacity:
    case CSSPropertyOrder:
    case CSSPropertyOrphans:
    case CSSPropertyOutlineColor:
    case CSSPropertyOutlineOffset:
    case CSSPropertyOutlineStyle:
    case CSSPropertyOutlineWidth:
    case CSSPropertyOverflowAnchor:
    case CSSPropertyOverflowWrap:
    case CSSPropertyOverflowX:
    case CSSPropertyOverflowY:
    case CSSPropertyOverscrollBehaviorX:
    case CSSPropertyOverscrollBehaviorY:
    case CSSPropertyPaddingBottom:
    case CSSPropertyPaddingLeft:
    case CSSPropertyPaddingRight:
    case CSSPropertyPaddingTop:
    case CSSPropertyPaintOrder:
    case CSSPropertyPerspective:
    case CSSPropertyPerspectiveOrigin:
    case CSSPropertyPointerEvents:
    case CSSPropertyPosition:
    case CSSPropertyQuotes:
    case CSSPropertyR:
    case CSSPropertyResize:
    case CSSPropertyRight:
    case CSSPropertyRowGap:
    case CSSPropertyRx:
    case CSSPropertyRy:
    case CSSPropertyScrollBehavior:
    case CSSPropertyScrollMarginBlockEnd:
    case CSSPropertyScrollMarginBlockStart:
    case CSSPropertyScrollMarginBottom:
    case CSSPropertyScrollMarginInlineEnd:
    case CSSPropertyScrollMarginInlineStart:
    case CSSPropertyScrollMarginLeft:
    case CSSPropertyScrollMarginRight:
    case CSSPropertyScrollMarginTop:
    case CSSPropertyScrollPaddingBlockEnd:
    case CSSPropertyScrollPaddingBlockStart:
    case CSSPropertyScrollPaddingBottom:
    case CSSPropertyScrollPaddingInlineEnd:
    case CSSPropertyScrollPaddingInlineStart:
    case CSSPropertyScrollPaddingLeft:
    case CSSPropertyScrollPaddingRight:
    case CSSPropertyScrollPaddingTop:
    case CSSPropertyScrollSnapAlign:
    case CSSPropertyScrollSnapStop:
    case CSSPropertyScrollSnapType:
    case CSSPropertyShapeImageThreshold:
    case CSSPropertyShapeMargin:
    case CSSPropertyShapeOutside:
    case CSSPropertyShapeRendering:
    case CSSPropertyStopColor:
    case CSSPropertyStopOpacity:
    case CSSPropertyStrokeDasharray:
    case CSSPropertyStrokeDashoffset:
    case CSSPropertyStrokeLinecap:
    case CSSPropertyStrokeLinejoin:
    case CSSPropertyStrokeMiterlimit:
    case CSSPropertyStrokeOpacity:
    case CSSPropertyStrokeWidth:
    case CSSPropertyTabSize:
    case CSSPropertyTableLayout:
    case CSSPropertyTextAlign:
    case CSSPropertyTextAlignLast:
    case CSSPropertyTextAnchor:
    case CSSPropertyTextCombineUpright:
    case CSSPropertyTextDecorationColor:
    case CSSPropertyTextDecorationLine:
    case CSSPropertyTextDecorationSkipInk:
    case CSSPropertyTextDecorationStyle:
    case CSSPropertyTextIndent:
    case CSSPropertyTextJustify:
    case CSSPropertyTextOverflow:
    case CSSPropertyTextShadow:
    case CSSPropertyTextSizeAdjust:
    case CSSPropertyTextTransform:
    case CSSPropertyTextUnderlinePosition:
    case CSSPropertyTop:
    case CSSPropertyTouchAction:
    case CSSPropertyTransform:
    case CSSPropertyTransformBox:
    case CSSPropertyTransformStyle:
    case CSSPropertyUnicodeBidi:
    case CSSPropertyUserSelect:
    case CSSPropertyVectorEffect:
    case CSSPropertyVerticalAlign:
    case CSSPropertyVisibility:
    case CSSPropertyWhiteSpace:
    case CSSPropertyWidows:
    case CSSPropertyWidth:
    case CSSPropertyWillChange:
    case CSSPropertyWordBreak:
    case CSSPropertyWordSpacing:
    case CSSPropertyWordWrap:
    case CSSPropertyX:
    case CSSPropertyY:
    case CSSPropertyZIndex:
      return true;
    default:
      return false;
  }
}

bool CSSOMTypes::PropertyCanTake(CSSPropertyID id,
                                 const CSSStyleValue& value) {
  if (value.GetType() == CSSStyleValue::kKeywordType) {
    return CSSOMKeywords::ValidKeywordForProperty(
        id, ToCSSKeywordValue(value));
  }
  if (value.GetType() == CSSStyleValue::kUnknownType) {
    return ToCSSUnsupportedStyleValue(value).GetProperty() == id;
  }
  if (value.GetType() == CSSStyleValue::kUnparsedType) {
    return true;
  }

  switch (id) {
    case CSSPropertyVariable:
      return value.GetType() == CSSStyleValue::kUnparsedType;
    case CSSPropertyAnimationDelay:
      return (
          IsCSSStyleValueTime(value)
      );
    case CSSPropertyAnimationDuration:
      return (
          IsCSSStyleValueTime(value)
      );
    case CSSPropertyAnimationIterationCount:
      return (
          IsCSSStyleValueNumber(value)
      );
    case CSSPropertyTransitionDelay:
      return (
          IsCSSStyleValueTime(value)
      );
    case CSSPropertyTransitionDuration:
      return (
          IsCSSStyleValueTime(value)
      );
    case CSSPropertyFontSize:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyFontSizeAdjust:
      return (
          IsCSSStyleValueNumber(value)
      );
    case CSSPropertyFontStretch:
      return (
          IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyFontWeight:
      return (
          IsCSSStyleValueNumber(value)
      );
    case CSSPropertyBackgroundImage:
      return (
          IsCSSStyleValueImage(value)
      );
    case CSSPropertyBackgroundSize:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyBaselineShift:
      return (
          IsCSSStyleValuePercentage(value)
          || IsCSSStyleValueLength(value)
      );
    case CSSPropertyBlockSize:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyBorderBottomLeftRadius:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyBorderBottomRightRadius:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyBorderBottomWidth:
      return (
          IsCSSStyleValueLength(value)
      );
    case CSSPropertyBorderImageOutset:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValueNumber(value)
      );
    case CSSPropertyBorderImageSlice:
      return (
          IsCSSStyleValueNumber(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyBorderImageSource:
      return (
          IsCSSStyleValueImage(value)
      );
    case CSSPropertyBorderImageWidth:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
          || IsCSSStyleValueNumber(value)
      );
    case CSSPropertyBorderLeftWidth:
      return (
          IsCSSStyleValueLength(value)
      );
    case CSSPropertyBorderRightWidth:
      return (
          IsCSSStyleValueLength(value)
      );
    case CSSPropertyBorderTopLeftRadius:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyBorderTopRightRadius:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyBorderTopWidth:
      return (
          IsCSSStyleValueLength(value)
      );
    case CSSPropertyBottom:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyColumnCount:
      return (
          IsCSSStyleValueNumber(value)
      );
    case CSSPropertyColumnGap:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyColumnRuleWidth:
      return (
          IsCSSStyleValueLength(value)
      );
    case CSSPropertyColumnWidth:
      return (
          IsCSSStyleValueLength(value)
      );
    case CSSPropertyCx:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyCy:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyFillOpacity:
      return (
          IsCSSStyleValueNumber(value)
      );
    case CSSPropertyFlexBasis:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyFlexGrow:
      return (
          IsCSSStyleValueNumber(value)
      );
    case CSSPropertyFlexShrink:
      return (
          IsCSSStyleValueNumber(value)
      );
    case CSSPropertyFloodOpacity:
      return (
          IsCSSStyleValueNumber(value)
      );
    case CSSPropertyGridAutoColumns:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
          || IsCSSStyleValueFlex(value)
      );
    case CSSPropertyGridAutoRows:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
          || IsCSSStyleValueFlex(value)
      );
    case CSSPropertyHeight:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyInlineSize:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyLeft:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyLetterSpacing:
      return (
          IsCSSStyleValueLength(value)
      );
    case CSSPropertyLineHeight:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValueNumber(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyLineHeightStep:
      return (
          IsCSSStyleValueLength(value)
      );
    case CSSPropertyListStyleImage:
      return (
          IsCSSStyleValueImage(value)
      );
    case CSSPropertyMarginBottom:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyMarginLeft:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyMarginRight:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyMarginTop:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyMaxBlockSize:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyMaxHeight:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyMaxInlineSize:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyMaxWidth:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyMinBlockSize:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyMinHeight:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyMinInlineSize:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyMinWidth:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyObjectPosition:
      return (
          IsCSSStyleValuePosition(value)
      );
    case CSSPropertyOffsetAnchor:
      return (
          IsCSSStyleValuePosition(value)
      );
    case CSSPropertyOffsetDistance:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyOffsetPosition:
      return (
          IsCSSStyleValuePosition(value)
      );
    case CSSPropertyOffsetRotate:
      return (
          IsCSSStyleValueAngle(value)
      );
    case CSSPropertyOpacity:
      return (
          IsCSSStyleValueNumber(value)
      );
    case CSSPropertyOrder:
      return (
          IsCSSStyleValueNumber(value)
      );
    case CSSPropertyOrphans:
      return (
          IsCSSStyleValueNumber(value)
      );
    case CSSPropertyOutlineOffset:
      return (
          IsCSSStyleValueLength(value)
      );
    case CSSPropertyOutlineWidth:
      return (
          IsCSSStyleValueLength(value)
      );
    case CSSPropertyPaddingBottom:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyPaddingLeft:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyPaddingRight:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyPaddingTop:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyPerspective:
      return (
          IsCSSStyleValueLength(value)
      );
    case CSSPropertyPerspectiveOrigin:
      return (
          IsCSSStyleValuePosition(value)
      );
    case CSSPropertyR:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyRight:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyRowGap:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyRx:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyRy:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyScrollMarginBlockEnd:
      return (
          IsCSSStyleValueLength(value)
      );
    case CSSPropertyScrollMarginBlockStart:
      return (
          IsCSSStyleValueLength(value)
      );
    case CSSPropertyScrollMarginBottom:
      return (
          IsCSSStyleValueLength(value)
      );
    case CSSPropertyScrollMarginInlineEnd:
      return (
          IsCSSStyleValueLength(value)
      );
    case CSSPropertyScrollMarginInlineStart:
      return (
          IsCSSStyleValueLength(value)
      );
    case CSSPropertyScrollMarginLeft:
      return (
          IsCSSStyleValueLength(value)
      );
    case CSSPropertyScrollMarginRight:
      return (
          IsCSSStyleValueLength(value)
      );
    case CSSPropertyScrollMarginTop:
      return (
          IsCSSStyleValueLength(value)
      );
    case CSSPropertyScrollPaddingBlockEnd:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyScrollPaddingBlockStart:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyScrollPaddingBottom:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyScrollPaddingInlineEnd:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyScrollPaddingInlineStart:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyScrollPaddingLeft:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyScrollPaddingRight:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyScrollPaddingTop:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyShapeImageThreshold:
      return (
          IsCSSStyleValueNumber(value)
      );
    case CSSPropertyShapeMargin:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyShapeOutside:
      return (
          IsCSSStyleValueImage(value)
      );
    case CSSPropertyStopOpacity:
      return (
          IsCSSStyleValueNumber(value)
      );
    case CSSPropertyStrokeDashoffset:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyStrokeMiterlimit:
      return (
          IsCSSStyleValueNumber(value)
      );
    case CSSPropertyStrokeOpacity:
      return (
          IsCSSStyleValueNumber(value)
      );
    case CSSPropertyStrokeWidth:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyTabSize:
      return (
          IsCSSStyleValueNumber(value)
          || IsCSSStyleValueLength(value)
      );
    case CSSPropertyTextIndent:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyTextSizeAdjust:
      return (
          IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyTop:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyTransform:
      return (
          IsCSSStyleValueTransform(value)
      );
    case CSSPropertyVerticalAlign:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyWidows:
      return (
          IsCSSStyleValueNumber(value)
      );
    case CSSPropertyWidth:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyWordSpacing:
      return (
          IsCSSStyleValueLength(value)
      );
    case CSSPropertyX:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyY:
      return (
          IsCSSStyleValueLength(value)
          || IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyZIndex:
      return (
          IsCSSStyleValueNumber(value)
      );
    default:
      return false;
  }
}

}  // namespace blink
