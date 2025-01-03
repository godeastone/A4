// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/ComputedStyleFieldAliases.json5
//   ../../third_party/blink/renderer/core/css/CSSProperties.json5
//   ../../third_party/blink/renderer/core/css/properties/CSSPropertyMethods.json5


#include "third_party/blink/renderer/core/css/properties/longhands/counter_increment.h"

#include "third_party/blink/renderer/core/css/css_custom_ident_value.h"
#include "third_party/blink/renderer/core/css/css_identifier_value.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/css_value_list.h"
#include "third_party/blink/renderer/core/css/css_value_pair.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"

namespace blink {
namespace CSSLonghand {

void CounterIncrement::ApplyInitial(StyleResolverState& state) const {
  state.Style()->ClearIncrementDirectives();
}

void CounterIncrement::ApplyInherit(StyleResolverState& state) const {
  const CounterDirectiveMap* parentMap = state.ParentStyle()->GetCounterDirectives();
  if (!parentMap)
    return;

  CounterDirectiveMap& map = state.Style()->AccessCounterDirectives();
  DCHECK(!parentMap->IsEmpty());

  typedef CounterDirectiveMap::const_iterator Iterator;
  Iterator end = parentMap->end();
  for (Iterator it = parentMap->begin(); it != end; ++it) {
    CounterDirectives& directives = map.insert(it->key, CounterDirectives()).stored_value->value;
    directives.InheritIncrement(it->value);
  }
}

void CounterIncrement::ApplyValue(StyleResolverState& state, const CSSValue& value) const {
  state.Style()->ClearIncrementDirectives();

  if (!value.IsValueList()) {
    DCHECK(value.IsIdentifierValue());
    DCHECK_EQ(ToCSSIdentifierValue(value).GetValueID(), CSSValueNone);
    return;
  }

  CounterDirectiveMap& map = state.Style()->AccessCounterDirectives();

  const CSSValueList& list = ToCSSValueList(value);

  for (size_t i = 0; i < list.length(); ++i) {
    const CSSValuePair& pair = ToCSSValuePair(list.Item(i));
    AtomicString identifier(ToCSSCustomIdentValue(pair.First()).Value());
    int counter_value = ToCSSPrimitiveValue(pair.Second()).GetIntValue();
    CounterDirectives& directives =
        map.insert(identifier, CounterDirectives()).stored_value->value;
    directives.AddIncrementValue(counter_value);
  }
  DCHECK(!map.IsEmpty());
}

}  // namespace CSSLonghand
}  // namespace blink
