// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/tcp_socket.mojom-shared-internal.h"
#include "net/interfaces/ip_endpoint.mojom-shared.h"
#include "services/network/public/mojom/tls_socket.mojom-shared.h"
#include "services/network/public/mojom/network_param.mojom-shared.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-shared.h"

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
// Interface base classes. They are used for type safety check.
class TCPConnectedSocketInterfaceBase {};

using TCPConnectedSocketPtrDataView =
    mojo::InterfacePtrDataView<TCPConnectedSocketInterfaceBase>;
using TCPConnectedSocketRequestDataView =
    mojo::InterfaceRequestDataView<TCPConnectedSocketInterfaceBase>;
using TCPConnectedSocketAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TCPConnectedSocketInterfaceBase>;
using TCPConnectedSocketAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TCPConnectedSocketInterfaceBase>;
class SocketObserverInterfaceBase {};

using SocketObserverPtrDataView =
    mojo::InterfacePtrDataView<SocketObserverInterfaceBase>;
using SocketObserverRequestDataView =
    mojo::InterfaceRequestDataView<SocketObserverInterfaceBase>;
using SocketObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SocketObserverInterfaceBase>;
using SocketObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SocketObserverInterfaceBase>;
class TCPServerSocketInterfaceBase {};

using TCPServerSocketPtrDataView =
    mojo::InterfacePtrDataView<TCPServerSocketInterfaceBase>;
using TCPServerSocketRequestDataView =
    mojo::InterfaceRequestDataView<TCPServerSocketInterfaceBase>;
using TCPServerSocketAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TCPServerSocketInterfaceBase>;
using TCPServerSocketAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TCPServerSocketInterfaceBase>;
class TCPConnectedSocket_GetLocalAddress_ParamsDataView {
 public:
  TCPConnectedSocket_GetLocalAddress_ParamsDataView() {}

  TCPConnectedSocket_GetLocalAddress_ParamsDataView(
      internal::TCPConnectedSocket_GetLocalAddress_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TCPConnectedSocket_GetLocalAddress_Params_Data* data_ = nullptr;
};

class TCPConnectedSocket_GetLocalAddress_ResponseParamsDataView {
 public:
  TCPConnectedSocket_GetLocalAddress_ResponseParamsDataView() {}

