// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_FETCH_API_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_FETCH_API_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/fetch_api.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace network {
namespace mojom {


}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {

enum class FetchRequestMode : int32_t {
  kSameOrigin,
  kNoCORS,
  kCORS,
  kCORSWithForcedPreflight,
  kNavigate,
  kMinValue = 0,
  kMaxValue = 4,
};

inline std::ostream& operator<<(std::ostream& os, FetchRequestMode value) {
  switch(value) {
    case FetchRequestMode::kSameOrigin:
      return os << "FetchRequestMode::kSameOrigin";
    case FetchRequestMode::kNoCORS:
      return os << "FetchRequestMode::kNoCORS";
    case FetchRequestMode::kCORS:
      return os << "FetchRequestMode::kCORS";
    case FetchRequestMode::kCORSWithForcedPreflight:
      return os << "FetchRequestMode::kCORSWithForcedPreflight";
    case FetchRequestMode::kNavigate:
      return os << "FetchRequestMode::kNavigate";
    default:
      return os << "Unknown FetchRequestMode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(FetchRequestMode value) {
  return internal::FetchRequestMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class FetchRedirectMode : int32_t {
  kFollow,
  kError,
  kManual,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, FetchRedirectMode value) {
  switch(value) {
    case FetchRedirectMode::kFollow:
      return os << "FetchRedirectMode::kFollow";
    case FetchRedirectMode::kError:
      return os << "FetchRedirectMode::kError";
    case FetchRedirectMode::kManual:
      return os << "FetchRedirectMode::kManual";
    default:
      return os << "Unknown FetchRedirectMode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(FetchRedirectMode value) {
  return internal::FetchRedirectMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class FetchCredentialsMode : int32_t {
  kOmit,
  kSameOrigin,
  kInclude,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, FetchCredentialsMode value) {
  switch(value) {
    case FetchCredentialsMode::kOmit:
      return os << "FetchCredentialsMode::kOmit";
    case FetchCredentialsMode::kSameOrigin:
      return os << "FetchCredentialsMode::kSameOrigin";
    case FetchCredentialsMode::kInclude:
      return os << "FetchCredentialsMode::kInclude";
    default:
      return os << "Unknown FetchCredentialsMode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(FetchCredentialsMode value) {
  return internal::FetchCredentialsMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class FetchResponseType : int32_t {
  kBasic,
  kCORS,
  kDefault,
  kError,
  kOpaque,
  kOpaqueRedirect,
  kMinValue = 0,
  kMaxValue = 5,
};

inline std::ostream& operator<<(std::ostream& os, FetchResponseType value) {
  switch(value) {
    case FetchResponseType::kBasic:
      return os << "FetchResponseType::kBasic";
    case FetchResponseType::kCORS:
      return os << "FetchResponseType::kCORS";
    case FetchResponseType::kDefault:
      return os << "FetchResponseType::kDefault";
    case FetchResponseType::kError:
      return os << "FetchResponseType::kError";
    case FetchResponseType::kOpaque:
      return os << "FetchResponseType::kOpaque";
    case FetchResponseType::kOpaqueRedirect:
      return os << "FetchResponseType::kOpaqueRedirect";
    default:
      return os << "Unknown FetchResponseType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(FetchResponseType value) {
  return internal::FetchResponseType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::FetchRequestMode>
    : public mojo::internal::EnumHashImpl<::network::mojom::FetchRequestMode> {};

template <>
struct hash<::network::mojom::FetchRedirectMode>
    : public mojo::internal::EnumHashImpl<::network::mojom::FetchRedirectMode> {};

template <>
struct hash<::network::mojom::FetchCredentialsMode>
    : public mojo::internal::EnumHashImpl<::network::mojom::FetchCredentialsMode> {};

template <>
struct hash<::network::mojom::FetchResponseType>
    : public mojo::internal::EnumHashImpl<::network::mojom::FetchResponseType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::network::mojom::FetchRequestMode, ::network::mojom::FetchRequestMode> {
  static ::network::mojom::FetchRequestMode ToMojom(::network::mojom::FetchRequestMode input) { return input; }
  static bool FromMojom(::network::mojom::FetchRequestMode input, ::network::mojom::FetchRequestMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::FetchRequestMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::FetchRequestMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::FetchRequestMode>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::network::mojom::FetchRedirectMode, ::network::mojom::FetchRedirectMode> {
  static ::network::mojom::FetchRedirectMode ToMojom(::network::mojom::FetchRedirectMode input) { return input; }
  static bool FromMojom(::network::mojom::FetchRedirectMode input, ::network::mojom::FetchRedirectMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::FetchRedirectMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::FetchRedirectMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::FetchRedirectMode>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::network::mojom::FetchCredentialsMode, ::network::mojom::FetchCredentialsMode> {
  static ::network::mojom::FetchCredentialsMode ToMojom(::network::mojom::FetchCredentialsMode input) { return input; }
  static bool FromMojom(::network::mojom::FetchCredentialsMode input, ::network::mojom::FetchCredentialsMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::FetchCredentialsMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::FetchCredentialsMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::FetchCredentialsMode>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::network::mojom::FetchResponseType, ::network::mojom::FetchResponseType> {
  static ::network::mojom::FetchResponseType ToMojom(::network::mojom::FetchResponseType input) { return input; }
  static bool FromMojom(::network::mojom::FetchResponseType input, ::network::mojom::FetchResponseType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::FetchResponseType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::FetchResponseType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::FetchResponseType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {


}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_FETCH_API_MOJOM_SHARED_H_
