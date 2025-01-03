// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_GEOLOCATION_GEOLOCATION_SERVICE_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_GEOLOCATION_GEOLOCATION_SERVICE_MOJOM_H_

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
#include "third_party/blink/public/platform/modules/geolocation/geolocation_service.mojom-shared.h"
#include "services/device/public/mojom/geolocation.mojom.h"
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


namespace blink {
namespace mojom {
class GeolocationService;
using GeolocationServicePtr = mojo::InterfacePtr<GeolocationService>;
using GeolocationServicePtrInfo = mojo::InterfacePtrInfo<GeolocationService>;
using ThreadSafeGeolocationServicePtr =
    mojo::ThreadSafeInterfacePtr<GeolocationService>;
using GeolocationServiceRequest = mojo::InterfaceRequest<GeolocationService>;
using GeolocationServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<GeolocationService>;
using ThreadSafeGeolocationServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<GeolocationService>;
using GeolocationServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<GeolocationService>;
using GeolocationServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<GeolocationService>;


class GeolocationServiceProxy;

template <typename ImplRefTraits>
class GeolocationServiceStub;

class GeolocationServiceRequestValidator;

class CONTENT_EXPORT GeolocationService
    : public GeolocationServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = GeolocationServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = GeolocationServiceStub<ImplRefTraits>;

  using RequestValidator_ = GeolocationServiceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateGeolocationMinVersion = 0,
  };
  virtual ~GeolocationService() {}

  virtual void CreateGeolocation(::device::mojom::GeolocationRequest request, bool user_gesture) = 0;
};
class CONTENT_EXPORT GeolocationServiceInterceptorForTesting : public GeolocationService {
  virtual GeolocationService* GetForwardingInterface() = 0;
  void CreateGeolocation(::device::mojom::GeolocationRequest request, bool user_gesture) override;
};
class CONTENT_EXPORT GeolocationServiceAsyncWaiter {
 public:
  explicit GeolocationServiceAsyncWaiter(GeolocationService* proxy);
  ~GeolocationServiceAsyncWaiter();

 private:
  GeolocationService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(GeolocationServiceAsyncWaiter);
};

class CONTENT_EXPORT GeolocationServiceProxy
    : public GeolocationService {
 public:
  explicit GeolocationServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateGeolocation(::device::mojom::GeolocationRequest request, bool user_gesture) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT GeolocationServiceStubDispatch {
 public:
  static bool Accept(GeolocationService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      GeolocationService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<GeolocationService>>
class GeolocationServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  GeolocationServiceStub() {}
  ~GeolocationServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GeolocationServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GeolocationServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT GeolocationServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_GEOLOCATION_GEOLOCATION_SERVICE_MOJOM_H_