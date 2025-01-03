// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/ComputedStyleFieldAliases.json5
//   ../../third_party/blink/renderer/core/css/CSSProperties.json5
//   ../../third_party/blink/renderer/core/css/properties/CSSPropertyMethods.json5


#include "third_party/blink/renderer/core/css/properties/longhands/background_position_y.h"

#include "third_party/blink/renderer/core/css/css_identifier_value.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/css_value_list.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"

namespace blink {
namespace CSSLonghand {

void BackgroundPositionY::ApplyInitial(StyleResolverState& state) const {
  FillLayer* currChild = &state.Style()->AccessBackgroundLayers();
  currChild->SetPositionY(FillLayer::InitialFillPositionY(EFillLayerType::kBackground));
  for (currChild = currChild->Next(); currChild; currChild = currChild->Next())
    currChild->ClearPositionY();
}

void BackgroundPositionY::ApplyInherit(StyleResolverState& state) const {
  FillLayer* currChild = &state.Style()->AccessBackgroundLayers();
  FillLayer* prevChild = 0;
  const FillLayer* currParent = &state.ParentStyle()->BackgroundLayers();
  while (currParent && currParent->IsPositionYSet()) {
    if (!currChild)
      currChild = prevChild->EnsureNext();
    currChild->SetPositionY(currParent->PositionY());
    if (currParent->IsBackgroundYOriginSet())
      currChild->SetBackgroundYOrigin(currParent->BackgroundYOrigin());
    prevChild = currChild;
    currChild = prevChild->Next();
    currParent = currParent->Next();
  }

  while (currChild) {
    // Reset any remaining layers to not have the property set.
    currChild->ClearPositionY();
    currChild = currChild->Next();
  }
}

void BackgroundPositionY::ApplyValue(StyleResolverState& state, const CSSValue& value) const {
  FillLayer* currChild = &state.Style()->AccessBackgroundLayers();
  FillLayer* prevChild = 0;
  if (value.IsValueList() && !value.IsImageSetValue()) {
    // Walk each value and put it into a layer, creating new layers as needed.
    const CSSValueList& valueList = ToCSSValueList(value);
    for (unsigned int i = 0; i < valueList.length(); i++) {
      if (!currChild)
        currChild = prevChild->EnsureNext();
      CSSToStyleMap::MapFillPositionY(state, currChild, valueList.Item(i));
      prevChild = currChild;
      currChild = currChild->Next();
    }
  } else {
    CSSToStyleMap::MapFillPositionY(state, currChild, value);
    currChild = currChild->Next();
  }
  while (currChild) {
    // Reset all remaining layers to not have the property set.
    currChild->ClearPositionY();
    currChild = currChild->Next();
  }
}

}  // namespace CSSLonghand
}  // namespace blink
