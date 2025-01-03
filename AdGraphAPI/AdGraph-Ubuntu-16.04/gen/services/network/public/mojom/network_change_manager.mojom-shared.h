// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/network_change_manager.mojom-shared-internal.h"

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

enum class ConnectionType : int32_t {
  CONNECTION_UNKNOWN = 0,
  CONNECTION_ETHERNET = 1,
  CONNECTION_WIFI = 2,
  CONNECTION_2G = 3,
  CONNECTION_3G = 4,
  CONNECTION_4G = 5,
  CONNECTION_NONE = 6,
  CONNECTION_BLUETOOTH = 7,
  CONNECTION_LAST = ConnectionType::CONNECTION_BLUETOOTH,
  kMinValue = 0,
  kMaxValue = 7,
};

inline std::ostream& operator<<(std::ostream& os, ConnectionType value) {
  switch(value) {
    case ConnectionType::CONNECTION_UNKNOWN:
      return os << "ConnectionType::CONNECTION_UNKNOWN";
    case ConnectionType::CONNECTION_ETHERNET:
      return os << "ConnectionType::CONNECTION_ETHERNET";
    case ConnectionType::CONNECTION_WIFI:
      return os << "ConnectionType::CONNECTION_WIFI";
    case ConnectionType::CONNECTION_2G:
      return os << "ConnectionType::CONNECTION_2G";
    case ConnectionType::CONNECTION_3G:
      return os << "ConnectionType::CONNECTION_3G";
    case ConnectionType::CONNECTION_4G:
      return os << "ConnectionType::CONNECTION_4G";
    case ConnectionType::CONNECTION_NONE:
      return os << "ConnectionType::CONNECTION_NONE";
    case ConnectionType::CONNECTION_BLUETOOTH:
      return os << "ConnectionType::{CONNECTION_BLUETOOTH, CONNECTION_LAST}";
    default:
      return os << "Unknown ConnectionType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ConnectionType value) {
  return internal::ConnectionType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class NetworkChangeManagerClientInterfaceBase {};

using NetworkChangeManagerClientPtrDataView =
    mojo::InterfacePtrDataView<NetworkChangeManagerClientInterfaceBase>;
using NetworkChangeManagerClientRequestDataView =
    mojo::InterfaceRequestDataView<NetworkChangeManagerClientInterfaceBase>;
using NetworkChangeManagerClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NetworkChangeManagerClientInterfaceBase>;
using NetworkChangeManagerClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NetworkChangeManagerClientInterfaceBase>;
class NetworkChangeManagerInterfaceBase {};

using NetworkChangeManagerPtrDataView =
    mojo::InterfacePtrDataView<NetworkChangeManagerInterfaceBase>;
using NetworkChangeManagerRequestDataView =
    mojo::InterfaceRequestDataView<NetworkChangeManagerInterfaceBase>;
using NetworkChangeManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NetworkChangeManagerInterfaceBase>;
using NetworkChangeManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NetworkChangeManagerInterfaceBase>;
class NetworkChangeManagerClient_OnInitialConnectionType_ParamsDataView {
 public:
  NetworkChangeManagerClient_OnInitialConnectionType_ParamsDataView() {}

  NetworkChangeManagerClient_OnInitialConnectionType_ParamsDataView(
      internal::NetworkChangeManagerClient_OnInitialConnectionType_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::network::mojom::ConnectionType>(
        data_value, output);
  }

  ConnectionType type() const {
    return static_cast<ConnectionType>(data_->type);
  }
 private:
  internal::NetworkChangeManagerClient_OnInitialConnectionType_Params_Data* data_ = nullptr;
};

class NetworkChangeManagerClient_OnNetworkChanged_ParamsDataView {
 public:
  NetworkChangeManagerClient_OnNetworkChanged_ParamsDataView() {}

  NetworkChangeManagerClient_OnNetworkChanged_ParamsDataView(
      internal::NetworkChangeManagerClient_OnNetworkChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::network::mojom::ConnectionType>(
        data_value, output);
  }

  ConnectionType type() const {
    return static_cast<ConnectionType>(data_->type);
  }
 private:
  internal::NetworkChangeManagerClient_OnNetworkChanged_Params_Data* data_ = nullptr;
};

class NetworkChangeManager_RequestNotifications_ParamsDataView {
 public:
  NetworkChangeManager_RequestNotifications_ParamsDataView() {}

  NetworkChangeManager_RequestNotifications_ParamsDataView(
      internal::NetworkChangeManager_RequestNotifications_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClientPtr() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::NetworkChangeManagerClientPtrDataView>(
            &data_->client_ptr, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkChangeManager_RequestNotifications_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::ConnectionType>
    : public mojo::internal::EnumHashImpl<::network::mojom::ConnectionType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::network::mojom::ConnectionType, ::network::mojom::ConnectionType> {
  static ::network::mojom::ConnectionType ToMojom(::network::mojom::ConnectionType input) { return input; }
  static bool FromMojom(::network::mojom::ConnectionType input, ::network::mojom::ConnectionType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::ConnectionType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::ConnectionType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::ConnectionType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {








}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_SHARED_H_
