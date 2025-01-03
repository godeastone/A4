// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTROL_MOJOM_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTROL_MOJOM_H_

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
#include "services/device/public/mojom/geolocation_control.mojom-shared.h"
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
class GeolocationControl;
using GeolocationControlPtr = mojo::InterfacePtr<GeolocationControl>;
using GeolocationControlPtrInfo = mojo::InterfacePtrInfo<GeolocationControl>;
using ThreadSafeGeolocationControlPtr =
    mojo::ThreadSafeInterfacePtr<GeolocationControl>;
using GeolocationControlRequest = mojo::InterfaceRequest<GeolocationControl>;
using GeolocationControlAssociatedPtr =
    mojo::AssociatedInterfacePtr<GeolocationControl>;
using ThreadSafeGeolocationControlAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<GeolocationControl>;
using GeolocationControlAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<GeolocationControl>;
using GeolocationControlAssociatedRequest =
    mojo::AssociatedInterfaceRequest<GeolocationControl>;


class GeolocationControlProxy;

template <typename ImplRefTraits>
class GeolocationControlStub;

class GeolocationControlRequestValidator;

class  GeolocationControl
    : public GeolocationControlInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = GeolocationControlProxy;

  template <typename ImplRefTraits>
  using Stub_ = GeolocationControlStub<ImplRefTraits>;

  using RequestValidator_ = GeolocationControlRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kUserDidOptIntoLocationServicesMinVersion = 0,
  };
  virtual ~GeolocationControl() {}

  virtual void UserDidOptIntoLocationServices() = 0;
};
class  GeolocationControlInterceptorForTesting : public GeolocationControl {
  virtual GeolocationControl* GetForwardingInterface() = 0;
  void UserDidOptIntoLocationServices() override;
};
class  GeolocationControlAsyncWaiter {
 public:
  explicit GeolocationControlAsyncWaiter(GeolocationControl* proxy);
  ~GeolocationControlAsyncWaiter();

 private:
  GeolocationControl* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(GeolocationControlAsyncWaiter);
};

class  GeolocationControlProxy
    : public GeolocationControl {
 public:
  explicit GeolocationControlProxy(mojo::MessageReceiverWithResponder* receiver);
  void UserDidOptIntoLocationServices() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  GeolocationControlStubDispatch {
 public:
  static bool Accept(GeolocationControl* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      GeolocationControl* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<GeolocationControl>>
class GeolocationControlStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  GeolocationControlStub() {}
  ~GeolocationControlStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GeolocationControlStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GeolocationControlStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  GeolocationControlRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTROL_MOJOM_H_