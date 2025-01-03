// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_PREFETCH_URL_LOADER_SERVICE_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_PREFETCH_URL_LOADER_SERVICE_MOJOM_H_

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
#include "third_party/blink/public/mojom/loader/prefetch_url_loader_service.mojom-shared.h"
#include "services/network/public/mojom/url_loader_factory.mojom.h"
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
#include "third_party/blink/common/common_export.h"


namespace blink {
namespace mojom {
class PrefetchURLLoaderService;
using PrefetchURLLoaderServicePtr = mojo::InterfacePtr<PrefetchURLLoaderService>;
using PrefetchURLLoaderServicePtrInfo = mojo::InterfacePtrInfo<PrefetchURLLoaderService>;
using ThreadSafePrefetchURLLoaderServicePtr =
    mojo::ThreadSafeInterfacePtr<PrefetchURLLoaderService>;
using PrefetchURLLoaderServiceRequest = mojo::InterfaceRequest<PrefetchURLLoaderService>;
using PrefetchURLLoaderServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<PrefetchURLLoaderService>;
using ThreadSafePrefetchURLLoaderServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PrefetchURLLoaderService>;
using PrefetchURLLoaderServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PrefetchURLLoaderService>;
using PrefetchURLLoaderServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PrefetchURLLoaderService>;


class PrefetchURLLoaderServiceProxy;

template <typename ImplRefTraits>
class PrefetchURLLoaderServiceStub;

class PrefetchURLLoaderServiceRequestValidator;

class BLINK_COMMON_EXPORT PrefetchURLLoaderService
    : public PrefetchURLLoaderServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PrefetchURLLoaderServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = PrefetchURLLoaderServiceStub<ImplRefTraits>;

  using RequestValidator_ = PrefetchURLLoaderServiceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kGetFactoryMinVersion = 0,
  };
  virtual ~PrefetchURLLoaderService() {}

  virtual void GetFactory(::network::mojom::URLLoaderFactoryRequest factory) = 0;
};
class BLINK_COMMON_EXPORT PrefetchURLLoaderServiceInterceptorForTesting : public PrefetchURLLoaderService {
  virtual PrefetchURLLoaderService* GetForwardingInterface() = 0;
  void GetFactory(::network::mojom::URLLoaderFactoryRequest factory) override;
};
class BLINK_COMMON_EXPORT PrefetchURLLoaderServiceAsyncWaiter {
 public:
  explicit PrefetchURLLoaderServiceAsyncWaiter(PrefetchURLLoaderService* proxy);
  ~PrefetchURLLoaderServiceAsyncWaiter();

 private:
  PrefetchURLLoaderService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PrefetchURLLoaderServiceAsyncWaiter);
};

class BLINK_COMMON_EXPORT PrefetchURLLoaderServiceProxy
    : public PrefetchURLLoaderService {
 public:
  explicit PrefetchURLLoaderServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetFactory(::network::mojom::URLLoaderFactoryRequest factory) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT PrefetchURLLoaderServiceStubDispatch {
 public:
  static bool Accept(PrefetchURLLoaderService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PrefetchURLLoaderService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PrefetchURLLoaderService>>
class PrefetchURLLoaderServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PrefetchURLLoaderServiceStub() {}
  ~PrefetchURLLoaderServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PrefetchURLLoaderServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PrefetchURLLoaderServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT PrefetchURLLoaderServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_PREFETCH_URL_LOADER_SERVICE_MOJOM_H_