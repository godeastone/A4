// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_SIGNALS_MOJOM_SHARED_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_SIGNALS_MOJOM_SHARED_H_

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
#include "services/resource_coordinator/public/mojom/signals.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace resource_coordinator {
namespace mojom {


}  // namespace mojom
}  // namespace resource_coordinator

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace resource_coordinator {
namespace mojom {

enum class Event : int32_t {
  kTestEvent,
  kAlertFired,
  kFaviconUpdated,
  kNavigationCommitted,
  kNonPersistentNotificationCreated,
  kTitleUpdated,
  kProcessCPUUsageReady,
  kMinValue = 0,
  kMaxValue = 6,
};

inline std::ostream& operator<<(std::ostream& os, Event value) {
  switch(value) {
    case Event::kTestEvent:
      return os << "Event::kTestEvent";
    case Event::kAlertFired:
      return os << "Event::kAlertFired";
    case Event::kFaviconUpdated:
      return os << "Event::kFaviconUpdated";
    case Event::kNavigationCommitted:
      return os << "Event::kNavigationCommitted";
    case Event::kNonPersistentNotificationCreated:
      return os << "Event::kNonPersistentNotificationCreated";
    case Event::kTitleUpdated:
      return os << "Event::kTitleUpdated";
    case Event::kProcessCPUUsageReady:
      return os << "Event::kProcessCPUUsageReady";
    default:
      return os << "Unknown Event value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(Event value) {
  return internal::Event_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class PropertyType : int32_t {
  kTest,
  kAudible,
  kCPUUsage,
  kExpectedTaskQueueingDuration,
  kLaunchTime,
  kMainThreadTaskLoadIsLow,
  kNetworkAlmostIdle,
  kPID,
  kVisible,
  kUKMSourceId,
  kIsLoading,
  kLifecycleState,
  kMinValue = 0,
  kMaxValue = 11,
};

inline std::ostream& operator<<(std::ostream& os, PropertyType value) {
  switch(value) {
    case PropertyType::kTest:
      return os << "PropertyType::kTest";
    case PropertyType::kAudible:
      return os << "PropertyType::kAudible";
    case PropertyType::kCPUUsage:
      return os << "PropertyType::kCPUUsage";
    case PropertyType::kExpectedTaskQueueingDuration:
      return os << "PropertyType::kExpectedTaskQueueingDuration";
    case PropertyType::kLaunchTime:
      return os << "PropertyType::kLaunchTime";
    case PropertyType::kMainThreadTaskLoadIsLow:
      return os << "PropertyType::kMainThreadTaskLoadIsLow";
    case PropertyType::kNetworkAlmostIdle:
      return os << "PropertyType::kNetworkAlmostIdle";
    case PropertyType::kPID:
      return os << "PropertyType::kPID";
    case PropertyType::kVisible:
      return os << "PropertyType::kVisible";
    case PropertyType::kUKMSourceId:
      return os << "PropertyType::kUKMSourceId";
    case PropertyType::kIsLoading:
      return os << "PropertyType::kIsLoading";
    case PropertyType::kLifecycleState:
      return os << "PropertyType::kLifecycleState";
    default:
      return os << "Unknown PropertyType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PropertyType value) {
  return internal::PropertyType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace resource_coordinator

namespace std {

template <>
struct hash<::resource_coordinator::mojom::Event>
    : public mojo::internal::EnumHashImpl<::resource_coordinator::mojom::Event> {};

template <>
struct hash<::resource_coordinator::mojom::PropertyType>
    : public mojo::internal::EnumHashImpl<::resource_coordinator::mojom::PropertyType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::resource_coordinator::mojom::Event, ::resource_coordinator::mojom::Event> {
  static ::resource_coordinator::mojom::Event ToMojom(::resource_coordinator::mojom::Event input) { return input; }
  static bool FromMojom(::resource_coordinator::mojom::Event input, ::resource_coordinator::mojom::Event* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::resource_coordinator::mojom::Event, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::resource_coordinator::mojom::Event, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::resource_coordinator::mojom::Event>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::resource_coordinator::mojom::PropertyType, ::resource_coordinator::mojom::PropertyType> {
  static ::resource_coordinator::mojom::PropertyType ToMojom(::resource_coordinator::mojom::PropertyType input) { return input; }
  static bool FromMojom(::resource_coordinator::mojom::PropertyType input, ::resource_coordinator::mojom::PropertyType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::resource_coordinator::mojom::PropertyType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::resource_coordinator::mojom::PropertyType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::resource_coordinator::mojom::PropertyType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace resource_coordinator {
namespace mojom {


}  // namespace mojom
}  // namespace resource_coordinator

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_SIGNALS_MOJOM_SHARED_H_
