

// Generated from template:
//   templates/style_builder_functions.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/ComputedStyleFieldAliases.json5
//   ../../third_party/blink/renderer/core/css/CSSProperties.json5


#include "third_party/blink/renderer/core/style_builder_functions.h"

#include "third_party/blink/renderer/core/animation/css/css_animation_data.h"
#include "third_party/blink/renderer/core/css/basic_shape_functions.h"
#include "third_party/blink/renderer/core/css/css_content_distribution_value.h"
#include "third_party/blink/renderer/core/css/css_custom_ident_value.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/css_uri_value.h"
#include "third_party/blink/renderer/core/css/css_value_pair.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/css_value_keywords.h"
#include "third_party/blink/renderer/core/style/computed_style.h"


namespace blink {

void StyleBuilderFunctions::applyInitialCSSPropertyDirection(StyleResolverState& state) {
  state.Style()->SetDirection(ComputedStyleInitialValues::InitialDirection());
}

void StyleBuilderFunctions::applyInheritCSSPropertyDirection(StyleResolverState& state) {
  state.Style()->SetDirection(state.ParentStyle()->Direction());
}

void StyleBuilderFunctions::applyInitialCSSPropertyTextOrientation(StyleResolverState& state) {
  state.Style()->SetTextOrientation(ComputedStyleInitialValues::InitialTextOrientation());
}

void StyleBuilderFunctions::applyInheritCSSPropertyTextOrientation(StyleResolverState& state) {
  state.Style()->SetTextOrientation(state.ParentStyle()->GetTextOrientation());
}

void StyleBuilderFunctions::applyInitialCSSPropertyWebkitLocale(StyleResolverState& state) {
  state.GetFontBuilder().SetLocale(FontBuilder::InitialLocale());
}

void StyleBuilderFunctions::applyInheritCSSPropertyWebkitLocale(StyleResolverState& state) {
  state.GetFontBuilder().SetLocale(state.ParentFontDescription().Locale());
}

void StyleBuilderFunctions::applyInitialCSSPropertyWebkitTextOrientation(StyleResolverState& state) {
  state.Style()->SetTextOrientation(ComputedStyleInitialValues::InitialTextOrientation());
}

void StyleBuilderFunctions::applyInheritCSSPropertyWebkitTextOrientation(StyleResolverState& state) {
  state.Style()->SetTextOrientation(state.ParentStyle()->GetTextOrientation());
}

void StyleBuilderFunctions::applyInitialCSSPropertyWebkitWritingMode(StyleResolverState& state) {
  state.Style()->SetWritingMode(ComputedStyleInitialValues::InitialWritingMode());
}

void StyleBuilderFunctions::applyInheritCSSPropertyWebkitWritingMode(StyleResolverState& state) {
  state.Style()->SetWritingMode(state.ParentStyle()->GetWritingMode());
}

void StyleBuilderFunctions::applyInitialCSSPropertyWritingMode(StyleResolverState& state) {
  state.Style()->SetWritingMode(ComputedStyleInitialValues::InitialWritingMode());
}

void StyleBuilderFunctions::applyInheritCSSPropertyWritingMode(StyleResolverState& state) {
  state.Style()->SetWritingMode(state.ParentStyle()->GetWritingMode());
}

void StyleBuilderFunctions::applyInitialCSSPropertyBaselineShift(StyleResolverState& state) {
  state.Style()->AccessSVGStyle().SetBaselineShift(SVGComputedStyle::InitialBaselineShift());
}

void StyleBuilderFunctions::applyInitialCSSPropertyBorderImageSource(StyleResolverState& state) {
  state.Style()->SetBorderImageSource(ComputedStyleInitialValues::InitialBorderImageSource());
}

void StyleBuilderFunctions::applyInheritCSSPropertyBorderImageSource(StyleResolverState& state) {
  state.Style()->SetBorderImageSource(state.ParentStyle()->BorderImageSource());
}

void StyleBuilderFunctions::applyInitialCSSPropertyListStyleImage(StyleResolverState& state) {
  state.Style()->SetListStyleImage(ComputedStyleInitialValues::InitialListStyleImage());
}

void StyleBuilderFunctions::applyInheritCSSPropertyListStyleImage(StyleResolverState& state) {
  state.Style()->SetListStyleImage(state.ParentStyle()->ListStyleImage());
}

void StyleBuilderFunctions::applyInitialCSSPropertyPosition(StyleResolverState& state) {
  state.Style()->SetPosition(ComputedStyleInitialValues::InitialPosition());
}

void StyleBuilderFunctions::applyValueCSSPropertyPosition(StyleResolverState& state, const CSSValue& value) {
  state.Style()->SetPosition(ToCSSIdentifierValue(value).ConvertTo<blink::EPosition>());
}

void StyleBuilderFunctions::applyInitialCSSPropertyResize(StyleResolverState& state) {
  state.Style()->SetResize(ComputedStyleInitialValues::InitialResize());
}

void StyleBuilderFunctions::applyInheritCSSPropertyResize(StyleResolverState& state) {
  state.Style()->SetResize(state.ParentStyle()->Resize());
}

void StyleBuilderFunctions::applyInitialCSSPropertyTextAlign(StyleResolverState& state) {
  state.Style()->SetTextAlign(ComputedStyleInitialValues::InitialTextAlign());
}

void StyleBuilderFunctions::applyInheritCSSPropertyTextAlign(StyleResolverState& state) {
  state.Style()->SetTextAlign(state.ParentStyle()->GetTextAlign());
}

void StyleBuilderFunctions::applyInitialCSSPropertyVerticalAlign(StyleResolverState& state) {
  state.Style()->SetVerticalAlign(ComputedStyleInitialValues::InitialVerticalAlign());
}

void StyleBuilderFunctions::applyInitialCSSPropertyWebkitBorderImage(StyleResolverState& state) {
  state.Style()->SetBorderImage(ComputedStyleInitialValues::InitialBorderImage());
}

void StyleBuilderFunctions::applyInheritCSSPropertyWebkitBorderImage(StyleResolverState& state) {
  state.Style()->SetBorderImage(state.ParentStyle()->BorderImage());
}

void StyleBuilderFunctions::applyInitialCSSPropertyWebkitMaskBoxImageSource(StyleResolverState& state) {
  state.Style()->SetMaskBoxImageSource(ComputedStyleInitialValues::InitialMaskBoxImageSource());
}

void StyleBuilderFunctions::applyInheritCSSPropertyWebkitMaskBoxImageSource(StyleResolverState& state) {
  state.Style()->SetMaskBoxImageSource(state.ParentStyle()->MaskBoxImageSource());
}


void StyleBuilderFunctions::applyInitialCSSPropertyGridTemplateColumns(StyleResolverState& state) {
  state.Style()->SetGridTemplateColumns(ComputedStyleInitialValues::InitialGridTemplateColumns());
  state.Style()->SetNamedGridColumnLines(ComputedStyleInitialValues::InitialNamedGridColumnLines());
  state.Style()->SetOrderedNamedGridColumnLines(ComputedStyleInitialValues::InitialOrderedNamedGridColumnLines());
  state.Style()->SetGridAutoRepeatColumns(ComputedStyleInitialValues::InitialGridAutoRepeatColumns());
  state.Style()->SetGridAutoRepeatColumnsInsertionPoint(ComputedStyleInitialValues::InitialGridAutoRepeatColumnsInsertionPoint());
  state.Style()->SetAutoRepeatNamedGridColumnLines(ComputedStyleInitialValues::InitialNamedGridColumnLines());
  state.Style()->SetAutoRepeatOrderedNamedGridColumnLines(ComputedStyleInitialValues::InitialOrderedNamedGridColumnLines());
  state.Style()->SetGridAutoRepeatColumnsType(ComputedStyleInitialValues::InitialGridAutoRepeatColumnsType());

}

void StyleBuilderFunctions::applyInheritCSSPropertyGridTemplateColumns(StyleResolverState& state) {
  state.Style()->SetGridTemplateColumns(state.ParentStyle()->GridTemplateColumns());
  state.Style()->SetNamedGridColumnLines(state.ParentStyle()->NamedGridColumnLines());
  state.Style()->SetOrderedNamedGridColumnLines(state.ParentStyle()->OrderedNamedGridColumnLines());
  state.Style()->SetGridAutoRepeatColumns(state.ParentStyle()->GridAutoRepeatColumns());
  state.Style()->SetGridAutoRepeatColumnsInsertionPoint(state.ParentStyle()->GridAutoRepeatColumnsInsertionPoint());
  state.Style()->SetAutoRepeatNamedGridColumnLines(state.ParentStyle()->AutoRepeatNamedGridColumnLines());
  state.Style()->SetAutoRepeatOrderedNamedGridColumnLines(state.ParentStyle()->AutoRepeatOrderedNamedGridColumnLines());
  state.Style()->SetGridAutoRepeatColumnsType(state.ParentStyle()->GridAutoRepeatColumnsType());
}

void StyleBuilderFunctions::applyValueCSSPropertyGridTemplateColumns(StyleResolverState& state, const CSSValue& value) {
  Vector<GridTrackSize> trackSizes;
  Vector<GridTrackSize> autoRepeatTrackSizes;
  NamedGridLinesMap namedGridLines;
  OrderedNamedGridLines orderedNamedGridLines;
  NamedGridLinesMap autoRepeatNamedGridLines;
  OrderedNamedGridLines autoRepeatOrderedNamedGridLines;
  AutoRepeatType autoRepeatType = ComputedStyleInitialValues::InitialGridAutoRepeatType();
  size_t autoRepeatInsertionPoint =
      ComputedStyleInitialValues::InitialGridAutoRepeatInsertionPoint();
  StyleBuilderConverter::ConvertGridTrackList(
      value, trackSizes, namedGridLines, orderedNamedGridLines,
      autoRepeatTrackSizes, autoRepeatNamedGridLines,
      autoRepeatOrderedNamedGridLines, autoRepeatInsertionPoint,
      autoRepeatType, state);
  const NamedGridAreaMap& namedGridAreas = state.Style()->NamedGridArea();
  if (!namedGridAreas.IsEmpty()) {
    StyleBuilderConverter::CreateImplicitNamedGridLinesFromGridArea(
        namedGridAreas, namedGridLines, kForColumns);
  }
  state.Style()->SetGridTemplateColumns(trackSizes);
  state.Style()->SetNamedGridColumnLines(namedGridLines);
  state.Style()->SetOrderedNamedGridColumnLines(orderedNamedGridLines);
  state.Style()->SetGridAutoRepeatColumns(autoRepeatTrackSizes);
  state.Style()->SetGridAutoRepeatColumnsInsertionPoint(
      autoRepeatInsertionPoint);
  state.Style()->SetAutoRepeatNamedGridColumnLines(autoRepeatNamedGridLines);
  state.Style()->SetAutoRepeatOrderedNamedGridColumnLines(
      autoRepeatOrderedNamedGridLines);
  state.Style()->SetGridAutoRepeatColumnsType(autoRepeatType);
}

void StyleBuilderFunctions::applyInitialCSSPropertyGridTemplateRows(StyleResolverState& state) {
  state.Style()->SetGridTemplateRows(ComputedStyleInitialValues::InitialGridTemplateRows());
  state.Style()->SetNamedGridRowLines(ComputedStyleInitialValues::InitialNamedGridRowLines());
  state.Style()->SetOrderedNamedGridRowLines(ComputedStyleInitialValues::InitialOrderedNamedGridRowLines());
  state.Style()->SetGridAutoRepeatRows(ComputedStyleInitialValues::InitialGridAutoRepeatRows());
  state.Style()->SetGridAutoRepeatRowsInsertionPoint(ComputedStyleInitialValues::InitialGridAutoRepeatRowsInsertionPoint());
  state.Style()->SetAutoRepeatNamedGridRowLines(ComputedStyleInitialValues::InitialNamedGridRowLines());
  state.Style()->SetAutoRepeatOrderedNamedGridRowLines(ComputedStyleInitialValues::InitialOrderedNamedGridRowLines());
  state.Style()->SetGridAutoRepeatRowsType(ComputedStyleInitialValues::InitialGridAutoRepeatRowsType());

}

void StyleBuilderFunctions::applyInheritCSSPropertyGridTemplateRows(StyleResolverState& state) {
  state.Style()->SetGridTemplateRows(state.ParentStyle()->GridTemplateRows());
  state.Style()->SetNamedGridRowLines(state.ParentStyle()->NamedGridRowLines());
  state.Style()->SetOrderedNamedGridRowLines(state.ParentStyle()->OrderedNamedGridRowLines());
  state.Style()->SetGridAutoRepeatRows(state.ParentStyle()->GridAutoRepeatRows());
  state.Style()->SetGridAutoRepeatRowsInsertionPoint(state.ParentStyle()->GridAutoRepeatRowsInsertionPoint());
  state.Style()->SetAutoRepeatNamedGridRowLines(state.ParentStyle()->AutoRepeatNamedGridRowLines());
  state.Style()->SetAutoRepeatOrderedNamedGridRowLines(state.ParentStyle()->AutoRepeatOrderedNamedGridRowLines());
  state.Style()->SetGridAutoRepeatRowsType(state.ParentStyle()->GridAutoRepeatRowsType());
}

void StyleBuilderFunctions::applyValueCSSPropertyGridTemplateRows(StyleResolverState& state, const CSSValue& value) {
  Vector<GridTrackSize> trackSizes;
  Vector<GridTrackSize> autoRepeatTrackSizes;
  NamedGridLinesMap namedGridLines;
  OrderedNamedGridLines orderedNamedGridLines;
  NamedGridLinesMap autoRepeatNamedGridLines;
  OrderedNamedGridLines autoRepeatOrderedNamedGridLines;
  AutoRepeatType autoRepeatType = ComputedStyleInitialValues::InitialGridAutoRepeatType();
  size_t autoRepeatInsertionPoint =
      ComputedStyleInitialValues::InitialGridAutoRepeatInsertionPoint();
  StyleBuilderConverter::ConvertGridTrackList(
      value, trackSizes, namedGridLines, orderedNamedGridLines,
      autoRepeatTrackSizes, autoRepeatNamedGridLines,
      autoRepeatOrderedNamedGridLines, autoRepeatInsertionPoint,
      autoRepeatType, state);
  const NamedGridAreaMap& namedGridAreas = state.Style()->NamedGridArea();
  if (!namedGridAreas.IsEmpty()) {
    StyleBuilderConverter::CreateImplicitNamedGridLinesFromGridArea(
        namedGridAreas, namedGridLines, kForRows);
  }
  state.Style()->SetGridTemplateRows(trackSizes);
  state.Style()->SetNamedGridRowLines(namedGridLines);
  state.Style()->SetOrderedNamedGridRowLines(orderedNamedGridLines);
  state.Style()->SetGridAutoRepeatRows(autoRepeatTrackSizes);
  state.Style()->SetGridAutoRepeatRowsInsertionPoint(
      autoRepeatInsertionPoint);
  state.Style()->SetAutoRepeatNamedGridRowLines(autoRepeatNamedGridLines);
  state.Style()->SetAutoRepeatOrderedNamedGridRowLines(
      autoRepeatOrderedNamedGridLines);
  state.Style()->SetGridAutoRepeatRowsType(autoRepeatType);
}


void StyleBuilderFunctions::applyInitialCSSPropertyFill(StyleResolverState& state) {
  if (state.ApplyPropertyToRegularStyle())
    state.Style()->AccessSVGStyle().SetFillPaint(SVGComputedStyle::InitialFillPaint());
  if (state.ApplyPropertyToVisitedLinkStyle())
    state.Style()->AccessSVGStyle().SetVisitedLinkFillPaint(SVGComputedStyle::InitialFillPaint());
}

void StyleBuilderFunctions::applyInheritCSSPropertyFill(StyleResolverState& state) {
  const SVGComputedStyle& parent_svg_style = state.ParentStyle()->SvgStyle();
  if (state.ApplyPropertyToRegularStyle())
    state.Style()->AccessSVGStyle().SetFillPaint(parent_svg_style.FillPaint());
  if (state.ApplyPropertyToVisitedLinkStyle())
    state.Style()->AccessSVGStyle().SetVisitedLinkFillPaint(parent_svg_style.FillPaint());
}

void StyleBuilderFunctions::applyValueCSSPropertyFill(StyleResolverState& state, const CSSValue& value) {
  SVGPaint paint = StyleBuilderConverter::ConvertSVGPaint(state, value);
  if (state.ApplyPropertyToRegularStyle())
    state.Style()->AccessSVGStyle().SetFillPaint(paint);
  if (state.ApplyPropertyToVisitedLinkStyle())
    state.Style()->AccessSVGStyle().SetVisitedLinkFillPaint(paint);
}

void StyleBuilderFunctions::applyInitialCSSPropertyStroke(StyleResolverState& state) {
  if (state.ApplyPropertyToRegularStyle())
    state.Style()->AccessSVGStyle().SetStrokePaint(SVGComputedStyle::InitialStrokePaint());
  if (state.ApplyPropertyToVisitedLinkStyle())
    state.Style()->AccessSVGStyle().SetVisitedLinkStrokePaint(SVGComputedStyle::InitialStrokePaint());
}

void StyleBuilderFunctions::applyInheritCSSPropertyStroke(StyleResolverState& state) {
  const SVGComputedStyle& parent_svg_style = state.ParentStyle()->SvgStyle();
  if (state.ApplyPropertyToRegularStyle())
    state.Style()->AccessSVGStyle().SetStrokePaint(parent_svg_style.StrokePaint());
  if (state.ApplyPropertyToVisitedLinkStyle())
    state.Style()->AccessSVGStyle().SetVisitedLinkStrokePaint(parent_svg_style.StrokePaint());
}

void StyleBuilderFunctions::applyValueCSSPropertyStroke(StyleResolverState& state, const CSSValue& value) {
  SVGPaint paint = StyleBuilderConverter::ConvertSVGPaint(state, value);
  if (state.ApplyPropertyToRegularStyle())
    state.Style()->AccessSVGStyle().SetStrokePaint(paint);
  if (state.ApplyPropertyToVisitedLinkStyle())
    state.Style()->AccessSVGStyle().SetVisitedLinkStrokePaint(paint);
}

} // namespace blink
