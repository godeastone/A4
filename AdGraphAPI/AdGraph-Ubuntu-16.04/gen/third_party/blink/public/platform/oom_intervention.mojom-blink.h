// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_OOM_INTERVENTION_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_OOM_INTERVENTION_MOJOM_BLINK_H_

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
#include "third_party/blink/public/platform/oom_intervention.mojom-shared.h"
#include "mojo/public/mojom/base/shared_memory.mojom-blink.h"

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
class OomInterventionHost;
using OomInterventionHostPtr = mojo::InterfacePtr<OomInterventionHost>;
using RevocableOomInterventionHostPtr = ::blink::RevocableInterfacePtr<OomInterventionHost>;
using OomInterventionHostPtrInfo = mojo::InterfacePtrInfo<OomInterventionHost>;
using ThreadSafeOomInterventionHostPtr =
    mojo::ThreadSafeInterfacePtr<OomInterventionHost>;
using OomInterventionHostRequest = mojo::InterfaceRequest<OomInterventionHost>;
using OomInterventionHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<OomInterventionHost>;
using ThreadSafeOomInterventionHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<OomInterventionHost>;
using OomInterventionHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<OomInterventionHost>;
using OomInterventionHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<OomInterventionHost>;

class OomIntervention;
using OomInterventionPtr = mojo::InterfacePtr<OomIntervention>;
using RevocableOomInterventionPtr = ::blink::RevocableInterfacePtr<OomIntervention>;
using OomInterventionPtrInfo = mojo::InterfacePtrInfo<OomIntervention>;
using ThreadSafeOomInterventionPtr =
    mojo::ThreadSafeInterfacePtr<OomIntervention>;
using OomInterventionRequest = mojo::InterfaceRequest<OomIntervention>;
using OomInterventionAssociatedPtr =
    mojo::AssociatedInterfacePtr<OomIntervention>;
using ThreadSafeOomInterventionAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<OomIntervention>;
using OomInterventionAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<OomIntervention>;
using OomInterventionAssociatedRequest =
    mojo::AssociatedInterfaceRequest<OomIntervention>;


class OomInterventionHostProxy;

template <typename ImplRefTraits>
class OomInterventionHostStub;

class OomInterventionHostRequestValidator;

class BLINK_PLATFORM_EXPORT OomInterventionHost
    : public OomInterventionHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = OomInterventionHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = OomInterventionHostStub<ImplRefTraits>;

  using RequestValidator_ = OomInterventionHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnHighMemoryUsageMinVersion = 0,
  };
  virtual ~OomInterventionHost() {}

  virtual void OnHighMemoryUsage(bool intervention_triggered) = 0;
};
class BLINK_PLATFORM_EXPORT OomInterventionHostInterceptorForTesting : public OomInterventionHost {
  virtual OomInterventionHost* GetForwardingInterface() = 0;
  void OnHighMemoryUsage(bool intervention_triggered) override;
};
class BLINK_PLATFORM_EXPORT OomInterventionHostAsyncWaiter {
 public:
  explicit OomInterventionHostAsyncWaiter(OomInterventionHost* proxy);
  ~OomInterventionHostAsyncWaiter();

 private:
  OomInterventionHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(OomInterventionHostAsyncWaiter);
};

class OomInterventionProxy;

template <typename ImplRefTraits>
class OomInterventionStub;

class OomInterventionRequestValidator;

class BLINK_PLATFORM_EXPORT OomIntervention
    : public OomInterventionInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = OomInterventionProxy;

  template <typename ImplRefTraits>
  using Stub_ = OomInterventionStub<ImplRefTraits>;

  using RequestValidator_ = OomInterventionRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kStartDetectionMinVersion = 0,
  };
  virtual ~OomIntervention() {}

  virtual void StartDetection(OomInterventionHostPtr host, base::UnsafeSharedMemoryRegion shared_metrics_buffer, uint64_t memory_workload_threshold, bool trigger_intervention) = 0;
};
class BLINK_PLATFORM_EXPORT OomInterventionInterceptorForTesting : public OomIntervention {
  virtual OomIntervention* GetForwardingInterface() = 0;
  void StartDetection(OomInterventionHostPtr host, base::UnsafeSharedMemoryRegion shared_metrics_buffer, uint64_t memory_workload_threshold, bool trigger_intervention) override;
};
class BLINK_PLATFORM_EXPORT OomInterventionAsyncWaiter {
 public:
  explicit OomInterventionAsyncWaiter(OomIntervention* proxy);
  ~OomInterventionAsyncWaiter();

 private:
  OomIntervention* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(OomInterventionAsyncWaiter);
};

class BLINK_PLATFORM_EXPORT OomInterventionHostProxy
    : public OomInterventionHost {
 public:
  explicit OomInterventionHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnHighMemoryUsage(bool intervention_triggered) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT OomInterventionProxy
    : public OomIntervention {
 public:
  explicit OomInterventionProxy(mojo::MessageReceiverWithResponder* receiver);
  void StartDetection(OomInterventionHostPtr host, base::UnsafeSharedMemoryRegion shared_metrics_buffer, uint64_t memory_workload_threshold, bool trigger_intervention) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT OomInterventionHostStubDispatch {
 public:
  static bool Accept(OomInterventionHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      OomInterventionHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<OomInterventionHost>>
class OomInterventionHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  OomInterventionHostStub() {}
  ~OomInterventionHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return OomInterventionHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return OomInterventionHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT OomInterventionStubDispatch {
 public:
  static bool Accept(OomIntervention* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      OomIntervention* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<OomIntervention>>
class OomInterventionStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  OomInterventionStub() {}
  ~OomInterventionStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return OomInterventionStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return OomInterventionStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT OomInterventionHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT OomInterventionRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_OOM_INTERVENTION_MOJOM_BLINK_H_