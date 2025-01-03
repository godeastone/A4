// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_PAGE_SIGNAL_MOJOM_BLINK_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_PAGE_SIGNAL_MOJOM_BLINK_H_

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
#include "services/resource_coordinator/public/mojom/page_signal.mojom-shared.h"
#include "services/resource_coordinator/public/mojom/coordination_unit.mojom-blink.h"
#include "services/resource_coordinator/public/mojom/lifecycle.mojom-blink.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"

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
#include "base/component_export.h"


namespace resource_coordinator {
namespace mojom {
namespace blink {
class PageSignalReceiver;
using PageSignalReceiverPtr = mojo::InterfacePtr<PageSignalReceiver>;
using RevocablePageSignalReceiverPtr = ::blink::RevocableInterfacePtr<PageSignalReceiver>;
using PageSignalReceiverPtrInfo = mojo::InterfacePtrInfo<PageSignalReceiver>;
using ThreadSafePageSignalReceiverPtr =
    mojo::ThreadSafeInterfacePtr<PageSignalReceiver>;
using PageSignalReceiverRequest = mojo::InterfaceRequest<PageSignalReceiver>;
using PageSignalReceiverAssociatedPtr =
    mojo::AssociatedInterfacePtr<PageSignalReceiver>;
using ThreadSafePageSignalReceiverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PageSignalReceiver>;
using PageSignalReceiverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PageSignalReceiver>;
using PageSignalReceiverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PageSignalReceiver>;

class PageSignalGenerator;
using PageSignalGeneratorPtr = mojo::InterfacePtr<PageSignalGenerator>;
using RevocablePageSignalGeneratorPtr = ::blink::RevocableInterfacePtr<PageSignalGenerator>;
using PageSignalGeneratorPtrInfo = mojo::InterfacePtrInfo<PageSignalGenerator>;
using ThreadSafePageSignalGeneratorPtr =
    mojo::ThreadSafeInterfacePtr<PageSignalGenerator>;
using PageSignalGeneratorRequest = mojo::InterfaceRequest<PageSignalGenerator>;
using PageSignalGeneratorAssociatedPtr =
    mojo::AssociatedInterfacePtr<PageSignalGenerator>;
using ThreadSafePageSignalGeneratorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PageSignalGenerator>;
using PageSignalGeneratorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PageSignalGenerator>;
using PageSignalGeneratorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PageSignalGenerator>;


class PageSignalReceiverProxy;

template <typename ImplRefTraits>
class PageSignalReceiverStub;

class PageSignalReceiverRequestValidator;

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) PageSignalReceiver
    : public PageSignalReceiverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PageSignalReceiverProxy;

  template <typename ImplRefTraits>
  using Stub_ = PageSignalReceiverStub<ImplRefTraits>;

  using RequestValidator_ = PageSignalReceiverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kNotifyPageAlmostIdleMinVersion = 0,
    kSetExpectedTaskQueueingDurationMinVersion = 0,
    kSetLifecycleStateMinVersion = 0,
  };
  virtual ~PageSignalReceiver() {}

  virtual void NotifyPageAlmostIdle(::resource_coordinator::mojom::blink::CoordinationUnitIDPtr cu_id) = 0;

  virtual void SetExpectedTaskQueueingDuration(::resource_coordinator::mojom::blink::CoordinationUnitIDPtr cu_id, WTF::TimeDelta duration) = 0;

  virtual void SetLifecycleState(::resource_coordinator::mojom::blink::CoordinationUnitIDPtr cu_id, ::resource_coordinator::mojom::blink::LifecycleState state) = 0;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) PageSignalReceiverInterceptorForTesting : public PageSignalReceiver {
  virtual PageSignalReceiver* GetForwardingInterface() = 0;
  void NotifyPageAlmostIdle(::resource_coordinator::mojom::blink::CoordinationUnitIDPtr cu_id) override;
  void SetExpectedTaskQueueingDuration(::resource_coordinator::mojom::blink::CoordinationUnitIDPtr cu_id, WTF::TimeDelta duration) override;
  void SetLifecycleState(::resource_coordinator::mojom::blink::CoordinationUnitIDPtr cu_id, ::resource_coordinator::mojom::blink::LifecycleState state) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) PageSignalReceiverAsyncWaiter {
 public:
  explicit PageSignalReceiverAsyncWaiter(PageSignalReceiver* proxy);
  ~PageSignalReceiverAsyncWaiter();

 private:
  PageSignalReceiver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PageSignalReceiverAsyncWaiter);
};

class PageSignalGeneratorProxy;

template <typename ImplRefTraits>
class PageSignalGeneratorStub;

class PageSignalGeneratorRequestValidator;

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) PageSignalGenerator
    : public PageSignalGeneratorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PageSignalGeneratorProxy;

  template <typename ImplRefTraits>
  using Stub_ = PageSignalGeneratorStub<ImplRefTraits>;

  using RequestValidator_ = PageSignalGeneratorRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAddReceiverMinVersion = 0,
  };
  virtual ~PageSignalGenerator() {}

  virtual void AddReceiver(PageSignalReceiverPtr receiver) = 0;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) PageSignalGeneratorInterceptorForTesting : public PageSignalGenerator {
  virtual PageSignalGenerator* GetForwardingInterface() = 0;
  void AddReceiver(PageSignalReceiverPtr receiver) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) PageSignalGeneratorAsyncWaiter {
 public:
  explicit PageSignalGeneratorAsyncWaiter(PageSignalGenerator* proxy);
  ~PageSignalGeneratorAsyncWaiter();

 private:
  PageSignalGenerator* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PageSignalGeneratorAsyncWaiter);
};

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) PageSignalReceiverProxy
    : public PageSignalReceiver {
 public:
  explicit PageSignalReceiverProxy(mojo::MessageReceiverWithResponder* receiver);
  void NotifyPageAlmostIdle(::resource_coordinator::mojom::blink::CoordinationUnitIDPtr cu_id) final;
  void SetExpectedTaskQueueingDuration(::resource_coordinator::mojom::blink::CoordinationUnitIDPtr cu_id, WTF::TimeDelta duration) final;
  void SetLifecycleState(::resource_coordinator::mojom::blink::CoordinationUnitIDPtr cu_id, ::resource_coordinator::mojom::blink::LifecycleState state) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) PageSignalGeneratorProxy
    : public PageSignalGenerator {
 public:
  explicit PageSignalGeneratorProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddReceiver(PageSignalReceiverPtr receiver) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) PageSignalReceiverStubDispatch {
 public:
  static bool Accept(PageSignalReceiver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PageSignalReceiver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PageSignalReceiver>>
class PageSignalReceiverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PageSignalReceiverStub() {}
  ~PageSignalReceiverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PageSignalReceiverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PageSignalReceiverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) PageSignalGeneratorStubDispatch {
 public:
  static bool Accept(PageSignalGenerator* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PageSignalGenerator* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PageSignalGenerator>>
class PageSignalGeneratorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PageSignalGeneratorStub() {}
  ~PageSignalGeneratorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PageSignalGeneratorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PageSignalGeneratorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) PageSignalReceiverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) PageSignalGeneratorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace resource_coordinator

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_PAGE_SIGNAL_MOJOM_BLINK_H_