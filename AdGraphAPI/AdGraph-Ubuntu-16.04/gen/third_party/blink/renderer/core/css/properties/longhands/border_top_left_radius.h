// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/ComputedStyleFieldAliases.json5
//   ../../third_party/blink/renderer/core/css/CSSProperties.json5
//   ../../third_party/blink/renderer/core/css/properties/CSSPropertyMethods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_BORDER_TOP_LEFT_RADIUS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_BORDER_TOP_LEFT_RADIUS_H_

#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/properties/longhand.h"
#include "third_party/blink/renderer/core/css/resolver/style_builder_converter.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"

namespace blink {
namespace CSSLonghand {

// Implements the 'border-top-left-radius' CSS property
// See src/third_party/WebKit/Source/core/css/properties/README.md
class BorderTopLeftRadius final : public Longhand {
 public:
  constexpr BorderTopLeftRadius() : Longhand() {}
  const char* GetPropertyName() const override { return "border-top-left-radius\0"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    static const WTF::AtomicString& name = WTF::AtomicString("border-top-left-radius\0");
    return name;
  }
  const WTF::String GetJSPropertyName() const override {
    return WTF::String("borderTopLeftRadius\0");
  }
  CSSPropertyID PropertyID() const override { return CSSPropertyBorderTopLeftRadius; }
  const CSSValue* ParseSingleValue(CSSParserTokenRange&, const CSSParserContext&, const CSSParserLocalContext&) const override;
  const CSSValue* CSSValueFromComputedStyleInternal(const ComputedStyle&, const SVGComputedStyle&, const LayoutObject*, Node*, bool allow_visited_style) const override;
  bool IsInterpolable() const override { return true; }

  // Style builder functions
  void ApplyInitial(StyleResolverState& state) const override {
    state.Style()->SetBorderTopLeftRadius(ComputedStyleInitialValues::InitialBorderTopLeftRadius());
  }
  void ApplyInherit(StyleResolverState& state) const override {
    state.Style()->SetBorderTopLeftRadius(state.ParentStyle()->BorderTopLeftRadius());
  }
  void ApplyValue(StyleResolverState& state, const CSSValue& value) const override {
    state.Style()->SetBorderTopLeftRadius(StyleBuilderConverter::ConvertRadius(state, value));
  }
};

}  // namespace CSSLonghand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_BORDER_TOP_LEFT_RADIUS_H_