// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef NET_INTERFACES_ADDRESS_FAMILY_MOJOM_SHARED_H_
#define NET_INTERFACES_ADDRESS_FAMILY_MOJOM_SHARED_H_

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
#include "net/interfaces/address_family.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace net {
namespace interfaces {


}  // namespace interfaces
}  // namespace net

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace net {
namespace interfaces {

enum class AddressFamily : int32_t {
  UNSPECIFIED,
  IPV4,
  IPV6,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, AddressFamily value) {
  switch(value) {
    case AddressFamily::UNSPECIFIED:
      return os << "AddressFamily::UNSPECIFIED";
    case AddressFamily::IPV4:
      return os << "AddressFamily::IPV4";
    case AddressFamily::IPV6:
      return os << "AddressFamily::IPV6";
    default:
      return os << "Unknown AddressFamily value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(AddressFamily value) {
  return internal::AddressFamily_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace interfaces
}  // namespace net

namespace std {

template <>
struct hash<::net::interfaces::AddressFamily>
    : public mojo::internal::EnumHashImpl<::net::interfaces::AddressFamily> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::net::interfaces::AddressFamily, ::net::interfaces::AddressFamily> {
  static ::net::interfaces::AddressFamily ToMojom(::net::interfaces::AddressFamily input) { return input; }
  static bool FromMojom(::net::interfaces::AddressFamily input, ::net::interfaces::AddressFamily* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::net::interfaces::AddressFamily, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::net::interfaces::AddressFamily, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::net::interfaces::AddressFamily>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace net {
namespace interfaces {


}  // namespace interfaces
}  // namespace net

#endif  // NET_INTERFACES_ADDRESS_FAMILY_MOJOM_SHARED_H_
