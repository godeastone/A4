// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_H_
#define COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_H_

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
#include "components/metrics/public/interfaces/single_sample_metrics.mojom-shared.h"
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


namespace metrics {
namespace mojom {
class SingleSampleMetricsProvider;
using SingleSampleMetricsProviderPtr = mojo::InterfacePtr<SingleSampleMetricsProvider>;
using SingleSampleMetricsProviderPtrInfo = mojo::InterfacePtrInfo<SingleSampleMetricsProvider>;
using ThreadSafeSingleSampleMetricsProviderPtr =
    mojo::ThreadSafeInterfacePtr<SingleSampleMetricsProvider>;
using SingleSampleMetricsProviderRequest = mojo::InterfaceRequest<SingleSampleMetricsProvider>;
using SingleSampleMetricsProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<SingleSampleMetricsProvider>;
using ThreadSafeSingleSampleMetricsProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SingleSampleMetricsProvider>;
using SingleSampleMetricsProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SingleSampleMetricsProvider>;
using SingleSampleMetricsProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SingleSampleMetricsProvider>;

class SingleSampleMetric;
using SingleSampleMetricPtr = mojo::InterfacePtr<SingleSampleMetric>;
using SingleSampleMetricPtrInfo = mojo::InterfacePtrInfo<SingleSampleMetric>;
using ThreadSafeSingleSampleMetricPtr =
    mojo::ThreadSafeInterfacePtr<SingleSampleMetric>;
using SingleSampleMetricRequest = mojo::InterfaceRequest<SingleSampleMetric>;
using SingleSampleMetricAssociatedPtr =
    mojo::AssociatedInterfacePtr<SingleSampleMetric>;
using ThreadSafeSingleSampleMetricAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SingleSampleMetric>;
using SingleSampleMetricAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SingleSampleMetric>;
using SingleSampleMetricAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SingleSampleMetric>;


class SingleSampleMetricsProviderProxy;

template <typename ImplRefTraits>
class SingleSampleMetricsProviderStub;

class SingleSampleMetricsProviderRequestValidator;

class  SingleSampleMetricsProvider
    : public SingleSampleMetricsProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SingleSampleMetricsProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = SingleSampleMetricsProviderStub<ImplRefTraits>;

  using RequestValidator_ = SingleSampleMetricsProviderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAcquireSingleSampleMetricMinVersion = 0,
  };
  virtual ~SingleSampleMetricsProvider() {}

  virtual void AcquireSingleSampleMetric(const std::string& histogram_name, int32_t min, int32_t max, uint32_t bucket_count, int32_t flags, SingleSampleMetricRequest request) = 0;
};
class  SingleSampleMetricsProviderInterceptorForTesting : public SingleSampleMetricsProvider {
  virtual SingleSampleMetricsProvider* GetForwardingInterface() = 0;
  void AcquireSingleSampleMetric(const std::string& histogram_name, int32_t min, int32_t max, uint32_t bucket_count, int32_t flags, SingleSampleMetricRequest request) override;
};
class  SingleSampleMetricsProviderAsyncWaiter {
 public:
  explicit SingleSampleMetricsProviderAsyncWaiter(SingleSampleMetricsProvider* proxy);
  ~SingleSampleMetricsProviderAsyncWaiter();

 private:
  SingleSampleMetricsProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SingleSampleMetricsProviderAsyncWaiter);
};

class SingleSampleMetricProxy;

template <typename ImplRefTraits>
class SingleSampleMetricStub;

class SingleSampleMetricRequestValidator;

class  SingleSampleMetric
    : public SingleSampleMetricInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = SingleSampleMetricProxy;

  template <typename ImplRefTraits>
  using Stub_ = SingleSampleMetricStub<ImplRefTraits>;

  using RequestValidator_ = SingleSampleMetricRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetSampleMinVersion = 0,
  };
  virtual ~SingleSampleMetric() {}

  virtual void SetSample(int32_t sample) = 0;
};
class  SingleSampleMetricInterceptorForTesting : public SingleSampleMetric {
  virtual SingleSampleMetric* GetForwardingInterface() = 0;
  void SetSample(int32_t sample) override;
};
class  SingleSampleMetricAsyncWaiter {
 public:
  explicit SingleSampleMetricAsyncWaiter(SingleSampleMetric* proxy);
  ~SingleSampleMetricAsyncWaiter();

 private:
  SingleSampleMetric* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SingleSampleMetricAsyncWaiter);
};

class  SingleSampleMetricsProviderProxy
    : public SingleSampleMetricsProvider {
 public:
  explicit SingleSampleMetricsProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void AcquireSingleSampleMetric(const std::string& histogram_name, int32_t min, int32_t max, uint32_t bucket_count, int32_t flags, SingleSampleMetricRequest request) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  SingleSampleMetricProxy
    : public SingleSampleMetric {
 public:
  explicit SingleSampleMetricProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetSample(int32_t sample) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  SingleSampleMetricsProviderStubDispatch {
 public:
  static bool Accept(SingleSampleMetricsProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SingleSampleMetricsProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SingleSampleMetricsProvider>>
class SingleSampleMetricsProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SingleSampleMetricsProviderStub() {}
  ~SingleSampleMetricsProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SingleSampleMetricsProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SingleSampleMetricsProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  SingleSampleMetricStubDispatch {
 public:
  static bool Accept(SingleSampleMetric* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SingleSampleMetric* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SingleSampleMetric>>
class SingleSampleMetricStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SingleSampleMetricStub() {}
  ~SingleSampleMetricStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SingleSampleMetricStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SingleSampleMetricStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  SingleSampleMetricsProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  SingleSampleMetricRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace metrics

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_H_