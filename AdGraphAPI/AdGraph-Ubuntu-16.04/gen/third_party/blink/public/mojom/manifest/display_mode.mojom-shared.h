// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_DISPLAY_MODE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_DISPLAY_MODE_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/manifest/display_mode.mojom-shared-internal.h"

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

enum class DisplayMode : int32_t {
  UNDEFINED,
  BROWSER,
  MINIMAL_UI,
  STANDALONE,
  FULLSCREEN,
  kMinValue = 0,
  kMaxValue = 4,
};

inline std::ostream& operator<<(std::ostream& os, DisplayMode value) {
  switch(value) {
    case DisplayMode::UNDEFINED:
      return os << "DisplayMode::UNDEFINED";
    case DisplayMode::BROWSER:
      return os << "DisplayMode::BROWSER";
    case DisplayMode::MINIMAL_UI:
      return os << "DisplayMode::MINIMAL_UI";
    case DisplayMode::STANDALONE:
      return os << "DisplayMode::STANDALONE";
    case DisplayMode::FULLSCREEN:
      return os << "DisplayMode::FULLSCREEN";
    default:
      return os << "Unknown DisplayMode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(DisplayMode value) {
  return internal::DisplayMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::DisplayMode>
    : public mojo::internal::EnumHashImpl<::blink::mojom::DisplayMode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::DisplayMode, ::blink::mojom::DisplayMode> {
  static ::blink::mojom::DisplayMode ToMojom(::blink::mojom::DisplayMode input) { return input; }
  static bool FromMojom(::blink::mojom::DisplayMode input, ::blink::mojom::DisplayMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::DisplayMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::DisplayMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::DisplayMode>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_DISPLAY_MODE_MOJOM_SHARED_H_
