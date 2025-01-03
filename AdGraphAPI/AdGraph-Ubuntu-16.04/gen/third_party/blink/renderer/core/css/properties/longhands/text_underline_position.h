// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/ComputedStyleFieldAliases.json5
//   ../../third_party/blink/renderer/core/css/CSSProperties.json5
//   ../../third_party/blink/renderer/core/css/properties/CSSPropertyMethods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_TEXT_UNDERLINE_POSITION_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_TEXT_UNDERLINE_POSITION_H_

#include "third_party/blink/renderer/core/css/css_identifier_value.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/properties/longhand.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"

namespace blink {
namespace CSSLonghand {

// Implements the 'text-underline-position' CSS property
// See src/third_party/WebKit/Source/core/css/properties/README.md
class TextUnderlinePosition final : public Longhand {
 public:
  constexpr TextUnderlinePosition() : Longhand() {}
  const char* GetPropertyName() const override { return "text-underline-position\0"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    static const WTF::AtomicString& name = WTF::AtomicString("text-underline-position\0");
    return name;
  }
  const WTF::String GetJSPropertyName() const override {
    return WTF::String("textUnderlinePosition\0");
  }
  CSSPropertyID PropertyID() const override { return CSSPropertyTextUnderlinePosition; }
  const CSSValue* ParseSingleValue(CSSParserTokenRange&, const CSSParserContext&, const CSSParserLocalContext&) const override;
  const CSSValue* CSSValueFromComputedStyleInternal(const ComputedStyle&, const SVGComputedStyle&, const LayoutObject*, Node*, bool allow_visited_style) const override;
  bool IsInherited() const override { return true; }

  // Style builder functions
  void ApplyInitial(StyleResolverState& state) const override {
    state.Style()->SetTextUnderlinePosition(ComputedStyleInitialValues::InitialTextUnderlinePosition());
  }
  void ApplyInherit(StyleResolverState& state) const override {
    state.Style()->SetTextUnderlinePosition(state.ParentStyle()->GetTextUnderlinePosition());
  }
  void ApplyValue(StyleResolverState& state, const CSSValue& value) const override {
    state.Style()->SetTextUnderlinePosition(ToCSSIdentifierValue(value).ConvertTo<blink::TextUnderlinePosition>());
  }
};

}  // namespace CSSLonghand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_TEXT_UNDERLINE_POSITION_H_
