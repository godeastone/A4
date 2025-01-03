// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_CORS_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_CORS_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/cors.mojom-shared-internal.h"

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

enum class CORSPreflightPolicy : int32_t {
  kConsiderPreflight,
  kPreventPreflight,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, CORSPreflightPolicy value) {
  switch(value) {
    case CORSPreflightPolicy::kConsiderPreflight:
      return os << "CORSPreflightPolicy::kConsiderPreflight";
    case CORSPreflightPolicy::kPreventPreflight:
      return os << "CORSPreflightPolicy::kPreventPreflight";
    default:
      return os << "Unknown CORSPreflightPolicy value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CORSPreflightPolicy value) {
  return internal::CORSPreflightPolicy_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class CORSError : int32_t {
  kDisallowedByMode,
  kInvalidResponse,
  kWildcardOriginNotAllowed,
  kMissingAllowOriginHeader,
  kMultipleAllowOriginValues,
  kInvalidAllowOriginValue,
  kAllowOriginMismatch,
  kInvalidAllowCredentials,
  kPreflightInvalidStatus,
  kPreflightDisallowedRedirect,
  kPreflightWildcardOriginNotAllowed,
  kPreflightMissingAllowOriginHeader,
  kPreflightMultipleAllowOriginValues,
  kPreflightInvalidAllowOriginValue,
  kPreflightAllowOriginMismatch,
  kPreflightInvalidAllowCredentials,
  kPreflightMissingAllowExternal,
  kPreflightInvalidAllowExternal,
  kInvalidAllowMethodsPreflightResponse,
  kInvalidAllowHeadersPreflightResponse,
  kMethodDisallowedByPreflightResponse,
  kHeaderDisallowedByPreflightResponse,
  kRedirectDisallowedScheme,
  kRedirectContainsCredentials,
  kMinValue = 0,
  kMaxValue = 23,
};

inline std::ostream& operator<<(std::ostream& os, CORSError value) {
  switch(value) {
    case CORSError::kDisallowedByMode:
      return os << "CORSError::kDisallowedByMode";
    case CORSError::kInvalidResponse:
      return os << "CORSError::kInvalidResponse";
    case CORSError::kWildcardOriginNotAllowed:
      return os << "CORSError::kWildcardOriginNotAllowed";
    case CORSError::kMissingAllowOriginHeader:
      return os << "CORSError::kMissingAllowOriginHeader";
    case CORSError::kMultipleAllowOriginValues:
      return os << "CORSError::kMultipleAllowOriginValues";
    case CORSError::kInvalidAllowOriginValue:
      return os << "CORSError::kInvalidAllowOriginValue";
    case CORSError::kAllowOriginMismatch:
      return os << "CORSError::kAllowOriginMismatch";
    case CORSError::kInvalidAllowCredentials:
      return os << "CORSError::kInvalidAllowCredentials";
    case CORSError::kPreflightInvalidStatus:
      return os << "CORSError::kPreflightInvalidStatus";
    case CORSError::kPreflightDisallowedRedirect:
      return os << "CORSError::kPreflightDisallowedRedirect";
    case CORSError::kPreflightWildcardOriginNotAllowed:
      return os << "CORSError::kPreflightWildcardOriginNotAllowed";
    case CORSError::kPreflightMissingAllowOriginHeader:
      return os << "CORSError::kPreflightMissingAllowOriginHeader";
    case CORSError::kPreflightMultipleAllowOriginValues:
      return os << "CORSError::kPreflightMultipleAllowOriginValues";
    case CORSError::kPreflightInvalidAllowOriginValue:
      return os << "CORSError::kPreflightInvalidAllowOriginValue";
    case CORSError::kPreflightAllowOriginMismatch:
      return os << "CORSError::kPreflightAllowOriginMismatch";
    case CORSError::kPreflightInvalidAllowCredentials:
      return os << "CORSError::kPreflightInvalidAllowCredentials";
    case CORSError::kPreflightMissingAllowExternal:
      return os << "CORSError::kPreflightMissingAllowExternal";
    case CORSError::kPreflightInvalidAllowExternal:
      return os << "CORSError::kPreflightInvalidAllowExternal";
    case CORSError::kInvalidAllowMethodsPreflightResponse:
      return os << "CORSError::kInvalidAllowMethodsPreflightResponse";
    case CORSError::kInvalidAllowHeadersPreflightResponse:
      return os << "CORSError::kInvalidAllowHeadersPreflightResponse";
    case CORSError::kMethodDisallowedByPreflightResponse:
      return os << "CORSError::kMethodDisallowedByPreflightResponse";
    case CORSError::kHeaderDisallowedByPreflightResponse:
      return os << "CORSError::kHeaderDisallowedByPreflightResponse";
    case CORSError::kRedirectDisallowedScheme:
      return os << "CORSError::kRedirectDisallowedScheme";
    case CORSError::kRedirectContainsCredentials:
      return os << "CORSError::kRedirectContainsCredentials";
    default:
      return os << "Unknown CORSError value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CORSError value) {
  return internal::CORSError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::CORSPreflightPolicy>
    : public mojo::internal::EnumHashImpl<::network::mojom::CORSPreflightPolicy> {};

template <>
struct hash<::network::mojom::CORSError>
    : public mojo::internal::EnumHashImpl<::network::mojom::CORSError> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::network::mojom::CORSPreflightPolicy, ::network::mojom::CORSPreflightPolicy> {
  static ::network::mojom::CORSPreflightPolicy ToMojom(::network::mojom::CORSPreflightPolicy input) { return input; }
  static bool FromMojom(::network::mojom::CORSPreflightPolicy input, ::network::mojom::CORSPreflightPolicy* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CORSPreflightPolicy, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::CORSPreflightPolicy, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::CORSPreflightPolicy>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::network::mojom::CORSError, ::network::mojom::CORSError> {
  static ::network::mojom::CORSError ToMojom(::network::mojom::CORSError input) { return input; }
  static bool FromMojom(::network::mojom::CORSError input, ::network::mojom::CORSError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CORSError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::CORSError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::CORSError>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {


}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_CORS_MOJOM_SHARED_H_
