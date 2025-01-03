// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/ComputedStyleFieldAliases.json5
//   ../../third_party/blink/renderer/core/css/CSSProperties.json5
//   ../../third_party/blink/renderer/core/css/properties/CSSPropertyMethods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_MASK_BOX_IMAGE_SLICE_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_MASK_BOX_IMAGE_SLICE_H_

#include "third_party/blink/renderer/core/css/css_identifier_value.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/properties/longhand.h"
#include "third_party/blink/renderer/core/css/properties/style_building_utils.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"

namespace blink {
namespace CSSLonghand {

// Implements the '-webkit-mask-box-image-slice' CSS property
// See src/third_party/WebKit/Source/core/css/properties/README.md
class WebkitMaskBoxImageSlice final : public Longhand {
 public:
  constexpr WebkitMaskBoxImageSlice() : Longhand() {}
  const char* GetPropertyName() const override { return "-webkit-mask-box-image-slice\0"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    static const WTF::AtomicString& name = WTF::AtomicString("-webkit-mask-box-image-slice\0");
    return name;
  }
  const WTF::String GetJSPropertyName() const override {
    return WTF::String("webkitMaskBoxImageSlice\0");
  }
  CSSPropertyID PropertyID() const override { return CSSPropertyWebkitMaskBoxImageSlice; }
  const CSSValue* ParseSingleValue(CSSParserTokenRange&, const CSSParserContext&, const CSSParserLocalContext&) const override;
  const CSSValue* CSSValueFromComputedStyleInternal(const ComputedStyle&, const SVGComputedStyle&, const LayoutObject*, Node*, bool allow_visited_style) const override;
  bool IsInterpolable() const override { return true; }

  // Style builder functions
  void ApplyInitial(StyleResolverState& state) const override {
    const NinePieceImage& currentImage = state.Style()->MaskBoxImage();
    // Masks have a different initial value for slices. Preserve the value of 0
    // for backwards compatibility.
    if (currentImage.Fill() == true &&
        StyleBuildingUtils::lengthMatchesAllSides(currentImage.ImageSlices(), Length(0, kFixed)))
      return;
    NinePieceImage image(currentImage);
    image.SetImageSlices(LengthBox(Length(0, kFixed), Length(0, kFixed), Length(0, kFixed), Length(0, kFixed)));
    image.SetFill(true);
    state.Style()->SetMaskBoxImage(image);
  }
  void ApplyInherit(StyleResolverState& state) const override {
    NinePieceImage image(state.Style()->MaskBoxImage());
    image.CopyImageSlicesFrom(state.ParentStyle()->MaskBoxImage());
    state.Style()->SetMaskBoxImage(image);
  }
  void ApplyValue(StyleResolverState& state, const CSSValue& value) const override {
    NinePieceImage image(state.Style()->MaskBoxImage());
    CSSToStyleMap::MapNinePieceImageSlice(state, value, image);
    state.Style()->SetMaskBoxImage(image);
  }
};

}  // namespace CSSLonghand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_MASK_BOX_IMAGE_SLICE_H_
