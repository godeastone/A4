// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_H_

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
#include "services/network/public/mojom/network_change_manager.mojom-shared.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace network {
namespace mojom {
class NetworkChangeManagerClient;
using NetworkChangeManagerClientPtr = mojo::InterfacePtr<NetworkChangeManagerClient>;
using NetworkChangeManagerClientPtrInfo = mojo::InterfacePtrInfo<NetworkChangeManagerClient>;
using ThreadSafeNetworkChangeManagerClientPtr =
    mojo::ThreadSafeInterfacePtr<NetworkChangeManagerClient>;
using NetworkChangeManagerClientRequest = mojo::InterfaceRequest<NetworkChangeManagerClient>;
using NetworkChangeManagerClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<NetworkChangeManagerClient>;
using ThreadSafeNetworkChangeManagerClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NetworkChangeManagerClient>;
using NetworkChangeManagerClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NetworkChangeManagerClient>;
using NetworkChangeManagerClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NetworkChangeManagerClient>;

class NetworkChangeManager;
using NetworkChangeManagerPtr = mojo::InterfacePtr<NetworkChangeManager>;
using NetworkChangeManagerPtrInfo = mojo::InterfacePtrInfo<NetworkChangeManager>;
using ThreadSafeNetworkChangeManagerPtr =
    mojo::ThreadSafeInterfacePtr<NetworkChangeManager>;
using NetworkChangeManagerRequest = mojo::InterfaceRequest<NetworkChangeManager>;
using NetworkChangeManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<NetworkChangeManager>;
using ThreadSafeNetworkChangeManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NetworkChangeManager>;
using NetworkChangeManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NetworkChangeManager>;
using NetworkChangeManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NetworkChangeManager>;


class NetworkChangeManagerClientProxy;

template <typename ImplRefTraits>
class NetworkChangeManagerClientStub;

class NetworkChangeManagerClientRequestValidator;

class  NetworkChangeManagerClient
    : public NetworkChangeManagerClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = NetworkChangeManagerClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = NetworkChangeManagerClientStub<ImplRefTraits>;

  using RequestValidator_ = NetworkChangeManagerClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnInitialConnectionTypeMinVersion = 0,
    kOnNetworkChangedMinVersion = 0,
  };
  virtual ~NetworkChangeManagerClient() {}

  virtual void OnInitialConnectionType(ConnectionType type) = 0;

  virtual void OnNetworkChanged(ConnectionType type) = 0;
};
class  NetworkChangeManagerClientInterceptorForTesting : public NetworkChangeManagerClient {
  virtual NetworkChangeManagerClient* GetForwardingInterface() = 0;
  void OnInitialConnectionType(ConnectionType type) override;
  void OnNetworkChanged(ConnectionType type) override;
};
class  NetworkChangeManagerClientAsyncWaiter {
 public:
  explicit NetworkChangeManagerClientAsyncWaiter(NetworkChangeManagerClient* proxy);
  ~NetworkChangeManagerClientAsyncWaiter();

 private:
  NetworkChangeManagerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetworkChangeManagerClientAsyncWaiter);
};

class NetworkChangeManagerProxy;

template <typename ImplRefTraits>
class NetworkChangeManagerStub;

class NetworkChangeManagerRequestValidator;

class  NetworkChangeManager
    : public NetworkChangeManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = NetworkChangeManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = NetworkChangeManagerStub<ImplRefTraits>;

  using RequestValidator_ = NetworkChangeManagerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRequestNotificationsMinVersion = 0,
  };
  virtual ~NetworkChangeManager() {}

  virtual void RequestNotifications(NetworkChangeManagerClientPtr client_ptr) = 0;
};
class  NetworkChangeManagerInterceptorForTesting : public NetworkChangeManager {
  virtual NetworkChangeManager* GetForwardingInterface() = 0;
  void RequestNotifications(NetworkChangeManagerClientPtr client_ptr) override;
};
class  NetworkChangeManagerAsyncWaiter {
 public:
  explicit NetworkChangeManagerAsyncWaiter(NetworkChangeManager* proxy);
  ~NetworkChangeManagerAsyncWaiter();

 private:
  NetworkChangeManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetworkChangeManagerAsyncWaiter);
};

class  NetworkChangeManagerClientProxy
    : public NetworkChangeManagerClient {
 public:
  explicit NetworkChangeManagerClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnInitialConnectionType(ConnectionType type) final;
  void OnNetworkChanged(ConnectionType type) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  NetworkChangeManagerProxy
    : public NetworkChangeManager {
 public:
  explicit NetworkChangeManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestNotifications(NetworkChangeManagerClientPtr client_ptr) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  NetworkChangeManagerClientStubDispatch {
 public:
  static bool Accept(NetworkChangeManagerClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NetworkChangeManagerClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NetworkChangeManagerClient>>
class NetworkChangeManagerClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NetworkChangeManagerClientStub() {}
  ~NetworkChangeManagerClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkChangeManagerClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkChangeManagerClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  NetworkChangeManagerStubDispatch {
 public:
  static bool Accept(NetworkChangeManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NetworkChangeManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NetworkChangeManager>>
class NetworkChangeManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NetworkChangeManagerStub() {}
  ~NetworkChangeManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkChangeManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkChangeManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  NetworkChangeManagerClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  NetworkChangeManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace network

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_H_