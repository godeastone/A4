// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/ComputedStyleFieldAliases.json5
//   ../../third_party/blink/renderer/core/css/CSSProperties.json5
//   ../../third_party/blink/renderer/core/css/properties/CSSPropertyMethods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_EMPTY_CELLS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_EMPTY_CELLS_H_

#include "third_party/blink/renderer/core/css/css_identifier_value.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/properties/longhand.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"

namespace blink {
namespace CSSLonghand {

// Implements the 'empty-cells' CSS property
// See src/third_party/WebKit/Source/core/css/properties/README.md
class EmptyCells final : public Longhand {
 public:
  constexpr EmptyCells() : Longhand() {}
  const char* GetPropertyName() const override { return "empty-cells\0"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    static const WTF::AtomicString& name = WTF::AtomicString("empty-cells\0");
    return name;
  }
  const WTF::String GetJSPropertyName() const override {
    return WTF::String("emptyCells\0");
  }
  CSSPropertyID PropertyID() const override { return CSSPropertyEmptyCells; }
  const CSSValue* CSSValueFromComputedStyleInternal(const ComputedStyle&, const SVGComputedStyle&, const LayoutObject*, Node*, bool allow_visited_style) const override;
  bool IsInherited() const override { return true; }

  // Style builder functions
  void ApplyInitial(StyleResolverState& state) const override {
    state.Style()->SetEmptyCells(ComputedStyleInitialValues::InitialEmptyCells());
    state.Style()->SetEmptyCellsIsInherited(false);
  }
  void ApplyInherit(StyleResolverState& state) const override {
    state.Style()->SetEmptyCells(state.ParentStyle()->EmptyCells());
    state.Style()->SetEmptyCellsIsInherited(true);
  }
  void ApplyValue(StyleResolverState& state, const CSSValue& value) const override {
    state.Style()->SetEmptyCells(ToCSSIdentifierValue(value).ConvertTo<blink::EEmptyCells>());
    state.Style()->SetEmptyCellsIsInherited(false);
  }
};

}  // namespace CSSLonghand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_EMPTY_CELLS_H_
