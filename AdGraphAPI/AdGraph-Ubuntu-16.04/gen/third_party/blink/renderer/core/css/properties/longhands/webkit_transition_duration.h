// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/ComputedStyleFieldAliases.json5
//   ../../third_party/blink/renderer/core/css/CSSProperties.json5
//   ../../third_party/blink/renderer/core/css/properties/CSSPropertyMethods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_TRANSITION_DURATION_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_TRANSITION_DURATION_H_

#include "third_party/blink/renderer/core/css/properties/css_unresolved_property.h"

namespace blink {
namespace CSSLonghand {

// Implements the '-webkit-transition-duration' CSS property
// See src/third_party/WebKit/Source/core/css/properties/README.md
class WebkitTransitionDuration final : public CSSUnresolvedProperty {
 public:
  constexpr WebkitTransitionDuration() : CSSUnresolvedProperty() {}
  const char* GetPropertyName() const override { return "-webkit-transition-duration\0"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    static const WTF::AtomicString& name = WTF::AtomicString("-webkit-transition-duration\0");
    return name;
  }
  const WTF::String GetJSPropertyName() const override {
    return WTF::String("webkitTransitionDuration\0");
  }
};

}  // namespace CSSLonghand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_TRANSITION_DURATION_H_
