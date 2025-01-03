// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/templates/cssom_keywords.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/ComputedStyleFieldAliases.json5
//   ../../third_party/blink/renderer/core/css/CSSProperties.json5


#include "third_party/blink/renderer/core/css/cssom/cssom_keywords.h"

#include "third_party/blink/renderer/core/css/css_property_id_templates.h"
#include "third_party/blink/renderer/core/css/cssom/css_keyword_value.h"
#include "third_party/blink/renderer/platform/wtf/hash_map.h"

namespace blink {

bool CSSOMKeywords::ValidKeywordForProperty(CSSPropertyID id,
                                            const CSSKeywordValue& keyword) {
  CSSValueID valueID = keyword.KeywordValueID();
  if (valueID == CSSValueInvalid) {
    return false;
  }

  if (valueID == CSSValueInherit || valueID == CSSValueInitial ||
      valueID == CSSValueUnset) {
    // These are css-wide keywords that are valid for all properties.
    return true;
  }

  switch (id) {
  case CSSPropertyAnimationDirection: {
    switch (valueID) {
    case CSSValueNormal:
    case CSSValueReverse:
    case CSSValueAlternate:
    case CSSValueAlternateReverse:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyAnimationFillMode: {
    switch (valueID) {
    case CSSValueNone:
    case CSSValueForwards:
    case CSSValueBackwards:
    case CSSValueBoth:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyAnimationIterationCount: {
    switch (valueID) {
    case CSSValueInfinite:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyAnimationName: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyAnimationPlayState: {
    switch (valueID) {
    case CSSValueRunning:
    case CSSValuePaused:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyAnimationTimingFunction: {
    switch (valueID) {
    case CSSValueLinear:
    case CSSValueEase:
    case CSSValueEaseIn:
    case CSSValueEaseOut:
    case CSSValueEaseInOut:
    case CSSValueStepStart:
    case CSSValueStepEnd:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyTransitionProperty: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyTransitionTimingFunction: {
    switch (valueID) {
    case CSSValueLinear:
    case CSSValueEase:
    case CSSValueEaseIn:
    case CSSValueEaseOut:
    case CSSValueEaseInOut:
    case CSSValueStepStart:
    case CSSValueStepEnd:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyColor: {
    switch (valueID) {
    case CSSValueCurrentcolor:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyDirection: {
    switch (valueID) {
    case CSSValueLtr:
    case CSSValueRtl:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyFontFeatureSettings: {
    switch (valueID) {
    case CSSValueNormal:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyFontKerning: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueNormal:
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyFontSize: {
    switch (valueID) {
    case CSSValueXxSmall:
    case CSSValueXSmall:
    case CSSValueSmall:
    case CSSValueMedium:
    case CSSValueLarge:
    case CSSValueXLarge:
    case CSSValueXxLarge:
    case CSSValueLarger:
    case CSSValueSmaller:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyFontSizeAdjust: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyFontStretch: {
    switch (valueID) {
    case CSSValueNormal:
    case CSSValueUltraCondensed:
    case CSSValueExtraCondensed:
    case CSSValueCondensed:
    case CSSValueSemiCondensed:
    case CSSValueSemiExpanded:
    case CSSValueExpanded:
    case CSSValueExtraExpanded:
    case CSSValueUltraExpanded:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyFontStyle: {
    switch (valueID) {
    case CSSValueNormal:
    case CSSValueItalic:
    case CSSValueOblique:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyFontVariantCaps: {
    switch (valueID) {
    case CSSValueNormal:
    case CSSValueSmallCaps:
    case CSSValueAllSmallCaps:
    case CSSValuePetiteCaps:
    case CSSValueAllPetiteCaps:
    case CSSValueUnicase:
    case CSSValueTitlingCaps:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyFontVariantEastAsian: {
    switch (valueID) {
    case CSSValueNormal:
    case CSSValueJis78:
    case CSSValueJis83:
    case CSSValueJis90:
    case CSSValueJis04:
    case CSSValueSimplified:
    case CSSValueTraditional:
    case CSSValueFullWidth:
    case CSSValueProportionalWidth:
    case CSSValueRuby:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyFontVariantLigatures: {
    switch (valueID) {
    case CSSValueNormal:
    case CSSValueNone:
    case CSSValueCommonLigatures:
    case CSSValueNoCommonLigatures:
    case CSSValueDiscretionaryLigatures:
    case CSSValueNoDiscretionaryLigatures:
    case CSSValueHistoricalLigatures:
    case CSSValueNoHistoricalLigatures:
    case CSSValueContextual:
    case CSSValueNoContextual:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyFontVariantNumeric: {
    switch (valueID) {
    case CSSValueNormal:
    case CSSValueLiningNums:
    case CSSValueOldstyleNums:
    case CSSValueProportionalNums:
    case CSSValueTabularNums:
    case CSSValueDiagonalFractions:
    case CSSValueStackedFractions:
    case CSSValueOrdinal:
    case CSSValueSlashedZero:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyFontVariationSettings: {
    switch (valueID) {
    case CSSValueNormal:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyFontWeight: {
    switch (valueID) {
    case CSSValueNormal:
    case CSSValueBold:
    case CSSValueBolder:
    case CSSValueLighter:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyTextOrientation: {
    switch (valueID) {
    case CSSValueSideways:
    case CSSValueMixed:
    case CSSValueUpright:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyTextRendering: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueOptimizeSpeed:
    case CSSValueOptimizeLegibility:
    case CSSValueGeometricPrecision:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyWritingMode: {
    switch (valueID) {
    case CSSValueHorizontalTb:
    case CSSValueVerticalRl:
    case CSSValueVerticalLr:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyAlignmentBaseline: {
    switch (valueID) {
    case CSSValueBaseline:
    case CSSValueAlphabetic:
    case CSSValueIdeographic:
    case CSSValueMiddle:
    case CSSValueCentral:
    case CSSValueMathematical:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBackdropFilter: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBackfaceVisibility: {
    switch (valueID) {
    case CSSValueVisible:
    case CSSValueHidden:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBackgroundAttachment: {
    switch (valueID) {
    case CSSValueScroll:
    case CSSValueFixed:
    case CSSValueLocal:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBackgroundBlendMode: {
    switch (valueID) {
    case CSSValueNormal:
    case CSSValueMultiply:
    case CSSValueScreen:
    case CSSValueOverlay:
    case CSSValueDarken:
    case CSSValueLighten:
    case CSSValueColorDodge:
    case CSSValueColorBurn:
    case CSSValueHardLight:
    case CSSValueSoftLight:
    case CSSValueDifference:
    case CSSValueExclusion:
    case CSSValueHue:
    case CSSValueSaturation:
    case CSSValueColor:
    case CSSValueLuminosity:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBackgroundClip: {
    switch (valueID) {
    case CSSValueBorderBox:
    case CSSValuePaddingBox:
    case CSSValueContentBox:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBackgroundColor: {
    switch (valueID) {
    case CSSValueCurrentcolor:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBackgroundImage: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBackgroundOrigin: {
    switch (valueID) {
    case CSSValueBorderBox:
    case CSSValuePaddingBox:
    case CSSValueContentBox:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBackgroundSize: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueCover:
    case CSSValueContain:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBaselineShift: {
    switch (valueID) {
    case CSSValueSub:
    case CSSValueSuper:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBlockSize: {
    switch (valueID) {
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBorderBottomColor: {
    switch (valueID) {
    case CSSValueCurrentcolor:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBorderBottomStyle: {
    switch (valueID) {
    case CSSValueNone:
    case CSSValueHidden:
    case CSSValueInset:
    case CSSValueGroove:
    case CSSValueOutset:
    case CSSValueRidge:
    case CSSValueDotted:
    case CSSValueDashed:
    case CSSValueSolid:
    case CSSValueDouble:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBorderBottomWidth: {
    switch (valueID) {
    case CSSValueThin:
    case CSSValueMedium:
    case CSSValueThick:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBorderCollapse: {
    switch (valueID) {
    case CSSValueSeparate:
    case CSSValueCollapse:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBorderImageRepeat: {
    switch (valueID) {
    case CSSValueStretch:
    case CSSValueRepeat:
    case CSSValueRound:
    case CSSValueSpace:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBorderImageSource: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBorderImageWidth: {
    switch (valueID) {
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBorderLeftColor: {
    switch (valueID) {
    case CSSValueCurrentcolor:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBorderLeftStyle: {
    switch (valueID) {
    case CSSValueNone:
    case CSSValueHidden:
    case CSSValueInset:
    case CSSValueGroove:
    case CSSValueOutset:
    case CSSValueRidge:
    case CSSValueDotted:
    case CSSValueDashed:
    case CSSValueSolid:
    case CSSValueDouble:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBorderLeftWidth: {
    switch (valueID) {
    case CSSValueThin:
    case CSSValueMedium:
    case CSSValueThick:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBorderRightColor: {
    switch (valueID) {
    case CSSValueCurrentcolor:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBorderRightStyle: {
    switch (valueID) {
    case CSSValueNone:
    case CSSValueHidden:
    case CSSValueInset:
    case CSSValueGroove:
    case CSSValueOutset:
    case CSSValueRidge:
    case CSSValueDotted:
    case CSSValueDashed:
    case CSSValueSolid:
    case CSSValueDouble:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBorderRightWidth: {
    switch (valueID) {
    case CSSValueThin:
    case CSSValueMedium:
    case CSSValueThick:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBorderTopColor: {
    switch (valueID) {
    case CSSValueCurrentcolor:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBorderTopStyle: {
    switch (valueID) {
    case CSSValueNone:
    case CSSValueHidden:
    case CSSValueInset:
    case CSSValueGroove:
    case CSSValueOutset:
    case CSSValueRidge:
    case CSSValueDotted:
    case CSSValueDashed:
    case CSSValueSolid:
    case CSSValueDouble:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBorderTopWidth: {
    switch (valueID) {
    case CSSValueThin:
    case CSSValueMedium:
    case CSSValueThick:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBottom: {
    switch (valueID) {
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBoxShadow: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBoxSizing: {
    switch (valueID) {
    case CSSValueContentBox:
    case CSSValueBorderBox:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBreakAfter: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueAvoid:
    case CSSValueAvoidColumn:
    case CSSValueAvoidPage:
    case CSSValueColumn:
    case CSSValueLeft:
    case CSSValuePage:
    case CSSValueRecto:
    case CSSValueRight:
    case CSSValueVerso:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBreakBefore: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueAvoid:
    case CSSValueAvoidColumn:
    case CSSValueAvoidPage:
    case CSSValueColumn:
    case CSSValueLeft:
    case CSSValuePage:
    case CSSValueRecto:
    case CSSValueRight:
    case CSSValueVerso:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyBreakInside: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueAvoid:
    case CSSValueAvoidColumn:
    case CSSValueAvoidPage:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyCaptionSide: {
    switch (valueID) {
    case CSSValueTop:
    case CSSValueBottom:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyCaretColor: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueCurrentcolor:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyClear: {
    switch (valueID) {
    case CSSValueNone:
    case CSSValueLeft:
    case CSSValueRight:
    case CSSValueBoth:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyClip: {
    switch (valueID) {
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyClipPath: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyClipRule: {
    switch (valueID) {
    case CSSValueNonzero:
    case CSSValueEvenodd:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyColorInterpolation: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueSRGB:
    case CSSValueLinearRGB:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyColorRendering: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueOptimizeSpeed:
    case CSSValueOptimizeQuality:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyColumnCount: {
    switch (valueID) {
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyColumnFill: {
    switch (valueID) {
    case CSSValueBalance:
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyColumnGap: {
    switch (valueID) {
    case CSSValueNormal:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyColumnRuleColor: {
    switch (valueID) {
    case CSSValueCurrentcolor:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyColumnRuleStyle: {
    switch (valueID) {
    case CSSValueNone:
    case CSSValueHidden:
    case CSSValueInset:
    case CSSValueGroove:
    case CSSValueOutset:
    case CSSValueRidge:
    case CSSValueDotted:
    case CSSValueDashed:
    case CSSValueSolid:
    case CSSValueDouble:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyColumnRuleWidth: {
    switch (valueID) {
    case CSSValueThin:
    case CSSValueMedium:
    case CSSValueThick:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyColumnSpan: {
    switch (valueID) {
    case CSSValueNone:
    case CSSValueAll:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyColumnWidth: {
    switch (valueID) {
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyContain: {
    switch (valueID) {
    case CSSValueNone:
    case CSSValueStrict:
    case CSSValueContent:
    case CSSValueSize:
    case CSSValueLayout:
    case CSSValueStyle:
    case CSSValuePaint:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyCounterIncrement: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyCounterReset: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyCursor: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueDefault:
    case CSSValueNone:
    case CSSValueContextMenu:
    case CSSValueHelp:
    case CSSValuePointer:
    case CSSValueProgress:
    case CSSValueWait:
    case CSSValueCell:
    case CSSValueCrosshair:
    case CSSValueText:
    case CSSValueVerticalText:
    case CSSValueAlias:
    case CSSValueCopy:
    case CSSValueMove:
    case CSSValueNoDrop:
    case CSSValueNotAllowed:
    case CSSValueEResize:
    case CSSValueNResize:
    case CSSValueNeResize:
    case CSSValueNwResize:
    case CSSValueSResize:
    case CSSValueSeResize:
    case CSSValueSwResize:
    case CSSValueWResize:
    case CSSValueEwResize:
    case CSSValueNsResize:
    case CSSValueNeswResize:
    case CSSValueNwseResize:
    case CSSValueColResize:
    case CSSValueRowResize:
    case CSSValueAllScroll:
    case CSSValueZoomIn:
    case CSSValueZoomOut:
    case CSSValueGrab:
    case CSSValueGrabbing:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyD: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyDisplay: {
    switch (valueID) {
    case CSSValueInline:
    case CSSValueBlock:
    case CSSValueListItem:
    case CSSValueInlineBlock:
    case CSSValueTable:
    case CSSValueInlineTable:
    case CSSValueTableRowGroup:
    case CSSValueTableHeaderGroup:
    case CSSValueTableFooterGroup:
    case CSSValueTableRow:
    case CSSValueTableColumnGroup:
    case CSSValueTableColumn:
    case CSSValueTableCell:
    case CSSValueTableCaption:
    case CSSValueWebkitBox:
    case CSSValueWebkitInlineBox:
    case CSSValueFlex:
    case CSSValueInlineFlex:
    case CSSValueGrid:
    case CSSValueInlineGrid:
    case CSSValueContents:
    case CSSValueFlowRoot:
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyDominantBaseline: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueAlphabetic:
    case CSSValueIdeographic:
    case CSSValueMiddle:
    case CSSValueCentral:
    case CSSValueMathematical:
    case CSSValueHanging:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyEmptyCells: {
    switch (valueID) {
    case CSSValueShow:
    case CSSValueHide:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyFillRule: {
    switch (valueID) {
    case CSSValueNonzero:
    case CSSValueEvenodd:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyFilter: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyFlexBasis: {
    switch (valueID) {
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyFlexDirection: {
    switch (valueID) {
    case CSSValueRow:
    case CSSValueRowReverse:
    case CSSValueColumn:
    case CSSValueColumnReverse:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyFlexWrap: {
    switch (valueID) {
    case CSSValueNowrap:
    case CSSValueWrap:
    case CSSValueWrapReverse:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyFloat: {
    switch (valueID) {
    case CSSValueNone:
    case CSSValueLeft:
    case CSSValueRight:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyFloodColor: {
    switch (valueID) {
    case CSSValueCurrentcolor:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyGridAutoColumns: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueMinContent:
    case CSSValueMaxContent:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyGridAutoFlow: {
    switch (valueID) {
    case CSSValueRow:
    case CSSValueColumn:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyGridAutoRows: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueMinContent:
    case CSSValueMaxContent:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyGridColumnEnd: {
    switch (valueID) {
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyGridColumnStart: {
    switch (valueID) {
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyGridRowEnd: {
    switch (valueID) {
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyGridRowStart: {
    switch (valueID) {
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyGridTemplateAreas: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyGridTemplateColumns: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyGridTemplateRows: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyHeight: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueFitContent:
    case CSSValueMinContent:
    case CSSValueMaxContent:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyHyphens: {
    switch (valueID) {
    case CSSValueNone:
    case CSSValueManual:
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyImageRendering: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueOptimizeSpeed:
    case CSSValueOptimizeQuality:
    case CSSValueWebkitOptimizeContrast:
    case CSSValuePixelated:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyInlineSize: {
    switch (valueID) {
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyIsolation: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueIsolate:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyLeft: {
    switch (valueID) {
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyLetterSpacing: {
    switch (valueID) {
    case CSSValueNormal:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyLightingColor: {
    switch (valueID) {
    case CSSValueCurrentcolor:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyLineBreak: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueLoose:
    case CSSValueNormal:
    case CSSValueStrict:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyLineHeight: {
    switch (valueID) {
    case CSSValueNormal:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyListStyleImage: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyListStylePosition: {
    switch (valueID) {
    case CSSValueOutside:
    case CSSValueInside:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyMarginBottom: {
    switch (valueID) {
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyMarginLeft: {
    switch (valueID) {
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyMarginRight: {
    switch (valueID) {
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyMarginTop: {
    switch (valueID) {
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyMarkerEnd: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyMarkerMid: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyMarkerStart: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyMaskType: {
    switch (valueID) {
    case CSSValueLuminance:
    case CSSValueAlpha:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyMaxBlockSize: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyMaxHeight: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyMaxInlineSize: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyMaxWidth: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyMixBlendMode: {
    switch (valueID) {
    case CSSValueNormal:
    case CSSValueMultiply:
    case CSSValueScreen:
    case CSSValueOverlay:
    case CSSValueDarken:
    case CSSValueLighten:
    case CSSValueColorDodge:
    case CSSValueColorBurn:
    case CSSValueHardLight:
    case CSSValueSoftLight:
    case CSSValueDifference:
    case CSSValueExclusion:
    case CSSValueHue:
    case CSSValueSaturation:
    case CSSValueColor:
    case CSSValueLuminosity:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyObjectFit: {
    switch (valueID) {
    case CSSValueFill:
    case CSSValueContain:
    case CSSValueCover:
    case CSSValueNone:
    case CSSValueScaleDown:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyOffsetAnchor: {
    switch (valueID) {
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyOffsetPath: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyOffsetPosition: {
    switch (valueID) {
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyOffsetRotate: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueReverse:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyOutlineColor: {
    switch (valueID) {
    case CSSValueCurrentcolor:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyOutlineStyle: {
    switch (valueID) {
    case CSSValueNone:
    case CSSValueHidden:
    case CSSValueInset:
    case CSSValueGroove:
    case CSSValueOutset:
    case CSSValueRidge:
    case CSSValueDotted:
    case CSSValueDashed:
    case CSSValueSolid:
    case CSSValueDouble:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyOutlineWidth: {
    switch (valueID) {
    case CSSValueThin:
    case CSSValueMedium:
    case CSSValueThick:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyOverflowAnchor: {
    switch (valueID) {
    case CSSValueVisible:
    case CSSValueNone:
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyOverflowWrap: {
    switch (valueID) {
    case CSSValueNormal:
    case CSSValueBreakWord:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyOverflowX: {
    switch (valueID) {
    case CSSValueVisible:
    case CSSValueHidden:
    case CSSValueScroll:
    case CSSValueAuto:
    case CSSValueOverlay:
    case CSSValueWebkitPagedX:
    case CSSValueWebkitPagedY:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyOverflowY: {
    switch (valueID) {
    case CSSValueVisible:
    case CSSValueHidden:
    case CSSValueScroll:
    case CSSValueAuto:
    case CSSValueOverlay:
    case CSSValueWebkitPagedX:
    case CSSValueWebkitPagedY:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyOverscrollBehaviorX: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueContain:
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyOverscrollBehaviorY: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueContain:
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyPaintOrder: {
    switch (valueID) {
    case CSSValueNormal:
    case CSSValueFill:
    case CSSValueStroke:
    case CSSValueMarkers:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyPerspective: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyPointerEvents: {
    switch (valueID) {
    case CSSValueNone:
    case CSSValueAuto:
    case CSSValueStroke:
    case CSSValueFill:
    case CSSValuePainted:
    case CSSValueVisible:
    case CSSValueVisibleStroke:
    case CSSValueVisibleFill:
    case CSSValueVisiblePainted:
    case CSSValueBoundingBox:
    case CSSValueAll:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyPosition: {
    switch (valueID) {
    case CSSValueStatic:
    case CSSValueRelative:
    case CSSValueAbsolute:
    case CSSValueFixed:
    case CSSValueSticky:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyQuotes: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyResize: {
    switch (valueID) {
    case CSSValueNone:
    case CSSValueBoth:
    case CSSValueHorizontal:
    case CSSValueVertical:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyRight: {
    switch (valueID) {
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyRowGap: {
    switch (valueID) {
    case CSSValueNormal:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyRx: {
    switch (valueID) {
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyRy: {
    switch (valueID) {
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyScrollBehavior: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueSmooth:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyScrollSnapAlign: {
    switch (valueID) {
    case CSSValueNone:
    case CSSValueStart:
    case CSSValueEnd:
    case CSSValueCenter:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyScrollSnapStop: {
    switch (valueID) {
    case CSSValueNormal:
    case CSSValueAlways:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyScrollSnapType: {
    switch (valueID) {
    case CSSValueNone:
    case CSSValueX:
    case CSSValueY:
    case CSSValueBlock:
    case CSSValueInline:
    case CSSValueBoth:
    case CSSValueMandatory:
    case CSSValueProximity:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyShapeOutside: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyShapeRendering: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueOptimizeSpeed:
    case CSSValueCrispEdges:
    case CSSValueGeometricPrecision:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyStopColor: {
    switch (valueID) {
    case CSSValueCurrentcolor:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyStrokeDasharray: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyStrokeLinecap: {
    switch (valueID) {
    case CSSValueButt:
    case CSSValueRound:
    case CSSValueSquare:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyStrokeLinejoin: {
    switch (valueID) {
    case CSSValueMiter:
    case CSSValueBevel:
    case CSSValueRound:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyTableLayout: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueFixed:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyTextAlign: {
    switch (valueID) {
    case CSSValueLeft:
    case CSSValueRight:
    case CSSValueCenter:
    case CSSValueJustify:
    case CSSValueWebkitLeft:
    case CSSValueWebkitRight:
    case CSSValueWebkitCenter:
    case CSSValueStart:
    case CSSValueEnd:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyTextAlignLast: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueStart:
    case CSSValueEnd:
    case CSSValueLeft:
    case CSSValueRight:
    case CSSValueCenter:
    case CSSValueJustify:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyTextAnchor: {
    switch (valueID) {
    case CSSValueStart:
    case CSSValueMiddle:
    case CSSValueEnd:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyTextCombineUpright: {
    switch (valueID) {
    case CSSValueNone:
    case CSSValueAll:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyTextDecorationColor: {
    switch (valueID) {
    case CSSValueCurrentcolor:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyTextDecorationLine: {
    switch (valueID) {
    case CSSValueNone:
    case CSSValueUnderline:
    case CSSValueOverline:
    case CSSValueLineThrough:
    case CSSValueBlink:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyTextDecorationSkipInk: {
    switch (valueID) {
    case CSSValueNone:
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyTextDecorationStyle: {
    switch (valueID) {
    case CSSValueSolid:
    case CSSValueDouble:
    case CSSValueDotted:
    case CSSValueDashed:
    case CSSValueWavy:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyTextJustify: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueNone:
    case CSSValueInterWord:
    case CSSValueDistribute:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyTextOverflow: {
    switch (valueID) {
    case CSSValueClip:
    case CSSValueEllipsis:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyTextShadow: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyTextSizeAdjust: {
    switch (valueID) {
    case CSSValueNone:
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyTextTransform: {
    switch (valueID) {
    case CSSValueCapitalize:
    case CSSValueUppercase:
    case CSSValueLowercase:
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyTextUnderlinePosition: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueUnder:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyTop: {
    switch (valueID) {
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyTouchAction: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueNone:
    case CSSValuePanX:
    case CSSValuePanLeft:
    case CSSValuePanRight:
    case CSSValuePanY:
    case CSSValuePanUp:
    case CSSValuePanDown:
    case CSSValuePinchZoom:
    case CSSValueManipulation:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyTransform: {
    switch (valueID) {
    case CSSValueNone:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyTransformBox: {
    switch (valueID) {
    case CSSValueFillBox:
    case CSSValueViewBox:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyTransformStyle: {
    switch (valueID) {
    case CSSValueFlat:
    case CSSValuePreserve3d:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyUnicodeBidi: {
    switch (valueID) {
    case CSSValueNormal:
    case CSSValueEmbed:
    case CSSValueBidiOverride:
    case CSSValueIsolate:
    case CSSValuePlaintext:
    case CSSValueIsolateOverride:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyUserSelect: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueNone:
    case CSSValueText:
    case CSSValueAll:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyVectorEffect: {
    switch (valueID) {
    case CSSValueNone:
    case CSSValueNonScalingStroke:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyVerticalAlign: {
    switch (valueID) {
    case CSSValueBaseline:
    case CSSValueSub:
    case CSSValueSuper:
    case CSSValueTextTop:
    case CSSValueTextBottom:
    case CSSValueMiddle:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyVisibility: {
    switch (valueID) {
    case CSSValueVisible:
    case CSSValueHidden:
    case CSSValueCollapse:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyWhiteSpace: {
    switch (valueID) {
    case CSSValueNormal:
    case CSSValuePre:
    case CSSValuePreWrap:
    case CSSValuePreLine:
    case CSSValueNowrap:
    case CSSValueWebkitNowrap:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyWidth: {
    switch (valueID) {
    case CSSValueAuto:
    case CSSValueFitContent:
    case CSSValueMinContent:
    case CSSValueMaxContent:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyWillChange: {
    switch (valueID) {
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyWordBreak: {
    switch (valueID) {
    case CSSValueNormal:
    case CSSValueBreakAll:
    case CSSValueKeepAll:
    case CSSValueBreakWord:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyWordSpacing: {
    switch (valueID) {
    case CSSValueNormal:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyWordWrap: {
    switch (valueID) {
    case CSSValueNormal:
    case CSSValueBreakWord:
      return true;
    default:
      return false;
    }
  }
  case CSSPropertyZIndex: {
    switch (valueID) {
    case CSSValueAuto:
      return true;
    default:
      return false;
    }
  }
  default:
    return false;
  }
}

} // namespace blink
