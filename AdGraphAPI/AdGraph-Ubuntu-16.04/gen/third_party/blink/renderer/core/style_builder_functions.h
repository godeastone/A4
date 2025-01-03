// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/style_builder_functions.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/ComputedStyleFieldAliases.json5
//   ../../third_party/blink/renderer/core/css/CSSProperties.json5


#ifndef BLINK_CORE_STYLE_BUILDER_FUNCTIONS_H_
#define BLINK_CORE_STYLE_BUILDER_FUNCTIONS_H_

#include "third_party/blink/renderer/core/css/resolver/style_builder_converter.h"

namespace blink {

class CSSValue;
class StyleResolverState;

// TODO(crbug.com/751354): Delete this class once all StyleBuilderFunctions
// have been moved to property classes.
class StyleBuilderFunctions {
 public:

  static void applyInitialCSSPropertyColor(StyleResolverState&);
  static void applyInheritCSSPropertyColor(StyleResolverState&);
  static void applyValueCSSPropertyColor(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyDirection(StyleResolverState&);
  static void applyInheritCSSPropertyDirection(StyleResolverState&);
  static void applyValueCSSPropertyDirection(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyTextOrientation(StyleResolverState&);
  static void applyInheritCSSPropertyTextOrientation(StyleResolverState&);
  static void applyValueCSSPropertyTextOrientation(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyWebkitLocale(StyleResolverState&);
  static void applyInheritCSSPropertyWebkitLocale(StyleResolverState&);
  static void applyValueCSSPropertyWebkitLocale(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyWebkitTextOrientation(StyleResolverState&);
  static void applyInheritCSSPropertyWebkitTextOrientation(StyleResolverState&);
  static void applyValueCSSPropertyWebkitTextOrientation(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyWebkitWritingMode(StyleResolverState&);
  static void applyInheritCSSPropertyWebkitWritingMode(StyleResolverState&);
  static void applyValueCSSPropertyWebkitWritingMode(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyWritingMode(StyleResolverState&);
  static void applyInheritCSSPropertyWritingMode(StyleResolverState&);
  static void applyValueCSSPropertyWritingMode(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyZoom(StyleResolverState&);
  static void applyInheritCSSPropertyZoom(StyleResolverState&);
  static void applyValueCSSPropertyZoom(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyBaselineShift(StyleResolverState&);
  static void applyInheritCSSPropertyBaselineShift(StyleResolverState&);
  static void applyValueCSSPropertyBaselineShift(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyBorderImageSource(StyleResolverState&);
  static void applyInheritCSSPropertyBorderImageSource(StyleResolverState&);
  static void applyValueCSSPropertyBorderImageSource(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyCaretColor(StyleResolverState&);
  static void applyInheritCSSPropertyCaretColor(StyleResolverState&);
  static void applyValueCSSPropertyCaretColor(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyContent(StyleResolverState&);
  static void applyInheritCSSPropertyContent(StyleResolverState&);
  static void applyValueCSSPropertyContent(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyCursor(StyleResolverState&);
  static void applyInheritCSSPropertyCursor(StyleResolverState&);
  static void applyValueCSSPropertyCursor(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyDisplay(StyleResolverState&);
  static void applyInheritCSSPropertyDisplay(StyleResolverState&);
  static void applyValueCSSPropertyDisplay(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyFill(StyleResolverState&);
  static void applyInheritCSSPropertyFill(StyleResolverState&);
  static void applyValueCSSPropertyFill(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyGridTemplateAreas(StyleResolverState&);
  static void applyInheritCSSPropertyGridTemplateAreas(StyleResolverState&);
  static void applyValueCSSPropertyGridTemplateAreas(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyGridTemplateColumns(StyleResolverState&);
  static void applyInheritCSSPropertyGridTemplateColumns(StyleResolverState&);
  static void applyValueCSSPropertyGridTemplateColumns(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyGridTemplateRows(StyleResolverState&);
  static void applyInheritCSSPropertyGridTemplateRows(StyleResolverState&);
  static void applyValueCSSPropertyGridTemplateRows(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyListStyleImage(StyleResolverState&);
  static void applyInheritCSSPropertyListStyleImage(StyleResolverState&);
  static void applyValueCSSPropertyListStyleImage(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyOutlineStyle(StyleResolverState&);
  static void applyInheritCSSPropertyOutlineStyle(StyleResolverState&);
  static void applyValueCSSPropertyOutlineStyle(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyPosition(StyleResolverState&);
  static void applyInheritCSSPropertyPosition(StyleResolverState&);
  static void applyValueCSSPropertyPosition(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyResize(StyleResolverState&);
  static void applyInheritCSSPropertyResize(StyleResolverState&);
  static void applyValueCSSPropertyResize(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertySize(StyleResolverState&);
  static void applyInheritCSSPropertySize(StyleResolverState&);
  static void applyValueCSSPropertySize(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyStroke(StyleResolverState&);
  static void applyInheritCSSPropertyStroke(StyleResolverState&);
  static void applyValueCSSPropertyStroke(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyTextAlign(StyleResolverState&);
  static void applyInheritCSSPropertyTextAlign(StyleResolverState&);
  static void applyValueCSSPropertyTextAlign(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyTextIndent(StyleResolverState&);
  static void applyInheritCSSPropertyTextIndent(StyleResolverState&);
  static void applyValueCSSPropertyTextIndent(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyVerticalAlign(StyleResolverState&);
  static void applyInheritCSSPropertyVerticalAlign(StyleResolverState&);
  static void applyValueCSSPropertyVerticalAlign(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyWebkitAppRegion(StyleResolverState&);
  static void applyInheritCSSPropertyWebkitAppRegion(StyleResolverState&);
  static void applyValueCSSPropertyWebkitAppRegion(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyWebkitBorderImage(StyleResolverState&);
  static void applyInheritCSSPropertyWebkitBorderImage(StyleResolverState&);
  static void applyValueCSSPropertyWebkitBorderImage(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyWebkitMaskBoxImageSource(StyleResolverState&);
  static void applyInheritCSSPropertyWebkitMaskBoxImageSource(StyleResolverState&);
  static void applyValueCSSPropertyWebkitMaskBoxImageSource(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyWebkitTextEmphasisStyle(StyleResolverState&);
  static void applyInheritCSSPropertyWebkitTextEmphasisStyle(StyleResolverState&);
  static void applyValueCSSPropertyWebkitTextEmphasisStyle(StyleResolverState&, const CSSValue&);

  static void applyInitialCSSPropertyWillChange(StyleResolverState&);
  static void applyInheritCSSPropertyWillChange(StyleResolverState&);
  static void applyValueCSSPropertyWillChange(StyleResolverState&, const CSSValue&);


  static void applyValueCSSPropertyVariable(StyleResolverState&,
                                            const CSSValue&);
};

}  // namespace blink

#endif  // BLINK_CORE_STYLE_BUILDER_FUNCTIONS_H_
