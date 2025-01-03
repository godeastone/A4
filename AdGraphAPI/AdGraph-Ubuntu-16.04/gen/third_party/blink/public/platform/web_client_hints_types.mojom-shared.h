// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_WEB_CLIENT_HINTS_TYPES_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_WEB_CLIENT_HINTS_TYPES_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/web_client_hints_types.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


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

enum class WebClientHintsType : int32_t {
  kDeviceMemory = 0,
  kDpr = 1,
  kResourceWidth = 2,
  kViewportWidth = 3,
  kRtt = 4,
  kDownlink = 5,
  kEct = 6,
  kMinValue = 0,
  kMaxValue = 6,
};

inline std::ostream& operator<<(std::ostream& os, WebClientHintsType value) {
  switch(value) {
    case WebClientHintsType::kDeviceMemory:
      return os << "WebClientHintsType::kDeviceMemory";
    case WebClientHintsType::kDpr:
      return os << "WebClientHintsType::kDpr";
    case WebClientHintsType::kResourceWidth:
      return os << "WebClientHintsType::kResourceWidth";
    case WebClientHintsType::kViewportWidth:
      return os << "WebClientHintsType::kViewportWidth";
    case WebClientHintsType::kRtt:
      return os << "WebClientHintsType::kRtt";
    case WebClientHintsType::kDownlink:
      return os << "WebClientHintsType::kDownlink";
    case WebClientHintsType::kEct:
      return os << "WebClientHintsType::kEct";
    default:
      return os << "Unknown WebClientHintsType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(WebClientHintsType value) {
  return internal::WebClientHintsType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::WebClientHintsType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::WebClientHintsType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::WebClientHintsType, ::blink::mojom::WebClientHintsType> {
  static ::blink::mojom::WebClientHintsType ToMojom(::blink::mojom::WebClientHintsType input) { return input; }
  static bool FromMojom(::blink::mojom::WebClientHintsType input, ::blink::mojom::WebClientHintsType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebClientHintsType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::WebClientHintsType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::WebClientHintsType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_WEB_CLIENT_HINTS_TYPES_MOJOM_SHARED_H_
