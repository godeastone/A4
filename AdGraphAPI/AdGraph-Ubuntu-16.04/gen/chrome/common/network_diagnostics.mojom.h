// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_NETWORK_DIAGNOSTICS_MOJOM_H_
#define CHROME_COMMON_NETWORK_DIAGNOSTICS_MOJOM_H_

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
#include "chrome/common/network_diagnostics.mojom-shared.h"
#include "url/mojom/url.mojom.h"
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


namespace chrome {
namespace mojom {
class NetworkDiagnostics;
using NetworkDiagnosticsPtr = mojo::InterfacePtr<NetworkDiagnostics>;
using NetworkDiagnosticsPtrInfo = mojo::InterfacePtrInfo<NetworkDiagnostics>;
using ThreadSafeNetworkDiagnosticsPtr =
    mojo::ThreadSafeInterfacePtr<NetworkDiagnostics>;
using NetworkDiagnosticsRequest = mojo::InterfaceRequest<NetworkDiagnostics>;
using NetworkDiagnosticsAssociatedPtr =
    mojo::AssociatedInterfacePtr<NetworkDiagnostics>;
using ThreadSafeNetworkDiagnosticsAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NetworkDiagnostics>;
using NetworkDiagnosticsAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NetworkDiagnostics>;
using NetworkDiagnosticsAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NetworkDiagnostics>;

class NetworkDiagnosticsClient;
using NetworkDiagnosticsClientPtr = mojo::InterfacePtr<NetworkDiagnosticsClient>;
using NetworkDiagnosticsClientPtrInfo = mojo::InterfacePtrInfo<NetworkDiagnosticsClient>;
using ThreadSafeNetworkDiagnosticsClientPtr =
    mojo::ThreadSafeInterfacePtr<NetworkDiagnosticsClient>;
using NetworkDiagnosticsClientRequest = mojo::InterfaceRequest<NetworkDiagnosticsClient>;
using NetworkDiagnosticsClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<NetworkDiagnosticsClient>;
using ThreadSafeNetworkDiagnosticsClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NetworkDiagnosticsClient>;
using NetworkDiagnosticsClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NetworkDiagnosticsClient>;
using NetworkDiagnosticsClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NetworkDiagnosticsClient>;


class NetworkDiagnosticsProxy;

template <typename ImplRefTraits>
class NetworkDiagnosticsStub;

class NetworkDiagnosticsRequestValidator;

class  NetworkDiagnostics
    : public NetworkDiagnosticsInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = NetworkDiagnosticsProxy;

  template <typename ImplRefTraits>
  using Stub_ = NetworkDiagnosticsStub<ImplRefTraits>;

  using RequestValidator_ = NetworkDiagnosticsRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRunNetworkDiagnosticsMinVersion = 0,
  };
  virtual ~NetworkDiagnostics() {}

  virtual void RunNetworkDiagnostics(const GURL& failed_url) = 0;
};
class  NetworkDiagnosticsInterceptorForTesting : public NetworkDiagnostics {
  virtual NetworkDiagnostics* GetForwardingInterface() = 0;
  void RunNetworkDiagnostics(const GURL& failed_url) override;
};
class  NetworkDiagnosticsAsyncWaiter {
 public:
  explicit NetworkDiagnosticsAsyncWaiter(NetworkDiagnostics* proxy);
  ~NetworkDiagnosticsAsyncWaiter();

 private:
  NetworkDiagnostics* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetworkDiagnosticsAsyncWaiter);
};

class NetworkDiagnosticsClientProxy;

template <typename ImplRefTraits>
class NetworkDiagnosticsClientStub;

class NetworkDiagnosticsClientRequestValidator;

class  NetworkDiagnosticsClient
    : public NetworkDiagnosticsClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = NetworkDiagnosticsClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = NetworkDiagnosticsClientStub<ImplRefTraits>;

  using RequestValidator_ = NetworkDiagnosticsClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetCanShowNetworkDiagnosticsDialogMinVersion = 0,
    kDNSProbeStatusMinVersion = 0,
  };
  virtual ~NetworkDiagnosticsClient() {}

  virtual void SetCanShowNetworkDiagnosticsDialog(bool can_show) = 0;

  virtual void DNSProbeStatus(int32_t status) = 0;
};
class  NetworkDiagnosticsClientInterceptorForTesting : public NetworkDiagnosticsClient {
  virtual NetworkDiagnosticsClient* GetForwardingInterface() = 0;
  void SetCanShowNetworkDiagnosticsDialog(bool can_show) override;
  void DNSProbeStatus(int32_t status) override;
};
class  NetworkDiagnosticsClientAsyncWaiter {
 public:
  explicit NetworkDiagnosticsClientAsyncWaiter(NetworkDiagnosticsClient* proxy);
  ~NetworkDiagnosticsClientAsyncWaiter();

 private:
  NetworkDiagnosticsClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetworkDiagnosticsClientAsyncWaiter);
};

class  NetworkDiagnosticsProxy
    : public NetworkDiagnostics {
 public:
  explicit NetworkDiagnosticsProxy(mojo::MessageReceiverWithResponder* receiver);
  void RunNetworkDiagnostics(const GURL& failed_url) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  NetworkDiagnosticsClientProxy
    : public NetworkDiagnosticsClient {
 public:
  explicit NetworkDiagnosticsClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetCanShowNetworkDiagnosticsDialog(bool can_show) final;
  void DNSProbeStatus(int32_t status) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  NetworkDiagnosticsStubDispatch {
 public:
  static bool Accept(NetworkDiagnostics* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NetworkDiagnostics* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NetworkDiagnostics>>
class NetworkDiagnosticsStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NetworkDiagnosticsStub() {}
  ~NetworkDiagnosticsStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkDiagnosticsStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkDiagnosticsStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  NetworkDiagnosticsClientStubDispatch {
 public:
  static bool Accept(NetworkDiagnosticsClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NetworkDiagnosticsClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NetworkDiagnosticsClient>>
class NetworkDiagnosticsClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NetworkDiagnosticsClientStub() {}
  ~NetworkDiagnosticsClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkDiagnosticsClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkDiagnosticsClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  NetworkDiagnosticsRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  NetworkDiagnosticsClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace chrome

namespace mojo {

}  // namespace mojo

#endif  // CHROME_COMMON_NETWORK_DIAGNOSTICS_MOJOM_H_