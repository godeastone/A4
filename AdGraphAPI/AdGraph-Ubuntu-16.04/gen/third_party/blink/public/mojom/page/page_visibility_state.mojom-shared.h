// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_PAGE_VISIBILITY_STATE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_PAGE_VISIBILITY_STATE_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "third_party/blink/public/mojom/page/page_visibility_state.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {

enum class PageVisibilityState : int32_t {
  kVisible,
  kHidden,
  kPrerender,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, PageVisibilityState value) {
  switch(value) {
    case PageVisibilityState::kVisible:
      return os << "PageVisibilityState::kVisible";
    case PageVisibilityState::kHidden:
      return os << "PageVisibilityState::kHidden";
    case PageVisibilityState::kPrerender:
      return os << "PageVisibilityState::kPrerender";
    default:
      return os << "Unknown PageVisibilityState value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PageVisibilityState value) {
  return internal::PageVisibilityState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::PageVisibilityState>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PageVisibilityState> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::PageVisibilityState, ::blink::mojom::PageVisibilityState> {
  static ::blink::mojom::PageVisibilityState ToMojom(::blink::mojom::PageVisibilityState input) { return input; }
  static bool FromMojom(::blink::mojom::PageVisibilityState input, ::blink::mojom::PageVisibilityState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PageVisibilityState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PageVisibilityState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::PageVisibilityState>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_PAGE_VISIBILITY_STATE_MOJOM_SHARED_H_
