// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/ComputedStyleFieldAliases.json5
//   ../../third_party/blink/renderer/core/css/CSSProperties.json5
//   ../../third_party/blink/renderer/core/css/properties/CSSPropertyMethods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_FONT_FEATURE_SETTINGS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_FONT_FEATURE_SETTINGS_H_

#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/properties/longhand.h"
#include "third_party/blink/renderer/core/css/resolver/font_builder.h"
#include "third_party/blink/renderer/core/css/resolver/style_builder_converter.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"

namespace blink {
namespace CSSLonghand {

// Implements the 'font-feature-settings' CSS property
// See src/third_party/WebKit/Source/core/css/properties/README.md
class FontFeatureSettings final : public Longhand {
 public:
  constexpr FontFeatureSettings() : Longhand() {}
  const char* GetPropertyName() const override { return "font-feature-settings\0"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    static const WTF::AtomicString& name = WTF::AtomicString("font-feature-settings\0");
    return name;
  }
  const WTF::String GetJSPropertyName() const override {
    return WTF::String("fontFeatureSettings\0");
  }
  CSSPropertyID PropertyID() const override { return CSSPropertyFontFeatureSettings; }
  const CSSValue* ParseSingleValue(CSSParserTokenRange&, const CSSParserContext&, const CSSParserLocalContext&) const override;
  const CSSValue* CSSValueFromComputedStyleInternal(const ComputedStyle&, const SVGComputedStyle&, const LayoutObject*, Node*, bool allow_visited_style) const override;
  bool IsInherited() const override { return true; }
  bool IsDescriptor() const override { return true; }

  // Style builder functions
  void ApplyInitial(StyleResolverState& state) const override {
    state.GetFontBuilder().SetFeatureSettings(FontBuilder::InitialFeatureSettings());
  }
  void ApplyInherit(StyleResolverState& state) const override {
    state.GetFontBuilder().SetFeatureSettings(state.ParentFontDescription().FeatureSettings());
  }
  void ApplyValue(StyleResolverState& state, const CSSValue& value) const override {
    state.GetFontBuilder().SetFeatureSettings(StyleBuilderConverter::ConvertFontFeatureSettings(state, value));
  }
};

}  // namespace CSSLonghand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_FONT_FEATURE_SETTINGS_H_
