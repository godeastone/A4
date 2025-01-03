// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_TYPES_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_TYPES_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/quota/quota_types.mojom-shared-internal.h"

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

enum class StorageType : int32_t {
  kTemporary,
  kPersistent,
  kSyncable,
  kQuotaNotManaged,
  kUnknown,
  kMinValue = 0,
  kMaxValue = 4,
};

inline std::ostream& operator<<(std::ostream& os, StorageType value) {
  switch(value) {
    case StorageType::kTemporary:
      return os << "StorageType::kTemporary";
    case StorageType::kPersistent:
      return os << "StorageType::kPersistent";
    case StorageType::kSyncable:
      return os << "StorageType::kSyncable";
    case StorageType::kQuotaNotManaged:
      return os << "StorageType::kQuotaNotManaged";
    case StorageType::kUnknown:
      return os << "StorageType::kUnknown";
    default:
      return os << "Unknown StorageType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(StorageType value) {
  return internal::StorageType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class QuotaStatusCode : int32_t {
  kOk = 0,
  kErrorNotSupported = 7,
  kErrorInvalidModification = 11,
  kErrorInvalidAccess = 13,
  kErrorAbort = 17,
  kUnknown = -1,
  kMinValue = -1,
  kMaxValue = 17,
};

inline std::ostream& operator<<(std::ostream& os, QuotaStatusCode value) {
  switch(value) {
    case QuotaStatusCode::kUnknown:
      return os << "QuotaStatusCode::kUnknown";
    case QuotaStatusCode::kOk:
      return os << "QuotaStatusCode::kOk";
    case QuotaStatusCode::kErrorNotSupported:
      return os << "QuotaStatusCode::kErrorNotSupported";
    case QuotaStatusCode::kErrorInvalidModification:
      return os << "QuotaStatusCode::kErrorInvalidModification";
    case QuotaStatusCode::kErrorInvalidAccess:
      return os << "QuotaStatusCode::kErrorInvalidAccess";
    case QuotaStatusCode::kErrorAbort:
      return os << "QuotaStatusCode::kErrorAbort";
    default:
      return os << "Unknown QuotaStatusCode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(QuotaStatusCode value) {
  return internal::QuotaStatusCode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::StorageType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::StorageType> {};

template <>
struct hash<::blink::mojom::QuotaStatusCode>
    : public mojo::internal::EnumHashImpl<::blink::mojom::QuotaStatusCode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::StorageType, ::blink::mojom::StorageType> {
  static ::blink::mojom::StorageType ToMojom(::blink::mojom::StorageType input) { return input; }
  static bool FromMojom(::blink::mojom::StorageType input, ::blink::mojom::StorageType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::StorageType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::StorageType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::StorageType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::QuotaStatusCode, ::blink::mojom::QuotaStatusCode> {
  static ::blink::mojom::QuotaStatusCode ToMojom(::blink::mojom::QuotaStatusCode input) { return input; }
  static bool FromMojom(::blink::mojom::QuotaStatusCode input, ::blink::mojom::QuotaStatusCode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::QuotaStatusCode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::QuotaStatusCode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::QuotaStatusCode>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_TYPES_MOJOM_SHARED_H_
