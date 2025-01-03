// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_UKM_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_UKM_MOJOM_H_

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
#include "third_party/blink/public/platform/ukm.mojom-shared.h"
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
class UkmSourceIdFrameHost;
using UkmSourceIdFrameHostPtr = mojo::InterfacePtr<UkmSourceIdFrameHost>;
using UkmSourceIdFrameHostPtrInfo = mojo::InterfacePtrInfo<UkmSourceIdFrameHost>;
using ThreadSafeUkmSourceIdFrameHostPtr =
    mojo::ThreadSafeInterfacePtr<UkmSourceIdFrameHost>;
using UkmSourceIdFrameHostRequest = mojo::InterfaceRequest<UkmSourceIdFrameHost>;
using UkmSourceIdFrameHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<UkmSourceIdFrameHost>;
using ThreadSafeUkmSourceIdFrameHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<UkmSourceIdFrameHost>;
using UkmSourceIdFrameHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UkmSourceIdFrameHost>;
using UkmSourceIdFrameHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UkmSourceIdFrameHost>;


class UkmSourceIdFrameHostProxy;

template <typename ImplRefTraits>
class UkmSourceIdFrameHostStub;

class UkmSourceIdFrameHostRequestValidator;

class CONTENT_EXPORT UkmSourceIdFrameHost
    : public UkmSourceIdFrameHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = UkmSourceIdFrameHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = UkmSourceIdFrameHostStub<ImplRefTraits>;

  using RequestValidator_ = UkmSourceIdFrameHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetDocumentSourceIdMinVersion = 0,
  };
  virtual ~UkmSourceIdFrameHost() {}

  virtual void SetDocumentSourceId(int64_t source_id) = 0;
};
class CONTENT_EXPORT UkmSourceIdFrameHostInterceptorForTesting : public UkmSourceIdFrameHost {
  virtual UkmSourceIdFrameHost* GetForwardingInterface() = 0;
  void SetDocumentSourceId(int64_t source_id) override;
};
class CONTENT_EXPORT UkmSourceIdFrameHostAsyncWaiter {
 public:
  explicit UkmSourceIdFrameHostAsyncWaiter(UkmSourceIdFrameHost* proxy);
  ~UkmSourceIdFrameHostAsyncWaiter();

 private:
  UkmSourceIdFrameHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UkmSourceIdFrameHostAsyncWaiter);
};

class CONTENT_EXPORT UkmSourceIdFrameHostProxy
    : public UkmSourceIdFrameHost {
 public:
  explicit UkmSourceIdFrameHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetDocumentSourceId(int64_t source_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT UkmSourceIdFrameHostStubDispatch {
 public:
  static bool Accept(UkmSourceIdFrameHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      UkmSourceIdFrameHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<UkmSourceIdFrameHost>>
class UkmSourceIdFrameHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  UkmSourceIdFrameHostStub() {}
  ~UkmSourceIdFrameHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UkmSourceIdFrameHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UkmSourceIdFrameHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT UkmSourceIdFrameHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_UKM_MOJOM_H_