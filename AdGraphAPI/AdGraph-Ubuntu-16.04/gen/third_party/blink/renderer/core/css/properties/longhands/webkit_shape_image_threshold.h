// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/ComputedStyleFieldAliases.json5
//   ../../third_party/blink/renderer/core/css/CSSProperties.json5
//   ../../third_party/blink/renderer/core/css/properties/CSSPropertyMethods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_SHAPE_IMAGE_THRESHOLD_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_SHAPE_IMAGE_THRESHOLD_H_

#include "third_party/blink/renderer/core/css/properties/css_unresolved_property.h"

namespace blink {
namespace CSSLonghand {

// Implements the '-webkit-shape-image-threshold' CSS property
// See src/third_party/WebKit/Source/core/css/properties/README.md
class WebkitShapeImageThreshold final : public CSSUnresolvedProperty {
 public:
  constexpr WebkitShapeImageThreshold() : CSSUnresolvedProperty() {}
  const char* GetPropertyName() const override { return "-webkit-shape-image-threshold\0"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    static const WTF::AtomicString& name = WTF::AtomicString("-webkit-shape-image-threshold\0");
    return name;
  }
  const WTF::String GetJSPropertyName() const override {
    return WTF::String("webkitShapeImageThreshold\0");
  }
};

}  // namespace CSSLonghand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_SHAPE_IMAGE_THRESHOLD_H_
