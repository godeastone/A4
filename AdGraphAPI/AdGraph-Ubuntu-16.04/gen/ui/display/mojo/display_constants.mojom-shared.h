// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_DISPLAY_MOJO_DISPLAY_CONSTANTS_MOJOM_SHARED_H_
#define UI_DISPLAY_MOJO_DISPLAY_CONSTANTS_MOJOM_SHARED_H_

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
#include "ui/display/mojo/display_constants.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace display {
namespace mojom {


}  // namespace mojom
}  // namespace display

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace display {
namespace mojom {

enum class DisplayConnectionType : int32_t {
  DISPLAY_CONNECTION_TYPE_NONE = 0,
  DISPLAY_CONNECTION_TYPE_UNKNOWN = 1,
  DISPLAY_CONNECTION_TYPE_INTERNAL = 2,
  DISPLAY_CONNECTION_TYPE_VGA = 4,
  DISPLAY_CONNECTION_TYPE_HDMI = 8,
  DISPLAY_CONNECTION_TYPE_DVI = 16,
  DISPLAY_CONNECTION_TYPE_DISPLAYPORT = 32,
  DISPLAY_CONNECTION_TYPE_NETWORK = 64,
  kMinValue = 0,
  kMaxValue = 64,
};

inline std::ostream& operator<<(std::ostream& os, DisplayConnectionType value) {
  switch(value) {
    case DisplayConnectionType::DISPLAY_CONNECTION_TYPE_NONE:
      return os << "DisplayConnectionType::DISPLAY_CONNECTION_TYPE_NONE";
    case DisplayConnectionType::DISPLAY_CONNECTION_TYPE_UNKNOWN:
      return os << "DisplayConnectionType::DISPLAY_CONNECTION_TYPE_UNKNOWN";
    case DisplayConnectionType::DISPLAY_CONNECTION_TYPE_INTERNAL:
      return os << "DisplayConnectionType::DISPLAY_CONNECTION_TYPE_INTERNAL";
    case DisplayConnectionType::DISPLAY_CONNECTION_TYPE_VGA:
      return os << "DisplayConnectionType::DISPLAY_CONNECTION_TYPE_VGA";
    case DisplayConnectionType::DISPLAY_CONNECTION_TYPE_HDMI:
      return os << "DisplayConnectionType::DISPLAY_CONNECTION_TYPE_HDMI";
    case DisplayConnectionType::DISPLAY_CONNECTION_TYPE_DVI:
      return os << "DisplayConnectionType::DISPLAY_CONNECTION_TYPE_DVI";
    case DisplayConnectionType::DISPLAY_CONNECTION_TYPE_DISPLAYPORT:
      return os << "DisplayConnectionType::DISPLAY_CONNECTION_TYPE_DISPLAYPORT";
    case DisplayConnectionType::DISPLAY_CONNECTION_TYPE_NETWORK:
      return os << "DisplayConnectionType::DISPLAY_CONNECTION_TYPE_NETWORK";
    default:
      return os << "Unknown DisplayConnectionType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(DisplayConnectionType value) {
  return internal::DisplayConnectionType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class HDCPState : int32_t {
  HDCP_STATE_UNDESIRED,
  HDCP_STATE_DESIRED,
  HDCP_STATE_ENABLED,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, HDCPState value) {
  switch(value) {
    case HDCPState::HDCP_STATE_UNDESIRED:
      return os << "HDCPState::HDCP_STATE_UNDESIRED";
    case HDCPState::HDCP_STATE_DESIRED:
      return os << "HDCPState::HDCP_STATE_DESIRED";
    case HDCPState::HDCP_STATE_ENABLED:
      return os << "HDCPState::HDCP_STATE_ENABLED";
    default:
      return os << "Unknown HDCPState value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(HDCPState value) {
  return internal::HDCPState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace display

namespace std {

template <>
struct hash<::display::mojom::DisplayConnectionType>
    : public mojo::internal::EnumHashImpl<::display::mojom::DisplayConnectionType> {};

template <>
struct hash<::display::mojom::HDCPState>
    : public mojo::internal::EnumHashImpl<::display::mojom::HDCPState> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::display::mojom::DisplayConnectionType, ::display::mojom::DisplayConnectionType> {
  static ::display::mojom::DisplayConnectionType ToMojom(::display::mojom::DisplayConnectionType input) { return input; }
  static bool FromMojom(::display::mojom::DisplayConnectionType input, ::display::mojom::DisplayConnectionType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::display::mojom::DisplayConnectionType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::display::mojom::DisplayConnectionType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::display::mojom::DisplayConnectionType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::display::mojom::HDCPState, ::display::mojom::HDCPState> {
  static ::display::mojom::HDCPState ToMojom(::display::mojom::HDCPState input) { return input; }
  static bool FromMojom(::display::mojom::HDCPState input, ::display::mojom::HDCPState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::display::mojom::HDCPState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::display::mojom::HDCPState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::display::mojom::HDCPState>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace display {
namespace mojom {


}  // namespace mojom
}  // namespace display

#endif  // UI_DISPLAY_MOJO_DISPLAY_CONSTANTS_MOJOM_SHARED_H_
