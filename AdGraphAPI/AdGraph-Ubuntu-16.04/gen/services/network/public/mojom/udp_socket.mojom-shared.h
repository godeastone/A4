// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/udp_socket.mojom-shared-internal.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-shared.h"
#include "mojo/public/mojom/base/read_only_buffer.mojom-shared.h"
#include "net/interfaces/address_family.mojom-shared.h"
#include "net/interfaces/ip_address.mojom-shared.h"
#include "net/interfaces/ip_endpoint.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace network {
namespace mojom {
class UDPSocketOptionsDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::UDPSocketOptionsDataView> {
  using Data = ::network::mojom::internal::UDPSocketOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {
// Interface base classes. They are used for type safety check.
class UDPSocketInterfaceBase {};

using UDPSocketPtrDataView =
    mojo::InterfacePtrDataView<UDPSocketInterfaceBase>;
using UDPSocketRequestDataView =
    mojo::InterfaceRequestDataView<UDPSocketInterfaceBase>;
using UDPSocketAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<UDPSocketInterfaceBase>;
using UDPSocketAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<UDPSocketInterfaceBase>;
class UDPSocketReceiverInterfaceBase {};

using UDPSocketReceiverPtrDataView =
    mojo::InterfacePtrDataView<UDPSocketReceiverInterfaceBase>;
using UDPSocketReceiverRequestDataView =
    mojo::InterfaceRequestDataView<UDPSocketReceiverInterfaceBase>;
using UDPSocketReceiverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<UDPSocketReceiverInterfaceBase>;
using UDPSocketReceiverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<UDPSocketReceiverInterfaceBase>;
class UDPSocketOptionsDataView {
 public:
  UDPSocketOptionsDataView() {}

  UDPSocketOptionsDataView(
      internal::UDPSocketOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool allow_address_reuse() const {
    return data_->allow_address_reuse;
  }
  uint32_t multicast_interface() const {
    return data_->multicast_interface;
  }
  uint32_t multicast_time_to_live() const {
    return data_->multicast_time_to_live;
  }
  bool multicast_loopback_mode() const {
    return data_->multicast_loopback_mode;
  }
  int32_t send_buffer_size() const {
    return data_->send_buffer_size;
  }
  int32_t receive_buffer_size() const {
    return data_->receive_buffer_size;
  }
 private:
  internal::UDPSocketOptions_Data* data_ = nullptr;
};

class UDPSocket_Bind_ParamsDataView {
 public:
  UDPSocket_Bind_ParamsDataView() {}

  UDPSocket_Bind_ParamsDataView(
      internal::UDPSocket_Bind_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLocalAddrDataView(
      ::net::interfaces::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalAddr(UserType* output) {
    auto* pointer = data_->local_addr.Get();
    return mojo::internal::Deserialize<::net::interfaces::IPEndPointDataView>(
        pointer, output, context_);
  }
  inline void GetSocketOptionsDataView(
      UDPSocketOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSocketOptions(UserType* output) {
    auto* pointer = data_->socket_options.Get();
    return mojo::internal::Deserialize<::network::mojom::UDPSocketOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::UDPSocket_Bind_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UDPSocket_Bind_ResponseParamsDataView {
 public:
  UDPSocket_Bind_ResponseParamsDataView() {}

  UDPSocket_Bind_ResponseParamsDataView(
      internal::UDPSocket_Bind_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
  inline void GetLocalAddrOutDataView(
      ::net::interfaces::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalAddrOut(UserType* output) {
    auto* pointer = data_->local_addr_out.Get();
    return mojo::internal::Deserialize<::net::interfaces::IPEndPointDataView>(
        pointer, output, context_);
  }
 private:
  internal::UDPSocket_Bind_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UDPSocket_Connect_ParamsDataView {
 public:
  UDPSocket_Connect_ParamsDataView() {}

  UDPSocket_Connect_ParamsDataView(
      internal::UDPSocket_Connect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRemoteAddrDataView(
      ::net::interfaces::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRemoteAddr(UserType* output) {
    auto* pointer = data_->remote_addr.Get();
    return mojo::internal::Deserialize<::net::interfaces::IPEndPointDataView>(
        pointer, output, context_);
  }
  inline void GetSocketOptionsDataView(
      UDPSocketOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSocketOptions(UserType* output) {
    auto* pointer = data_->socket_options.Get();
    return mojo::internal::Deserialize<::network::mojom::UDPSocketOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::UDPSocket_Connect_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UDPSocket_Connect_ResponseParamsDataView {
 public:
  UDPSocket_Connect_ResponseParamsDataView() {}

  UDPSocket_Connect_ResponseParamsDataView(
      internal::UDPSocket_Connect_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
  inline void GetLocalAddrOutDataView(
      ::net::interfaces::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalAddrOut(UserType* output) {
    auto* pointer = data_->local_addr_out.Get();
    return mojo::internal::Deserialize<::net::interfaces::IPEndPointDataView>(
        pointer, output, context_);
  }
 private:
  internal::UDPSocket_Connect_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UDPSocket_SetBroadcast_ParamsDataView {
 public:
  UDPSocket_SetBroadcast_ParamsDataView() {}

  UDPSocket_SetBroadcast_ParamsDataView(
      internal::UDPSocket_SetBroadcast_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool broadcast() const {
    return data_->broadcast;
  }
 private:
  internal::UDPSocket_SetBroadcast_Params_Data* data_ = nullptr;
};

class UDPSocket_SetBroadcast_ResponseParamsDataView {
 public:
  UDPSocket_SetBroadcast_ResponseParamsDataView() {}

  UDPSocket_SetBroadcast_ResponseParamsDataView(
      internal::UDPSocket_SetBroadcast_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
 private:
  internal::UDPSocket_SetBroadcast_ResponseParams_Data* data_ = nullptr;
};

class UDPSocket_JoinGroup_ParamsDataView {
 public:
  UDPSocket_JoinGroup_ParamsDataView() {}

  UDPSocket_JoinGroup_ParamsDataView(
      internal::UDPSocket_JoinGroup_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetGroupAddressDataView(
      ::net::interfaces::IPAddressDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGroupAddress(UserType* output) {
    auto* pointer = data_->group_address.Get();
    return mojo::internal::Deserialize<::net::interfaces::IPAddressDataView>(
        pointer, output, context_);
  }
 private:
  internal::UDPSocket_JoinGroup_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UDPSocket_JoinGroup_ResponseParamsDataView {
 public:
  UDPSocket_JoinGroup_ResponseParamsDataView() {}

  UDPSocket_JoinGroup_ResponseParamsDataView(
      internal::UDPSocket_JoinGroup_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
 private:
  internal::UDPSocket_JoinGroup_ResponseParams_Data* data_ = nullptr;
};

class UDPSocket_LeaveGroup_ParamsDataView {
 public:
  UDPSocket_LeaveGroup_ParamsDataView() {}

  UDPSocket_LeaveGroup_ParamsDataView(
      internal::UDPSocket_LeaveGroup_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetGroupAddressDataView(
      ::net::interfaces::IPAddressDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGroupAddress(UserType* output) {
    auto* pointer = data_->group_address.Get();
    return mojo::internal::Deserialize<::net::interfaces::IPAddressDataView>(
        pointer, output, context_);
  }
 private:
  internal::UDPSocket_LeaveGroup_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UDPSocket_LeaveGroup_ResponseParamsDataView {
 public:
  UDPSocket_LeaveGroup_ResponseParamsDataView() {}

  UDPSocket_LeaveGroup_ResponseParamsDataView(
      internal::UDPSocket_LeaveGroup_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
 private:
  internal::UDPSocket_LeaveGroup_ResponseParams_Data* data_ = nullptr;
};

class UDPSocket_ReceiveMore_ParamsDataView {
 public:
  UDPSocket_ReceiveMore_ParamsDataView() {}

  UDPSocket_ReceiveMore_ParamsDataView(
      internal::UDPSocket_ReceiveMore_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t num_additional_datagrams() const {
    return data_->num_additional_datagrams;
  }
 private:
  internal::UDPSocket_ReceiveMore_Params_Data* data_ = nullptr;
};

class UDPSocket_ReceiveMoreWithBufferSize_ParamsDataView {
 public:
  UDPSocket_ReceiveMoreWithBufferSize_ParamsDataView() {}

  UDPSocket_ReceiveMoreWithBufferSize_ParamsDataView(
      internal::UDPSocket_ReceiveMoreWithBufferSize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t num_additional_datagrams() const {
    return data_->num_additional_datagrams;
  }
  uint32_t buffer_size() const {
    return data_->buffer_size;
  }
 private:
  internal::UDPSocket_ReceiveMoreWithBufferSize_Params_Data* data_ = nullptr;
};

class UDPSocket_SendTo_ParamsDataView {
 public:
  UDPSocket_SendTo_ParamsDataView() {}

  UDPSocket_SendTo_ParamsDataView(
      internal::UDPSocket_SendTo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDestAddrDataView(
      ::net::interfaces::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDestAddr(UserType* output) {
    auto* pointer = data_->dest_addr.Get();
    return mojo::internal::Deserialize<::net::interfaces::IPEndPointDataView>(
        pointer, output, context_);
  }
  inline void GetDataDataView(
      ::mojo_base::mojom::ReadOnlyBufferDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ReadOnlyBufferDataView>(
        pointer, output, context_);
  }
  inline void GetTrafficAnnotationDataView(
      ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTrafficAnnotation(UserType* output) {
    auto* pointer = data_->traffic_annotation.Get();
    return mojo::internal::Deserialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
        pointer, output, context_);
  }
 private:
  internal::UDPSocket_SendTo_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UDPSocket_SendTo_ResponseParamsDataView {
 public:
  UDPSocket_SendTo_ResponseParamsDataView() {}

  UDPSocket_SendTo_ResponseParamsDataView(
      internal::UDPSocket_SendTo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
 private:
  internal::UDPSocket_SendTo_ResponseParams_Data* data_ = nullptr;
};

class UDPSocket_Send_ParamsDataView {
 public:
  UDPSocket_Send_ParamsDataView() {}

  UDPSocket_Send_ParamsDataView(
      internal::UDPSocket_Send_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      ::mojo_base::mojom::ReadOnlyBufferDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ReadOnlyBufferDataView>(
        pointer, output, context_);
  }
  inline void GetTrafficAnnotationDataView(
      ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTrafficAnnotation(UserType* output) {
    auto* pointer = data_->traffic_annotation.Get();
    return mojo::internal::Deserialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
        pointer, output, context_);
  }
 private:
  internal::UDPSocket_Send_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UDPSocket_Send_ResponseParamsDataView {
 public:
  UDPSocket_Send_ResponseParamsDataView() {}

  UDPSocket_Send_ResponseParamsDataView(
      internal::UDPSocket_Send_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
 private:
  internal::UDPSocket_Send_ResponseParams_Data* data_ = nullptr;
};

class UDPSocket_Close_ParamsDataView {
 public:
  UDPSocket_Close_ParamsDataView() {}

  UDPSocket_Close_ParamsDataView(
      internal::UDPSocket_Close_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::UDPSocket_Close_Params_Data* data_ = nullptr;
};

class UDPSocketReceiver_OnReceived_ParamsDataView {
 public:
  UDPSocketReceiver_OnReceived_ParamsDataView() {}

  UDPSocketReceiver_OnReceived_ParamsDataView(
      internal::UDPSocketReceiver_OnReceived_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
  inline void GetSrcAddrDataView(
      ::net::interfaces::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSrcAddr(UserType* output) {
    auto* pointer = data_->src_addr.Get();
    return mojo::internal::Deserialize<::net::interfaces::IPEndPointDataView>(
        pointer, output, context_);
  }
  inline void GetDataDataView(
      ::mojo_base::mojom::ReadOnlyBufferDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ReadOnlyBufferDataView>(
        pointer, output, context_);
  }
 private:
  internal::UDPSocketReceiver_OnReceived_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::UDPSocketOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::UDPSocketOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::UDPSocketOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->allow_address_reuse = CallWithContext(Traits::allow_address_reuse, input, custom_context);
    (*output)->multicast_interface = CallWithContext(Traits::multicast_interface, input, custom_context);
    (*output)->multicast_time_to_live = CallWithContext(Traits::multicast_time_to_live, input, custom_context);
    (*output)->multicast_loopback_mode = CallWithContext(Traits::multicast_loopback_mode, input, custom_context);
    (*output)->send_buffer_size = CallWithContext(Traits::send_buffer_size, input, custom_context);
    (*output)->receive_buffer_size = CallWithContext(Traits::receive_buffer_size, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::network::mojom::internal::UDPSocketOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::UDPSocketOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {



inline void UDPSocket_Bind_ParamsDataView::GetLocalAddrDataView(
    ::net::interfaces::IPEndPointDataView* output) {
  auto pointer = data_->local_addr.Get();
  *output = ::net::interfaces::IPEndPointDataView(pointer, context_);
}
inline void UDPSocket_Bind_ParamsDataView::GetSocketOptionsDataView(
    UDPSocketOptionsDataView* output) {
  auto pointer = data_->socket_options.Get();
  *output = UDPSocketOptionsDataView(pointer, context_);
}


inline void UDPSocket_Bind_ResponseParamsDataView::GetLocalAddrOutDataView(
    ::net::interfaces::IPEndPointDataView* output) {
  auto pointer = data_->local_addr_out.Get();
  *output = ::net::interfaces::IPEndPointDataView(pointer, context_);
}


inline void UDPSocket_Connect_ParamsDataView::GetRemoteAddrDataView(
    ::net::interfaces::IPEndPointDataView* output) {
  auto pointer = data_->remote_addr.Get();
  *output = ::net::interfaces::IPEndPointDataView(pointer, context_);
}
inline void UDPSocket_Connect_ParamsDataView::GetSocketOptionsDataView(
    UDPSocketOptionsDataView* output) {
  auto pointer = data_->socket_options.Get();
  *output = UDPSocketOptionsDataView(pointer, context_);
}


inline void UDPSocket_Connect_ResponseParamsDataView::GetLocalAddrOutDataView(
    ::net::interfaces::IPEndPointDataView* output) {
  auto pointer = data_->local_addr_out.Get();
  *output = ::net::interfaces::IPEndPointDataView(pointer, context_);
}






inline void UDPSocket_JoinGroup_ParamsDataView::GetGroupAddressDataView(
    ::net::interfaces::IPAddressDataView* output) {
  auto pointer = data_->group_address.Get();
  *output = ::net::interfaces::IPAddressDataView(pointer, context_);
}




inline void UDPSocket_LeaveGroup_ParamsDataView::GetGroupAddressDataView(
    ::net::interfaces::IPAddressDataView* output) {
  auto pointer = data_->group_address.Get();
  *output = ::net::interfaces::IPAddressDataView(pointer, context_);
}








inline void UDPSocket_SendTo_ParamsDataView::GetDestAddrDataView(
    ::net::interfaces::IPEndPointDataView* output) {
  auto pointer = data_->dest_addr.Get();
  *output = ::net::interfaces::IPEndPointDataView(pointer, context_);
}
inline void UDPSocket_SendTo_ParamsDataView::GetDataDataView(
    ::mojo_base::mojom::ReadOnlyBufferDataView* output) {
  auto pointer = data_->data.Get();
  *output = ::mojo_base::mojom::ReadOnlyBufferDataView(pointer, context_);
}
inline void UDPSocket_SendTo_ParamsDataView::GetTrafficAnnotationDataView(
    ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output) {
  auto pointer = data_->traffic_annotation.Get();
  *output = ::network::mojom::MutableNetworkTrafficAnnotationTagDataView(pointer, context_);
}




inline void UDPSocket_Send_ParamsDataView::GetDataDataView(
    ::mojo_base::mojom::ReadOnlyBufferDataView* output) {
  auto pointer = data_->data.Get();
  *output = ::mojo_base::mojom::ReadOnlyBufferDataView(pointer, context_);
}
inline void UDPSocket_Send_ParamsDataView::GetTrafficAnnotationDataView(
    ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output) {
  auto pointer = data_->traffic_annotation.Get();
  *output = ::network::mojom::MutableNetworkTrafficAnnotationTagDataView(pointer, context_);
}






inline void UDPSocketReceiver_OnReceived_ParamsDataView::GetSrcAddrDataView(
    ::net::interfaces::IPEndPointDataView* output) {
  auto pointer = data_->src_addr.Get();
  *output = ::net::interfaces::IPEndPointDataView(pointer, context_);
}
inline void UDPSocketReceiver_OnReceived_ParamsDataView::GetDataDataView(
    ::mojo_base::mojom::ReadOnlyBufferDataView* output) {
  auto pointer = data_->data.Get();
  *output = ::mojo_base::mojom::ReadOnlyBufferDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_SHARED_H_
