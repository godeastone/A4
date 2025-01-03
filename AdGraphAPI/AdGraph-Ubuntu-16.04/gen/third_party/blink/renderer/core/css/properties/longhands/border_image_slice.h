// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/ComputedStyleFieldAliases.json5
//   ../../third_party/blink/renderer/core/css/CSSProperties.json5
//   ../../third_party/blink/renderer/core/css/properties/CSSPropertyMethods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_BORDER_IMAGE_SLICE_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_BORDER_IMAGE_SLICE_H_

#include "third_party/blink/renderer/core/css/css_identifier_value.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/properties/longhand.h"
#include "third_party/blink/renderer/core/css/properties/style_building_utils.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"

namespace blink {
namespace CSSLonghand {

// Implements the 'border-image-slice' CSS property
// See src/third_party/WebKit/Source/core/css/properties/README.md
class BorderImageSlice final : public Longhand {
 public:
  constexpr BorderImageSlice() : Longhand() {}
  const char* GetPropertyName() const override { return "border-image-slice\0"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    static const WTF::AtomicString& name = WTF::AtomicString("border-image-slice\0");
    return name;
  }
  const WTF::String GetJSPropertyName() const override {
    return WTF::String("borderImageSlice\0");
  }
  CSSPropertyID PropertyID() const override { return CSSPropertyBorderImageSlice; }
  const CSSValue* ParseSingleValue(CSSParserTokenRange&, const CSSParserContext&, const CSSParserLocalContext&) const override;
  const CSSValue* CSSValueFromComputedStyleInternal(const ComputedStyle&, const SVGComputedStyle&, const LayoutObject*, Node*, bool allow_visited_style) const override;
  const CSSValue* InitialValue() const override;
  bool IsInterpolable() const override { return true; }

  // Style builder functions
  void ApplyInitial(StyleResolverState& state) const override {
    const NinePieceImage& currentImage = state.Style()->BorderImage();
    if (currentImage.Fill() == false &&
        StyleBuildingUtils::lengthMatchesAllSides(currentImage.ImageSlices(), Length(100, kPercent)))
      return;
    NinePieceImage image(currentImage);
    image.SetImageSlices(LengthBox(Length(100, kPercent), Length(100, kPercent), Length(100, kPercent), Length(100, kPercent)));
    image.SetFill(false);
    state.Style()->SetBorderImage(image);
  }
  void ApplyInherit(StyleResolverState& state) const override {
    NinePieceImage image(state.Style()->BorderImage());
    image.CopyImageSlicesFrom(state.ParentStyle()->BorderImage());
    state.Style()->SetBorderImage(image);
  }
  void ApplyValue(StyleResolverState& state, const CSSValue& value) const override {
    NinePieceImage image(state.Style()->BorderImage());
    CSSToStyleMap::MapNinePieceImageSlice(state, value, image);
    state.Style()->SetBorderImage(image);
  }
};

}  // namespace CSSLonghand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_BORDER_IMAGE_SLICE_H_
