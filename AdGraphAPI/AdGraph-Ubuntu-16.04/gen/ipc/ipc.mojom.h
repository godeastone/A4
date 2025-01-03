// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef IPC_IPC_MOJOM_H_
#define IPC_IPC_MOJOM_H_

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
#include "ipc/ipc.mojom-shared.h"
#include "mojo/public/mojom/base/read_only_buffer.mojom.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom.h"
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
#include "base/component_export.h"


namespace IPC {
namespace mojom {
class GenericInterface;
using GenericInterfacePtr = mojo::InterfacePtr<GenericInterface>;
using GenericInterfacePtrInfo = mojo::InterfacePtrInfo<GenericInterface>;
using ThreadSafeGenericInterfacePtr =
    mojo::ThreadSafeInterfacePtr<GenericInterface>;
using GenericInterfaceRequest = mojo::InterfaceRequest<GenericInterface>;
using GenericInterfaceAssociatedPtr =
    mojo::AssociatedInterfacePtr<GenericInterface>;
using ThreadSafeGenericInterfaceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<GenericInterface>;
using GenericInterfaceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<GenericInterface>;
using GenericInterfaceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<GenericInterface>;

class Channel;
using ChannelPtr = mojo::InterfacePtr<Channel>;
using ChannelPtrInfo = mojo::InterfacePtrInfo<Channel>;
using ThreadSafeChannelPtr =
    mojo::ThreadSafeInterfacePtr<Channel>;
using ChannelRequest = mojo::InterfaceRequest<Channel>;
using ChannelAssociatedPtr =
    mojo::AssociatedInterfacePtr<Channel>;
using ThreadSafeChannelAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Channel>;
using ChannelAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Channel>;
using ChannelAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Channel>;

class ChannelBootstrap;
using ChannelBootstrapPtr = mojo::InterfacePtr<ChannelBootstrap>;
using ChannelBootstrapPtrInfo = mojo::InterfacePtrInfo<ChannelBootstrap>;
using ThreadSafeChannelBootstrapPtr =
    mojo::ThreadSafeInterfacePtr<ChannelBootstrap>;
using ChannelBootstrapRequest = mojo::InterfaceRequest<ChannelBootstrap>;
using ChannelBootstrapAssociatedPtr =
    mojo::AssociatedInterfacePtr<ChannelBootstrap>;
using ThreadSafeChannelBootstrapAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ChannelBootstrap>;
using ChannelBootstrapAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ChannelBootstrap>;
using ChannelBootstrapAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ChannelBootstrap>;


class GenericInterfaceProxy;

template <typename ImplRefTraits>
class GenericInterfaceStub;

class GenericInterfaceRequestValidator;

class COMPONENT_EXPORT(IPC_MOJOM) GenericInterface
    : public GenericInterfaceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = GenericInterfaceProxy;

  template <typename ImplRefTraits>
  using Stub_ = GenericInterfaceStub<ImplRefTraits>;

  using RequestValidator_ = GenericInterfaceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
  };
  virtual ~GenericInterface() {}
};
class COMPONENT_EXPORT(IPC_MOJOM) GenericInterfaceInterceptorForTesting : public GenericInterface {
  virtual GenericInterface* GetForwardingInterface() = 0;
};
class COMPONENT_EXPORT(IPC_MOJOM) GenericInterfaceAsyncWaiter {
 public:
  explicit GenericInterfaceAsyncWaiter(GenericInterface* proxy);
  ~GenericInterfaceAsyncWaiter();

 private:
  GenericInterface* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(GenericInterfaceAsyncWaiter);
};

class ChannelProxy;

template <typename ImplRefTraits>
class ChannelStub;

class ChannelRequestValidator;

