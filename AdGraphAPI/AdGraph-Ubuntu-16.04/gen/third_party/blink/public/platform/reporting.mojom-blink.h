// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_REPORTING_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_REPORTING_MOJOM_BLINK_H_

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
#include "third_party/blink/public/platform/reporting.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"

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
#include "third_party/blink/public/platform/web_common.h"


namespace blink {
namespace mojom {
namespace blink {
class ReportingServiceProxy;
using ReportingServiceProxyPtr = mojo::InterfacePtr<ReportingServiceProxy>;
using RevocableReportingServiceProxyPtr = ::blink::RevocableInterfacePtr<ReportingServiceProxy>;
using ReportingServiceProxyPtrInfo = mojo::InterfacePtrInfo<ReportingServiceProxy>;
using ThreadSafeReportingServiceProxyPtr =
    mojo::ThreadSafeInterfacePtr<ReportingServiceProxy>;
using ReportingServiceProxyRequest = mojo::InterfaceRequest<ReportingServiceProxy>;
using ReportingServiceProxyAssociatedPtr =
    mojo::AssociatedInterfacePtr<ReportingServiceProxy>;
using ThreadSafeReportingServiceProxyAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ReportingServiceProxy>;
using ReportingServiceProxyAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ReportingServiceProxy>;
using ReportingServiceProxyAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ReportingServiceProxy>;


class ReportingServiceProxyProxy;

template <typename ImplRefTraits>
class ReportingServiceProxyStub;

class ReportingServiceProxyRequestValidator;

class BLINK_PLATFORM_EXPORT ReportingServiceProxy
    : public ReportingServiceProxyInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ReportingServiceProxyProxy;

  template <typename ImplRefTraits>
  using Stub_ = ReportingServiceProxyStub<ImplRefTraits>;

  using RequestValidator_ = ReportingServiceProxyRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kQueueInterventionReportMinVersion = 0,
    kQueueDeprecationReportMinVersion = 0,
    kQueueCspViolationReportMinVersion = 0,
  };
  virtual ~ReportingServiceProxy() {}

  virtual void QueueInterventionReport(const ::blink::KURL& url, const WTF::String& message, const WTF::String& source_file, int32_t line_number, int32_t column_number) = 0;

  virtual void QueueDeprecationReport(const ::blink::KURL& url, const WTF::String& id, WTF::Time anticipatedRemoval, const WTF::String& message, const WTF::String& source_file, int32_t line_number, int32_t column_number) = 0;

  virtual void QueueCspViolationReport(const ::blink::KURL& url, const WTF::String& group, const WTF::String& document_uri, const WTF::String& referrer, const WTF::String& violated_directive, const WTF::String& effective_directive, const WTF::String& original_policy, const WTF::String& disposition, const WTF::String& blocked_uri, int32_t line_number, int32_t column_number, const WTF::String& source_file, int32_t status_code, const WTF::String& script_sample) = 0;
};
class BLINK_PLATFORM_EXPORT ReportingServiceProxyInterceptorForTesting : public ReportingServiceProxy {
  virtual ReportingServiceProxy* GetForwardingInterface() = 0;
  void QueueInterventionReport(const ::blink::KURL& url, const WTF::String& message, const WTF::String& source_file, int32_t line_number, int32_t column_number) override;
  void QueueDeprecationReport(const ::blink::KURL& url, const WTF::String& id, WTF::Time anticipatedRemoval, const WTF::String& message, const WTF::String& source_file, int32_t line_number, int32_t column_number) override;
  void QueueCspViolationReport(const ::blink::KURL& url, const WTF::String& group, const WTF::String& document_uri, const WTF::String& referrer, const WTF::String& violated_directive, const WTF::String& effective_directive, const WTF::String& original_policy, const WTF::String& disposition, const WTF::String& blocked_uri, int32_t line_number, int32_t column_number, const WTF::String& source_file, int32_t status_code, const WTF::String& script_sample) override;
};
class BLINK_PLATFORM_EXPORT ReportingServiceProxyAsyncWaiter {
 public:
  explicit ReportingServiceProxyAsyncWaiter(ReportingServiceProxy* proxy);
  ~ReportingServiceProxyAsyncWaiter();

 private:
  ReportingServiceProxy* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ReportingServiceProxyAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT ReportingServiceProxyProxy
    : public ReportingServiceProxy {
 public:
  explicit ReportingServiceProxyProxy(mojo::MessageReceiverWithResponder* receiver);
  void QueueInterventionReport(const ::blink::KURL& url, const WTF::String& message, const WTF::String& source_file, int32_t line_number, int32_t column_number) final;
  void QueueDeprecationReport(const ::blink::KURL& url, const WTF::String& id, WTF::Time anticipatedRemoval, const WTF::String& message, const WTF::String& source_file, int32_t line_number, int32_t column_number) final;
  void QueueCspViolationReport(const ::blink::KURL& url, const WTF::String& group, const WTF::String& document_uri, const WTF::String& referrer, const WTF::String& violated_directive, const WTF::String& effective_directive, const WTF::String& original_policy, const WTF::String& disposition, const WTF::String& blocked_uri, int32_t line_number, int32_t column_number, const WTF::String& source_file, int32_t status_code, const WTF::String& script_sample) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT ReportingServiceProxyStubDispatch {
 public:
  static bool Accept(ReportingServiceProxy* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ReportingServiceProxy* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ReportingServiceProxy>>
class ReportingServiceProxyStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ReportingServiceProxyStub() {}
  ~ReportingServiceProxyStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ReportingServiceProxyStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ReportingServiceProxyStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT ReportingServiceProxyRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_REPORTING_MOJOM_BLINK_H_