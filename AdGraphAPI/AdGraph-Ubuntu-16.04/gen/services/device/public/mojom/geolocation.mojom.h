// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_H_

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
#include "services/device/public/mojom/geolocation.mojom-shared.h"
#include "services/device/public/mojom/geoposition.mojom.h"
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


namespace device {
namespace mojom {
class Geolocation;
using GeolocationPtr = mojo::InterfacePtr<Geolocation>;
using GeolocationPtrInfo = mojo::InterfacePtrInfo<Geolocation>;
using ThreadSafeGeolocationPtr =
    mojo::ThreadSafeInterfacePtr<Geolocation>;
using GeolocationRequest = mojo::InterfaceRequest<Geolocation>;
using GeolocationAssociatedPtr =
    mojo::AssociatedInterfacePtr<Geolocation>;
using ThreadSafeGeolocationAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Geolocation>;
using GeolocationAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Geolocation>;
using GeolocationAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Geolocation>;


class GeolocationProxy;

template <typename ImplRefTraits>
class GeolocationStub;

class GeolocationRequestValidator;
class GeolocationResponseValidator;

class  Geolocation
    : public GeolocationInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = GeolocationProxy;

  template <typename ImplRefTraits>
  using Stub_ = GeolocationStub<ImplRefTraits>;

  using RequestValidator_ = GeolocationRequestValidator;
  using ResponseValidator_ = GeolocationResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSetHighAccuracyMinVersion = 0,
    kQueryNextPositionMinVersion = 0,
  };
  virtual ~Geolocation() {}

  virtual void SetHighAccuracy(bool high_accuracy) = 0;


  using QueryNextPositionCallback = base::OnceCallback<void(::device::mojom::GeopositionPtr)>;
  virtual void QueryNextPosition(QueryNextPositionCallback callback) = 0;
};
class  GeolocationInterceptorForTesting : public Geolocation {
  virtual Geolocation* GetForwardingInterface() = 0;
  void SetHighAccuracy(bool high_accuracy) override;
  void QueryNextPosition(QueryNextPositionCallback callback) override;
};
class  GeolocationAsyncWaiter {
 public:
  explicit GeolocationAsyncWaiter(Geolocation* proxy);
  ~GeolocationAsyncWaiter();
  void QueryNextPosition(
      ::device::mojom::GeopositionPtr* out_geoposition);

 private:
  Geolocation* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(GeolocationAsyncWaiter);
};

class  GeolocationProxy
    : public Geolocation {
 public:
  explicit GeolocationProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetHighAccuracy(bool high_accuracy) final;
  void QueryNextPosition(QueryNextPositionCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  GeolocationStubDispatch {
 public:
  static bool Accept(Geolocation* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Geolocation* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Geolocation>>
class GeolocationStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  GeolocationStub() {}
  ~GeolocationStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GeolocationStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GeolocationStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  GeolocationRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  GeolocationResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_H_