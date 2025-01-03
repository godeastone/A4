// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/ComputedStyleFieldAliases.json5
//   ../../third_party/blink/renderer/core/css/CSSProperties.json5
//   ../../third_party/blink/renderer/core/css/properties/CSSPropertyMethods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_PERSPECTIVE_ORIGIN_Y_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_PERSPECTIVE_ORIGIN_Y_H_

#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/properties/longhand.h"
#include "third_party/blink/renderer/core/css/resolver/style_builder_converter.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"

namespace blink {
namespace CSSLonghand {

// Implements the '-webkit-perspective-origin-y' CSS property
// See src/third_party/WebKit/Source/core/css/properties/README.md
class WebkitPerspectiveOriginY final : public Longhand {
 public:
  constexpr WebkitPerspectiveOriginY() : Longhand() {}
  const char* GetPropertyName() const override { return "-webkit-perspective-origin-y\0"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    static const WTF::AtomicString& name = WTF::AtomicString("-webkit-perspective-origin-y\0");
    return name;
  }
  const WTF::String GetJSPropertyName() const override {
    return WTF::String("webkitPerspectiveOriginY\0");
  }
  CSSPropertyID PropertyID() const override { return CSSPropertyWebkitPerspectiveOriginY; }
  const CSSValue* ParseSingleValue(CSSParserTokenRange&, const CSSParserContext&, const CSSParserLocalContext&) const override;
  bool IsInterpolable() const override { return true; }

  // Style builder functions
  void ApplyInitial(StyleResolverState& state) const override {
    state.Style()->SetPerspectiveOriginY(ComputedStyleInitialValues::InitialPerspectiveOriginY());
  }
  void ApplyInherit(StyleResolverState& state) const override {
    state.Style()->SetPerspectiveOriginY(state.ParentStyle()->PerspectiveOriginY());
  }
  void ApplyValue(StyleResolverState& state, const CSSValue& value) const override {
    state.Style()->SetPerspectiveOriginY(StyleBuilderConverter::ConvertLength(state, value));
  }
};

}  // namespace CSSLonghand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_PERSPECTIVE_ORIGIN_Y_H_
