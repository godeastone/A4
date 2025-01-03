// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/ComputedStyleFieldAliases.json5
//   ../../third_party/blink/renderer/core/css/CSSProperties.json5
//   ../../third_party/blink/renderer/core/css/properties/CSSPropertyMethods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_OVERSCROLL_BEHAVIOR_Y_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_OVERSCROLL_BEHAVIOR_Y_H_

#include "third_party/blink/renderer/core/css/css_identifier_value.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/properties/longhand.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {
namespace CSSLonghand {

// Implements the 'overscroll-behavior-y' CSS property
// See src/third_party/WebKit/Source/core/css/properties/README.md
class OverscrollBehaviorY final : public Longhand {
 public:
  constexpr OverscrollBehaviorY() : Longhand() {}
  bool IsEnabled() const override {
    return RuntimeEnabledFeatures::CSSOverscrollBehaviorEnabled();
  }
  const char* GetPropertyName() const override { return "overscroll-behavior-y\0"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    static const WTF::AtomicString& name = WTF::AtomicString("overscroll-behavior-y\0");
    return name;
  }
  const WTF::String GetJSPropertyName() const override {
    return WTF::String("overscrollBehaviorY\0");
  }
  CSSPropertyID PropertyID() const override { return CSSPropertyOverscrollBehaviorY; }
  const CSSValue* CSSValueFromComputedStyleInternal(const ComputedStyle&, const SVGComputedStyle&, const LayoutObject*, Node*, bool allow_visited_style) const override;

  // Style builder functions
  void ApplyInitial(StyleResolverState& state) const override {
    state.Style()->SetOverscrollBehaviorY(ComputedStyleInitialValues::InitialOverscrollBehaviorY());
  }
  void ApplyInherit(StyleResolverState& state) const override {
    state.Style()->SetOverscrollBehaviorY(state.ParentStyle()->OverscrollBehaviorY());
  }
  void ApplyValue(StyleResolverState& state, const CSSValue& value) const override {
    state.Style()->SetOverscrollBehaviorY(ToCSSIdentifierValue(value).ConvertTo<blink::EOverscrollBehavior>());
  }
};

}  // namespace CSSLonghand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_OVERSCROLL_BEHAVIOR_Y_H_
