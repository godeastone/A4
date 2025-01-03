// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/ComputedStyleFieldAliases.json5
//   ../../third_party/blink/renderer/core/css/CSSProperties.json5
//   ../../third_party/blink/renderer/core/css/properties/CSSPropertyMethods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WIDOWS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WIDOWS_H_

#include "third_party/blink/renderer/core/css/css_primitive_value.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/properties/longhand.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"

namespace blink {
namespace CSSLonghand {

// Implements the 'widows' CSS property
// See src/third_party/WebKit/Source/core/css/properties/README.md
class Widows final : public Longhand {
 public:
  constexpr Widows() : Longhand() {}
  const char* GetPropertyName() const override { return "widows\0"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    static const WTF::AtomicString& name = WTF::AtomicString("widows\0");
    return name;
  }
  const WTF::String GetJSPropertyName() const override {
    return WTF::String("widows\0");
  }
  CSSPropertyID PropertyID() const override { return CSSPropertyWidows; }
  const CSSValue* ParseSingleValue(CSSParserTokenRange&, const CSSParserContext&, const CSSParserLocalContext&) const override;
  const CSSValue* CSSValueFromComputedStyleInternal(const ComputedStyle&, const SVGComputedStyle&, const LayoutObject*, Node*, bool allow_visited_style) const override;
  bool IsInterpolable() const override { return true; }
  bool IsInherited() const override { return true; }

  // Style builder functions
  void ApplyInitial(StyleResolverState& state) const override {
    state.Style()->SetWidows(ComputedStyleInitialValues::InitialWidows());
  }
  void ApplyInherit(StyleResolverState& state) const override {
    state.Style()->SetWidows(state.ParentStyle()->Widows());
  }
  void ApplyValue(StyleResolverState& state, const CSSValue& value) const override {
    state.Style()->SetWidows(ToCSSPrimitiveValue(value).ConvertTo<short>());
  }
};

}  // namespace CSSLonghand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WIDOWS_H_
