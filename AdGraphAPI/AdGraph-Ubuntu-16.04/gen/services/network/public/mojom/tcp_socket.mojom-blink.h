// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_BLINK_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "services/network/public/mojom/tcp_socket.mojom-shared.h"
#include "net/interfaces/ip_endpoint.mojom-blink.h"
#include "services/network/public/mojom/tls_socket.mojom-blink.h"
#include "services/network/public/mojom/network_param.mojom-blink.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {
namespace blink {
class TCPConnectedSocket;
using TCPConnectedSocketPtr = mojo::InterfacePtr<TCPConnectedSocket>;
using RevocableTCPConnectedSocketPtr = ::blink::RevocableInterfacePtr<TCPConnectedSocket>;
using TCPConnectedSocketPtrInfo = mojo::InterfacePtrInfo<TCPConnectedSocket>;
using ThreadSafeTCPConnectedSocketPtr =
    mojo::ThreadSafeInterfacePtr<TCPConnectedSocket>;
using TCPConnectedSocketRequest = mojo::InterfaceRequest<TCPConnectedSocket>;
using TCPConnectedSocketAssociatedPtr =
    mojo::AssociatedInterfacePtr<TCPConnectedSocket>;
using ThreadSafeTCPConnectedSocketAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<TCPConnectedSocket>;
using TCPConnectedSocketAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TCPConnectedSocket>;
using TCPConnectedSocketAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TCPConnectedSocket>;

class SocketObserver;
using SocketObserverPtr = mojo::InterfacePtr<SocketObserver>;
using RevocableSocketObserverPtr = ::blink::RevocableInterfacePtr<SocketObserver>;
using SocketObserverPtrInfo = mojo::InterfacePtrInfo<SocketObserver>;
using ThreadSafeSocketObserverPtr =
    mojo::ThreadSafeInterfacePtr<SocketObserver>;
using SocketObserverRequest = mojo::InterfaceRequest<SocketObserver>;
using SocketObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<SocketObserver>;
using ThreadSafeSocketObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SocketObserver>;
using SocketObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SocketObserver>;
using SocketObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SocketObserver>;

class TCPServerSocket;
using TCPServerSocketPtr = mojo::InterfacePtr<TCPServerSocket>;
using RevocableTCPServerSocketPtr = ::blink::RevocableInterfacePtr<TCPServerSocket>;
using TCPServerSocketPtrInfo = mojo::InterfacePtrInfo<TCPServerSocket>;
using ThreadSafeTCPServerSocketPtr =
    mojo::ThreadSafeInterfacePtr<TCPServerSocket>;
using TCPServerSocketRequest = mojo::InterfaceRequest<TCPServerSocket>;
using TCPServerSocketAssociatedPtr =
    mojo::AssociatedInterfacePtr<TCPServerSocket>;
using ThreadSafeTCPServerSocketAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<TCPServerSocket>;
using TCPServerSocketAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TCPServerSocket>;
using TCPServerSocketAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TCPServerSocket>;


class TCPConnectedSocketProxy;

template <typename ImplRefTraits>
class TCPConnectedSocketStub;

class TCPConnectedSocketRequestValidator;
class TCPConnectedSocketResponseValidator;

class BLINK_PLATFORM_EXPORT TCPConnectedSocket
    : public TCPConnectedSocketInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = TCPConnectedSocketProxy;

  template <typename ImplRefTraits>
  using Stub_ = TCPConnectedSocketStub<ImplRefTraits>;

  using RequestValidator_ = TCPConnectedSocketRequestValidator;
  using ResponseValidator_ = TCPConnectedSocketResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetLocalAddressMinVersion = 0,
    kUpgradeToTLSMinVersion = 0,
  };
  virtual ~TCPConnectedSocket() {}


  using GetLocalAddressCallback = base::OnceCallback<void(int32_t, ::net::interfaces::blink::IPEndPointPtr)>;
  virtual void GetLocalAddress(GetLocalAddressCallback callback) = 0;


  using UpgradeToTLSCallback = base::OnceCallback<void(int32_t, mojo::ScopedDataPipeConsumerHandle, mojo::ScopedDataPipeProducerHandle)>;
  virtual void UpgradeToTLS(::network::mojom::blink::HostPortPairPtr host_port_pair, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, ::network::mojom::blink::TLSClientSocketRequest request, SocketObserverPtr observer, UpgradeToTLSCallback callback) = 0;
};
class BLINK_PLATFORM_EXPORT TCPConnectedSocketInterceptorForTesting : public TCPConnectedSocket {
  virtual TCPConnectedSocket* GetForwardingInterface() = 0;
  void GetLocalAddress(GetLocalAddressCallback callback) override;
  void UpgradeToTLS(::network::mojom::blink::HostPortPairPtr host_port_pair, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, ::network::mojom::blink::TLSClientSocketRequest request, SocketObserverPtr observer, UpgradeToTLSCallback callback) override;
};
class BLINK_PLATFORM_EXPORT TCPConnectedSocketAsyncWaiter {
 public:
  explicit TCPConnectedSocketAsyncWaiter(TCPConnectedSocket* proxy);
  ~TCPConnectedSocketAsyncWaiter();
  void GetLocalAddress(
      int32_t* out_net_error, ::net::interfaces::blink::IPEndPointPtr* out_local_addr);
  void UpgradeToTLS(
      ::network::mojom::blink::HostPortPairPtr host_port_pair, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, ::network::mojom::blink::TLSClientSocketRequest request, SocketObserverPtr observer, int32_t* out_net_error, mojo::ScopedDataPipeConsumerHandle* out_receive_stream, mojo::ScopedDataPipeProducerHandle* out_send_stream);

