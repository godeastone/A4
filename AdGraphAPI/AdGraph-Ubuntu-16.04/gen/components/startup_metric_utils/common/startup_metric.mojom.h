// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_STARTUP_METRIC_UTILS_COMMON_STARTUP_METRIC_MOJOM_H_
#define COMPONENTS_STARTUP_METRIC_UTILS_COMMON_STARTUP_METRIC_MOJOM_H_

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
#include "components/startup_metric_utils/common/startup_metric.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom.h"
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


namespace startup_metric_utils {
namespace mojom {
class StartupMetricHost;
using StartupMetricHostPtr = mojo::InterfacePtr<StartupMetricHost>;
using StartupMetricHostPtrInfo = mojo::InterfacePtrInfo<StartupMetricHost>;
using ThreadSafeStartupMetricHostPtr =
    mojo::ThreadSafeInterfacePtr<StartupMetricHost>;
using StartupMetricHostRequest = mojo::InterfaceRequest<StartupMetricHost>;
using StartupMetricHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<StartupMetricHost>;
using ThreadSafeStartupMetricHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<StartupMetricHost>;
using StartupMetricHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<StartupMetricHost>;
using StartupMetricHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<StartupMetricHost>;


class StartupMetricHostProxy;

template <typename ImplRefTraits>
class StartupMetricHostStub;

class StartupMetricHostRequestValidator;

class  StartupMetricHost
    : public StartupMetricHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = StartupMetricHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = StartupMetricHostStub<ImplRefTraits>;

  using RequestValidator_ = StartupMetricHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRecordRendererMainEntryTimeMinVersion = 0,
  };
  virtual ~StartupMetricHost() {}

  virtual void RecordRendererMainEntryTime(base::TimeTicks renderer_main_entry_time) = 0;
};
class  StartupMetricHostInterceptorForTesting : public StartupMetricHost {
  virtual StartupMetricHost* GetForwardingInterface() = 0;
  void RecordRendererMainEntryTime(base::TimeTicks renderer_main_entry_time) override;
};
class  StartupMetricHostAsyncWaiter {
 public:
  explicit StartupMetricHostAsyncWaiter(StartupMetricHost* proxy);
  ~StartupMetricHostAsyncWaiter();

 private:
  StartupMetricHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(StartupMetricHostAsyncWaiter);
};

class  StartupMetricHostProxy
    : public StartupMetricHost {
 public:
  explicit StartupMetricHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void RecordRendererMainEntryTime(base::TimeTicks renderer_main_entry_time) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  StartupMetricHostStubDispatch {
 public:
  static bool Accept(StartupMetricHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      StartupMetricHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<StartupMetricHost>>
class StartupMetricHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  StartupMetricHostStub() {}
  ~StartupMetricHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return StartupMetricHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return StartupMetricHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  StartupMetricHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace startup_metric_utils

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_STARTUP_METRIC_UTILS_COMMON_STARTUP_METRIC_MOJOM_H_