class COMPONENT_EXPORT(IPC_MOJOM) Channel
    : public ChannelInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ChannelProxy;

  template <typename ImplRefTraits>
  using Stub_ = ChannelStub<ImplRefTraits>;

  using RequestValidator_ = ChannelRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetPeerPidMinVersion = 0,
    kReceiveMinVersion = 0,
    kGetAssociatedInterfaceMinVersion = 0,
  };
  virtual ~Channel() {}

  virtual void SetPeerPid(int32_t pid) = 0;

  virtual void Receive(base::span<const uint8_t> data, base::Optional<std::vector<::mojo::native::SerializedHandlePtr>> handles) = 0;

  virtual void GetAssociatedInterface(const std::string& name, GenericInterfaceAssociatedRequest request) = 0;
};
class COMPONENT_EXPORT(IPC_MOJOM) ChannelInterceptorForTesting : public Channel {
  virtual Channel* GetForwardingInterface() = 0;
  void SetPeerPid(int32_t pid) override;
  void Receive(base::span<const uint8_t> data, base::Optional<std::vector<::mojo::native::SerializedHandlePtr>> handles) override;
  void GetAssociatedInterface(const std::string& name, GenericInterfaceAssociatedRequest request) override;
};
class COMPONENT_EXPORT(IPC_MOJOM) ChannelAsyncWaiter {
 public:
  explicit ChannelAsyncWaiter(Channel* proxy);
  ~ChannelAsyncWaiter();

 private:
  Channel* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ChannelAsyncWaiter);
};

class ChannelBootstrapProxy;

template <typename ImplRefTraits>
class ChannelBootstrapStub;

class ChannelBootstrapRequestValidator;

class COMPONENT_EXPORT(IPC_MOJOM) ChannelBootstrap
    : public ChannelBootstrapInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ChannelBootstrapProxy;

  template <typename ImplRefTraits>
  using Stub_ = ChannelBootstrapStub<ImplRefTraits>;

  using RequestValidator_ = ChannelBootstrapRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
  };
  virtual ~ChannelBootstrap() {}
};
class COMPONENT_EXPORT(IPC_MOJOM) ChannelBootstrapInterceptorForTesting : public ChannelBootstrap {
  virtual ChannelBootstrap* GetForwardingInterface() = 0;
};
class COMPONENT_EXPORT(IPC_MOJOM) ChannelBootstrapAsyncWaiter {
 public:
  explicit ChannelBootstrapAsyncWaiter(ChannelBootstrap* proxy);
  ~ChannelBootstrapAsyncWaiter();

 private:
  ChannelBootstrap* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ChannelBootstrapAsyncWaiter);
};

class COMPONENT_EXPORT(IPC_MOJOM) GenericInterfaceProxy
    : public GenericInterface {
 public:
  explicit GenericInterfaceProxy(mojo::MessageReceiverWithResponder* receiver);

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(IPC_MOJOM) ChannelProxy
    : public Channel {
 public:
  explicit ChannelProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetPeerPid(int32_t pid) final;
  void Receive(base::span<const uint8_t> data, base::Optional<std::vector<::mojo::native::SerializedHandlePtr>> handles) final;
  void GetAssociatedInterface(const std::string& name, GenericInterfaceAssociatedRequest request) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(IPC_MOJOM) ChannelBootstrapProxy
    : public ChannelBootstrap {
 public:
  explicit ChannelBootstrapProxy(mojo::MessageReceiverWithResponder* receiver);

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class COMPONENT_EXPORT(IPC_MOJOM) GenericInterfaceStubDispatch {
 public:
  static bool Accept(GenericInterface* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      GenericInterface* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<GenericInterface>>
class GenericInterfaceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  GenericInterfaceStub() {}
  ~GenericInterfaceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GenericInterfaceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GenericInterfaceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(IPC_MOJOM) ChannelStubDispatch {
 public:
  static bool Accept(Channel* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Channel* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Channel>>
class ChannelStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ChannelStub() {}
  ~ChannelStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ChannelStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ChannelStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(IPC_MOJOM) ChannelBootstrapStubDispatch {
 public:
  static bool Accept(ChannelBootstrap* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ChannelBootstrap* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ChannelBootstrap>>
class ChannelBootstrapStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ChannelBootstrapStub() {}
  ~ChannelBootstrapStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ChannelBootstrapStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ChannelBootstrapStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(IPC_MOJOM) GenericInterfaceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(IPC_MOJOM) ChannelRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(IPC_MOJOM) ChannelBootstrapRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace IPC

namespace mojo {

}  // namespace mojo

#endif  // IPC_IPC_MOJOM_H_