 private:
  TCPConnectedSocket* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TCPConnectedSocketAsyncWaiter);
};

class SocketObserverProxy;

template <typename ImplRefTraits>
class SocketObserverStub;

class SocketObserverRequestValidator;

class BLINK_PLATFORM_EXPORT SocketObserver
    : public SocketObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SocketObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = SocketObserverStub<ImplRefTraits>;

  using RequestValidator_ = SocketObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnReadErrorMinVersion = 0,
    kOnWriteErrorMinVersion = 0,
  };
  virtual ~SocketObserver() {}

  virtual void OnReadError(int32_t net_error) = 0;

  virtual void OnWriteError(int32_t net_error) = 0;
};
class BLINK_PLATFORM_EXPORT SocketObserverInterceptorForTesting : public SocketObserver {
  virtual SocketObserver* GetForwardingInterface() = 0;
  void OnReadError(int32_t net_error) override;
  void OnWriteError(int32_t net_error) override;
};
class BLINK_PLATFORM_EXPORT SocketObserverAsyncWaiter {
 public:
  explicit SocketObserverAsyncWaiter(SocketObserver* proxy);
  ~SocketObserverAsyncWaiter();

 private:
  SocketObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SocketObserverAsyncWaiter);
};

class TCPServerSocketProxy;

template <typename ImplRefTraits>
class TCPServerSocketStub;

class TCPServerSocketRequestValidator;
class TCPServerSocketResponseValidator;

class BLINK_PLATFORM_EXPORT TCPServerSocket
    : public TCPServerSocketInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = TCPServerSocketProxy;

  template <typename ImplRefTraits>
  using Stub_ = TCPServerSocketStub<ImplRefTraits>;

  using RequestValidator_ = TCPServerSocketRequestValidator;
  using ResponseValidator_ = TCPServerSocketResponseValidator;
  enum MethodMinVersions : uint32_t {
    kAcceptMinVersion = 0,
    kGetLocalAddressMinVersion = 0,
  };
  virtual ~TCPServerSocket() {}


  using AcceptCallback = base::OnceCallback<void(int32_t, ::net::interfaces::blink::IPEndPointPtr, TCPConnectedSocketPtr, mojo::ScopedDataPipeConsumerHandle, mojo::ScopedDataPipeProducerHandle)>;
  virtual void Accept(SocketObserverPtr observer, AcceptCallback callback) = 0;


  using GetLocalAddressCallback = base::OnceCallback<void(int32_t, ::net::interfaces::blink::IPEndPointPtr)>;
  virtual void GetLocalAddress(GetLocalAddressCallback callback) = 0;
};
class BLINK_PLATFORM_EXPORT TCPServerSocketInterceptorForTesting : public TCPServerSocket {
  virtual TCPServerSocket* GetForwardingInterface() = 0;
  void Accept(SocketObserverPtr observer, AcceptCallback callback) override;
  void GetLocalAddress(GetLocalAddressCallback callback) override;
};
class BLINK_PLATFORM_EXPORT TCPServerSocketAsyncWaiter {
 public:
  explicit TCPServerSocketAsyncWaiter(TCPServerSocket* proxy);
  ~TCPServerSocketAsyncWaiter();
  void Accept(
      SocketObserverPtr observer, int32_t* out_net_error, ::net::interfaces::blink::IPEndPointPtr* out_remote_addr, TCPConnectedSocketPtr* out_connected_socket, mojo::ScopedDataPipeConsumerHandle* out_send_stream, mojo::ScopedDataPipeProducerHandle* out_receive_stream);
  void GetLocalAddress(
      int32_t* out_net_error, ::net::interfaces::blink::IPEndPointPtr* out_local_addr);

 private:
  TCPServerSocket* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TCPServerSocketAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT TCPConnectedSocketProxy
    : public TCPConnectedSocket {
 public:
  explicit TCPConnectedSocketProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetLocalAddress(GetLocalAddressCallback callback) final;
  void UpgradeToTLS(::network::mojom::blink::HostPortPairPtr host_port_pair, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, ::network::mojom::blink::TLSClientSocketRequest request, SocketObserverPtr observer, UpgradeToTLSCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT SocketObserverProxy
    : public SocketObserver {
 public:
  explicit SocketObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnReadError(int32_t net_error) final;
  void OnWriteError(int32_t net_error) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT TCPServerSocketProxy
    : public TCPServerSocket {
 public:
  explicit TCPServerSocketProxy(mojo::MessageReceiverWithResponder* receiver);
  void Accept(SocketObserverPtr observer, AcceptCallback callback) final;
  void GetLocalAddress(GetLocalAddressCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT TCPConnectedSocketStubDispatch {
 public:
  static bool Accept(TCPConnectedSocket* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TCPConnectedSocket* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TCPConnectedSocket>>
class TCPConnectedSocketStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TCPConnectedSocketStub() {}
  ~TCPConnectedSocketStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TCPConnectedSocketStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TCPConnectedSocketStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT SocketObserverStubDispatch {
 public:
  static bool Accept(SocketObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SocketObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SocketObserver>>
class SocketObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SocketObserverStub() {}
  ~SocketObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SocketObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SocketObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT TCPServerSocketStubDispatch {
 public:
  static bool Accept(TCPServerSocket* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TCPServerSocket* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TCPServerSocket>>
class TCPServerSocketStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TCPServerSocketStub() {}
  ~TCPServerSocketStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TCPServerSocketStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TCPServerSocketStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT TCPConnectedSocketRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT SocketObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT TCPServerSocketRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT TCPConnectedSocketResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT TCPServerSocketResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_BLINK_H_