// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_ASSOCIATED_INTERFACES_MOJOM_H_
#define CONTENT_COMMON_ASSOCIATED_INTERFACES_MOJOM_H_

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
#include "content/common/associated_interfaces.mojom-shared.h"
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
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class AssociatedInterface;
using AssociatedInterfacePtr = mojo::InterfacePtr<AssociatedInterface>;
using AssociatedInterfacePtrInfo = mojo::InterfacePtrInfo<AssociatedInterface>;
using ThreadSafeAssociatedInterfacePtr =
    mojo::ThreadSafeInterfacePtr<AssociatedInterface>;
using AssociatedInterfaceRequest = mojo::InterfaceRequest<AssociatedInterface>;
using AssociatedInterfaceAssociatedPtr =
    mojo::AssociatedInterfacePtr<AssociatedInterface>;
using ThreadSafeAssociatedInterfaceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AssociatedInterface>;
using AssociatedInterfaceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AssociatedInterface>;
using AssociatedInterfaceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AssociatedInterface>;

class AssociatedInterfaceProvider;
using AssociatedInterfaceProviderPtr = mojo::InterfacePtr<AssociatedInterfaceProvider>;
using AssociatedInterfaceProviderPtrInfo = mojo::InterfacePtrInfo<AssociatedInterfaceProvider>;
using ThreadSafeAssociatedInterfaceProviderPtr =
    mojo::ThreadSafeInterfacePtr<AssociatedInterfaceProvider>;
using AssociatedInterfaceProviderRequest = mojo::InterfaceRequest<AssociatedInterfaceProvider>;
using AssociatedInterfaceProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<AssociatedInterfaceProvider>;
using ThreadSafeAssociatedInterfaceProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AssociatedInterfaceProvider>;
using AssociatedInterfaceProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AssociatedInterfaceProvider>;
using AssociatedInterfaceProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AssociatedInterfaceProvider>;

class RouteProvider;
using RouteProviderPtr = mojo::InterfacePtr<RouteProvider>;
using RouteProviderPtrInfo = mojo::InterfacePtrInfo<RouteProvider>;
using ThreadSafeRouteProviderPtr =
    mojo::ThreadSafeInterfacePtr<RouteProvider>;
using RouteProviderRequest = mojo::InterfaceRequest<RouteProvider>;
using RouteProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<RouteProvider>;
using ThreadSafeRouteProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<RouteProvider>;
using RouteProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<RouteProvider>;
using RouteProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<RouteProvider>;


class AssociatedInterfaceProxy;

template <typename ImplRefTraits>
class AssociatedInterfaceStub;

class AssociatedInterfaceRequestValidator;

class CONTENT_EXPORT AssociatedInterface
    : public AssociatedInterfaceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = AssociatedInterfaceProxy;

  template <typename ImplRefTraits>
  using Stub_ = AssociatedInterfaceStub<ImplRefTraits>;

  using RequestValidator_ = AssociatedInterfaceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
  };
  virtual ~AssociatedInterface() {}
};
class CONTENT_EXPORT AssociatedInterfaceInterceptorForTesting : public AssociatedInterface {
  virtual AssociatedInterface* GetForwardingInterface() = 0;
};
class CONTENT_EXPORT AssociatedInterfaceAsyncWaiter {
 public:
  explicit AssociatedInterfaceAsyncWaiter(AssociatedInterface* proxy);
  ~AssociatedInterfaceAsyncWaiter();

 private:
  AssociatedInterface* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AssociatedInterfaceAsyncWaiter);
};

class AssociatedInterfaceProviderProxy;

template <typename ImplRefTraits>
class AssociatedInterfaceProviderStub;

class AssociatedInterfaceProviderRequestValidator;

class CONTENT_EXPORT AssociatedInterfaceProvider
    : public AssociatedInterfaceProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = AssociatedInterfaceProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = AssociatedInterfaceProviderStub<ImplRefTraits>;

  using RequestValidator_ = AssociatedInterfaceProviderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kGetAssociatedInterfaceMinVersion = 0,
  };
  virtual ~AssociatedInterfaceProvider() {}

  virtual void GetAssociatedInterface(const std::string& name, AssociatedInterfaceAssociatedRequest request) = 0;
};
class CONTENT_EXPORT AssociatedInterfaceProviderInterceptorForTesting : public AssociatedInterfaceProvider {
  virtual AssociatedInterfaceProvider* GetForwardingInterface() = 0;
  void GetAssociatedInterface(const std::string& name, AssociatedInterfaceAssociatedRequest request) override;
};
class CONTENT_EXPORT AssociatedInterfaceProviderAsyncWaiter {
 public:
  explicit AssociatedInterfaceProviderAsyncWaiter(AssociatedInterfaceProvider* proxy);
  ~AssociatedInterfaceProviderAsyncWaiter();

 private:
  AssociatedInterfaceProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AssociatedInterfaceProviderAsyncWaiter);
};

class RouteProviderProxy;

template <typename ImplRefTraits>
class RouteProviderStub;

class RouteProviderRequestValidator;

class CONTENT_EXPORT RouteProvider
    : public RouteProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = RouteProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = RouteProviderStub<ImplRefTraits>;

  using RequestValidator_ = RouteProviderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kGetRouteMinVersion = 0,
  };
  virtual ~RouteProvider() {}

  virtual void GetRoute(int32_t routing_id, AssociatedInterfaceProviderAssociatedRequest request) = 0;
};
class CONTENT_EXPORT RouteProviderInterceptorForTesting : public RouteProvider {
  virtual RouteProvider* GetForwardingInterface() = 0;
  void GetRoute(int32_t routing_id, AssociatedInterfaceProviderAssociatedRequest request) override;
};
class CONTENT_EXPORT RouteProviderAsyncWaiter {
 public:
  explicit RouteProviderAsyncWaiter(RouteProvider* proxy);
  ~RouteProviderAsyncWaiter();

 private:
  RouteProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RouteProviderAsyncWaiter);
};

class CONTENT_EXPORT AssociatedInterfaceProxy
    : public AssociatedInterface {
 public:
  explicit AssociatedInterfaceProxy(mojo::MessageReceiverWithResponder* receiver);

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT AssociatedInterfaceProviderProxy
    : public AssociatedInterfaceProvider {
 public:
  explicit AssociatedInterfaceProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetAssociatedInterface(const std::string& name, AssociatedInterfaceAssociatedRequest request) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT RouteProviderProxy
    : public RouteProvider {
 public:
  explicit RouteProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetRoute(int32_t routing_id, AssociatedInterfaceProviderAssociatedRequest request) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT AssociatedInterfaceStubDispatch {
 public:
  static bool Accept(AssociatedInterface* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AssociatedInterface* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AssociatedInterface>>
class AssociatedInterfaceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AssociatedInterfaceStub() {}
  ~AssociatedInterfaceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AssociatedInterfaceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AssociatedInterfaceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT AssociatedInterfaceProviderStubDispatch {
 public:
  static bool Accept(AssociatedInterfaceProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AssociatedInterfaceProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AssociatedInterfaceProvider>>
class AssociatedInterfaceProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AssociatedInterfaceProviderStub() {}
  ~AssociatedInterfaceProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AssociatedInterfaceProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AssociatedInterfaceProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT RouteProviderStubDispatch {
 public:
  static bool Accept(RouteProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RouteProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RouteProvider>>
class RouteProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RouteProviderStub() {}
  ~RouteProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RouteProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RouteProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT AssociatedInterfaceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT AssociatedInterfaceProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT RouteProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_ASSOCIATED_INTERFACES_MOJOM_H_