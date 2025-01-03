// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_VISITEDLINK_COMMON_VISITEDLINK_MOJOM_H_
#define COMPONENTS_VISITEDLINK_COMMON_VISITEDLINK_MOJOM_H_

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
#include "components/visitedlink/common/visitedlink.mojom-shared.h"
#include "mojo/public/mojom/base/shared_memory.mojom.h"
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


namespace visitedlink {
namespace mojom {
class VisitedLinkNotificationSink;
using VisitedLinkNotificationSinkPtr = mojo::InterfacePtr<VisitedLinkNotificationSink>;
using VisitedLinkNotificationSinkPtrInfo = mojo::InterfacePtrInfo<VisitedLinkNotificationSink>;
using ThreadSafeVisitedLinkNotificationSinkPtr =
    mojo::ThreadSafeInterfacePtr<VisitedLinkNotificationSink>;
using VisitedLinkNotificationSinkRequest = mojo::InterfaceRequest<VisitedLinkNotificationSink>;
using VisitedLinkNotificationSinkAssociatedPtr =
    mojo::AssociatedInterfacePtr<VisitedLinkNotificationSink>;
using ThreadSafeVisitedLinkNotificationSinkAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VisitedLinkNotificationSink>;
using VisitedLinkNotificationSinkAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VisitedLinkNotificationSink>;
using VisitedLinkNotificationSinkAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VisitedLinkNotificationSink>;


class VisitedLinkNotificationSinkProxy;

template <typename ImplRefTraits>
class VisitedLinkNotificationSinkStub;

class VisitedLinkNotificationSinkRequestValidator;

class  VisitedLinkNotificationSink
    : public VisitedLinkNotificationSinkInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VisitedLinkNotificationSinkProxy;

  template <typename ImplRefTraits>
  using Stub_ = VisitedLinkNotificationSinkStub<ImplRefTraits>;

  using RequestValidator_ = VisitedLinkNotificationSinkRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kUpdateVisitedLinksMinVersion = 0,
    kAddVisitedLinksMinVersion = 0,
    kResetVisitedLinksMinVersion = 0,
  };
  virtual ~VisitedLinkNotificationSink() {}

  virtual void UpdateVisitedLinks(base::ReadOnlySharedMemoryRegion table_region) = 0;

  virtual void AddVisitedLinks(const std::vector<uint64_t>& link_hashes) = 0;

  virtual void ResetVisitedLinks(bool invalidate_cached_hashes) = 0;
};
class  VisitedLinkNotificationSinkInterceptorForTesting : public VisitedLinkNotificationSink {
  virtual VisitedLinkNotificationSink* GetForwardingInterface() = 0;
  void UpdateVisitedLinks(base::ReadOnlySharedMemoryRegion table_region) override;
  void AddVisitedLinks(const std::vector<uint64_t>& link_hashes) override;
  void ResetVisitedLinks(bool invalidate_cached_hashes) override;
};
class  VisitedLinkNotificationSinkAsyncWaiter {
 public:
  explicit VisitedLinkNotificationSinkAsyncWaiter(VisitedLinkNotificationSink* proxy);
  ~VisitedLinkNotificationSinkAsyncWaiter();

 private:
  VisitedLinkNotificationSink* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VisitedLinkNotificationSinkAsyncWaiter);
};

class  VisitedLinkNotificationSinkProxy
    : public VisitedLinkNotificationSink {
 public:
  explicit VisitedLinkNotificationSinkProxy(mojo::MessageReceiverWithResponder* receiver);
  void UpdateVisitedLinks(base::ReadOnlySharedMemoryRegion table_region) final;
  void AddVisitedLinks(const std::vector<uint64_t>& link_hashes) final;
  void ResetVisitedLinks(bool invalidate_cached_hashes) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  VisitedLinkNotificationSinkStubDispatch {
 public:
  static bool Accept(VisitedLinkNotificationSink* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VisitedLinkNotificationSink* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VisitedLinkNotificationSink>>
class VisitedLinkNotificationSinkStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VisitedLinkNotificationSinkStub() {}
  ~VisitedLinkNotificationSinkStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VisitedLinkNotificationSinkStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VisitedLinkNotificationSinkStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  VisitedLinkNotificationSinkRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace visitedlink

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_VISITEDLINK_COMMON_VISITEDLINK_MOJOM_H_