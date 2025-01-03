/*
 * (C) 1999-2003 Lars Knoll (knoll@kde.org)
 * Copyright (C) 2004, 2005, 2006, 2007, 2008 Apple Inc. All rights reserved.
 * Copyright (C) 2013 Intel Corporation. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

// Generated from template:
//   core/css/templates/style_property_shorthand.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/ComputedStyleFieldAliases.json5
//   ../../third_party/blink/renderer/core/css/CSSProperties.json5


#include "third_party/blink/renderer/core/style_property_shorthand.h"

#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/wtf/hash_map.h"
#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {

const StylePropertyShorthand& animationShorthand() {
  static const CSSProperty* animationProperties[] = {
    &GetCSSPropertyAnimationName(),
    &GetCSSPropertyAnimationDuration(),
    &GetCSSPropertyAnimationTimingFunction(),
    &GetCSSPropertyAnimationDelay(),
    &GetCSSPropertyAnimationIterationCount(),
    &GetCSSPropertyAnimationDirection(),
    &GetCSSPropertyAnimationFillMode(),
    &GetCSSPropertyAnimationPlayState(),
  };

  static StylePropertyShorthand animationLonghands(
    CSSPropertyAnimation,
    animationProperties,
    arraysize(animationProperties));
  return animationLonghands;
}

const StylePropertyShorthand& backgroundShorthand() {
  static const CSSProperty* backgroundProperties[] = {
    &GetCSSPropertyBackgroundImage(),
    &GetCSSPropertyBackgroundPositionX(),
    &GetCSSPropertyBackgroundPositionY(),
    &GetCSSPropertyBackgroundSize(),
    &GetCSSPropertyBackgroundRepeatX(),
    &GetCSSPropertyBackgroundRepeatY(),
    &GetCSSPropertyBackgroundAttachment(),
    &GetCSSPropertyBackgroundOrigin(),
    &GetCSSPropertyBackgroundClip(),
    &GetCSSPropertyBackgroundColor(),
  };

  static StylePropertyShorthand backgroundLonghands(
    CSSPropertyBackground,
    backgroundProperties,
    arraysize(backgroundProperties));
  return backgroundLonghands;
}

const StylePropertyShorthand& backgroundPositionShorthand() {
  static const CSSProperty* backgroundPositionProperties[] = {
    &GetCSSPropertyBackgroundPositionX(),
    &GetCSSPropertyBackgroundPositionY(),
  };

  static StylePropertyShorthand backgroundPositionLonghands(
    CSSPropertyBackgroundPosition,
    backgroundPositionProperties,
    arraysize(backgroundPositionProperties));
  return backgroundPositionLonghands;
}

const StylePropertyShorthand& backgroundRepeatShorthand() {
  static const CSSProperty* backgroundRepeatProperties[] = {
    &GetCSSPropertyBackgroundRepeatX(),
    &GetCSSPropertyBackgroundRepeatY(),
  };

  static StylePropertyShorthand backgroundRepeatLonghands(
    CSSPropertyBackgroundRepeat,
    backgroundRepeatProperties,
    arraysize(backgroundRepeatProperties));
  return backgroundRepeatLonghands;
}

const StylePropertyShorthand& borderShorthand() {
  static const CSSProperty* borderProperties[] = {
    &GetCSSPropertyBorderTopColor(),
    &GetCSSPropertyBorderTopStyle(),
    &GetCSSPropertyBorderTopWidth(),
    &GetCSSPropertyBorderRightColor(),
    &GetCSSPropertyBorderRightStyle(),
    &GetCSSPropertyBorderRightWidth(),
    &GetCSSPropertyBorderBottomColor(),
    &GetCSSPropertyBorderBottomStyle(),
    &GetCSSPropertyBorderBottomWidth(),
    &GetCSSPropertyBorderLeftColor(),
    &GetCSSPropertyBorderLeftStyle(),
    &GetCSSPropertyBorderLeftWidth(),
    &GetCSSPropertyBorderImageSource(),
    &GetCSSPropertyBorderImageSlice(),
    &GetCSSPropertyBorderImageWidth(),
    &GetCSSPropertyBorderImageOutset(),
    &GetCSSPropertyBorderImageRepeat(),
  };

  static StylePropertyShorthand borderLonghands(
    CSSPropertyBorder,
    borderProperties,
    arraysize(borderProperties));
  return borderLonghands;
}

const StylePropertyShorthand& borderBottomShorthand() {
  static const CSSProperty* borderBottomProperties[] = {
    &GetCSSPropertyBorderBottomWidth(),
    &GetCSSPropertyBorderBottomStyle(),
    &GetCSSPropertyBorderBottomColor(),
  };

  static StylePropertyShorthand borderBottomLonghands(
    CSSPropertyBorderBottom,
    borderBottomProperties,
    arraysize(borderBottomProperties));
  return borderBottomLonghands;
}

const StylePropertyShorthand& borderColorShorthand() {
  static const CSSProperty* borderColorProperties[] = {
    &GetCSSPropertyBorderTopColor(),
    &GetCSSPropertyBorderRightColor(),
    &GetCSSPropertyBorderBottomColor(),
    &GetCSSPropertyBorderLeftColor(),
  };

  static StylePropertyShorthand borderColorLonghands(
    CSSPropertyBorderColor,
    borderColorProperties,
    arraysize(borderColorProperties));
  return borderColorLonghands;
}

const StylePropertyShorthand& borderImageShorthand() {
  static const CSSProperty* borderImageProperties[] = {
    &GetCSSPropertyBorderImageSource(),
    &GetCSSPropertyBorderImageSlice(),
    &GetCSSPropertyBorderImageWidth(),
    &GetCSSPropertyBorderImageOutset(),
    &GetCSSPropertyBorderImageRepeat(),
  };

  static StylePropertyShorthand borderImageLonghands(
    CSSPropertyBorderImage,
    borderImageProperties,
    arraysize(borderImageProperties));
  return borderImageLonghands;
}

const StylePropertyShorthand& borderLeftShorthand() {
  static const CSSProperty* borderLeftProperties[] = {
    &GetCSSPropertyBorderLeftWidth(),
    &GetCSSPropertyBorderLeftStyle(),
    &GetCSSPropertyBorderLeftColor(),
  };

  static StylePropertyShorthand borderLeftLonghands(
    CSSPropertyBorderLeft,
    borderLeftProperties,
    arraysize(borderLeftProperties));
  return borderLeftLonghands;
}

const StylePropertyShorthand& borderRadiusShorthand() {
  static const CSSProperty* borderRadiusProperties[] = {
    &GetCSSPropertyBorderTopLeftRadius(),
    &GetCSSPropertyBorderTopRightRadius(),
    &GetCSSPropertyBorderBottomRightRadius(),
    &GetCSSPropertyBorderBottomLeftRadius(),
  };

  static StylePropertyShorthand borderRadiusLonghands(
    CSSPropertyBorderRadius,
    borderRadiusProperties,
    arraysize(borderRadiusProperties));
  return borderRadiusLonghands;
}

const StylePropertyShorthand& borderRightShorthand() {
  static const CSSProperty* borderRightProperties[] = {
    &GetCSSPropertyBorderRightWidth(),
    &GetCSSPropertyBorderRightStyle(),
    &GetCSSPropertyBorderRightColor(),
  };

  static StylePropertyShorthand borderRightLonghands(
    CSSPropertyBorderRight,
    borderRightProperties,
    arraysize(borderRightProperties));
  return borderRightLonghands;
}

const StylePropertyShorthand& borderSpacingShorthand() {
  static const CSSProperty* borderSpacingProperties[] = {
    &GetCSSPropertyWebkitBorderHorizontalSpacing(),
    &GetCSSPropertyWebkitBorderVerticalSpacing(),
  };

  static StylePropertyShorthand borderSpacingLonghands(
    CSSPropertyBorderSpacing,
    borderSpacingProperties,
    arraysize(borderSpacingProperties));
  return borderSpacingLonghands;
}

const StylePropertyShorthand& borderStyleShorthand() {
  static const CSSProperty* borderStyleProperties[] = {
    &GetCSSPropertyBorderTopStyle(),
    &GetCSSPropertyBorderRightStyle(),
    &GetCSSPropertyBorderBottomStyle(),
    &GetCSSPropertyBorderLeftStyle(),
  };

  static StylePropertyShorthand borderStyleLonghands(
    CSSPropertyBorderStyle,
    borderStyleProperties,
    arraysize(borderStyleProperties));
  return borderStyleLonghands;
}

const StylePropertyShorthand& borderTopShorthand() {
  static const CSSProperty* borderTopProperties[] = {
    &GetCSSPropertyBorderTopWidth(),
    &GetCSSPropertyBorderTopStyle(),
    &GetCSSPropertyBorderTopColor(),
  };

  static StylePropertyShorthand borderTopLonghands(
    CSSPropertyBorderTop,
    borderTopProperties,
    arraysize(borderTopProperties));
  return borderTopLonghands;
}

const StylePropertyShorthand& borderWidthShorthand() {
  static const CSSProperty* borderWidthProperties[] = {
    &GetCSSPropertyBorderTopWidth(),
    &GetCSSPropertyBorderRightWidth(),
    &GetCSSPropertyBorderBottomWidth(),
    &GetCSSPropertyBorderLeftWidth(),
  };

  static StylePropertyShorthand borderWidthLonghands(
    CSSPropertyBorderWidth,
    borderWidthProperties,
    arraysize(borderWidthProperties));
  return borderWidthLonghands;
}

const StylePropertyShorthand& columnRuleShorthand() {
  static const CSSProperty* columnRuleProperties[] = {
    &GetCSSPropertyColumnRuleWidth(),
    &GetCSSPropertyColumnRuleStyle(),
    &GetCSSPropertyColumnRuleColor(),
  };

  static StylePropertyShorthand columnRuleLonghands(
    CSSPropertyColumnRule,
    columnRuleProperties,
    arraysize(columnRuleProperties));
  return columnRuleLonghands;
}

const StylePropertyShorthand& columnsShorthand() {
  static const CSSProperty* columnsProperties[] = {
    &GetCSSPropertyColumnWidth(),
    &GetCSSPropertyColumnCount(),
  };

  static StylePropertyShorthand columnsLonghands(
    CSSPropertyColumns,
    columnsProperties,
    arraysize(columnsProperties));
  return columnsLonghands;
}

const StylePropertyShorthand& flexShorthand() {
  static const CSSProperty* flexProperties[] = {
    &GetCSSPropertyFlexGrow(),
    &GetCSSPropertyFlexShrink(),
    &GetCSSPropertyFlexBasis(),
  };

  static StylePropertyShorthand flexLonghands(
    CSSPropertyFlex,
    flexProperties,
    arraysize(flexProperties));
  return flexLonghands;
}

const StylePropertyShorthand& flexFlowShorthand() {
  static const CSSProperty* flexFlowProperties[] = {
    &GetCSSPropertyFlexDirection(),
    &GetCSSPropertyFlexWrap(),
  };

  static StylePropertyShorthand flexFlowLonghands(
    CSSPropertyFlexFlow,
    flexFlowProperties,
    arraysize(flexFlowProperties));
  return flexFlowLonghands;
}

const StylePropertyShorthand& fontShorthand() {
  static const CSSProperty* fontProperties[] = {
    &GetCSSPropertyFontStyle(),
    &GetCSSPropertyFontVariantLigatures(),
    &GetCSSPropertyFontVariantCaps(),
    &GetCSSPropertyFontVariantNumeric(),
    &GetCSSPropertyFontVariantEastAsian(),
    &GetCSSPropertyFontWeight(),
    &GetCSSPropertyFontStretch(),
    &GetCSSPropertyFontSize(),
    &GetCSSPropertyLineHeight(),
    &GetCSSPropertyFontFamily(),
  };

  static StylePropertyShorthand fontLonghands(
    CSSPropertyFont,
    fontProperties,
    arraysize(fontProperties));
  return fontLonghands;
}

const StylePropertyShorthand& fontVariantShorthand() {
  static const CSSProperty* fontVariantProperties[] = {
    &GetCSSPropertyFontVariantLigatures(),
    &GetCSSPropertyFontVariantCaps(),
    &GetCSSPropertyFontVariantNumeric(),
    &GetCSSPropertyFontVariantEastAsian(),
  };

  static StylePropertyShorthand fontVariantLonghands(
    CSSPropertyFontVariant,
    fontVariantProperties,
    arraysize(fontVariantProperties));
  return fontVariantLonghands;
}

const StylePropertyShorthand& gapShorthand() {
  static const CSSProperty* gapProperties[] = {
    &GetCSSPropertyRowGap(),
    &GetCSSPropertyColumnGap(),
  };

  static StylePropertyShorthand gapLonghands(
    CSSPropertyGap,
    gapProperties,
    arraysize(gapProperties));
  return gapLonghands;
}

const StylePropertyShorthand& gridShorthand() {
  static const CSSProperty* gridProperties[] = {
    &GetCSSPropertyGridTemplateRows(),
    &GetCSSPropertyGridTemplateColumns(),
    &GetCSSPropertyGridTemplateAreas(),
    &GetCSSPropertyGridAutoFlow(),
    &GetCSSPropertyGridAutoRows(),
    &GetCSSPropertyGridAutoColumns(),
  };

  static StylePropertyShorthand gridLonghands(
    CSSPropertyGrid,
    gridProperties,
    arraysize(gridProperties));
  return gridLonghands;
}

const StylePropertyShorthand& gridAreaShorthand() {
  static const CSSProperty* gridAreaProperties[] = {
    &GetCSSPropertyGridRowStart(),
    &GetCSSPropertyGridColumnStart(),
    &GetCSSPropertyGridRowEnd(),
    &GetCSSPropertyGridColumnEnd(),
  };

  static StylePropertyShorthand gridAreaLonghands(
    CSSPropertyGridArea,
    gridAreaProperties,
    arraysize(gridAreaProperties));
  return gridAreaLonghands;
}

const StylePropertyShorthand& gridColumnShorthand() {
  static const CSSProperty* gridColumnProperties[] = {
    &GetCSSPropertyGridColumnStart(),
    &GetCSSPropertyGridColumnEnd(),
  };

  static StylePropertyShorthand gridColumnLonghands(
    CSSPropertyGridColumn,
    gridColumnProperties,
    arraysize(gridColumnProperties));
  return gridColumnLonghands;
}

const StylePropertyShorthand& gridColumnGapShorthand() {
  static const CSSProperty* gridColumnGapProperties[] = {
    &GetCSSPropertyColumnGap(),
  };

  static StylePropertyShorthand gridColumnGapLonghands(
    CSSPropertyGridColumnGap,
    gridColumnGapProperties,
    arraysize(gridColumnGapProperties));
  return gridColumnGapLonghands;
}

const StylePropertyShorthand& gridGapShorthand() {
  static const CSSProperty* gridGapProperties[] = {
    &GetCSSPropertyRowGap(),
    &GetCSSPropertyColumnGap(),
  };

  static StylePropertyShorthand gridGapLonghands(
    CSSPropertyGridGap,
    gridGapProperties,
    arraysize(gridGapProperties));
  return gridGapLonghands;
}

const StylePropertyShorthand& gridRowShorthand() {
  static const CSSProperty* gridRowProperties[] = {
    &GetCSSPropertyGridRowStart(),
    &GetCSSPropertyGridRowEnd(),
  };

  static StylePropertyShorthand gridRowLonghands(
    CSSPropertyGridRow,
    gridRowProperties,
    arraysize(gridRowProperties));
  return gridRowLonghands;
}

const StylePropertyShorthand& gridRowGapShorthand() {
  static const CSSProperty* gridRowGapProperties[] = {
    &GetCSSPropertyRowGap(),
  };

  static StylePropertyShorthand gridRowGapLonghands(
    CSSPropertyGridRowGap,
    gridRowGapProperties,
    arraysize(gridRowGapProperties));
  return gridRowGapLonghands;
}

const StylePropertyShorthand& gridTemplateShorthand() {
  static const CSSProperty* gridTemplateProperties[] = {
    &GetCSSPropertyGridTemplateRows(),
    &GetCSSPropertyGridTemplateColumns(),
    &GetCSSPropertyGridTemplateAreas(),
  };

  static StylePropertyShorthand gridTemplateLonghands(
    CSSPropertyGridTemplate,
    gridTemplateProperties,
    arraysize(gridTemplateProperties));
  return gridTemplateLonghands;
}

const StylePropertyShorthand& listStyleShorthand() {
  static const CSSProperty* listStyleProperties[] = {
    &GetCSSPropertyListStyleType(),
    &GetCSSPropertyListStylePosition(),
    &GetCSSPropertyListStyleImage(),
  };

  static StylePropertyShorthand listStyleLonghands(
    CSSPropertyListStyle,
    listStyleProperties,
    arraysize(listStyleProperties));
  return listStyleLonghands;
}

const StylePropertyShorthand& marginShorthand() {
  static const CSSProperty* marginProperties[] = {
    &GetCSSPropertyMarginTop(),
    &GetCSSPropertyMarginRight(),
    &GetCSSPropertyMarginBottom(),
    &GetCSSPropertyMarginLeft(),
  };

  static StylePropertyShorthand marginLonghands(
    CSSPropertyMargin,
    marginProperties,
    arraysize(marginProperties));
  return marginLonghands;
}

const StylePropertyShorthand& markerShorthand() {
  static const CSSProperty* markerProperties[] = {
    &GetCSSPropertyMarkerStart(),
    &GetCSSPropertyMarkerMid(),
    &GetCSSPropertyMarkerEnd(),
  };

  static StylePropertyShorthand markerLonghands(
    CSSPropertyMarker,
    markerProperties,
    arraysize(markerProperties));
  return markerLonghands;
}

const StylePropertyShorthand& offsetShorthand() {
  static const CSSProperty* offsetProperties[] = {
    &GetCSSPropertyOffsetPosition(),
    &GetCSSPropertyOffsetPath(),
    &GetCSSPropertyOffsetDistance(),
    &GetCSSPropertyOffsetRotate(),
    &GetCSSPropertyOffsetAnchor(),
  };

  static StylePropertyShorthand offsetLonghands(
    CSSPropertyOffset,
    offsetProperties,
    arraysize(offsetProperties));
  return offsetLonghands;
}

const StylePropertyShorthand& outlineShorthand() {
  static const CSSProperty* outlineProperties[] = {
    &GetCSSPropertyOutlineColor(),
    &GetCSSPropertyOutlineStyle(),
    &GetCSSPropertyOutlineWidth(),
  };

  static StylePropertyShorthand outlineLonghands(
    CSSPropertyOutline,
    outlineProperties,
    arraysize(outlineProperties));
  return outlineLonghands;
}

const StylePropertyShorthand& overflowShorthand() {
  static const CSSProperty* overflowProperties[] = {
    &GetCSSPropertyOverflowX(),
    &GetCSSPropertyOverflowY(),
  };

  static StylePropertyShorthand overflowLonghands(
    CSSPropertyOverflow,
    overflowProperties,
    arraysize(overflowProperties));
  return overflowLonghands;
}

const StylePropertyShorthand& overscrollBehaviorShorthand() {
  static const CSSProperty* overscrollBehaviorProperties[] = {
    &GetCSSPropertyOverscrollBehaviorX(),
    &GetCSSPropertyOverscrollBehaviorY(),
  };

  static StylePropertyShorthand overscrollBehaviorLonghands(
    CSSPropertyOverscrollBehavior,
    overscrollBehaviorProperties,
    arraysize(overscrollBehaviorProperties));
  return overscrollBehaviorLonghands;
}

const StylePropertyShorthand& paddingShorthand() {
  static const CSSProperty* paddingProperties[] = {
    &GetCSSPropertyPaddingTop(),
    &GetCSSPropertyPaddingRight(),
    &GetCSSPropertyPaddingBottom(),
    &GetCSSPropertyPaddingLeft(),
  };

  static StylePropertyShorthand paddingLonghands(
    CSSPropertyPadding,
    paddingProperties,
    arraysize(paddingProperties));
  return paddingLonghands;
}

const StylePropertyShorthand& pageBreakAfterShorthand() {
  static const CSSProperty* pageBreakAfterProperties[] = {
    &GetCSSPropertyBreakAfter(),
  };

  static StylePropertyShorthand pageBreakAfterLonghands(
    CSSPropertyPageBreakAfter,
    pageBreakAfterProperties,
    arraysize(pageBreakAfterProperties));
  return pageBreakAfterLonghands;
}

const StylePropertyShorthand& pageBreakBeforeShorthand() {
  static const CSSProperty* pageBreakBeforeProperties[] = {
    &GetCSSPropertyBreakBefore(),
  };

  static StylePropertyShorthand pageBreakBeforeLonghands(
    CSSPropertyPageBreakBefore,
    pageBreakBeforeProperties,
    arraysize(pageBreakBeforeProperties));
  return pageBreakBeforeLonghands;
}

const StylePropertyShorthand& pageBreakInsideShorthand() {
  static const CSSProperty* pageBreakInsideProperties[] = {
    &GetCSSPropertyBreakInside(),
  };

  static StylePropertyShorthand pageBreakInsideLonghands(
    CSSPropertyPageBreakInside,
    pageBreakInsideProperties,
    arraysize(pageBreakInsideProperties));
  return pageBreakInsideLonghands;
}

const StylePropertyShorthand& placeContentShorthand() {
  static const CSSProperty* placeContentProperties[] = {
    &GetCSSPropertyAlignContent(),
    &GetCSSPropertyJustifyContent(),
  };

  static StylePropertyShorthand placeContentLonghands(
    CSSPropertyPlaceContent,
    placeContentProperties,
    arraysize(placeContentProperties));
  return placeContentLonghands;
}

const StylePropertyShorthand& placeItemsShorthand() {
  static const CSSProperty* placeItemsProperties[] = {
    &GetCSSPropertyAlignItems(),
    &GetCSSPropertyJustifyItems(),
  };

  static StylePropertyShorthand placeItemsLonghands(
    CSSPropertyPlaceItems,
    placeItemsProperties,
    arraysize(placeItemsProperties));
  return placeItemsLonghands;
}

const StylePropertyShorthand& placeSelfShorthand() {
  static const CSSProperty* placeSelfProperties[] = {
    &GetCSSPropertyAlignSelf(),
    &GetCSSPropertyJustifySelf(),
  };

  static StylePropertyShorthand placeSelfLonghands(
    CSSPropertyPlaceSelf,
    placeSelfProperties,
    arraysize(placeSelfProperties));
  return placeSelfLonghands;
}

const StylePropertyShorthand& scrollMarginShorthand() {
  static const CSSProperty* scrollMarginProperties[] = {
    &GetCSSPropertyScrollMarginTop(),
    &GetCSSPropertyScrollMarginRight(),
    &GetCSSPropertyScrollMarginBottom(),
    &GetCSSPropertyScrollMarginLeft(),
  };

  static StylePropertyShorthand scrollMarginLonghands(
    CSSPropertyScrollMargin,
    scrollMarginProperties,
    arraysize(scrollMarginProperties));
  return scrollMarginLonghands;
}

const StylePropertyShorthand& scrollMarginBlockShorthand() {
  static const CSSProperty* scrollMarginBlockProperties[] = {
    &GetCSSPropertyScrollMarginBlockStart(),
    &GetCSSPropertyScrollMarginBlockEnd(),
  };

  static StylePropertyShorthand scrollMarginBlockLonghands(
    CSSPropertyScrollMarginBlock,
    scrollMarginBlockProperties,
    arraysize(scrollMarginBlockProperties));
  return scrollMarginBlockLonghands;
}

const StylePropertyShorthand& scrollMarginInlineShorthand() {
  static const CSSProperty* scrollMarginInlineProperties[] = {
    &GetCSSPropertyScrollMarginInlineStart(),
    &GetCSSPropertyScrollMarginInlineEnd(),
  };

  static StylePropertyShorthand scrollMarginInlineLonghands(
    CSSPropertyScrollMarginInline,
    scrollMarginInlineProperties,
    arraysize(scrollMarginInlineProperties));
  return scrollMarginInlineLonghands;
}

const StylePropertyShorthand& scrollPaddingShorthand() {
  static const CSSProperty* scrollPaddingProperties[] = {
    &GetCSSPropertyScrollPaddingTop(),
    &GetCSSPropertyScrollPaddingRight(),
    &GetCSSPropertyScrollPaddingBottom(),
    &GetCSSPropertyScrollPaddingLeft(),
  };

  static StylePropertyShorthand scrollPaddingLonghands(
    CSSPropertyScrollPadding,
    scrollPaddingProperties,
    arraysize(scrollPaddingProperties));
  return scrollPaddingLonghands;
}

const StylePropertyShorthand& scrollPaddingBlockShorthand() {
  static const CSSProperty* scrollPaddingBlockProperties[] = {
    &GetCSSPropertyScrollPaddingBlockStart(),
    &GetCSSPropertyScrollPaddingBlockEnd(),
  };

  static StylePropertyShorthand scrollPaddingBlockLonghands(
    CSSPropertyScrollPaddingBlock,
    scrollPaddingBlockProperties,
    arraysize(scrollPaddingBlockProperties));
  return scrollPaddingBlockLonghands;
}

const StylePropertyShorthand& scrollPaddingInlineShorthand() {
  static const CSSProperty* scrollPaddingInlineProperties[] = {
    &GetCSSPropertyScrollPaddingInlineStart(),
    &GetCSSPropertyScrollPaddingInlineEnd(),
  };

  static StylePropertyShorthand scrollPaddingInlineLonghands(
    CSSPropertyScrollPaddingInline,
    scrollPaddingInlineProperties,
    arraysize(scrollPaddingInlineProperties));
  return scrollPaddingInlineLonghands;
}

const StylePropertyShorthand& textDecorationShorthand() {
  static const CSSProperty* textDecorationProperties[] = {
    &GetCSSPropertyTextDecorationLine(),
    &GetCSSPropertyTextDecorationStyle(),
    &GetCSSPropertyTextDecorationColor(),
  };

  static StylePropertyShorthand textDecorationLonghands(
    CSSPropertyTextDecoration,
    textDecorationProperties,
    arraysize(textDecorationProperties));
  return textDecorationLonghands;
}

const StylePropertyShorthand& transitionShorthand() {
  static const CSSProperty* transitionProperties[] = {
    &GetCSSPropertyTransitionProperty(),
    &GetCSSPropertyTransitionDuration(),
    &GetCSSPropertyTransitionTimingFunction(),
    &GetCSSPropertyTransitionDelay(),
  };

  static StylePropertyShorthand transitionLonghands(
    CSSPropertyTransition,
    transitionProperties,
    arraysize(transitionProperties));
  return transitionLonghands;
}

const StylePropertyShorthand& webkitBorderAfterShorthand() {
  static const CSSProperty* webkitBorderAfterProperties[] = {
    &GetCSSPropertyWebkitBorderAfterWidth(),
    &GetCSSPropertyWebkitBorderAfterStyle(),
    &GetCSSPropertyWebkitBorderAfterColor(),
  };

  static StylePropertyShorthand webkitBorderAfterLonghands(
    CSSPropertyWebkitBorderAfter,
    webkitBorderAfterProperties,
    arraysize(webkitBorderAfterProperties));
  return webkitBorderAfterLonghands;
}

const StylePropertyShorthand& webkitBorderBeforeShorthand() {
  static const CSSProperty* webkitBorderBeforeProperties[] = {
    &GetCSSPropertyWebkitBorderBeforeWidth(),
    &GetCSSPropertyWebkitBorderBeforeStyle(),
    &GetCSSPropertyWebkitBorderBeforeColor(),
  };

  static StylePropertyShorthand webkitBorderBeforeLonghands(
    CSSPropertyWebkitBorderBefore,
    webkitBorderBeforeProperties,
    arraysize(webkitBorderBeforeProperties));
  return webkitBorderBeforeLonghands;
}

const StylePropertyShorthand& webkitBorderEndShorthand() {
  static const CSSProperty* webkitBorderEndProperties[] = {
    &GetCSSPropertyWebkitBorderEndWidth(),
    &GetCSSPropertyWebkitBorderEndStyle(),
    &GetCSSPropertyWebkitBorderEndColor(),
  };

  static StylePropertyShorthand webkitBorderEndLonghands(
    CSSPropertyWebkitBorderEnd,
    webkitBorderEndProperties,
    arraysize(webkitBorderEndProperties));
  return webkitBorderEndLonghands;
}

const StylePropertyShorthand& webkitBorderStartShorthand() {
  static const CSSProperty* webkitBorderStartProperties[] = {
    &GetCSSPropertyWebkitBorderStartWidth(),
    &GetCSSPropertyWebkitBorderStartStyle(),
    &GetCSSPropertyWebkitBorderStartColor(),
  };

  static StylePropertyShorthand webkitBorderStartLonghands(
    CSSPropertyWebkitBorderStart,
    webkitBorderStartProperties,
    arraysize(webkitBorderStartProperties));
  return webkitBorderStartLonghands;
}

const StylePropertyShorthand& webkitColumnBreakAfterShorthand() {
  static const CSSProperty* webkitColumnBreakAfterProperties[] = {
    &GetCSSPropertyBreakAfter(),
  };

  static StylePropertyShorthand webkitColumnBreakAfterLonghands(
    CSSPropertyWebkitColumnBreakAfter,
    webkitColumnBreakAfterProperties,
    arraysize(webkitColumnBreakAfterProperties));
  return webkitColumnBreakAfterLonghands;
}

const StylePropertyShorthand& webkitColumnBreakBeforeShorthand() {
  static const CSSProperty* webkitColumnBreakBeforeProperties[] = {
    &GetCSSPropertyBreakBefore(),
  };

  static StylePropertyShorthand webkitColumnBreakBeforeLonghands(
    CSSPropertyWebkitColumnBreakBefore,
    webkitColumnBreakBeforeProperties,
    arraysize(webkitColumnBreakBeforeProperties));
  return webkitColumnBreakBeforeLonghands;
}

const StylePropertyShorthand& webkitColumnBreakInsideShorthand() {
  static const CSSProperty* webkitColumnBreakInsideProperties[] = {
    &GetCSSPropertyBreakInside(),
  };

  static StylePropertyShorthand webkitColumnBreakInsideLonghands(
    CSSPropertyWebkitColumnBreakInside,
    webkitColumnBreakInsideProperties,
    arraysize(webkitColumnBreakInsideProperties));
  return webkitColumnBreakInsideLonghands;
}

const StylePropertyShorthand& webkitMarginCollapseShorthand() {
  static const CSSProperty* webkitMarginCollapseProperties[] = {
    &GetCSSPropertyWebkitMarginBeforeCollapse(),
    &GetCSSPropertyWebkitMarginAfterCollapse(),
  };

  static StylePropertyShorthand webkitMarginCollapseLonghands(
    CSSPropertyWebkitMarginCollapse,
    webkitMarginCollapseProperties,
    arraysize(webkitMarginCollapseProperties));
  return webkitMarginCollapseLonghands;
}

const StylePropertyShorthand& webkitMaskShorthand() {
  static const CSSProperty* webkitMaskProperties[] = {
    &GetCSSPropertyWebkitMaskImage(),
    &GetCSSPropertyWebkitMaskPositionX(),
    &GetCSSPropertyWebkitMaskPositionY(),
    &GetCSSPropertyWebkitMaskSize(),
    &GetCSSPropertyWebkitMaskRepeatX(),
    &GetCSSPropertyWebkitMaskRepeatY(),
    &GetCSSPropertyWebkitMaskOrigin(),
    &GetCSSPropertyWebkitMaskClip(),
  };

  static StylePropertyShorthand webkitMaskLonghands(
    CSSPropertyWebkitMask,
    webkitMaskProperties,
    arraysize(webkitMaskProperties));
  return webkitMaskLonghands;
}

const StylePropertyShorthand& webkitMaskBoxImageShorthand() {
  static const CSSProperty* webkitMaskBoxImageProperties[] = {
    &GetCSSPropertyWebkitMaskBoxImageSource(),
    &GetCSSPropertyWebkitMaskBoxImageSlice(),
    &GetCSSPropertyWebkitMaskBoxImageWidth(),
    &GetCSSPropertyWebkitMaskBoxImageOutset(),
    &GetCSSPropertyWebkitMaskBoxImageRepeat(),
  };

  static StylePropertyShorthand webkitMaskBoxImageLonghands(
    CSSPropertyWebkitMaskBoxImage,
    webkitMaskBoxImageProperties,
    arraysize(webkitMaskBoxImageProperties));
  return webkitMaskBoxImageLonghands;
}

const StylePropertyShorthand& webkitMaskPositionShorthand() {
  static const CSSProperty* webkitMaskPositionProperties[] = {
    &GetCSSPropertyWebkitMaskPositionX(),
    &GetCSSPropertyWebkitMaskPositionY(),
  };

  static StylePropertyShorthand webkitMaskPositionLonghands(
    CSSPropertyWebkitMaskPosition,
    webkitMaskPositionProperties,
    arraysize(webkitMaskPositionProperties));
  return webkitMaskPositionLonghands;
}

const StylePropertyShorthand& webkitMaskRepeatShorthand() {
  static const CSSProperty* webkitMaskRepeatProperties[] = {
    &GetCSSPropertyWebkitMaskRepeatX(),
    &GetCSSPropertyWebkitMaskRepeatY(),
  };

  static StylePropertyShorthand webkitMaskRepeatLonghands(
    CSSPropertyWebkitMaskRepeat,
    webkitMaskRepeatProperties,
    arraysize(webkitMaskRepeatProperties));
  return webkitMaskRepeatLonghands;
}

const StylePropertyShorthand& webkitTextEmphasisShorthand() {
  static const CSSProperty* webkitTextEmphasisProperties[] = {
    &GetCSSPropertyWebkitTextEmphasisStyle(),
    &GetCSSPropertyWebkitTextEmphasisColor(),
  };

  static StylePropertyShorthand webkitTextEmphasisLonghands(
    CSSPropertyWebkitTextEmphasis,
    webkitTextEmphasisProperties,
    arraysize(webkitTextEmphasisProperties));
  return webkitTextEmphasisLonghands;
}

const StylePropertyShorthand& webkitTextStrokeShorthand() {
  static const CSSProperty* webkitTextStrokeProperties[] = {
    &GetCSSPropertyWebkitTextStrokeWidth(),
    &GetCSSPropertyWebkitTextStrokeColor(),
  };

  static StylePropertyShorthand webkitTextStrokeLonghands(
    CSSPropertyWebkitTextStroke,
    webkitTextStrokeProperties,
    arraysize(webkitTextStrokeProperties));
  return webkitTextStrokeLonghands;
}

// TODO(ericwilligers): Retire this when offset-position and offset-anchor ship
const StylePropertyShorthand& offsetShorthandWithoutPositionAnchor() {
  static const CSSProperty* offsetProperties[] = {
    &GetCSSPropertyOffsetPath(),
    &GetCSSPropertyOffsetDistance(),
    &GetCSSPropertyOffsetRotate(),
  };
  DEFINE_STATIC_LOCAL(StylePropertyShorthand, offsetLonghands, (CSSPropertyOffset, offsetProperties, arraysize(offsetProperties)));
  return offsetLonghands;
}

// Returns an empty list if the property is not a shorthand
const StylePropertyShorthand& shorthandForProperty(CSSPropertyID propertyID) {
  // FIXME: We shouldn't switch between shorthand/not shorthand based on a runtime flag
  static StylePropertyShorthand emptyShorthand;

  if (propertyID == CSSPropertyOffset &&
      !RuntimeEnabledFeatures::CSSOffsetPositionAnchorEnabled())
    return offsetShorthandWithoutPositionAnchor();
  switch (propertyID) {
    case CSSPropertyAnimation:
      return animationShorthand();
    case CSSPropertyBackground:
      return backgroundShorthand();
    case CSSPropertyBackgroundPosition:
      return backgroundPositionShorthand();
    case CSSPropertyBackgroundRepeat:
      return backgroundRepeatShorthand();
    case CSSPropertyBorder:
      return borderShorthand();
    case CSSPropertyBorderBottom:
      return borderBottomShorthand();
    case CSSPropertyBorderColor:
      return borderColorShorthand();
    case CSSPropertyBorderImage:
      return borderImageShorthand();
    case CSSPropertyBorderLeft:
      return borderLeftShorthand();
    case CSSPropertyBorderRadius:
      return borderRadiusShorthand();
    case CSSPropertyBorderRight:
      return borderRightShorthand();
    case CSSPropertyBorderSpacing:
      return borderSpacingShorthand();
    case CSSPropertyBorderStyle:
      return borderStyleShorthand();
    case CSSPropertyBorderTop:
      return borderTopShorthand();
    case CSSPropertyBorderWidth:
      return borderWidthShorthand();
    case CSSPropertyColumnRule:
      return columnRuleShorthand();
    case CSSPropertyColumns:
      return columnsShorthand();
    case CSSPropertyFlex:
      return flexShorthand();
    case CSSPropertyFlexFlow:
      return flexFlowShorthand();
    case CSSPropertyFont:
      return fontShorthand();
    case CSSPropertyFontVariant:
      return fontVariantShorthand();
    case CSSPropertyGap:
      return gapShorthand();
    case CSSPropertyGrid:
      return gridShorthand();
    case CSSPropertyGridArea:
      return gridAreaShorthand();
    case CSSPropertyGridColumn:
      return gridColumnShorthand();
    case CSSPropertyGridColumnGap:
      return gridColumnGapShorthand();
    case CSSPropertyGridGap:
      return gridGapShorthand();
    case CSSPropertyGridRow:
      return gridRowShorthand();
    case CSSPropertyGridRowGap:
      return gridRowGapShorthand();
    case CSSPropertyGridTemplate:
      return gridTemplateShorthand();
    case CSSPropertyListStyle:
      return listStyleShorthand();
    case CSSPropertyMargin:
      return marginShorthand();
    case CSSPropertyMarker:
      return markerShorthand();
    case CSSPropertyOffset:
      return offsetShorthand();
    case CSSPropertyOutline:
      return outlineShorthand();
    case CSSPropertyOverflow:
      return overflowShorthand();
    case CSSPropertyOverscrollBehavior:
      return overscrollBehaviorShorthand();
    case CSSPropertyPadding:
      return paddingShorthand();
    case CSSPropertyPageBreakAfter:
      return pageBreakAfterShorthand();
    case CSSPropertyPageBreakBefore:
      return pageBreakBeforeShorthand();
    case CSSPropertyPageBreakInside:
      return pageBreakInsideShorthand();
    case CSSPropertyPlaceContent:
      return placeContentShorthand();
    case CSSPropertyPlaceItems:
      return placeItemsShorthand();
    case CSSPropertyPlaceSelf:
      return placeSelfShorthand();
    case CSSPropertyScrollMargin:
      return scrollMarginShorthand();
    case CSSPropertyScrollMarginBlock:
      return scrollMarginBlockShorthand();
    case CSSPropertyScrollMarginInline:
      return scrollMarginInlineShorthand();
    case CSSPropertyScrollPadding:
      return scrollPaddingShorthand();
    case CSSPropertyScrollPaddingBlock:
      return scrollPaddingBlockShorthand();
    case CSSPropertyScrollPaddingInline:
      return scrollPaddingInlineShorthand();
    case CSSPropertyTextDecoration:
      return textDecorationShorthand();
    case CSSPropertyTransition:
      return transitionShorthand();
    case CSSPropertyWebkitBorderAfter:
      return webkitBorderAfterShorthand();
    case CSSPropertyWebkitBorderBefore:
      return webkitBorderBeforeShorthand();
    case CSSPropertyWebkitBorderEnd:
      return webkitBorderEndShorthand();
    case CSSPropertyWebkitBorderStart:
      return webkitBorderStartShorthand();
    case CSSPropertyWebkitColumnBreakAfter:
      return webkitColumnBreakAfterShorthand();
    case CSSPropertyWebkitColumnBreakBefore:
      return webkitColumnBreakBeforeShorthand();
    case CSSPropertyWebkitColumnBreakInside:
      return webkitColumnBreakInsideShorthand();
    case CSSPropertyWebkitMarginCollapse:
      return webkitMarginCollapseShorthand();
    case CSSPropertyWebkitMask:
      return webkitMaskShorthand();
    case CSSPropertyWebkitMaskBoxImage:
      return webkitMaskBoxImageShorthand();
    case CSSPropertyWebkitMaskPosition:
      return webkitMaskPositionShorthand();
    case CSSPropertyWebkitMaskRepeat:
      return webkitMaskRepeatShorthand();
    case CSSPropertyWebkitTextEmphasis:
      return webkitTextEmphasisShorthand();
    case CSSPropertyWebkitTextStroke:
      return webkitTextStrokeShorthand();
    default: {
      return emptyShorthand;
    }
  }
}

void getMatchingShorthandsForLonghand(
    CSSPropertyID propertyID, Vector<StylePropertyShorthand, 4>* result) {
  DCHECK(!result->size());
  switch (propertyID) {
    case CSSPropertyWebkitMaskBoxImageWidth: {
      result->UncheckedAppend(webkitMaskBoxImageShorthand());
      break;
    }
    case CSSPropertyWebkitMaskBoxImageRepeat: {
      result->UncheckedAppend(webkitMaskBoxImageShorthand());
      break;
    }
    case CSSPropertyWebkitBorderEndColor: {
      result->UncheckedAppend(webkitBorderEndShorthand());
      break;
    }
    case CSSPropertyFlexWrap: {
      result->UncheckedAppend(flexFlowShorthand());
      break;
    }
    case CSSPropertyWebkitBorderHorizontalSpacing: {
      result->UncheckedAppend(borderSpacingShorthand());
      break;
    }
    case CSSPropertyScrollPaddingInlineStart: {
      result->UncheckedAppend(scrollPaddingInlineShorthand());
      break;
    }
    case CSSPropertyFontVariantNumeric: {
      result->UncheckedAppend(fontShorthand());
      result->UncheckedAppend(fontVariantShorthand());
      break;
    }
    case CSSPropertyFlexBasis: {
      result->UncheckedAppend(flexShorthand());
      break;
    }
    case CSSPropertyBorderLeftColor: {
      result->UncheckedAppend(borderShorthand());
      result->UncheckedAppend(borderColorShorthand());
      result->UncheckedAppend(borderLeftShorthand());
      break;
    }
    case CSSPropertyScrollMarginBlockStart: {
      result->UncheckedAppend(scrollMarginBlockShorthand());
      break;
    }
    case CSSPropertyColumnCount: {
      result->UncheckedAppend(columnsShorthand());
      break;
    }
    case CSSPropertyWebkitBorderBeforeStyle: {
      result->UncheckedAppend(webkitBorderBeforeShorthand());
      break;
    }
    case CSSPropertyFontStretch: {
      result->UncheckedAppend(fontShorthand());
      break;
    }
    case CSSPropertyScrollPaddingLeft: {
      result->UncheckedAppend(scrollPaddingShorthand());
      break;
    }
    case CSSPropertyWebkitBorderStartColor: {
      result->UncheckedAppend(webkitBorderStartShorthand());
      break;
    }
    case CSSPropertyScrollMarginBottom: {
      result->UncheckedAppend(scrollMarginShorthand());
      break;
    }
    case CSSPropertyFlexShrink: {
      result->UncheckedAppend(flexShorthand());
      break;
    }
    case CSSPropertyTransitionDelay: {
      result->UncheckedAppend(transitionShorthand());
      break;
    }
    case CSSPropertyGridTemplateRows: {
      result->UncheckedAppend(gridShorthand());
      result->UncheckedAppend(gridTemplateShorthand());
      break;
    }
    case CSSPropertyScrollMarginRight: {
      result->UncheckedAppend(scrollMarginShorthand());
      break;
    }
    case CSSPropertyBackgroundClip: {
      result->UncheckedAppend(backgroundShorthand());
      break;
    }
    case CSSPropertyOutlineWidth: {
      result->UncheckedAppend(outlineShorthand());
      break;
    }
    case CSSPropertyWebkitBorderEndStyle: {
      result->UncheckedAppend(webkitBorderEndShorthand());
      break;
    }
    case CSSPropertyTextDecorationColor: {
      result->UncheckedAppend(textDecorationShorthand());
      break;
    }
    case CSSPropertyAnimationName: {
      result->UncheckedAppend(animationShorthand());
      break;
    }
    case CSSPropertyBackgroundPositionY: {
      result->UncheckedAppend(backgroundShorthand());
      result->UncheckedAppend(backgroundPositionShorthand());
      break;
    }
    case CSSPropertyBackgroundPositionX: {
      result->UncheckedAppend(backgroundShorthand());
      result->UncheckedAppend(backgroundPositionShorthand());
      break;
    }
    case CSSPropertyWebkitMarginAfterCollapse: {
      result->UncheckedAppend(webkitMarginCollapseShorthand());
      break;
    }
    case CSSPropertyOffsetPosition: {
      result->UncheckedAppend(offsetShorthand());
      break;
    }
    case CSSPropertyColumnWidth: {
      result->UncheckedAppend(columnsShorthand());
      break;
    }
    case CSSPropertyColumnRuleWidth: {
      result->UncheckedAppend(columnRuleShorthand());
      break;
    }
    case CSSPropertyOverscrollBehaviorX: {
      result->UncheckedAppend(overscrollBehaviorShorthand());
      break;
    }
    case CSSPropertyWebkitTextStrokeColor: {
      result->UncheckedAppend(webkitTextStrokeShorthand());
      break;
    }
    case CSSPropertyOutlineStyle: {
      result->UncheckedAppend(outlineShorthand());
      break;
    }
    case CSSPropertyGridAutoFlow: {
      result->UncheckedAppend(gridShorthand());
      break;
    }
    case CSSPropertyMarkerEnd: {
      result->UncheckedAppend(markerShorthand());
      break;
    }
    case CSSPropertyBackgroundOrigin: {
      result->UncheckedAppend(backgroundShorthand());
      break;
    }
    case CSSPropertyOffsetRotate: {
      result->UncheckedAppend(offsetShorthand());
      break;
    }
    case CSSPropertyBorderRightColor: {
      result->UncheckedAppend(borderShorthand());
      result->UncheckedAppend(borderColorShorthand());
      result->UncheckedAppend(borderRightShorthand());
      break;
    }
    case CSSPropertyJustifySelf: {
      result->UncheckedAppend(placeSelfShorthand());
      break;
    }
    case CSSPropertyAnimationDuration: {
      result->UncheckedAppend(animationShorthand());
      break;
    }
    case CSSPropertyAnimationPlayState: {
      result->UncheckedAppend(animationShorthand());
      break;
    }
    case CSSPropertyOverscrollBehaviorY: {
      result->UncheckedAppend(overscrollBehaviorShorthand());
      break;
    }
    case CSSPropertyOffsetAnchor: {
      result->UncheckedAppend(offsetShorthand());
      break;
    }
    case CSSPropertyWebkitBorderEndWidth: {
      result->UncheckedAppend(webkitBorderEndShorthand());
      break;
    }
    case CSSPropertyBorderBottomStyle: {
      result->UncheckedAppend(borderShorthand());
      result->UncheckedAppend(borderStyleShorthand());
      result->UncheckedAppend(borderBottomShorthand());
      break;
    }
    case CSSPropertyScrollMarginBlockEnd: {
      result->UncheckedAppend(scrollMarginBlockShorthand());
      break;
    }
    case CSSPropertyBorderBottomWidth: {
      result->UncheckedAppend(borderShorthand());
      result->UncheckedAppend(borderWidthShorthand());
      result->UncheckedAppend(borderBottomShorthand());
      break;
    }
    case CSSPropertyAnimationTimingFunction: {
      result->UncheckedAppend(animationShorthand());
      break;
    }
    case CSSPropertyScrollPaddingBlockStart: {
      result->UncheckedAppend(scrollPaddingBlockShorthand());
      break;
    }
    case CSSPropertyFontStyle: {
      result->UncheckedAppend(fontShorthand());
      break;
    }
    case CSSPropertyBorderRightStyle: {
      result->UncheckedAppend(borderShorthand());
      result->UncheckedAppend(borderStyleShorthand());
      result->UncheckedAppend(borderRightShorthand());
      break;
    }
    case CSSPropertyBorderBottomRightRadius: {
      result->UncheckedAppend(borderRadiusShorthand());
      break;
    }
    case CSSPropertyBorderRightWidth: {
      result->UncheckedAppend(borderShorthand());
      result->UncheckedAppend(borderWidthShorthand());
      result->UncheckedAppend(borderRightShorthand());
      break;
    }
    case CSSPropertyWebkitBorderAfterStyle: {
      result->UncheckedAppend(webkitBorderAfterShorthand());
      break;
    }
    case CSSPropertyBorderImageSource: {
      result->UncheckedAppend(borderShorthand());
      result->UncheckedAppend(borderImageShorthand());
      break;
    }
    case CSSPropertyBorderTopLeftRadius: {
      result->UncheckedAppend(borderRadiusShorthand());
      break;
    }
    case CSSPropertyBorderBottomLeftRadius: {
      result->UncheckedAppend(borderRadiusShorthand());
      break;
    }
    case CSSPropertyGridRowEnd: {
      result->UncheckedAppend(gridAreaShorthand());
      result->UncheckedAppend(gridRowShorthand());
      break;
    }
    case CSSPropertyBackgroundAttachment: {
      result->UncheckedAppend(backgroundShorthand());
      break;
    }
    case CSSPropertyWebkitMaskBoxImageOutset: {
      result->UncheckedAppend(webkitMaskBoxImageShorthand());
      break;
    }
    case CSSPropertyJustifyContent: {
      result->UncheckedAppend(placeContentShorthand());
      break;
    }
    case CSSPropertyScrollPaddingBottom: {
      result->UncheckedAppend(scrollPaddingShorthand());
      break;
    }
    case CSSPropertyBorderLeftWidth: {
      result->UncheckedAppend(borderShorthand());
      result->UncheckedAppend(borderWidthShorthand());
      result->UncheckedAppend(borderLeftShorthand());
      break;
    }
    case CSSPropertyPaddingBottom: {
      result->UncheckedAppend(paddingShorthand());
      break;
    }
    case CSSPropertyWebkitMaskPositionX: {
      result->UncheckedAppend(webkitMaskShorthand());
      result->UncheckedAppend(webkitMaskPositionShorthand());
      break;
    }
    case CSSPropertyMarkerStart: {
      result->UncheckedAppend(markerShorthand());
      break;
    }
    case CSSPropertyBackgroundImage: {
      result->UncheckedAppend(backgroundShorthand());
      break;
    }
    case CSSPropertyWebkitBorderAfterColor: {
      result->UncheckedAppend(webkitBorderAfterShorthand());
      break;
    }
    case CSSPropertyTextDecorationLine: {
      result->UncheckedAppend(textDecorationShorthand());
      break;
    }
    case CSSPropertyWebkitMaskClip: {
      result->UncheckedAppend(webkitMaskShorthand());
      break;
    }
    case CSSPropertyTextDecorationStyle: {
      result->UncheckedAppend(textDecorationShorthand());
      break;
    }
    case CSSPropertyScrollPaddingBlockEnd: {
      result->UncheckedAppend(scrollPaddingBlockShorthand());
      break;
    }
    case CSSPropertyColumnRuleStyle: {
      result->UncheckedAppend(columnRuleShorthand());
      break;
    }
    case CSSPropertyScrollMarginTop: {
      result->UncheckedAppend(scrollMarginShorthand());
      break;
    }
    case CSSPropertyOffsetPath: {
      result->UncheckedAppend(offsetShorthand());
      break;
    }
    case CSSPropertyBorderImageSlice: {
      result->UncheckedAppend(borderShorthand());
      result->UncheckedAppend(borderImageShorthand());
      break;
    }
    case CSSPropertyWebkitBorderAfterWidth: {
      result->UncheckedAppend(webkitBorderAfterShorthand());
      break;
    }
    case CSSPropertyBreakInside: {
      result->UncheckedAppend(webkitColumnBreakInsideShorthand());
      result->UncheckedAppend(pageBreakInsideShorthand());
      break;
    }
    case CSSPropertyScrollMarginInlineStart: {
      result->UncheckedAppend(scrollMarginInlineShorthand());
      break;
    }
    case CSSPropertyWebkitMaskBoxImageSource: {
      result->UncheckedAppend(webkitMaskBoxImageShorthand());
      break;
    }
    case CSSPropertyBorderTopColor: {
      result->UncheckedAppend(borderShorthand());
      result->UncheckedAppend(borderColorShorthand());
      result->UncheckedAppend(borderTopShorthand());
      break;
    }
    case CSSPropertyBackgroundColor: {
      result->UncheckedAppend(backgroundShorthand());
      break;
    }
    case CSSPropertyOutlineColor: {
      result->UncheckedAppend(outlineShorthand());
      break;
    }
    case CSSPropertyWebkitMaskOrigin: {
      result->UncheckedAppend(webkitMaskShorthand());
      break;
    }
    case CSSPropertyPaddingTop: {
      result->UncheckedAppend(paddingShorthand());
      break;
    }
    case CSSPropertyBorderTopWidth: {
      result->UncheckedAppend(borderShorthand());
      result->UncheckedAppend(borderWidthShorthand());
      result->UncheckedAppend(borderTopShorthand());
      break;
    }
    case CSSPropertyGridColumnStart: {
      result->UncheckedAppend(gridAreaShorthand());
      result->UncheckedAppend(gridColumnShorthand());
      break;
    }
    case CSSPropertyMarginBottom: {
      result->UncheckedAppend(marginShorthand());
      break;
    }
    case CSSPropertyJustifyItems: {
      result->UncheckedAppend(placeItemsShorthand());
      break;
    }
    case CSSPropertyListStylePosition: {
      result->UncheckedAppend(listStyleShorthand());
      break;
    }
    case CSSPropertyAnimationIterationCount: {
      result->UncheckedAppend(animationShorthand());
      break;
    }
    case CSSPropertyWebkitTextEmphasisColor: {
      result->UncheckedAppend(webkitTextEmphasisShorthand());
      break;
    }
    case CSSPropertyWebkitTextEmphasisStyle: {
      result->UncheckedAppend(webkitTextEmphasisShorthand());
      break;
    }
    case CSSPropertyWebkitMaskPositionY: {
      result->UncheckedAppend(webkitMaskShorthand());
      result->UncheckedAppend(webkitMaskPositionShorthand());
      break;
    }
    case CSSPropertyWebkitMaskSize: {
      result->UncheckedAppend(webkitMaskShorthand());
      break;
    }
    case CSSPropertyGridAutoRows: {
      result->UncheckedAppend(gridShorthand());
      break;
    }
    case CSSPropertyMarginTop: {
      result->UncheckedAppend(marginShorthand());
      break;
    }
    case CSSPropertyBorderTopStyle: {
      result->UncheckedAppend(borderShorthand());
      result->UncheckedAppend(borderStyleShorthand());
      result->UncheckedAppend(borderTopShorthand());
      break;
    }
    case CSSPropertyBreakBefore: {
      result->UncheckedAppend(webkitColumnBreakBeforeShorthand());
      result->UncheckedAppend(pageBreakBeforeShorthand());
      break;
    }
    case CSSPropertyWebkitBorderBeforeWidth: {
      result->UncheckedAppend(webkitBorderBeforeShorthand());
      break;
    }
    case CSSPropertyBorderImageOutset: {
      result->UncheckedAppend(borderShorthand());
      result->UncheckedAppend(borderImageShorthand());
      break;
    }
    case CSSPropertyFontFamily: {
      result->UncheckedAppend(fontShorthand());
      break;
    }
    case CSSPropertyBorderImageWidth: {
      result->UncheckedAppend(borderShorthand());
      result->UncheckedAppend(borderImageShorthand());
      break;
    }
    case CSSPropertyRowGap: {
      result->UncheckedAppend(gapShorthand());
      result->UncheckedAppend(gridGapShorthand());
      result->UncheckedAppend(gridRowGapShorthand());
      break;
    }
    case CSSPropertyFontVariantEastAsian: {
      result->UncheckedAppend(fontShorthand());
      result->UncheckedAppend(fontVariantShorthand());
      break;
    }
    case CSSPropertyFlexGrow: {
      result->UncheckedAppend(flexShorthand());
      break;
    }
    case CSSPropertyWebkitBorderBeforeColor: {
      result->UncheckedAppend(webkitBorderBeforeShorthand());
      break;
    }
    case CSSPropertyListStyleImage: {
      result->UncheckedAppend(listStyleShorthand());
      break;
    }
    case CSSPropertyWebkitMarginBeforeCollapse: {
      result->UncheckedAppend(webkitMarginCollapseShorthand());
      break;
    }
    case CSSPropertyWebkitMaskImage: {
      result->UncheckedAppend(webkitMaskShorthand());
      break;
    }
    case CSSPropertyBorderTopRightRadius: {
      result->UncheckedAppend(borderRadiusShorthand());
      break;
    }
    case CSSPropertyFontVariantCaps: {
      result->UncheckedAppend(fontShorthand());
      result->UncheckedAppend(fontVariantShorthand());
      break;
    }
    case CSSPropertyFlexDirection: {
      result->UncheckedAppend(flexFlowShorthand());
      break;
    }
    case CSSPropertyWebkitMaskRepeatY: {
      result->UncheckedAppend(webkitMaskShorthand());
      result->UncheckedAppend(webkitMaskRepeatShorthand());
      break;
    }
    case CSSPropertyWebkitMaskRepeatX: {
      result->UncheckedAppend(webkitMaskShorthand());
      result->UncheckedAppend(webkitMaskRepeatShorthand());
      break;
    }
    case CSSPropertyScrollPaddingTop: {
      result->UncheckedAppend(scrollPaddingShorthand());
      break;
    }
    case CSSPropertyBorderImageRepeat: {
      result->UncheckedAppend(borderShorthand());
      result->UncheckedAppend(borderImageShorthand());
      break;
    }
    case CSSPropertyScrollPaddingRight: {
      result->UncheckedAppend(scrollPaddingShorthand());
      break;
    }
    case CSSPropertyWebkitBorderStartStyle: {
      result->UncheckedAppend(webkitBorderStartShorthand());
      break;
    }
    case CSSPropertyListStyleType: {
      result->UncheckedAppend(listStyleShorthand());
      break;
    }
    case CSSPropertyOverflowX: {
      result->UncheckedAppend(overflowShorthand());
      break;
    }
    case CSSPropertyFontWeight: {
      result->UncheckedAppend(fontShorthand());
      break;
    }
    case CSSPropertyGridTemplateAreas: {
      result->UncheckedAppend(gridShorthand());
      result->UncheckedAppend(gridTemplateShorthand());
      break;
    }
    case CSSPropertyBorderLeftStyle: {
      result->UncheckedAppend(borderShorthand());
      result->UncheckedAppend(borderStyleShorthand());
      result->UncheckedAppend(borderLeftShorthand());
      break;
    }
    case CSSPropertyOverflowY: {
      result->UncheckedAppend(overflowShorthand());
      break;
    }
    case CSSPropertyColumnRuleColor: {
      result->UncheckedAppend(columnRuleShorthand());
      break;
    }
    case CSSPropertyMarkerMid: {
      result->UncheckedAppend(markerShorthand());
      break;
    }
    case CSSPropertyMarginRight: {
      result->UncheckedAppend(marginShorthand());
      break;
    }
    case CSSPropertyWebkitBorderStartWidth: {
      result->UncheckedAppend(webkitBorderStartShorthand());
      break;
    }
    case CSSPropertyAlignItems: {
      result->UncheckedAppend(placeItemsShorthand());
      break;
    }
    case CSSPropertyAnimationDelay: {
      result->UncheckedAppend(animationShorthand());
      break;
    }
    case CSSPropertyAnimationFillMode: {
      result->UncheckedAppend(animationShorthand());
      break;
    }
    case CSSPropertyFontVariantLigatures: {
      result->UncheckedAppend(fontShorthand());
      result->UncheckedAppend(fontVariantShorthand());
      break;
    }
    case CSSPropertyOffsetDistance: {
      result->UncheckedAppend(offsetShorthand());
      break;
    }
    case CSSPropertyGridTemplateColumns: {
      result->UncheckedAppend(gridShorthand());
      result->UncheckedAppend(gridTemplateShorthand());
      break;
    }
    case CSSPropertyAnimationDirection: {
      result->UncheckedAppend(animationShorthand());
      break;
    }
    case CSSPropertyWebkitMaskBoxImageSlice: {
      result->UncheckedAppend(webkitMaskBoxImageShorthand());
      break;
    }
    case CSSPropertyBreakAfter: {
      result->UncheckedAppend(webkitColumnBreakAfterShorthand());
      result->UncheckedAppend(pageBreakAfterShorthand());
      break;
    }
    case CSSPropertyLineHeight: {
      result->UncheckedAppend(fontShorthand());
      break;
    }
    case CSSPropertyColumnGap: {
      result->UncheckedAppend(gapShorthand());
      result->UncheckedAppend(gridGapShorthand());
      result->UncheckedAppend(gridColumnGapShorthand());
      break;
    }
    case CSSPropertyPaddingLeft: {
      result->UncheckedAppend(paddingShorthand());
      break;
    }
    case CSSPropertyScrollMarginInlineEnd: {
      result->UncheckedAppend(scrollMarginInlineShorthand());
      break;
    }
    case CSSPropertyBackgroundRepeatY: {
      result->UncheckedAppend(backgroundShorthand());
      result->UncheckedAppend(backgroundRepeatShorthand());
      break;
    }
    case CSSPropertyBackgroundRepeatX: {
      result->UncheckedAppend(backgroundShorthand());
      result->UncheckedAppend(backgroundRepeatShorthand());
      break;
    }
    case CSSPropertyBorderBottomColor: {
      result->UncheckedAppend(borderShorthand());
      result->UncheckedAppend(borderColorShorthand());
      result->UncheckedAppend(borderBottomShorthand());
      break;
    }
    case CSSPropertyAlignSelf: {
      result->UncheckedAppend(placeSelfShorthand());
      break;
    }
    case CSSPropertyFontSize: {
      result->UncheckedAppend(fontShorthand());
      break;
    }
    case CSSPropertyGridColumnEnd: {
      result->UncheckedAppend(gridAreaShorthand());
      result->UncheckedAppend(gridColumnShorthand());
      break;
    }
    case CSSPropertyBackgroundSize: {
      result->UncheckedAppend(backgroundShorthand());
      break;
    }
    case CSSPropertyPaddingRight: {
      result->UncheckedAppend(paddingShorthand());
      break;
    }
    case CSSPropertyAlignContent: {
      result->UncheckedAppend(placeContentShorthand());
      break;
    }
    case CSSPropertyScrollMarginLeft: {
      result->UncheckedAppend(scrollMarginShorthand());
      break;
    }
    case CSSPropertyGridAutoColumns: {
      result->UncheckedAppend(gridShorthand());
      break;
    }
    case CSSPropertyScrollPaddingInlineEnd: {
      result->UncheckedAppend(scrollPaddingInlineShorthand());
      break;
    }
    case CSSPropertyTransitionTimingFunction: {
      result->UncheckedAppend(transitionShorthand());
      break;
    }
    case CSSPropertyGridRowStart: {
      result->UncheckedAppend(gridAreaShorthand());
      result->UncheckedAppend(gridRowShorthand());
      break;
    }
    case CSSPropertyTransitionDuration: {
      result->UncheckedAppend(transitionShorthand());
      break;
    }
    case CSSPropertyTransitionProperty: {
      result->UncheckedAppend(transitionShorthand());
      break;
    }
    case CSSPropertyWebkitBorderVerticalSpacing: {
      result->UncheckedAppend(borderSpacingShorthand());
      break;
    }
    case CSSPropertyMarginLeft: {
      result->UncheckedAppend(marginShorthand());
      break;
    }
    case CSSPropertyWebkitTextStrokeWidth: {
      result->UncheckedAppend(webkitTextStrokeShorthand());
      break;
    }
    default:
      break;
  }
}

} // namespace blink
