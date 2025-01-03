// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_H_

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
#include "services/device/public/mojom/screen_orientation.mojom-shared.h"
#include "services/device/public/mojom/screen_orientation_lock_types.mojom.h"
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
class ScreenOrientation;
using ScreenOrientationPtr = mojo::InterfacePtr<ScreenOrientation>;
using ScreenOrientationPtrInfo = mojo::InterfacePtrInfo<ScreenOrientation>;
using ThreadSafeScreenOrientationPtr =
    mojo::ThreadSafeInterfacePtr<ScreenOrientation>;
using ScreenOrientationRequest = mojo::InterfaceRequest<ScreenOrientation>;
using ScreenOrientationAssociatedPtr =
    mojo::AssociatedInterfacePtr<ScreenOrientation>;
using ThreadSafeScreenOrientationAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ScreenOrientation>;
using ScreenOrientationAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ScreenOrientation>;
using ScreenOrientationAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ScreenOrientation>;

class ScreenOrientationListener;
using ScreenOrientationListenerPtr = mojo::InterfacePtr<ScreenOrientationListener>;
using ScreenOrientationListenerPtrInfo = mojo::InterfacePtrInfo<ScreenOrientationListener>;
using ThreadSafeScreenOrientationListenerPtr =
    mojo::ThreadSafeInterfacePtr<ScreenOrientationListener>;
using ScreenOrientationListenerRequest = mojo::InterfaceRequest<ScreenOrientationListener>;
using ScreenOrientationListenerAssociatedPtr =
    mojo::AssociatedInterfacePtr<ScreenOrientationListener>;
using ThreadSafeScreenOrientationListenerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ScreenOrientationListener>;
using ScreenOrientationListenerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ScreenOrientationListener>;
using ScreenOrientationListenerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ScreenOrientationListener>;


class ScreenOrientationProxy;

template <typename ImplRefTraits>
class ScreenOrientationStub;

class ScreenOrientationRequestValidator;
class ScreenOrientationResponseValidator;

class  ScreenOrientation
    : public ScreenOrientationInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ScreenOrientationProxy;

  template <typename ImplRefTraits>
  using Stub_ = ScreenOrientationStub<ImplRefTraits>;

  using RequestValidator_ = ScreenOrientationRequestValidator;
  using ResponseValidator_ = ScreenOrientationResponseValidator;
  enum MethodMinVersions : uint32_t {
    kLockOrientationMinVersion = 0,
    kUnlockOrientationMinVersion = 0,
  };
  virtual ~ScreenOrientation() {}


  using LockOrientationCallback = base::OnceCallback<void(::device::mojom::ScreenOrientationLockResult)>;
  virtual void LockOrientation(::blink::WebScreenOrientationLockType orientation, LockOrientationCallback callback) = 0;

  virtual void UnlockOrientation() = 0;
};
class  ScreenOrientationInterceptorForTesting : public ScreenOrientation {
  virtual ScreenOrientation* GetForwardingInterface() = 0;
  void LockOrientation(::blink::WebScreenOrientationLockType orientation, LockOrientationCallback callback) override;
  void UnlockOrientation() override;
};
class  ScreenOrientationAsyncWaiter {
 public:
  explicit ScreenOrientationAsyncWaiter(ScreenOrientation* proxy);
  ~ScreenOrientationAsyncWaiter();
  void LockOrientation(
      ::blink::WebScreenOrientationLockType orientation, ::device::mojom::ScreenOrientationLockResult* out_result);

 private:
  ScreenOrientation* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ScreenOrientationAsyncWaiter);
};

class ScreenOrientationListenerProxy;

template <typename ImplRefTraits>
class ScreenOrientationListenerStub;

class ScreenOrientationListenerRequestValidator;
class ScreenOrientationListenerResponseValidator;

class  ScreenOrientationListener
    : public ScreenOrientationListenerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ScreenOrientationListenerProxy;

  template <typename ImplRefTraits>
  using Stub_ = ScreenOrientationListenerStub<ImplRefTraits>;

  using RequestValidator_ = ScreenOrientationListenerRequestValidator;
  using ResponseValidator_ = ScreenOrientationListenerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kStartMinVersion = 0,
    kStopMinVersion = 0,
    kIsAutoRotateEnabledByUserMinVersion = 0,
  };
  virtual ~ScreenOrientationListener() {}

  virtual void Start() = 0;

  virtual void Stop() = 0;


  using IsAutoRotateEnabledByUserCallback = base::OnceCallback<void(bool)>;
  virtual void IsAutoRotateEnabledByUser(IsAutoRotateEnabledByUserCallback callback) = 0;
};
class  ScreenOrientationListenerInterceptorForTesting : public ScreenOrientationListener {
  virtual ScreenOrientationListener* GetForwardingInterface() = 0;
  void Start() override;
  void Stop() override;
  void IsAutoRotateEnabledByUser(IsAutoRotateEnabledByUserCallback callback) override;
};
class  ScreenOrientationListenerAsyncWaiter {
 public:
  explicit ScreenOrientationListenerAsyncWaiter(ScreenOrientationListener* proxy);
  ~ScreenOrientationListenerAsyncWaiter();
  void IsAutoRotateEnabledByUser(
      bool* out_enabled);

 private:
  ScreenOrientationListener* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ScreenOrientationListenerAsyncWaiter);
};

class  ScreenOrientationProxy
    : public ScreenOrientation {
 public:
  explicit ScreenOrientationProxy(mojo::MessageReceiverWithResponder* receiver);
  void LockOrientation(::blink::WebScreenOrientationLockType orientation, LockOrientationCallback callback) final;
  void UnlockOrientation() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  ScreenOrientationListenerProxy
    : public ScreenOrientationListener {
 public:
  explicit ScreenOrientationListenerProxy(mojo::MessageReceiverWithResponder* receiver);
  void Start() final;
  void Stop() final;
  void IsAutoRotateEnabledByUser(IsAutoRotateEnabledByUserCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ScreenOrientationStubDispatch {
 public:
  static bool Accept(ScreenOrientation* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ScreenOrientation* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ScreenOrientation>>
class ScreenOrientationStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ScreenOrientationStub() {}
  ~ScreenOrientationStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ScreenOrientationStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ScreenOrientationStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ScreenOrientationListenerStubDispatch {
 public:
  static bool Accept(ScreenOrientationListener* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ScreenOrientationListener* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ScreenOrientationListener>>
class ScreenOrientationListenerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ScreenOrientationListenerStub() {}
  ~ScreenOrientationListenerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ScreenOrientationListenerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ScreenOrientationListenerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ScreenOrientationRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ScreenOrientationListenerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ScreenOrientationResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ScreenOrientationListenerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_H_