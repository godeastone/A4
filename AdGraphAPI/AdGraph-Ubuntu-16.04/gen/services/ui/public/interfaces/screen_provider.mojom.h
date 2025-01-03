// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_SCREEN_PROVIDER_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_SCREEN_PROVIDER_MOJOM_H_

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
#include "services/ui/public/interfaces/screen_provider.mojom-shared.h"
#include "services/ui/public/interfaces/window_manager_constants.mojom.h"
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


namespace ui {
namespace mojom {
class ScreenProviderObserver;
using ScreenProviderObserverPtr = mojo::InterfacePtr<ScreenProviderObserver>;
using ScreenProviderObserverPtrInfo = mojo::InterfacePtrInfo<ScreenProviderObserver>;
using ThreadSafeScreenProviderObserverPtr =
    mojo::ThreadSafeInterfacePtr<ScreenProviderObserver>;
using ScreenProviderObserverRequest = mojo::InterfaceRequest<ScreenProviderObserver>;
using ScreenProviderObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<ScreenProviderObserver>;
using ThreadSafeScreenProviderObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ScreenProviderObserver>;
using ScreenProviderObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ScreenProviderObserver>;
using ScreenProviderObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ScreenProviderObserver>;

class ScreenProvider;
using ScreenProviderPtr = mojo::InterfacePtr<ScreenProvider>;
using ScreenProviderPtrInfo = mojo::InterfacePtrInfo<ScreenProvider>;
using ThreadSafeScreenProviderPtr =
    mojo::ThreadSafeInterfacePtr<ScreenProvider>;
using ScreenProviderRequest = mojo::InterfaceRequest<ScreenProvider>;
using ScreenProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<ScreenProvider>;
using ThreadSafeScreenProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ScreenProvider>;
using ScreenProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ScreenProvider>;
using ScreenProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ScreenProvider>;


class ScreenProviderObserverProxy;

template <typename ImplRefTraits>
class ScreenProviderObserverStub;

class ScreenProviderObserverRequestValidator;

class  ScreenProviderObserver
    : public ScreenProviderObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ScreenProviderObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = ScreenProviderObserverStub<ImplRefTraits>;

  using RequestValidator_ = ScreenProviderObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnDisplaysChangedMinVersion = 0,
  };
  virtual ~ScreenProviderObserver() {}

  virtual void OnDisplaysChanged(std::vector<::ui::mojom::WsDisplayPtr> displays, int64_t primary_display_id, int64_t internal_display_id) = 0;
};
class  ScreenProviderObserverInterceptorForTesting : public ScreenProviderObserver {
  virtual ScreenProviderObserver* GetForwardingInterface() = 0;
  void OnDisplaysChanged(std::vector<::ui::mojom::WsDisplayPtr> displays, int64_t primary_display_id, int64_t internal_display_id) override;
};
class  ScreenProviderObserverAsyncWaiter {
 public:
  explicit ScreenProviderObserverAsyncWaiter(ScreenProviderObserver* proxy);
  ~ScreenProviderObserverAsyncWaiter();

 private:
  ScreenProviderObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ScreenProviderObserverAsyncWaiter);
};

class ScreenProviderProxy;

template <typename ImplRefTraits>
class ScreenProviderStub;

class ScreenProviderRequestValidator;

class  ScreenProvider
    : public ScreenProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ScreenProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = ScreenProviderStub<ImplRefTraits>;

  using RequestValidator_ = ScreenProviderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAddObserverMinVersion = 0,
  };
  virtual ~ScreenProvider() {}

  virtual void AddObserver(ScreenProviderObserverPtr observer) = 0;
};
class  ScreenProviderInterceptorForTesting : public ScreenProvider {
  virtual ScreenProvider* GetForwardingInterface() = 0;
  void AddObserver(ScreenProviderObserverPtr observer) override;
};
class  ScreenProviderAsyncWaiter {
 public:
  explicit ScreenProviderAsyncWaiter(ScreenProvider* proxy);
  ~ScreenProviderAsyncWaiter();

 private:
  ScreenProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ScreenProviderAsyncWaiter);
};

class  ScreenProviderObserverProxy
    : public ScreenProviderObserver {
 public:
  explicit ScreenProviderObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnDisplaysChanged(std::vector<::ui::mojom::WsDisplayPtr> displays, int64_t primary_display_id, int64_t internal_display_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  ScreenProviderProxy
    : public ScreenProvider {
 public:
  explicit ScreenProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddObserver(ScreenProviderObserverPtr observer) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ScreenProviderObserverStubDispatch {
 public:
  static bool Accept(ScreenProviderObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ScreenProviderObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ScreenProviderObserver>>
class ScreenProviderObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ScreenProviderObserverStub() {}
  ~ScreenProviderObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ScreenProviderObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ScreenProviderObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ScreenProviderStubDispatch {
 public:
  static bool Accept(ScreenProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ScreenProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ScreenProvider>>
class ScreenProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ScreenProviderStub() {}
  ~ScreenProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ScreenProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ScreenProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ScreenProviderObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ScreenProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_SCREEN_PROVIDER_MOJOM_H_