  TCPConnectedSocket_GetLocalAddress_ResponseParamsDataView(
      internal::TCPConnectedSocket_GetLocalAddress_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t net_error() const {
    return data_->net_error;
  }
  inline void GetLocalAddrDataView(
      ::net::interfaces::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalAddr(UserType* output) {
    auto* pointer = data_->local_addr.Get();
    return mojo::internal::Deserialize<::net::interfaces::IPEndPointDataView>(
        pointer, output, context_);
  }
 private:
  internal::TCPConnectedSocket_GetLocalAddress_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TCPConnectedSocket_UpgradeToTLS_ParamsDataView {
 public:
  TCPConnectedSocket_UpgradeToTLS_ParamsDataView() {}

  TCPConnectedSocket_UpgradeToTLS_ParamsDataView(
      internal::TCPConnectedSocket_UpgradeToTLS_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHostPortPairDataView(
      ::network::mojom::HostPortPairDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHostPortPair(UserType* output) {
    auto* pointer = data_->host_port_pair.Get();
    return mojo::internal::Deserialize<::network::mojom::HostPortPairDataView>(
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
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::TLSClientSocketRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::SocketObserverPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::TCPConnectedSocket_UpgradeToTLS_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TCPConnectedSocket_UpgradeToTLS_ResponseParamsDataView {
 public:
  TCPConnectedSocket_UpgradeToTLS_ResponseParamsDataView() {}

  TCPConnectedSocket_UpgradeToTLS_ResponseParamsDataView(
      internal::TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t net_error() const {
    return data_->net_error;
  }
  mojo::ScopedDataPipeConsumerHandle TakeReceiveStream() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->receive_stream, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedDataPipeProducerHandle TakeSendStream() {
    mojo::ScopedDataPipeProducerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeProducerHandle>(
            &data_->send_stream, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SocketObserver_OnReadError_ParamsDataView {
 public:
  SocketObserver_OnReadError_ParamsDataView() {}

  SocketObserver_OnReadError_ParamsDataView(
      internal::SocketObserver_OnReadError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t net_error() const {
    return data_->net_error;
  }
 private:
  internal::SocketObserver_OnReadError_Params_Data* data_ = nullptr;
};

class SocketObserver_OnWriteError_ParamsDataView {
 public:
  SocketObserver_OnWriteError_ParamsDataView() {}

  SocketObserver_OnWriteError_ParamsDataView(
      internal::SocketObserver_OnWriteError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t net_error() const {
    return data_->net_error;
  }
 private:
  internal::SocketObserver_OnWriteError_Params_Data* data_ = nullptr;
};

class TCPServerSocket_Accept_ParamsDataView {
 public:
  TCPServerSocket_Accept_ParamsDataView() {}

  TCPServerSocket_Accept_ParamsDataView(
      internal::TCPServerSocket_Accept_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::SocketObserverPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::TCPServerSocket_Accept_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TCPServerSocket_Accept_ResponseParamsDataView {
 public:
  TCPServerSocket_Accept_ResponseParamsDataView() {}

  TCPServerSocket_Accept_ResponseParamsDataView(
      internal::TCPServerSocket_Accept_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t net_error() const {
    return data_->net_error;
  }
  inline void GetRemoteAddrDataView(
      ::net::interfaces::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRemoteAddr(UserType* output) {
    auto* pointer = data_->remote_addr.Get();
    return mojo::internal::Deserialize<::net::interfaces::IPEndPointDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeConnectedSocket() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::TCPConnectedSocketPtrDataView>(
            &data_->connected_socket, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedDataPipeConsumerHandle TakeSendStream() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->send_stream, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedDataPipeProducerHandle TakeReceiveStream() {
    mojo::ScopedDataPipeProducerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeProducerHandle>(
            &data_->receive_stream, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::TCPServerSocket_Accept_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TCPServerSocket_GetLocalAddress_ParamsDataView {
 public:
  TCPServerSocket_GetLocalAddress_ParamsDataView() {}

  TCPServerSocket_GetLocalAddress_ParamsDataView(
      internal::TCPServerSocket_GetLocalAddress_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TCPServerSocket_GetLocalAddress_Params_Data* data_ = nullptr;
};

class TCPServerSocket_GetLocalAddress_ResponseParamsDataView {
 public:
  TCPServerSocket_GetLocalAddress_ResponseParamsDataView() {}

  TCPServerSocket_GetLocalAddress_ResponseParamsDataView(
      internal::TCPServerSocket_GetLocalAddress_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t net_error() const {
    return data_->net_error;
  }
  inline void GetLocalAddrDataView(
      ::net::interfaces::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalAddr(UserType* output) {
    auto* pointer = data_->local_addr.Get();
    return mojo::internal::Deserialize<::net::interfaces::IPEndPointDataView>(
        pointer, output, context_);
  }
 private:
  internal::TCPServerSocket_GetLocalAddress_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace network {
namespace mojom {



inline void TCPConnectedSocket_GetLocalAddress_ResponseParamsDataView::GetLocalAddrDataView(
    ::net::interfaces::IPEndPointDataView* output) {
  auto pointer = data_->local_addr.Get();
  *output = ::net::interfaces::IPEndPointDataView(pointer, context_);
}


inline void TCPConnectedSocket_UpgradeToTLS_ParamsDataView::GetHostPortPairDataView(
    ::network::mojom::HostPortPairDataView* output) {
  auto pointer = data_->host_port_pair.Get();
  *output = ::network::mojom::HostPortPairDataView(pointer, context_);
}
inline void TCPConnectedSocket_UpgradeToTLS_ParamsDataView::GetTrafficAnnotationDataView(
    ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output) {
  auto pointer = data_->traffic_annotation.Get();
  *output = ::network::mojom::MutableNetworkTrafficAnnotationTagDataView(pointer, context_);
}










inline void TCPServerSocket_Accept_ResponseParamsDataView::GetRemoteAddrDataView(
    ::net::interfaces::IPEndPointDataView* output) {
  auto pointer = data_->remote_addr.Get();
  *output = ::net::interfaces::IPEndPointDataView(pointer, context_);
}




inline void TCPServerSocket_GetLocalAddress_ResponseParamsDataView::GetLocalAddrDataView(
    ::net::interfaces::IPEndPointDataView* output) {
  auto pointer = data_->local_addr.Get();
  *output = ::net::interfaces::IPEndPointDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_SHARED_H_
