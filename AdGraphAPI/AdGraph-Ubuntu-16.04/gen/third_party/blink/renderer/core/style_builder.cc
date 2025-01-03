// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/style_builder.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/ComputedStyleFieldAliases.json5
//   ../../third_party/blink/renderer/core/css/CSSProperties.json5


#include "third_party/blink/renderer/core/css/resolver/style_builder.h"

#include "third_party/blink/renderer/core/css/css_property_value.h"
#include "third_party/blink/renderer/core/css/properties/longhand.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"
#include "third_party/blink/renderer/core/style_builder_functions.h"

namespace blink {

// TODO(crbug.com/751354): Delete this method and call property class methods
// directly using CSSProperty::Get() once all StyleBuilderFunctions have been
// moved to property classes.
void StyleBuilder::ApplyProperty(const CSSProperty& property,
                                 StyleResolverState& state,
                                 const CSSValue& value,
                                 bool isInitial,
                                 bool isInherit) {
  switch (property.PropertyID()) {
    case CSSPropertyAnimationDelay:
      if (isInitial)
        ToLonghand(GetCSSPropertyAnimationDelay()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyAnimationDelay()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyAnimationDelay()).ApplyValue(state, value);
      return;

    case CSSPropertyAnimationDirection:
      if (isInitial)
        ToLonghand(GetCSSPropertyAnimationDirection()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyAnimationDirection()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyAnimationDirection()).ApplyValue(state, value);
      return;

    case CSSPropertyAnimationDuration:
      if (isInitial)
        ToLonghand(GetCSSPropertyAnimationDuration()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyAnimationDuration()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyAnimationDuration()).ApplyValue(state, value);
      return;

    case CSSPropertyAnimationFillMode:
      if (isInitial)
        ToLonghand(GetCSSPropertyAnimationFillMode()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyAnimationFillMode()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyAnimationFillMode()).ApplyValue(state, value);
      return;

    case CSSPropertyAnimationIterationCount:
      if (isInitial)
        ToLonghand(GetCSSPropertyAnimationIterationCount()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyAnimationIterationCount()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyAnimationIterationCount()).ApplyValue(state, value);
      return;

    case CSSPropertyAnimationName:
      if (isInitial)
        ToLonghand(GetCSSPropertyAnimationName()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyAnimationName()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyAnimationName()).ApplyValue(state, value);
      return;

    case CSSPropertyAnimationPlayState:
      if (isInitial)
        ToLonghand(GetCSSPropertyAnimationPlayState()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyAnimationPlayState()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyAnimationPlayState()).ApplyValue(state, value);
      return;

    case CSSPropertyAnimationTimingFunction:
      if (isInitial)
        ToLonghand(GetCSSPropertyAnimationTimingFunction()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyAnimationTimingFunction()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyAnimationTimingFunction()).ApplyValue(state, value);
      return;

    case CSSPropertyTransitionDelay:
      if (isInitial)
        ToLonghand(GetCSSPropertyTransitionDelay()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyTransitionDelay()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyTransitionDelay()).ApplyValue(state, value);
      return;

    case CSSPropertyTransitionDuration:
      if (isInitial)
        ToLonghand(GetCSSPropertyTransitionDuration()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyTransitionDuration()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyTransitionDuration()).ApplyValue(state, value);
      return;

    case CSSPropertyTransitionProperty:
      if (isInitial)
        ToLonghand(GetCSSPropertyTransitionProperty()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyTransitionProperty()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyTransitionProperty()).ApplyValue(state, value);
      return;

    case CSSPropertyTransitionTimingFunction:
      if (isInitial)
        ToLonghand(GetCSSPropertyTransitionTimingFunction()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyTransitionTimingFunction()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyTransitionTimingFunction()).ApplyValue(state, value);
      return;

    case CSSPropertyColor:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyColor(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyColor(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyColor(state, value);
      return;

    case CSSPropertyDirection:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyDirection(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyDirection(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyDirection(state, value);
      return;

    case CSSPropertyFontFamily:
      if (isInitial)
        ToLonghand(GetCSSPropertyFontFamily()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyFontFamily()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyFontFamily()).ApplyValue(state, value);
      return;

    case CSSPropertyFontFeatureSettings:
      if (isInitial)
        ToLonghand(GetCSSPropertyFontFeatureSettings()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyFontFeatureSettings()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyFontFeatureSettings()).ApplyValue(state, value);
      return;

    case CSSPropertyFontKerning:
      if (isInitial)
        ToLonghand(GetCSSPropertyFontKerning()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyFontKerning()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyFontKerning()).ApplyValue(state, value);
      return;

    case CSSPropertyFontSize:
      if (isInitial)
        ToLonghand(GetCSSPropertyFontSize()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyFontSize()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyFontSize()).ApplyValue(state, value);
      return;

    case CSSPropertyFontSizeAdjust:
      if (isInitial)
        ToLonghand(GetCSSPropertyFontSizeAdjust()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyFontSizeAdjust()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyFontSizeAdjust()).ApplyValue(state, value);
      return;

    case CSSPropertyFontStretch:
      if (isInitial)
        ToLonghand(GetCSSPropertyFontStretch()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyFontStretch()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyFontStretch()).ApplyValue(state, value);
      return;

    case CSSPropertyFontStyle:
      if (isInitial)
        ToLonghand(GetCSSPropertyFontStyle()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyFontStyle()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyFontStyle()).ApplyValue(state, value);
      return;

    case CSSPropertyFontVariantCaps:
      if (isInitial)
        ToLonghand(GetCSSPropertyFontVariantCaps()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyFontVariantCaps()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyFontVariantCaps()).ApplyValue(state, value);
      return;

    case CSSPropertyFontVariantEastAsian:
      if (isInitial)
        ToLonghand(GetCSSPropertyFontVariantEastAsian()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyFontVariantEastAsian()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyFontVariantEastAsian()).ApplyValue(state, value);
      return;

    case CSSPropertyFontVariantLigatures:
      if (isInitial)
        ToLonghand(GetCSSPropertyFontVariantLigatures()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyFontVariantLigatures()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyFontVariantLigatures()).ApplyValue(state, value);
      return;

    case CSSPropertyFontVariantNumeric:
      if (isInitial)
        ToLonghand(GetCSSPropertyFontVariantNumeric()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyFontVariantNumeric()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyFontVariantNumeric()).ApplyValue(state, value);
      return;

    case CSSPropertyFontVariationSettings:
      if (isInitial)
        ToLonghand(GetCSSPropertyFontVariationSettings()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyFontVariationSettings()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyFontVariationSettings()).ApplyValue(state, value);
      return;

    case CSSPropertyFontWeight:
      if (isInitial)
        ToLonghand(GetCSSPropertyFontWeight()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyFontWeight()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyFontWeight()).ApplyValue(state, value);
      return;

    case CSSPropertyTextOrientation:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyTextOrientation(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyTextOrientation(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyTextOrientation(state, value);
      return;

    case CSSPropertyTextRendering:
      if (isInitial)
        ToLonghand(GetCSSPropertyTextRendering()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyTextRendering()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyTextRendering()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitFontSmoothing:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitFontSmoothing()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitFontSmoothing()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitFontSmoothing()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitLocale:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyWebkitLocale(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyWebkitLocale(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyWebkitLocale(state, value);
      return;

    case CSSPropertyWebkitTextOrientation:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyWebkitTextOrientation(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyWebkitTextOrientation(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyWebkitTextOrientation(state, value);
      return;

    case CSSPropertyWebkitWritingMode:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyWebkitWritingMode(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyWebkitWritingMode(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyWebkitWritingMode(state, value);
      return;

    case CSSPropertyWritingMode:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyWritingMode(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyWritingMode(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyWritingMode(state, value);
      return;

    case CSSPropertyZoom:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyZoom(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyZoom(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyZoom(state, value);
      return;

    case CSSPropertyAlignContent:
      if (isInitial)
        ToLonghand(GetCSSPropertyAlignContent()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyAlignContent()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyAlignContent()).ApplyValue(state, value);
      return;

    case CSSPropertyAlignItems:
      if (isInitial)
        ToLonghand(GetCSSPropertyAlignItems()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyAlignItems()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyAlignItems()).ApplyValue(state, value);
      return;

    case CSSPropertyAlignSelf:
      if (isInitial)
        ToLonghand(GetCSSPropertyAlignSelf()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyAlignSelf()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyAlignSelf()).ApplyValue(state, value);
      return;

    case CSSPropertyAlignmentBaseline:
      if (isInitial)
        ToLonghand(GetCSSPropertyAlignmentBaseline()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyAlignmentBaseline()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyAlignmentBaseline()).ApplyValue(state, value);
      return;

    case CSSPropertyBackdropFilter:
      if (isInitial)
        ToLonghand(GetCSSPropertyBackdropFilter()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBackdropFilter()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBackdropFilter()).ApplyValue(state, value);
      return;

    case CSSPropertyBackfaceVisibility:
      if (isInitial)
        ToLonghand(GetCSSPropertyBackfaceVisibility()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBackfaceVisibility()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBackfaceVisibility()).ApplyValue(state, value);
      return;

    case CSSPropertyBackgroundAttachment:
      if (isInitial)
        ToLonghand(GetCSSPropertyBackgroundAttachment()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBackgroundAttachment()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBackgroundAttachment()).ApplyValue(state, value);
      return;

    case CSSPropertyBackgroundBlendMode:
      if (isInitial)
        ToLonghand(GetCSSPropertyBackgroundBlendMode()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBackgroundBlendMode()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBackgroundBlendMode()).ApplyValue(state, value);
      return;

    case CSSPropertyBackgroundClip:
      if (isInitial)
        ToLonghand(GetCSSPropertyBackgroundClip()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBackgroundClip()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBackgroundClip()).ApplyValue(state, value);
      return;

    case CSSPropertyBackgroundColor:
      if (isInitial)
        ToLonghand(GetCSSPropertyBackgroundColor()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBackgroundColor()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBackgroundColor()).ApplyValue(state, value);
      return;

    case CSSPropertyBackgroundImage:
      if (isInitial)
        ToLonghand(GetCSSPropertyBackgroundImage()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBackgroundImage()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBackgroundImage()).ApplyValue(state, value);
      return;

    case CSSPropertyBackgroundOrigin:
      if (isInitial)
        ToLonghand(GetCSSPropertyBackgroundOrigin()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBackgroundOrigin()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBackgroundOrigin()).ApplyValue(state, value);
      return;

    case CSSPropertyBackgroundPositionX:
      if (isInitial)
        ToLonghand(GetCSSPropertyBackgroundPositionX()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBackgroundPositionX()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBackgroundPositionX()).ApplyValue(state, value);
      return;

    case CSSPropertyBackgroundPositionY:
      if (isInitial)
        ToLonghand(GetCSSPropertyBackgroundPositionY()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBackgroundPositionY()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBackgroundPositionY()).ApplyValue(state, value);
      return;

    case CSSPropertyBackgroundRepeatX:
      if (isInitial)
        ToLonghand(GetCSSPropertyBackgroundRepeatX()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBackgroundRepeatX()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBackgroundRepeatX()).ApplyValue(state, value);
      return;

    case CSSPropertyBackgroundRepeatY:
      if (isInitial)
        ToLonghand(GetCSSPropertyBackgroundRepeatY()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBackgroundRepeatY()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBackgroundRepeatY()).ApplyValue(state, value);
      return;

    case CSSPropertyBackgroundSize:
      if (isInitial)
        ToLonghand(GetCSSPropertyBackgroundSize()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBackgroundSize()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBackgroundSize()).ApplyValue(state, value);
      return;

    case CSSPropertyBaselineShift:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyBaselineShift(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyBaselineShift(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyBaselineShift(state, value);
      return;

    case CSSPropertyBorderBottomColor:
      if (isInitial)
        ToLonghand(GetCSSPropertyBorderBottomColor()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBorderBottomColor()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBorderBottomColor()).ApplyValue(state, value);
      return;

    case CSSPropertyBorderBottomLeftRadius:
      if (isInitial)
        ToLonghand(GetCSSPropertyBorderBottomLeftRadius()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBorderBottomLeftRadius()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBorderBottomLeftRadius()).ApplyValue(state, value);
      return;

    case CSSPropertyBorderBottomRightRadius:
      if (isInitial)
        ToLonghand(GetCSSPropertyBorderBottomRightRadius()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBorderBottomRightRadius()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBorderBottomRightRadius()).ApplyValue(state, value);
      return;

    case CSSPropertyBorderBottomStyle:
      if (isInitial)
        ToLonghand(GetCSSPropertyBorderBottomStyle()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBorderBottomStyle()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBorderBottomStyle()).ApplyValue(state, value);
      return;

    case CSSPropertyBorderBottomWidth:
      if (isInitial)
        ToLonghand(GetCSSPropertyBorderBottomWidth()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBorderBottomWidth()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBorderBottomWidth()).ApplyValue(state, value);
      return;

    case CSSPropertyBorderCollapse:
      if (isInitial)
        ToLonghand(GetCSSPropertyBorderCollapse()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBorderCollapse()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBorderCollapse()).ApplyValue(state, value);
      return;

    case CSSPropertyBorderImageOutset:
      if (isInitial)
        ToLonghand(GetCSSPropertyBorderImageOutset()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBorderImageOutset()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBorderImageOutset()).ApplyValue(state, value);
      return;

    case CSSPropertyBorderImageRepeat:
      if (isInitial)
        ToLonghand(GetCSSPropertyBorderImageRepeat()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBorderImageRepeat()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBorderImageRepeat()).ApplyValue(state, value);
      return;

    case CSSPropertyBorderImageSlice:
      if (isInitial)
        ToLonghand(GetCSSPropertyBorderImageSlice()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBorderImageSlice()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBorderImageSlice()).ApplyValue(state, value);
      return;

    case CSSPropertyBorderImageSource:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyBorderImageSource(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyBorderImageSource(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyBorderImageSource(state, value);
      return;

    case CSSPropertyBorderImageWidth:
      if (isInitial)
        ToLonghand(GetCSSPropertyBorderImageWidth()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBorderImageWidth()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBorderImageWidth()).ApplyValue(state, value);
      return;

    case CSSPropertyBorderLeftColor:
      if (isInitial)
        ToLonghand(GetCSSPropertyBorderLeftColor()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBorderLeftColor()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBorderLeftColor()).ApplyValue(state, value);
      return;

    case CSSPropertyBorderLeftStyle:
      if (isInitial)
        ToLonghand(GetCSSPropertyBorderLeftStyle()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBorderLeftStyle()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBorderLeftStyle()).ApplyValue(state, value);
      return;

    case CSSPropertyBorderLeftWidth:
      if (isInitial)
        ToLonghand(GetCSSPropertyBorderLeftWidth()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBorderLeftWidth()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBorderLeftWidth()).ApplyValue(state, value);
      return;

    case CSSPropertyBorderRightColor:
      if (isInitial)
        ToLonghand(GetCSSPropertyBorderRightColor()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBorderRightColor()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBorderRightColor()).ApplyValue(state, value);
      return;

    case CSSPropertyBorderRightStyle:
      if (isInitial)
        ToLonghand(GetCSSPropertyBorderRightStyle()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBorderRightStyle()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBorderRightStyle()).ApplyValue(state, value);
      return;

    case CSSPropertyBorderRightWidth:
      if (isInitial)
        ToLonghand(GetCSSPropertyBorderRightWidth()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBorderRightWidth()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBorderRightWidth()).ApplyValue(state, value);
      return;

    case CSSPropertyBorderTopColor:
      if (isInitial)
        ToLonghand(GetCSSPropertyBorderTopColor()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBorderTopColor()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBorderTopColor()).ApplyValue(state, value);
      return;

    case CSSPropertyBorderTopLeftRadius:
      if (isInitial)
        ToLonghand(GetCSSPropertyBorderTopLeftRadius()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBorderTopLeftRadius()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBorderTopLeftRadius()).ApplyValue(state, value);
      return;

    case CSSPropertyBorderTopRightRadius:
      if (isInitial)
        ToLonghand(GetCSSPropertyBorderTopRightRadius()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBorderTopRightRadius()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBorderTopRightRadius()).ApplyValue(state, value);
      return;

    case CSSPropertyBorderTopStyle:
      if (isInitial)
        ToLonghand(GetCSSPropertyBorderTopStyle()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBorderTopStyle()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBorderTopStyle()).ApplyValue(state, value);
      return;

    case CSSPropertyBorderTopWidth:
      if (isInitial)
        ToLonghand(GetCSSPropertyBorderTopWidth()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBorderTopWidth()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBorderTopWidth()).ApplyValue(state, value);
      return;

    case CSSPropertyBottom:
      if (isInitial)
        ToLonghand(GetCSSPropertyBottom()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBottom()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBottom()).ApplyValue(state, value);
      return;

    case CSSPropertyBoxShadow:
      if (isInitial)
        ToLonghand(GetCSSPropertyBoxShadow()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBoxShadow()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBoxShadow()).ApplyValue(state, value);
      return;

    case CSSPropertyBoxSizing:
      if (isInitial)
        ToLonghand(GetCSSPropertyBoxSizing()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBoxSizing()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBoxSizing()).ApplyValue(state, value);
      return;

    case CSSPropertyBreakAfter:
      if (isInitial)
        ToLonghand(GetCSSPropertyBreakAfter()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBreakAfter()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBreakAfter()).ApplyValue(state, value);
      return;

    case CSSPropertyBreakBefore:
      if (isInitial)
        ToLonghand(GetCSSPropertyBreakBefore()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBreakBefore()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBreakBefore()).ApplyValue(state, value);
      return;

    case CSSPropertyBreakInside:
      if (isInitial)
        ToLonghand(GetCSSPropertyBreakInside()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBreakInside()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBreakInside()).ApplyValue(state, value);
      return;

    case CSSPropertyBufferedRendering:
      if (isInitial)
        ToLonghand(GetCSSPropertyBufferedRendering()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyBufferedRendering()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyBufferedRendering()).ApplyValue(state, value);
      return;

    case CSSPropertyCaptionSide:
      if (isInitial)
        ToLonghand(GetCSSPropertyCaptionSide()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyCaptionSide()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyCaptionSide()).ApplyValue(state, value);
      return;

    case CSSPropertyCaretColor:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyCaretColor(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyCaretColor(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyCaretColor(state, value);
      return;

    case CSSPropertyClear:
      if (isInitial)
        ToLonghand(GetCSSPropertyClear()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyClear()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyClear()).ApplyValue(state, value);
      return;

    case CSSPropertyClip:
      if (isInitial)
        ToLonghand(GetCSSPropertyClip()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyClip()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyClip()).ApplyValue(state, value);
      return;

    case CSSPropertyClipPath:
      if (isInitial)
        ToLonghand(GetCSSPropertyClipPath()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyClipPath()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyClipPath()).ApplyValue(state, value);
      return;

    case CSSPropertyClipRule:
      if (isInitial)
        ToLonghand(GetCSSPropertyClipRule()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyClipRule()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyClipRule()).ApplyValue(state, value);
      return;

    case CSSPropertyColorInterpolation:
      if (isInitial)
        ToLonghand(GetCSSPropertyColorInterpolation()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyColorInterpolation()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyColorInterpolation()).ApplyValue(state, value);
      return;

    case CSSPropertyColorInterpolationFilters:
      if (isInitial)
        ToLonghand(GetCSSPropertyColorInterpolationFilters()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyColorInterpolationFilters()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyColorInterpolationFilters()).ApplyValue(state, value);
      return;

    case CSSPropertyColorRendering:
      if (isInitial)
        ToLonghand(GetCSSPropertyColorRendering()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyColorRendering()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyColorRendering()).ApplyValue(state, value);
      return;

    case CSSPropertyColumnCount:
      if (isInitial)
        ToLonghand(GetCSSPropertyColumnCount()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyColumnCount()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyColumnCount()).ApplyValue(state, value);
      return;

    case CSSPropertyColumnFill:
      if (isInitial)
        ToLonghand(GetCSSPropertyColumnFill()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyColumnFill()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyColumnFill()).ApplyValue(state, value);
      return;

    case CSSPropertyColumnGap:
      if (isInitial)
        ToLonghand(GetCSSPropertyColumnGap()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyColumnGap()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyColumnGap()).ApplyValue(state, value);
      return;

    case CSSPropertyColumnRuleColor:
      if (isInitial)
        ToLonghand(GetCSSPropertyColumnRuleColor()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyColumnRuleColor()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyColumnRuleColor()).ApplyValue(state, value);
      return;

    case CSSPropertyColumnRuleStyle:
      if (isInitial)
        ToLonghand(GetCSSPropertyColumnRuleStyle()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyColumnRuleStyle()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyColumnRuleStyle()).ApplyValue(state, value);
      return;

    case CSSPropertyColumnRuleWidth:
      if (isInitial)
        ToLonghand(GetCSSPropertyColumnRuleWidth()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyColumnRuleWidth()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyColumnRuleWidth()).ApplyValue(state, value);
      return;

    case CSSPropertyColumnSpan:
      if (isInitial)
        ToLonghand(GetCSSPropertyColumnSpan()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyColumnSpan()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyColumnSpan()).ApplyValue(state, value);
      return;

    case CSSPropertyColumnWidth:
      if (isInitial)
        ToLonghand(GetCSSPropertyColumnWidth()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyColumnWidth()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyColumnWidth()).ApplyValue(state, value);
      return;

    case CSSPropertyContain:
      if (isInitial)
        ToLonghand(GetCSSPropertyContain()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyContain()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyContain()).ApplyValue(state, value);
      return;

    case CSSPropertyContent:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyContent(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyContent(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyContent(state, value);
      return;

    case CSSPropertyCounterIncrement:
      if (isInitial)
        ToLonghand(GetCSSPropertyCounterIncrement()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyCounterIncrement()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyCounterIncrement()).ApplyValue(state, value);
      return;

    case CSSPropertyCounterReset:
      if (isInitial)
        ToLonghand(GetCSSPropertyCounterReset()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyCounterReset()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyCounterReset()).ApplyValue(state, value);
      return;

    case CSSPropertyCursor:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyCursor(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyCursor(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyCursor(state, value);
      return;

    case CSSPropertyCx:
      if (isInitial)
        ToLonghand(GetCSSPropertyCx()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyCx()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyCx()).ApplyValue(state, value);
      return;

    case CSSPropertyCy:
      if (isInitial)
        ToLonghand(GetCSSPropertyCy()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyCy()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyCy()).ApplyValue(state, value);
      return;

    case CSSPropertyD:
      if (isInitial)
        ToLonghand(GetCSSPropertyD()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyD()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyD()).ApplyValue(state, value);
      return;

    case CSSPropertyDisplay:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyDisplay(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyDisplay(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyDisplay(state, value);
      return;

    case CSSPropertyDominantBaseline:
      if (isInitial)
        ToLonghand(GetCSSPropertyDominantBaseline()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyDominantBaseline()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyDominantBaseline()).ApplyValue(state, value);
      return;

    case CSSPropertyEmptyCells:
      if (isInitial)
        ToLonghand(GetCSSPropertyEmptyCells()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyEmptyCells()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyEmptyCells()).ApplyValue(state, value);
      return;

    case CSSPropertyFill:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyFill(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyFill(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyFill(state, value);
      return;

    case CSSPropertyFillOpacity:
      if (isInitial)
        ToLonghand(GetCSSPropertyFillOpacity()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyFillOpacity()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyFillOpacity()).ApplyValue(state, value);
      return;

    case CSSPropertyFillRule:
      if (isInitial)
        ToLonghand(GetCSSPropertyFillRule()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyFillRule()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyFillRule()).ApplyValue(state, value);
      return;

    case CSSPropertyFilter:
      if (isInitial)
        ToLonghand(GetCSSPropertyFilter()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyFilter()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyFilter()).ApplyValue(state, value);
      return;

    case CSSPropertyFlexBasis:
      if (isInitial)
        ToLonghand(GetCSSPropertyFlexBasis()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyFlexBasis()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyFlexBasis()).ApplyValue(state, value);
      return;

    case CSSPropertyFlexDirection:
      if (isInitial)
        ToLonghand(GetCSSPropertyFlexDirection()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyFlexDirection()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyFlexDirection()).ApplyValue(state, value);
      return;

    case CSSPropertyFlexGrow:
      if (isInitial)
        ToLonghand(GetCSSPropertyFlexGrow()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyFlexGrow()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyFlexGrow()).ApplyValue(state, value);
      return;

    case CSSPropertyFlexShrink:
      if (isInitial)
        ToLonghand(GetCSSPropertyFlexShrink()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyFlexShrink()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyFlexShrink()).ApplyValue(state, value);
      return;

    case CSSPropertyFlexWrap:
      if (isInitial)
        ToLonghand(GetCSSPropertyFlexWrap()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyFlexWrap()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyFlexWrap()).ApplyValue(state, value);
      return;

    case CSSPropertyFloat:
      if (isInitial)
        ToLonghand(GetCSSPropertyFloat()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyFloat()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyFloat()).ApplyValue(state, value);
      return;

    case CSSPropertyFloodColor:
      if (isInitial)
        ToLonghand(GetCSSPropertyFloodColor()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyFloodColor()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyFloodColor()).ApplyValue(state, value);
      return;

    case CSSPropertyFloodOpacity:
      if (isInitial)
        ToLonghand(GetCSSPropertyFloodOpacity()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyFloodOpacity()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyFloodOpacity()).ApplyValue(state, value);
      return;

    case CSSPropertyGridAutoColumns:
      if (isInitial)
        ToLonghand(GetCSSPropertyGridAutoColumns()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyGridAutoColumns()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyGridAutoColumns()).ApplyValue(state, value);
      return;

    case CSSPropertyGridAutoFlow:
      if (isInitial)
        ToLonghand(GetCSSPropertyGridAutoFlow()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyGridAutoFlow()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyGridAutoFlow()).ApplyValue(state, value);
      return;

    case CSSPropertyGridAutoRows:
      if (isInitial)
        ToLonghand(GetCSSPropertyGridAutoRows()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyGridAutoRows()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyGridAutoRows()).ApplyValue(state, value);
      return;

    case CSSPropertyGridColumnEnd:
      if (isInitial)
        ToLonghand(GetCSSPropertyGridColumnEnd()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyGridColumnEnd()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyGridColumnEnd()).ApplyValue(state, value);
      return;

    case CSSPropertyGridColumnStart:
      if (isInitial)
        ToLonghand(GetCSSPropertyGridColumnStart()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyGridColumnStart()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyGridColumnStart()).ApplyValue(state, value);
      return;

    case CSSPropertyGridRowEnd:
      if (isInitial)
        ToLonghand(GetCSSPropertyGridRowEnd()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyGridRowEnd()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyGridRowEnd()).ApplyValue(state, value);
      return;

    case CSSPropertyGridRowStart:
      if (isInitial)
        ToLonghand(GetCSSPropertyGridRowStart()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyGridRowStart()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyGridRowStart()).ApplyValue(state, value);
      return;

    case CSSPropertyGridTemplateAreas:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyGridTemplateAreas(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyGridTemplateAreas(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyGridTemplateAreas(state, value);
      return;

    case CSSPropertyGridTemplateColumns:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyGridTemplateColumns(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyGridTemplateColumns(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyGridTemplateColumns(state, value);
      return;

    case CSSPropertyGridTemplateRows:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyGridTemplateRows(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyGridTemplateRows(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyGridTemplateRows(state, value);
      return;

    case CSSPropertyHeight:
      if (isInitial)
        ToLonghand(GetCSSPropertyHeight()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyHeight()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyHeight()).ApplyValue(state, value);
      return;

    case CSSPropertyHyphens:
      if (isInitial)
        ToLonghand(GetCSSPropertyHyphens()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyHyphens()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyHyphens()).ApplyValue(state, value);
      return;

    case CSSPropertyImageOrientation:
      if (isInitial)
        ToLonghand(GetCSSPropertyImageOrientation()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyImageOrientation()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyImageOrientation()).ApplyValue(state, value);
      return;

    case CSSPropertyImageRendering:
      if (isInitial)
        ToLonghand(GetCSSPropertyImageRendering()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyImageRendering()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyImageRendering()).ApplyValue(state, value);
      return;

    case CSSPropertyIsolation:
      if (isInitial)
        ToLonghand(GetCSSPropertyIsolation()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyIsolation()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyIsolation()).ApplyValue(state, value);
      return;

    case CSSPropertyJustifyContent:
      if (isInitial)
        ToLonghand(GetCSSPropertyJustifyContent()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyJustifyContent()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyJustifyContent()).ApplyValue(state, value);
      return;

    case CSSPropertyJustifyItems:
      if (isInitial)
        ToLonghand(GetCSSPropertyJustifyItems()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyJustifyItems()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyJustifyItems()).ApplyValue(state, value);
      return;

    case CSSPropertyJustifySelf:
      if (isInitial)
        ToLonghand(GetCSSPropertyJustifySelf()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyJustifySelf()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyJustifySelf()).ApplyValue(state, value);
      return;

    case CSSPropertyLeft:
      if (isInitial)
        ToLonghand(GetCSSPropertyLeft()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyLeft()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyLeft()).ApplyValue(state, value);
      return;

    case CSSPropertyLetterSpacing:
      if (isInitial)
        ToLonghand(GetCSSPropertyLetterSpacing()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyLetterSpacing()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyLetterSpacing()).ApplyValue(state, value);
      return;

    case CSSPropertyLightingColor:
      if (isInitial)
        ToLonghand(GetCSSPropertyLightingColor()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyLightingColor()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyLightingColor()).ApplyValue(state, value);
      return;

    case CSSPropertyLineBreak:
      if (isInitial)
        ToLonghand(GetCSSPropertyLineBreak()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyLineBreak()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyLineBreak()).ApplyValue(state, value);
      return;

    case CSSPropertyLineHeight:
      if (isInitial)
        ToLonghand(GetCSSPropertyLineHeight()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyLineHeight()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyLineHeight()).ApplyValue(state, value);
      return;

    case CSSPropertyLineHeightStep:
      if (isInitial)
        ToLonghand(GetCSSPropertyLineHeightStep()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyLineHeightStep()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyLineHeightStep()).ApplyValue(state, value);
      return;

    case CSSPropertyListStyleImage:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyListStyleImage(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyListStyleImage(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyListStyleImage(state, value);
      return;

    case CSSPropertyListStylePosition:
      if (isInitial)
        ToLonghand(GetCSSPropertyListStylePosition()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyListStylePosition()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyListStylePosition()).ApplyValue(state, value);
      return;

    case CSSPropertyListStyleType:
      if (isInitial)
        ToLonghand(GetCSSPropertyListStyleType()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyListStyleType()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyListStyleType()).ApplyValue(state, value);
      return;

    case CSSPropertyMarginBottom:
      if (isInitial)
        ToLonghand(GetCSSPropertyMarginBottom()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyMarginBottom()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyMarginBottom()).ApplyValue(state, value);
      return;

    case CSSPropertyMarginLeft:
      if (isInitial)
        ToLonghand(GetCSSPropertyMarginLeft()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyMarginLeft()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyMarginLeft()).ApplyValue(state, value);
      return;

    case CSSPropertyMarginRight:
      if (isInitial)
        ToLonghand(GetCSSPropertyMarginRight()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyMarginRight()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyMarginRight()).ApplyValue(state, value);
      return;

    case CSSPropertyMarginTop:
      if (isInitial)
        ToLonghand(GetCSSPropertyMarginTop()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyMarginTop()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyMarginTop()).ApplyValue(state, value);
      return;

    case CSSPropertyMarkerEnd:
      if (isInitial)
        ToLonghand(GetCSSPropertyMarkerEnd()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyMarkerEnd()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyMarkerEnd()).ApplyValue(state, value);
      return;

    case CSSPropertyMarkerMid:
      if (isInitial)
        ToLonghand(GetCSSPropertyMarkerMid()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyMarkerMid()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyMarkerMid()).ApplyValue(state, value);
      return;

    case CSSPropertyMarkerStart:
      if (isInitial)
        ToLonghand(GetCSSPropertyMarkerStart()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyMarkerStart()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyMarkerStart()).ApplyValue(state, value);
      return;

    case CSSPropertyMask:
      if (isInitial)
        ToLonghand(GetCSSPropertyMask()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyMask()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyMask()).ApplyValue(state, value);
      return;

    case CSSPropertyMaskSourceType:
      if (isInitial)
        ToLonghand(GetCSSPropertyMaskSourceType()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyMaskSourceType()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyMaskSourceType()).ApplyValue(state, value);
      return;

    case CSSPropertyMaskType:
      if (isInitial)
        ToLonghand(GetCSSPropertyMaskType()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyMaskType()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyMaskType()).ApplyValue(state, value);
      return;

    case CSSPropertyMaxHeight:
      if (isInitial)
        ToLonghand(GetCSSPropertyMaxHeight()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyMaxHeight()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyMaxHeight()).ApplyValue(state, value);
      return;

    case CSSPropertyMaxWidth:
      if (isInitial)
        ToLonghand(GetCSSPropertyMaxWidth()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyMaxWidth()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyMaxWidth()).ApplyValue(state, value);
      return;

    case CSSPropertyMinHeight:
      if (isInitial)
        ToLonghand(GetCSSPropertyMinHeight()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyMinHeight()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyMinHeight()).ApplyValue(state, value);
      return;

    case CSSPropertyMinWidth:
      if (isInitial)
        ToLonghand(GetCSSPropertyMinWidth()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyMinWidth()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyMinWidth()).ApplyValue(state, value);
      return;

    case CSSPropertyMixBlendMode:
      if (isInitial)
        ToLonghand(GetCSSPropertyMixBlendMode()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyMixBlendMode()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyMixBlendMode()).ApplyValue(state, value);
      return;

    case CSSPropertyObjectFit:
      if (isInitial)
        ToLonghand(GetCSSPropertyObjectFit()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyObjectFit()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyObjectFit()).ApplyValue(state, value);
      return;

    case CSSPropertyObjectPosition:
      if (isInitial)
        ToLonghand(GetCSSPropertyObjectPosition()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyObjectPosition()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyObjectPosition()).ApplyValue(state, value);
      return;

    case CSSPropertyOffsetAnchor:
      if (isInitial)
        ToLonghand(GetCSSPropertyOffsetAnchor()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyOffsetAnchor()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyOffsetAnchor()).ApplyValue(state, value);
      return;

    case CSSPropertyOffsetDistance:
      if (isInitial)
        ToLonghand(GetCSSPropertyOffsetDistance()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyOffsetDistance()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyOffsetDistance()).ApplyValue(state, value);
      return;

    case CSSPropertyOffsetPath:
      if (isInitial)
        ToLonghand(GetCSSPropertyOffsetPath()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyOffsetPath()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyOffsetPath()).ApplyValue(state, value);
      return;

    case CSSPropertyOffsetPosition:
      if (isInitial)
        ToLonghand(GetCSSPropertyOffsetPosition()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyOffsetPosition()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyOffsetPosition()).ApplyValue(state, value);
      return;

    case CSSPropertyOffsetRotate:
      if (isInitial)
        ToLonghand(GetCSSPropertyOffsetRotate()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyOffsetRotate()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyOffsetRotate()).ApplyValue(state, value);
      return;

    case CSSPropertyOpacity:
      if (isInitial)
        ToLonghand(GetCSSPropertyOpacity()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyOpacity()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyOpacity()).ApplyValue(state, value);
      return;

    case CSSPropertyOrder:
      if (isInitial)
        ToLonghand(GetCSSPropertyOrder()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyOrder()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyOrder()).ApplyValue(state, value);
      return;

    case CSSPropertyOrphans:
      if (isInitial)
        ToLonghand(GetCSSPropertyOrphans()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyOrphans()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyOrphans()).ApplyValue(state, value);
      return;

    case CSSPropertyOutlineColor:
      if (isInitial)
        ToLonghand(GetCSSPropertyOutlineColor()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyOutlineColor()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyOutlineColor()).ApplyValue(state, value);
      return;

    case CSSPropertyOutlineOffset:
      if (isInitial)
        ToLonghand(GetCSSPropertyOutlineOffset()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyOutlineOffset()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyOutlineOffset()).ApplyValue(state, value);
      return;

    case CSSPropertyOutlineStyle:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyOutlineStyle(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyOutlineStyle(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyOutlineStyle(state, value);
      return;

    case CSSPropertyOutlineWidth:
      if (isInitial)
        ToLonghand(GetCSSPropertyOutlineWidth()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyOutlineWidth()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyOutlineWidth()).ApplyValue(state, value);
      return;

    case CSSPropertyOverflowAnchor:
      if (isInitial)
        ToLonghand(GetCSSPropertyOverflowAnchor()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyOverflowAnchor()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyOverflowAnchor()).ApplyValue(state, value);
      return;

    case CSSPropertyOverflowWrap:
      if (isInitial)
        ToLonghand(GetCSSPropertyOverflowWrap()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyOverflowWrap()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyOverflowWrap()).ApplyValue(state, value);
      return;

    case CSSPropertyOverflowX:
      if (isInitial)
        ToLonghand(GetCSSPropertyOverflowX()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyOverflowX()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyOverflowX()).ApplyValue(state, value);
      return;

    case CSSPropertyOverflowY:
      if (isInitial)
        ToLonghand(GetCSSPropertyOverflowY()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyOverflowY()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyOverflowY()).ApplyValue(state, value);
      return;

    case CSSPropertyOverscrollBehaviorX:
      if (isInitial)
        ToLonghand(GetCSSPropertyOverscrollBehaviorX()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyOverscrollBehaviorX()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyOverscrollBehaviorX()).ApplyValue(state, value);
      return;

    case CSSPropertyOverscrollBehaviorY:
      if (isInitial)
        ToLonghand(GetCSSPropertyOverscrollBehaviorY()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyOverscrollBehaviorY()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyOverscrollBehaviorY()).ApplyValue(state, value);
      return;

    case CSSPropertyPaddingBottom:
      if (isInitial)
        ToLonghand(GetCSSPropertyPaddingBottom()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyPaddingBottom()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyPaddingBottom()).ApplyValue(state, value);
      return;

    case CSSPropertyPaddingLeft:
      if (isInitial)
        ToLonghand(GetCSSPropertyPaddingLeft()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyPaddingLeft()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyPaddingLeft()).ApplyValue(state, value);
      return;

    case CSSPropertyPaddingRight:
      if (isInitial)
        ToLonghand(GetCSSPropertyPaddingRight()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyPaddingRight()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyPaddingRight()).ApplyValue(state, value);
      return;

    case CSSPropertyPaddingTop:
      if (isInitial)
        ToLonghand(GetCSSPropertyPaddingTop()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyPaddingTop()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyPaddingTop()).ApplyValue(state, value);
      return;

    case CSSPropertyPaintOrder:
      if (isInitial)
        ToLonghand(GetCSSPropertyPaintOrder()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyPaintOrder()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyPaintOrder()).ApplyValue(state, value);
      return;

    case CSSPropertyPerspective:
      if (isInitial)
        ToLonghand(GetCSSPropertyPerspective()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyPerspective()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyPerspective()).ApplyValue(state, value);
      return;

    case CSSPropertyPerspectiveOrigin:
      if (isInitial)
        ToLonghand(GetCSSPropertyPerspectiveOrigin()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyPerspectiveOrigin()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyPerspectiveOrigin()).ApplyValue(state, value);
      return;

    case CSSPropertyPointerEvents:
      if (isInitial)
        ToLonghand(GetCSSPropertyPointerEvents()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyPointerEvents()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyPointerEvents()).ApplyValue(state, value);
      return;

    case CSSPropertyPosition:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyPosition(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyPosition(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyPosition(state, value);
      return;

    case CSSPropertyQuotes:
      if (isInitial)
        ToLonghand(GetCSSPropertyQuotes()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyQuotes()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyQuotes()).ApplyValue(state, value);
      return;

    case CSSPropertyR:
      if (isInitial)
        ToLonghand(GetCSSPropertyR()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyR()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyR()).ApplyValue(state, value);
      return;

    case CSSPropertyResize:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyResize(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyResize(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyResize(state, value);
      return;

    case CSSPropertyRight:
      if (isInitial)
        ToLonghand(GetCSSPropertyRight()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyRight()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyRight()).ApplyValue(state, value);
      return;

    case CSSPropertyRotate:
      if (isInitial)
        ToLonghand(GetCSSPropertyRotate()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyRotate()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyRotate()).ApplyValue(state, value);
      return;

    case CSSPropertyRowGap:
      if (isInitial)
        ToLonghand(GetCSSPropertyRowGap()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyRowGap()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyRowGap()).ApplyValue(state, value);
      return;

    case CSSPropertyRx:
      if (isInitial)
        ToLonghand(GetCSSPropertyRx()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyRx()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyRx()).ApplyValue(state, value);
      return;

    case CSSPropertyRy:
      if (isInitial)
        ToLonghand(GetCSSPropertyRy()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyRy()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyRy()).ApplyValue(state, value);
      return;

    case CSSPropertyScale:
      if (isInitial)
        ToLonghand(GetCSSPropertyScale()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyScale()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyScale()).ApplyValue(state, value);
      return;

    case CSSPropertyScrollBehavior:
      if (isInitial)
        ToLonghand(GetCSSPropertyScrollBehavior()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyScrollBehavior()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyScrollBehavior()).ApplyValue(state, value);
      return;

    case CSSPropertyScrollCustomization:
      if (isInitial)
        ToLonghand(GetCSSPropertyScrollCustomization()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyScrollCustomization()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyScrollCustomization()).ApplyValue(state, value);
      return;

    case CSSPropertyScrollMarginBottom:
      if (isInitial)
        ToLonghand(GetCSSPropertyScrollMarginBottom()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyScrollMarginBottom()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyScrollMarginBottom()).ApplyValue(state, value);
      return;

    case CSSPropertyScrollMarginLeft:
      if (isInitial)
        ToLonghand(GetCSSPropertyScrollMarginLeft()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyScrollMarginLeft()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyScrollMarginLeft()).ApplyValue(state, value);
      return;

    case CSSPropertyScrollMarginRight:
      if (isInitial)
        ToLonghand(GetCSSPropertyScrollMarginRight()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyScrollMarginRight()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyScrollMarginRight()).ApplyValue(state, value);
      return;

    case CSSPropertyScrollMarginTop:
      if (isInitial)
        ToLonghand(GetCSSPropertyScrollMarginTop()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyScrollMarginTop()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyScrollMarginTop()).ApplyValue(state, value);
      return;

    case CSSPropertyScrollPaddingBottom:
      if (isInitial)
        ToLonghand(GetCSSPropertyScrollPaddingBottom()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyScrollPaddingBottom()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyScrollPaddingBottom()).ApplyValue(state, value);
      return;

    case CSSPropertyScrollPaddingLeft:
      if (isInitial)
        ToLonghand(GetCSSPropertyScrollPaddingLeft()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyScrollPaddingLeft()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyScrollPaddingLeft()).ApplyValue(state, value);
      return;

    case CSSPropertyScrollPaddingRight:
      if (isInitial)
        ToLonghand(GetCSSPropertyScrollPaddingRight()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyScrollPaddingRight()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyScrollPaddingRight()).ApplyValue(state, value);
      return;

    case CSSPropertyScrollPaddingTop:
      if (isInitial)
        ToLonghand(GetCSSPropertyScrollPaddingTop()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyScrollPaddingTop()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyScrollPaddingTop()).ApplyValue(state, value);
      return;

    case CSSPropertyScrollSnapAlign:
      if (isInitial)
        ToLonghand(GetCSSPropertyScrollSnapAlign()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyScrollSnapAlign()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyScrollSnapAlign()).ApplyValue(state, value);
      return;

    case CSSPropertyScrollSnapStop:
      if (isInitial)
        ToLonghand(GetCSSPropertyScrollSnapStop()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyScrollSnapStop()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyScrollSnapStop()).ApplyValue(state, value);
      return;

    case CSSPropertyScrollSnapType:
      if (isInitial)
        ToLonghand(GetCSSPropertyScrollSnapType()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyScrollSnapType()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyScrollSnapType()).ApplyValue(state, value);
      return;

    case CSSPropertyShapeImageThreshold:
      if (isInitial)
        ToLonghand(GetCSSPropertyShapeImageThreshold()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyShapeImageThreshold()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyShapeImageThreshold()).ApplyValue(state, value);
      return;

    case CSSPropertyShapeMargin:
      if (isInitial)
        ToLonghand(GetCSSPropertyShapeMargin()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyShapeMargin()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyShapeMargin()).ApplyValue(state, value);
      return;

    case CSSPropertyShapeOutside:
      if (isInitial)
        ToLonghand(GetCSSPropertyShapeOutside()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyShapeOutside()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyShapeOutside()).ApplyValue(state, value);
      return;

    case CSSPropertyShapeRendering:
      if (isInitial)
        ToLonghand(GetCSSPropertyShapeRendering()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyShapeRendering()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyShapeRendering()).ApplyValue(state, value);
      return;

    case CSSPropertySize:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertySize(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertySize(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertySize(state, value);
      return;

    case CSSPropertySpeak:
      if (isInitial)
        ToLonghand(GetCSSPropertySpeak()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertySpeak()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertySpeak()).ApplyValue(state, value);
      return;

    case CSSPropertyStopColor:
      if (isInitial)
        ToLonghand(GetCSSPropertyStopColor()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyStopColor()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyStopColor()).ApplyValue(state, value);
      return;

    case CSSPropertyStopOpacity:
      if (isInitial)
        ToLonghand(GetCSSPropertyStopOpacity()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyStopOpacity()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyStopOpacity()).ApplyValue(state, value);
      return;

    case CSSPropertyStroke:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyStroke(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyStroke(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyStroke(state, value);
      return;

    case CSSPropertyStrokeDasharray:
      if (isInitial)
        ToLonghand(GetCSSPropertyStrokeDasharray()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyStrokeDasharray()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyStrokeDasharray()).ApplyValue(state, value);
      return;

    case CSSPropertyStrokeDashoffset:
      if (isInitial)
        ToLonghand(GetCSSPropertyStrokeDashoffset()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyStrokeDashoffset()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyStrokeDashoffset()).ApplyValue(state, value);
      return;

    case CSSPropertyStrokeLinecap:
      if (isInitial)
        ToLonghand(GetCSSPropertyStrokeLinecap()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyStrokeLinecap()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyStrokeLinecap()).ApplyValue(state, value);
      return;

    case CSSPropertyStrokeLinejoin:
      if (isInitial)
        ToLonghand(GetCSSPropertyStrokeLinejoin()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyStrokeLinejoin()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyStrokeLinejoin()).ApplyValue(state, value);
      return;

    case CSSPropertyStrokeMiterlimit:
      if (isInitial)
        ToLonghand(GetCSSPropertyStrokeMiterlimit()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyStrokeMiterlimit()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyStrokeMiterlimit()).ApplyValue(state, value);
      return;

    case CSSPropertyStrokeOpacity:
      if (isInitial)
        ToLonghand(GetCSSPropertyStrokeOpacity()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyStrokeOpacity()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyStrokeOpacity()).ApplyValue(state, value);
      return;

    case CSSPropertyStrokeWidth:
      if (isInitial)
        ToLonghand(GetCSSPropertyStrokeWidth()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyStrokeWidth()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyStrokeWidth()).ApplyValue(state, value);
      return;

    case CSSPropertyTabSize:
      if (isInitial)
        ToLonghand(GetCSSPropertyTabSize()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyTabSize()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyTabSize()).ApplyValue(state, value);
      return;

    case CSSPropertyTableLayout:
      if (isInitial)
        ToLonghand(GetCSSPropertyTableLayout()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyTableLayout()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyTableLayout()).ApplyValue(state, value);
      return;

    case CSSPropertyTextAlign:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyTextAlign(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyTextAlign(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyTextAlign(state, value);
      return;

    case CSSPropertyTextAlignLast:
      if (isInitial)
        ToLonghand(GetCSSPropertyTextAlignLast()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyTextAlignLast()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyTextAlignLast()).ApplyValue(state, value);
      return;

    case CSSPropertyTextAnchor:
      if (isInitial)
        ToLonghand(GetCSSPropertyTextAnchor()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyTextAnchor()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyTextAnchor()).ApplyValue(state, value);
      return;

    case CSSPropertyTextCombineUpright:
      if (isInitial)
        ToLonghand(GetCSSPropertyTextCombineUpright()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyTextCombineUpright()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyTextCombineUpright()).ApplyValue(state, value);
      return;

    case CSSPropertyTextDecorationColor:
      if (isInitial)
        ToLonghand(GetCSSPropertyTextDecorationColor()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyTextDecorationColor()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyTextDecorationColor()).ApplyValue(state, value);
      return;

    case CSSPropertyTextDecorationLine:
      if (isInitial)
        ToLonghand(GetCSSPropertyTextDecorationLine()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyTextDecorationLine()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyTextDecorationLine()).ApplyValue(state, value);
      return;

    case CSSPropertyTextDecorationSkipInk:
      if (isInitial)
        ToLonghand(GetCSSPropertyTextDecorationSkipInk()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyTextDecorationSkipInk()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyTextDecorationSkipInk()).ApplyValue(state, value);
      return;

    case CSSPropertyTextDecorationStyle:
      if (isInitial)
        ToLonghand(GetCSSPropertyTextDecorationStyle()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyTextDecorationStyle()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyTextDecorationStyle()).ApplyValue(state, value);
      return;

    case CSSPropertyTextIndent:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyTextIndent(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyTextIndent(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyTextIndent(state, value);
      return;

    case CSSPropertyTextJustify:
      if (isInitial)
        ToLonghand(GetCSSPropertyTextJustify()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyTextJustify()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyTextJustify()).ApplyValue(state, value);
      return;

    case CSSPropertyTextOverflow:
      if (isInitial)
        ToLonghand(GetCSSPropertyTextOverflow()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyTextOverflow()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyTextOverflow()).ApplyValue(state, value);
      return;

    case CSSPropertyTextShadow:
      if (isInitial)
        ToLonghand(GetCSSPropertyTextShadow()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyTextShadow()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyTextShadow()).ApplyValue(state, value);
      return;

    case CSSPropertyTextSizeAdjust:
      if (isInitial)
        ToLonghand(GetCSSPropertyTextSizeAdjust()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyTextSizeAdjust()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyTextSizeAdjust()).ApplyValue(state, value);
      return;

    case CSSPropertyTextTransform:
      if (isInitial)
        ToLonghand(GetCSSPropertyTextTransform()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyTextTransform()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyTextTransform()).ApplyValue(state, value);
      return;

    case CSSPropertyTextUnderlinePosition:
      if (isInitial)
        ToLonghand(GetCSSPropertyTextUnderlinePosition()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyTextUnderlinePosition()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyTextUnderlinePosition()).ApplyValue(state, value);
      return;

    case CSSPropertyTop:
      if (isInitial)
        ToLonghand(GetCSSPropertyTop()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyTop()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyTop()).ApplyValue(state, value);
      return;

    case CSSPropertyTouchAction:
      if (isInitial)
        ToLonghand(GetCSSPropertyTouchAction()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyTouchAction()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyTouchAction()).ApplyValue(state, value);
      return;

    case CSSPropertyTransform:
      if (isInitial)
        ToLonghand(GetCSSPropertyTransform()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyTransform()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyTransform()).ApplyValue(state, value);
      return;

    case CSSPropertyTransformBox:
      if (isInitial)
        ToLonghand(GetCSSPropertyTransformBox()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyTransformBox()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyTransformBox()).ApplyValue(state, value);
      return;

    case CSSPropertyTransformOrigin:
      if (isInitial)
        ToLonghand(GetCSSPropertyTransformOrigin()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyTransformOrigin()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyTransformOrigin()).ApplyValue(state, value);
      return;

    case CSSPropertyTransformStyle:
      if (isInitial)
        ToLonghand(GetCSSPropertyTransformStyle()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyTransformStyle()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyTransformStyle()).ApplyValue(state, value);
      return;

    case CSSPropertyTranslate:
      if (isInitial)
        ToLonghand(GetCSSPropertyTranslate()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyTranslate()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyTranslate()).ApplyValue(state, value);
      return;

    case CSSPropertyUnicodeBidi:
      if (isInitial)
        ToLonghand(GetCSSPropertyUnicodeBidi()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyUnicodeBidi()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyUnicodeBidi()).ApplyValue(state, value);
      return;

    case CSSPropertyUserSelect:
      if (isInitial)
        ToLonghand(GetCSSPropertyUserSelect()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyUserSelect()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyUserSelect()).ApplyValue(state, value);
      return;

    case CSSPropertyVectorEffect:
      if (isInitial)
        ToLonghand(GetCSSPropertyVectorEffect()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyVectorEffect()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyVectorEffect()).ApplyValue(state, value);
      return;

    case CSSPropertyVerticalAlign:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyVerticalAlign(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyVerticalAlign(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyVerticalAlign(state, value);
      return;

    case CSSPropertyVisibility:
      if (isInitial)
        ToLonghand(GetCSSPropertyVisibility()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyVisibility()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyVisibility()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitAppRegion:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyWebkitAppRegion(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyWebkitAppRegion(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyWebkitAppRegion(state, value);
      return;

    case CSSPropertyWebkitAppearance:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitAppearance()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitAppearance()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitAppearance()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitBorderHorizontalSpacing:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitBorderHorizontalSpacing()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitBorderHorizontalSpacing()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitBorderHorizontalSpacing()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitBorderImage:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyWebkitBorderImage(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyWebkitBorderImage(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyWebkitBorderImage(state, value);
      return;

    case CSSPropertyWebkitBorderVerticalSpacing:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitBorderVerticalSpacing()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitBorderVerticalSpacing()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitBorderVerticalSpacing()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitBoxAlign:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitBoxAlign()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitBoxAlign()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitBoxAlign()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitBoxDecorationBreak:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitBoxDecorationBreak()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitBoxDecorationBreak()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitBoxDecorationBreak()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitBoxDirection:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitBoxDirection()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitBoxDirection()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitBoxDirection()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitBoxFlex:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitBoxFlex()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitBoxFlex()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitBoxFlex()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitBoxOrdinalGroup:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitBoxOrdinalGroup()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitBoxOrdinalGroup()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitBoxOrdinalGroup()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitBoxOrient:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitBoxOrient()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitBoxOrient()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitBoxOrient()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitBoxPack:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitBoxPack()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitBoxPack()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitBoxPack()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitBoxReflect:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitBoxReflect()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitBoxReflect()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitBoxReflect()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitHighlight:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitHighlight()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitHighlight()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitHighlight()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitHyphenateCharacter:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitHyphenateCharacter()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitHyphenateCharacter()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitHyphenateCharacter()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitLineBreak:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitLineBreak()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitLineBreak()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitLineBreak()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitLineClamp:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitLineClamp()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitLineClamp()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitLineClamp()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitMarginAfterCollapse:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitMarginAfterCollapse()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitMarginAfterCollapse()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitMarginAfterCollapse()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitMarginBeforeCollapse:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitMarginBeforeCollapse()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitMarginBeforeCollapse()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitMarginBeforeCollapse()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitMarginBottomCollapse:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitMarginBottomCollapse()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitMarginBottomCollapse()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitMarginBottomCollapse()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitMarginTopCollapse:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitMarginTopCollapse()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitMarginTopCollapse()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitMarginTopCollapse()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitMaskBoxImageOutset:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitMaskBoxImageOutset()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitMaskBoxImageOutset()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitMaskBoxImageOutset()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitMaskBoxImageRepeat:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitMaskBoxImageRepeat()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitMaskBoxImageRepeat()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitMaskBoxImageRepeat()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitMaskBoxImageSlice:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitMaskBoxImageSlice()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitMaskBoxImageSlice()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitMaskBoxImageSlice()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitMaskBoxImageSource:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyWebkitMaskBoxImageSource(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyWebkitMaskBoxImageSource(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyWebkitMaskBoxImageSource(state, value);
      return;

    case CSSPropertyWebkitMaskBoxImageWidth:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitMaskBoxImageWidth()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitMaskBoxImageWidth()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitMaskBoxImageWidth()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitMaskClip:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitMaskClip()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitMaskClip()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitMaskClip()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitMaskComposite:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitMaskComposite()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitMaskComposite()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitMaskComposite()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitMaskImage:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitMaskImage()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitMaskImage()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitMaskImage()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitMaskOrigin:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitMaskOrigin()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitMaskOrigin()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitMaskOrigin()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitMaskPositionX:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitMaskPositionX()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitMaskPositionX()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitMaskPositionX()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitMaskPositionY:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitMaskPositionY()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitMaskPositionY()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitMaskPositionY()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitMaskRepeatX:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitMaskRepeatX()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitMaskRepeatX()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitMaskRepeatX()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitMaskRepeatY:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitMaskRepeatY()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitMaskRepeatY()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitMaskRepeatY()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitMaskSize:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitMaskSize()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitMaskSize()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitMaskSize()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitPerspectiveOriginX:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitPerspectiveOriginX()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitPerspectiveOriginX()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitPerspectiveOriginX()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitPerspectiveOriginY:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitPerspectiveOriginY()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitPerspectiveOriginY()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitPerspectiveOriginY()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitPrintColorAdjust:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitPrintColorAdjust()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitPrintColorAdjust()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitPrintColorAdjust()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitRtlOrdering:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitRtlOrdering()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitRtlOrdering()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitRtlOrdering()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitRubyPosition:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitRubyPosition()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitRubyPosition()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitRubyPosition()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitTapHighlightColor:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitTapHighlightColor()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitTapHighlightColor()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitTapHighlightColor()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitTextCombine:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitTextCombine()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitTextCombine()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitTextCombine()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitTextEmphasisColor:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitTextEmphasisColor()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitTextEmphasisColor()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitTextEmphasisColor()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitTextEmphasisPosition:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitTextEmphasisPosition()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitTextEmphasisPosition()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitTextEmphasisPosition()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitTextEmphasisStyle:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyWebkitTextEmphasisStyle(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyWebkitTextEmphasisStyle(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyWebkitTextEmphasisStyle(state, value);
      return;

    case CSSPropertyWebkitTextFillColor:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitTextFillColor()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitTextFillColor()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitTextFillColor()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitTextSecurity:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitTextSecurity()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitTextSecurity()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitTextSecurity()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitTextStrokeColor:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitTextStrokeColor()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitTextStrokeColor()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitTextStrokeColor()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitTextStrokeWidth:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitTextStrokeWidth()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitTextStrokeWidth()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitTextStrokeWidth()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitTransformOriginX:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitTransformOriginX()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitTransformOriginX()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitTransformOriginX()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitTransformOriginY:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitTransformOriginY()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitTransformOriginY()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitTransformOriginY()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitTransformOriginZ:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitTransformOriginZ()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitTransformOriginZ()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitTransformOriginZ()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitUserDrag:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitUserDrag()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitUserDrag()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitUserDrag()).ApplyValue(state, value);
      return;

    case CSSPropertyWebkitUserModify:
      if (isInitial)
        ToLonghand(GetCSSPropertyWebkitUserModify()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWebkitUserModify()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWebkitUserModify()).ApplyValue(state, value);
      return;

    case CSSPropertyWhiteSpace:
      if (isInitial)
        ToLonghand(GetCSSPropertyWhiteSpace()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWhiteSpace()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWhiteSpace()).ApplyValue(state, value);
      return;

    case CSSPropertyWidows:
      if (isInitial)
        ToLonghand(GetCSSPropertyWidows()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWidows()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWidows()).ApplyValue(state, value);
      return;

    case CSSPropertyWidth:
      if (isInitial)
        ToLonghand(GetCSSPropertyWidth()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWidth()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWidth()).ApplyValue(state, value);
      return;

    case CSSPropertyWillChange:
      if (isInitial)
        StyleBuilderFunctions::applyInitialCSSPropertyWillChange(state);
      else if (isInherit)
        StyleBuilderFunctions::applyInheritCSSPropertyWillChange(state);
      else
        StyleBuilderFunctions::applyValueCSSPropertyWillChange(state, value);
      return;

    case CSSPropertyWordBreak:
      if (isInitial)
        ToLonghand(GetCSSPropertyWordBreak()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWordBreak()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWordBreak()).ApplyValue(state, value);
      return;

    case CSSPropertyWordSpacing:
      if (isInitial)
        ToLonghand(GetCSSPropertyWordSpacing()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWordSpacing()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWordSpacing()).ApplyValue(state, value);
      return;

    case CSSPropertyWordWrap:
      if (isInitial)
        ToLonghand(GetCSSPropertyWordWrap()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyWordWrap()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyWordWrap()).ApplyValue(state, value);
      return;

    case CSSPropertyX:
      if (isInitial)
        ToLonghand(GetCSSPropertyX()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyX()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyX()).ApplyValue(state, value);
      return;

    case CSSPropertyY:
      if (isInitial)
        ToLonghand(GetCSSPropertyY()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyY()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyY()).ApplyValue(state, value);
      return;

    case CSSPropertyZIndex:
      if (isInitial)
        ToLonghand(GetCSSPropertyZIndex()).ApplyInitial(state);
      else if (isInherit)
        ToLonghand(GetCSSPropertyZIndex()).ApplyInherit(state);
      else
        ToLonghand(GetCSSPropertyZIndex()).ApplyValue(state, value);
      return;

    case CSSPropertyVariable:
      DCHECK(!isInitial);
      DCHECK(!isInherit);
      StyleBuilderFunctions::applyValueCSSPropertyVariable(state, value);
      return;
    case CSSPropertyBlockSize:
    case CSSPropertyInlineSize:
    case CSSPropertyMaxBlockSize:
    case CSSPropertyMaxInlineSize:
    case CSSPropertyMinBlockSize:
    case CSSPropertyMinInlineSize:
    case CSSPropertyScrollMarginBlockEnd:
    case CSSPropertyScrollMarginBlockStart:
    case CSSPropertyScrollMarginInlineEnd:
    case CSSPropertyScrollMarginInlineStart:
    case CSSPropertyScrollPaddingBlockEnd:
    case CSSPropertyScrollPaddingBlockStart:
    case CSSPropertyScrollPaddingInlineEnd:
    case CSSPropertyScrollPaddingInlineStart:
    case CSSPropertyWebkitBorderAfterColor:
    case CSSPropertyWebkitBorderAfterStyle:
    case CSSPropertyWebkitBorderAfterWidth:
    case CSSPropertyWebkitBorderBeforeColor:
    case CSSPropertyWebkitBorderBeforeStyle:
    case CSSPropertyWebkitBorderBeforeWidth:
    case CSSPropertyWebkitBorderEndColor:
    case CSSPropertyWebkitBorderEndStyle:
    case CSSPropertyWebkitBorderEndWidth:
    case CSSPropertyWebkitBorderStartColor:
    case CSSPropertyWebkitBorderStartStyle:
    case CSSPropertyWebkitBorderStartWidth:
    case CSSPropertyWebkitLogicalHeight:
    case CSSPropertyWebkitLogicalWidth:
    case CSSPropertyWebkitMarginAfter:
    case CSSPropertyWebkitMarginBefore:
    case CSSPropertyWebkitMarginEnd:
    case CSSPropertyWebkitMarginStart:
    case CSSPropertyWebkitMaxLogicalHeight:
    case CSSPropertyWebkitMaxLogicalWidth:
    case CSSPropertyWebkitMinLogicalHeight:
    case CSSPropertyWebkitMinLogicalWidth:
    case CSSPropertyWebkitPaddingAfter:
    case CSSPropertyWebkitPaddingBefore:
    case CSSPropertyWebkitPaddingEnd:
    case CSSPropertyWebkitPaddingStart:
    case CSSPropertyWebkitBorderAfter:
    case CSSPropertyWebkitBorderBefore:
    case CSSPropertyWebkitBorderEnd:
    case CSSPropertyWebkitBorderStart:
    {
      const CSSProperty& resolved_property =
              property.ResolveDirectionAwareProperty(state.Style()->Direction(),
                                             state.Style()->GetWritingMode());
      DCHECK(!resolved_property.IDEquals(property.PropertyID()));
      ApplyProperty(resolved_property, state, value);
      return;
    }
    case CSSPropertyAll:
    case CSSPropertyPage:
    case CSSPropertyWebkitFontSizeDelta:
    case CSSPropertyWebkitTextDecorationsInEffect:
      return;
    default:
      NOTREACHED();
  }
}

} // namespace blink
