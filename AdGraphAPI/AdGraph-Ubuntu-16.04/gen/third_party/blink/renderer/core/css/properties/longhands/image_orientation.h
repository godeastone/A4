// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/ComputedStyleFieldAliases.json5
//   ../../third_party/blink/renderer/core/css/CSSProperties.json5
//   ../../third_party/blink/renderer/core/css/properties/CSSPropertyMethods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_IMAGE_ORIENTATION_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_IMAGE_ORIENTATION_H_

#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/properties/longhand.h"
#include "third_party/blink/renderer/core/css/resolver/style_builder_converter.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {
namespace CSSLonghand {

// Implements the 'image-orientation' CSS property
// See src/third_party/WebKit/Source/core/css/properties/README.md
class ImageOrientation final : public Longhand {
 public:
  constexpr ImageOrientation() : Longhand() {}
  bool IsEnabled() const override {
    return RuntimeEnabledFeatures::ImageOrientationEnabled();
  }
  const char* GetPropertyName() const override { return "image-orientation\0"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    static const WTF::AtomicString& name = WTF::AtomicString("image-orientation\0");
    return name;
  }
  const WTF::String GetJSPropertyName() const override {
    return WTF::String("imageOrientation\0");
  }
  CSSPropertyID PropertyID() const override { return CSSPropertyImageOrientation; }
  const CSSValue* ParseSingleValue(CSSParserTokenRange&, const CSSParserContext&, const CSSParserLocalContext&) const override;
  const CSSValue* CSSValueFromComputedStyleInternal(const ComputedStyle&, const SVGComputedStyle&, const LayoutObject*, Node*, bool allow_visited_style) const override;
  bool IsInherited() const override { return true; }

  // Style builder functions
  void ApplyInitial(StyleResolverState& state) const override {
    state.Style()->SetRespectImageOrientation(ComputedStyleInitialValues::InitialRespectImageOrientation());
  }
  void ApplyInherit(StyleResolverState& state) const override {
    state.Style()->SetRespectImageOrientation(state.ParentStyle()->RespectImageOrientation());
  }
  void ApplyValue(StyleResolverState& state, const CSSValue& value) const override {
    state.Style()->SetRespectImageOrientation(StyleBuilderConverter::ConvertImageOrientation(state, value));
  }
};

}  // namespace CSSLonghand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_IMAGE_ORIENTATION_H_
