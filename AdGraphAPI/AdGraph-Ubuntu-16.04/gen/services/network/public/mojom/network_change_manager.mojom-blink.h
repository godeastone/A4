// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_BLINK_H_

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


namespace WTF {
struct network_mojom_internal_ConnectionType_DataHashFn {
  static unsigned GetHash(const ::network::mojom::ConnectionType& value) {
    using utype = std::underlying_type<::network::mojom::ConnectionType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::network::mojom::ConnectionType& left, const ::network::mojom::ConnectionType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::network::mojom::ConnectionType> {
  using Hash = network_mojom_internal_ConnectionType_DataHashFn;
};

template <>
struct HashTraits<::network::mojom::ConnectionType>
    : public GenericHashTraits<::network::mojom::ConnectionType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::network::mojom::ConnectionType& value) {
    return value == static_cast<::network::mojom::ConnectionType>(-1000000);
  }
  static void ConstructDeletedValue(::network::mojom::ConnectionType& slot, bool) {
    slot = static_cast<::network::mojom::ConnectionType>(-1000001);
  }
  static bool IsDeletedValue(const ::network::mojom::ConnectionType& value) {
    return value == static_cast<::network::mojom::ConnectionType>(-1000001);
  }
};
}  // namespace WTF


namespace network {
namespace mojom {
namespace blink {
using ConnectionType = ConnectionType;  // Alias for definition in the parent namespace.
class NetworkChangeManagerClient;
using NetworkChangeManagerClientPtr = mojo::InterfacePtr<NetworkChangeManagerClient>;
using RevocableNetworkChangeManagerClientPtr = ::blink::RevocableInterfacePtr<NetworkChangeManagerClient>;
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
using RevocableNetworkChangeManagerPtr = ::blink::RevocableInterfacePtr<NetworkChangeManager>;
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

class BLINK_PLATFORM_EXPORT NetworkChangeManagerClient
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
class BLINK_PLATFORM_EXPORT NetworkChangeManagerClientInterceptorForTesting : public NetworkChangeManagerClient {
  virtual NetworkChangeManagerClient* GetForwardingInterface() = 0;
  void OnInitialConnectionType(ConnectionType type) override;
  void OnNetworkChanged(ConnectionType type) override;
};
class BLINK_PLATFORM_EXPORT NetworkChangeManagerClientAsyncWaiter {
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

class BLINK_PLATFORM_EXPORT NetworkChangeManager
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
class BLINK_PLATFORM_EXPORT NetworkChangeManagerInterceptorForTesting : public NetworkChangeManager {
  virtual NetworkChangeManager* GetForwardingInterface() = 0;
  void RequestNotifications(NetworkChangeManagerClientPtr client_ptr) override;
};
class BLINK_PLATFORM_EXPORT NetworkChangeManagerAsyncWaiter {
 public:
  explicit NetworkChangeManagerAsyncWaiter(NetworkChangeManager* proxy);
  ~NetworkChangeManagerAsyncWaiter();

 private:
  NetworkChangeManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetworkChangeManagerAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT NetworkChangeManagerClientProxy
    : public NetworkChangeManagerClient {
 public:
  explicit NetworkChangeManagerClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnInitialConnectionType(ConnectionType type) final;
  void OnNetworkChanged(ConnectionType type) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT NetworkChangeManagerProxy
    : public NetworkChangeManager {
 public:
  explicit NetworkChangeManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestNotifications(NetworkChangeManagerClientPtr client_ptr) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT NetworkChangeManagerClientStubDispatch {
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
class BLINK_PLATFORM_EXPORT NetworkChangeManagerStubDispatch {
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
class BLINK_PLATFORM_EXPORT NetworkChangeManagerClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT NetworkChangeManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_BLINK_H_