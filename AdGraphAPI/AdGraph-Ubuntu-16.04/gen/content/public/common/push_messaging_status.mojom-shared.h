// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_PUSH_MESSAGING_STATUS_MOJOM_SHARED_H_
#define CONTENT_PUBLIC_COMMON_PUSH_MESSAGING_STATUS_MOJOM_SHARED_H_

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
#include "content/public/common/push_messaging_status.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {


}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {

enum class PushDeliveryStatus : int32_t {
  SUCCESS = 0,
  UNKNOWN_APP_ID = 2,
  PERMISSION_DENIED = 3,
  NO_SERVICE_WORKER = 4,
  SERVICE_WORKER_ERROR = 5,
  EVENT_WAITUNTIL_REJECTED = 6,
  TIMEOUT = 7,
  kMinValue = 0,
  kMaxValue = 7,
};

inline std::ostream& operator<<(std::ostream& os, PushDeliveryStatus value) {
  switch(value) {
    case PushDeliveryStatus::SUCCESS:
      return os << "PushDeliveryStatus::SUCCESS";
    case PushDeliveryStatus::UNKNOWN_APP_ID:
      return os << "PushDeliveryStatus::UNKNOWN_APP_ID";
    case PushDeliveryStatus::PERMISSION_DENIED:
      return os << "PushDeliveryStatus::PERMISSION_DENIED";
    case PushDeliveryStatus::NO_SERVICE_WORKER:
      return os << "PushDeliveryStatus::NO_SERVICE_WORKER";
    case PushDeliveryStatus::SERVICE_WORKER_ERROR:
      return os << "PushDeliveryStatus::SERVICE_WORKER_ERROR";
    case PushDeliveryStatus::EVENT_WAITUNTIL_REJECTED:
      return os << "PushDeliveryStatus::EVENT_WAITUNTIL_REJECTED";
    case PushDeliveryStatus::TIMEOUT:
      return os << "PushDeliveryStatus::TIMEOUT";
    default:
      return os << "Unknown PushDeliveryStatus value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PushDeliveryStatus value) {
  return internal::PushDeliveryStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class PushGetRegistrationStatus : int32_t {
  SUCCESS = 0,
  SERVICE_NOT_AVAILABLE = 1,
  STORAGE_ERROR = 2,
  REGISTRATION_NOT_FOUND = 3,
  INCOGNITO_REGISTRATION_NOT_FOUND = 4,
  STORAGE_CORRUPT = 6,
  RENDERER_SHUTDOWN = 7,
  NO_LIVE_SERVICE_WORKER = 8,
  kMinValue = 0,
  kMaxValue = 8,
};

inline std::ostream& operator<<(std::ostream& os, PushGetRegistrationStatus value) {
  switch(value) {
    case PushGetRegistrationStatus::SUCCESS:
      return os << "PushGetRegistrationStatus::SUCCESS";
    case PushGetRegistrationStatus::SERVICE_NOT_AVAILABLE:
      return os << "PushGetRegistrationStatus::SERVICE_NOT_AVAILABLE";
    case PushGetRegistrationStatus::STORAGE_ERROR:
      return os << "PushGetRegistrationStatus::STORAGE_ERROR";
    case PushGetRegistrationStatus::REGISTRATION_NOT_FOUND:
      return os << "PushGetRegistrationStatus::REGISTRATION_NOT_FOUND";
    case PushGetRegistrationStatus::INCOGNITO_REGISTRATION_NOT_FOUND:
      return os << "PushGetRegistrationStatus::INCOGNITO_REGISTRATION_NOT_FOUND";
    case PushGetRegistrationStatus::STORAGE_CORRUPT:
      return os << "PushGetRegistrationStatus::STORAGE_CORRUPT";
    case PushGetRegistrationStatus::RENDERER_SHUTDOWN:
      return os << "PushGetRegistrationStatus::RENDERER_SHUTDOWN";
    case PushGetRegistrationStatus::NO_LIVE_SERVICE_WORKER:
      return os << "PushGetRegistrationStatus::NO_LIVE_SERVICE_WORKER";
    default:
      return os << "Unknown PushGetRegistrationStatus value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PushGetRegistrationStatus value) {
  return internal::PushGetRegistrationStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class PushRegistrationStatus : int32_t {
  SUCCESS_FROM_PUSH_SERVICE = 0,
  NO_SERVICE_WORKER = 1,
  SERVICE_NOT_AVAILABLE = 2,
  LIMIT_REACHED = 3,
  PERMISSION_DENIED = 4,
  SERVICE_ERROR = 5,
  NO_SENDER_ID = 6,
  STORAGE_ERROR = 7,
  SUCCESS_FROM_CACHE = 8,
  NETWORK_ERROR = 9,
  INCOGNITO_PERMISSION_DENIED = 10,
  PUBLIC_KEY_UNAVAILABLE = 11,
  MANIFEST_EMPTY_OR_MISSING = 12,
  SENDER_ID_MISMATCH = 13,
  STORAGE_CORRUPT = 14,
  RENDERER_SHUTDOWN = 15,
  SUCCESS_NEW_SUBSCRIPTION_FROM_PUSH_SERVICE = 16,
  kMinValue = 0,
  kMaxValue = 16,
};

inline std::ostream& operator<<(std::ostream& os, PushRegistrationStatus value) {
  switch(value) {
    case PushRegistrationStatus::SUCCESS_FROM_PUSH_SERVICE:
      return os << "PushRegistrationStatus::SUCCESS_FROM_PUSH_SERVICE";
    case PushRegistrationStatus::NO_SERVICE_WORKER:
      return os << "PushRegistrationStatus::NO_SERVICE_WORKER";
    case PushRegistrationStatus::SERVICE_NOT_AVAILABLE:
      return os << "PushRegistrationStatus::SERVICE_NOT_AVAILABLE";
    case PushRegistrationStatus::LIMIT_REACHED:
      return os << "PushRegistrationStatus::LIMIT_REACHED";
    case PushRegistrationStatus::PERMISSION_DENIED:
      return os << "PushRegistrationStatus::PERMISSION_DENIED";
    case PushRegistrationStatus::SERVICE_ERROR:
      return os << "PushRegistrationStatus::SERVICE_ERROR";
    case PushRegistrationStatus::NO_SENDER_ID:
      return os << "PushRegistrationStatus::NO_SENDER_ID";
    case PushRegistrationStatus::STORAGE_ERROR:
      return os << "PushRegistrationStatus::STORAGE_ERROR";
    case PushRegistrationStatus::SUCCESS_FROM_CACHE:
      return os << "PushRegistrationStatus::SUCCESS_FROM_CACHE";
    case PushRegistrationStatus::NETWORK_ERROR:
      return os << "PushRegistrationStatus::NETWORK_ERROR";
    case PushRegistrationStatus::INCOGNITO_PERMISSION_DENIED:
      return os << "PushRegistrationStatus::INCOGNITO_PERMISSION_DENIED";
    case PushRegistrationStatus::PUBLIC_KEY_UNAVAILABLE:
      return os << "PushRegistrationStatus::PUBLIC_KEY_UNAVAILABLE";
    case PushRegistrationStatus::MANIFEST_EMPTY_OR_MISSING:
      return os << "PushRegistrationStatus::MANIFEST_EMPTY_OR_MISSING";
    case PushRegistrationStatus::SENDER_ID_MISMATCH:
      return os << "PushRegistrationStatus::SENDER_ID_MISMATCH";
    case PushRegistrationStatus::STORAGE_CORRUPT:
      return os << "PushRegistrationStatus::STORAGE_CORRUPT";
    case PushRegistrationStatus::RENDERER_SHUTDOWN:
      return os << "PushRegistrationStatus::RENDERER_SHUTDOWN";
    case PushRegistrationStatus::SUCCESS_NEW_SUBSCRIPTION_FROM_PUSH_SERVICE:
      return os << "PushRegistrationStatus::SUCCESS_NEW_SUBSCRIPTION_FROM_PUSH_SERVICE";
    default:
      return os << "Unknown PushRegistrationStatus value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PushRegistrationStatus value) {
  return internal::PushRegistrationStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class PushUnregistrationReason : int32_t {
  UNKNOWN = 0,
  JAVASCRIPT_API = 1,
  PERMISSION_REVOKED = 2,
  DELIVERY_UNKNOWN_APP_ID = 3,
  DELIVERY_PERMISSION_DENIED = 4,
  DELIVERY_NO_SERVICE_WORKER = 5,
  GCM_STORE_RESET = 6,
  SERVICE_WORKER_UNREGISTERED = 7,
  SUBSCRIBE_STORAGE_CORRUPT = 8,
  GET_SUBSCRIPTION_STORAGE_CORRUPT = 9,
  SERVICE_WORKER_DATABASE_WIPED = 10,
  kMinValue = 0,
  kMaxValue = 10,
};

inline std::ostream& operator<<(std::ostream& os, PushUnregistrationReason value) {
  switch(value) {
    case PushUnregistrationReason::UNKNOWN:
      return os << "PushUnregistrationReason::UNKNOWN";
    case PushUnregistrationReason::JAVASCRIPT_API:
      return os << "PushUnregistrationReason::JAVASCRIPT_API";
    case PushUnregistrationReason::PERMISSION_REVOKED:
      return os << "PushUnregistrationReason::PERMISSION_REVOKED";
    case PushUnregistrationReason::DELIVERY_UNKNOWN_APP_ID:
      return os << "PushUnregistrationReason::DELIVERY_UNKNOWN_APP_ID";
    case PushUnregistrationReason::DELIVERY_PERMISSION_DENIED:
      return os << "PushUnregistrationReason::DELIVERY_PERMISSION_DENIED";
    case PushUnregistrationReason::DELIVERY_NO_SERVICE_WORKER:
      return os << "PushUnregistrationReason::DELIVERY_NO_SERVICE_WORKER";
    case PushUnregistrationReason::GCM_STORE_RESET:
      return os << "PushUnregistrationReason::GCM_STORE_RESET";
    case PushUnregistrationReason::SERVICE_WORKER_UNREGISTERED:
      return os << "PushUnregistrationReason::SERVICE_WORKER_UNREGISTERED";
    case PushUnregistrationReason::SUBSCRIBE_STORAGE_CORRUPT:
      return os << "PushUnregistrationReason::SUBSCRIBE_STORAGE_CORRUPT";
    case PushUnregistrationReason::GET_SUBSCRIPTION_STORAGE_CORRUPT:
      return os << "PushUnregistrationReason::GET_SUBSCRIPTION_STORAGE_CORRUPT";
    case PushUnregistrationReason::SERVICE_WORKER_DATABASE_WIPED:
      return os << "PushUnregistrationReason::SERVICE_WORKER_DATABASE_WIPED";
    default:
      return os << "Unknown PushUnregistrationReason value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PushUnregistrationReason value) {
  return internal::PushUnregistrationReason_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class PushUnregistrationStatus : int32_t {
  SUCCESS_UNREGISTERED = 0,
  SUCCESS_WAS_NOT_REGISTERED = 1,
  PENDING_NETWORK_ERROR = 2,
  NO_SERVICE_WORKER = 3,
  SERVICE_NOT_AVAILABLE = 4,
  PENDING_SERVICE_ERROR = 5,
  STORAGE_ERROR = 6,
  NETWORK_ERROR = 7,
  kMinValue = 0,
  kMaxValue = 7,
};

inline std::ostream& operator<<(std::ostream& os, PushUnregistrationStatus value) {
  switch(value) {
    case PushUnregistrationStatus::SUCCESS_UNREGISTERED:
      return os << "PushUnregistrationStatus::SUCCESS_UNREGISTERED";
    case PushUnregistrationStatus::SUCCESS_WAS_NOT_REGISTERED:
      return os << "PushUnregistrationStatus::SUCCESS_WAS_NOT_REGISTERED";
    case PushUnregistrationStatus::PENDING_NETWORK_ERROR:
      return os << "PushUnregistrationStatus::PENDING_NETWORK_ERROR";
    case PushUnregistrationStatus::NO_SERVICE_WORKER:
      return os << "PushUnregistrationStatus::NO_SERVICE_WORKER";
    case PushUnregistrationStatus::SERVICE_NOT_AVAILABLE:
      return os << "PushUnregistrationStatus::SERVICE_NOT_AVAILABLE";
    case PushUnregistrationStatus::PENDING_SERVICE_ERROR:
      return os << "PushUnregistrationStatus::PENDING_SERVICE_ERROR";
    case PushUnregistrationStatus::STORAGE_ERROR:
      return os << "PushUnregistrationStatus::STORAGE_ERROR";
    case PushUnregistrationStatus::NETWORK_ERROR:
      return os << "PushUnregistrationStatus::NETWORK_ERROR";
    default:
      return os << "Unknown PushUnregistrationStatus value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PushUnregistrationStatus value) {
  return internal::PushUnregistrationStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class PushUserVisibleStatus : int32_t {
  REQUIRED_AND_SHOWN = 0,
  NOT_REQUIRED_BUT_SHOWN = 1,
  NOT_REQUIRED_AND_NOT_SHOWN = 2,
  REQUIRED_BUT_NOT_SHOWN_USED_GRACE = 3,
  REQUIRED_BUT_NOT_SHOWN_GRACE_EXCEEDED = 4,
  kMinValue = 0,
  kMaxValue = 4,
};

inline std::ostream& operator<<(std::ostream& os, PushUserVisibleStatus value) {
  switch(value) {
    case PushUserVisibleStatus::REQUIRED_AND_SHOWN:
      return os << "PushUserVisibleStatus::REQUIRED_AND_SHOWN";
    case PushUserVisibleStatus::NOT_REQUIRED_BUT_SHOWN:
      return os << "PushUserVisibleStatus::NOT_REQUIRED_BUT_SHOWN";
    case PushUserVisibleStatus::NOT_REQUIRED_AND_NOT_SHOWN:
      return os << "PushUserVisibleStatus::NOT_REQUIRED_AND_NOT_SHOWN";
    case PushUserVisibleStatus::REQUIRED_BUT_NOT_SHOWN_USED_GRACE:
      return os << "PushUserVisibleStatus::REQUIRED_BUT_NOT_SHOWN_USED_GRACE";
    case PushUserVisibleStatus::REQUIRED_BUT_NOT_SHOWN_GRACE_EXCEEDED:
      return os << "PushUserVisibleStatus::REQUIRED_BUT_NOT_SHOWN_GRACE_EXCEEDED";
    default:
      return os << "Unknown PushUserVisibleStatus value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PushUserVisibleStatus value) {
  return internal::PushUserVisibleStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace content

namespace std {

template <>
struct hash<::content::mojom::PushDeliveryStatus>
    : public mojo::internal::EnumHashImpl<::content::mojom::PushDeliveryStatus> {};

template <>
struct hash<::content::mojom::PushGetRegistrationStatus>
    : public mojo::internal::EnumHashImpl<::content::mojom::PushGetRegistrationStatus> {};

template <>
struct hash<::content::mojom::PushRegistrationStatus>
    : public mojo::internal::EnumHashImpl<::content::mojom::PushRegistrationStatus> {};

template <>
struct hash<::content::mojom::PushUnregistrationReason>
    : public mojo::internal::EnumHashImpl<::content::mojom::PushUnregistrationReason> {};

template <>
struct hash<::content::mojom::PushUnregistrationStatus>
    : public mojo::internal::EnumHashImpl<::content::mojom::PushUnregistrationStatus> {};

template <>
struct hash<::content::mojom::PushUserVisibleStatus>
    : public mojo::internal::EnumHashImpl<::content::mojom::PushUserVisibleStatus> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::content::mojom::PushDeliveryStatus, ::content::mojom::PushDeliveryStatus> {
  static ::content::mojom::PushDeliveryStatus ToMojom(::content::mojom::PushDeliveryStatus input) { return input; }
  static bool FromMojom(::content::mojom::PushDeliveryStatus input, ::content::mojom::PushDeliveryStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::PushDeliveryStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::content::mojom::PushDeliveryStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::content::mojom::PushDeliveryStatus>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::content::mojom::PushGetRegistrationStatus, ::content::mojom::PushGetRegistrationStatus> {
  static ::content::mojom::PushGetRegistrationStatus ToMojom(::content::mojom::PushGetRegistrationStatus input) { return input; }
  static bool FromMojom(::content::mojom::PushGetRegistrationStatus input, ::content::mojom::PushGetRegistrationStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::PushGetRegistrationStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::content::mojom::PushGetRegistrationStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::content::mojom::PushGetRegistrationStatus>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::content::mojom::PushRegistrationStatus, ::content::mojom::PushRegistrationStatus> {
  static ::content::mojom::PushRegistrationStatus ToMojom(::content::mojom::PushRegistrationStatus input) { return input; }
  static bool FromMojom(::content::mojom::PushRegistrationStatus input, ::content::mojom::PushRegistrationStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::PushRegistrationStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::content::mojom::PushRegistrationStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::content::mojom::PushRegistrationStatus>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::content::mojom::PushUnregistrationReason, ::content::mojom::PushUnregistrationReason> {
  static ::content::mojom::PushUnregistrationReason ToMojom(::content::mojom::PushUnregistrationReason input) { return input; }
  static bool FromMojom(::content::mojom::PushUnregistrationReason input, ::content::mojom::PushUnregistrationReason* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::PushUnregistrationReason, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::content::mojom::PushUnregistrationReason, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::content::mojom::PushUnregistrationReason>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::content::mojom::PushUnregistrationStatus, ::content::mojom::PushUnregistrationStatus> {
  static ::content::mojom::PushUnregistrationStatus ToMojom(::content::mojom::PushUnregistrationStatus input) { return input; }
  static bool FromMojom(::content::mojom::PushUnregistrationStatus input, ::content::mojom::PushUnregistrationStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::PushUnregistrationStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::content::mojom::PushUnregistrationStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::content::mojom::PushUnregistrationStatus>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::content::mojom::PushUserVisibleStatus, ::content::mojom::PushUserVisibleStatus> {
  static ::content::mojom::PushUserVisibleStatus ToMojom(::content::mojom::PushUserVisibleStatus input) { return input; }
  static bool FromMojom(::content::mojom::PushUserVisibleStatus input, ::content::mojom::PushUserVisibleStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::PushUserVisibleStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::content::mojom::PushUserVisibleStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::content::mojom::PushUserVisibleStatus>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content {
namespace mojom {


}  // namespace mojom
}  // namespace content

#endif  // CONTENT_PUBLIC_COMMON_PUSH_MESSAGING_STATUS_MOJOM_SHARED_H_
