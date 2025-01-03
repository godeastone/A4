// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_NET_BENCHMARKING_MOJOM_H_
#define CHROME_COMMON_NET_BENCHMARKING_MOJOM_H_

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
#include "chrome/common/net_benchmarking.mojom-shared.h"
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


namespace chrome {
namespace mojom {
class NetBenchmarking;
using NetBenchmarkingPtr = mojo::InterfacePtr<NetBenchmarking>;
using NetBenchmarkingPtrInfo = mojo::InterfacePtrInfo<NetBenchmarking>;
using ThreadSafeNetBenchmarkingPtr =
    mojo::ThreadSafeInterfacePtr<NetBenchmarking>;
using NetBenchmarkingRequest = mojo::InterfaceRequest<NetBenchmarking>;
using NetBenchmarkingAssociatedPtr =
    mojo::AssociatedInterfacePtr<NetBenchmarking>;
using ThreadSafeNetBenchmarkingAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NetBenchmarking>;
using NetBenchmarkingAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NetBenchmarking>;
using NetBenchmarkingAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NetBenchmarking>;


class NetBenchmarkingProxy;

template <typename ImplRefTraits>
class NetBenchmarkingStub;

class NetBenchmarkingRequestValidator;
class NetBenchmarkingResponseValidator;

class  NetBenchmarking
    : public NetBenchmarkingInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Proxy_ = NetBenchmarkingProxy;

  template <typename ImplRefTraits>
  using Stub_ = NetBenchmarkingStub<ImplRefTraits>;

  using RequestValidator_ = NetBenchmarkingRequestValidator;
  using ResponseValidator_ = NetBenchmarkingResponseValidator;
  enum MethodMinVersions : uint32_t {
    kCloseCurrentConnectionsMinVersion = 0,
    kClearCacheMinVersion = 0,
    kClearHostResolverCacheMinVersion = 0,
    kClearPredictorCacheMinVersion = 0,
  };
  virtual ~NetBenchmarking() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool CloseCurrentConnections();

  using CloseCurrentConnectionsCallback = base::Callback<void()>;
  virtual void CloseCurrentConnections(const CloseCurrentConnectionsCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool ClearCache(int32_t* out_result);

  using ClearCacheCallback = base::Callback<void(int32_t)>;
  virtual void ClearCache(const ClearCacheCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool ClearHostResolverCache();

  using ClearHostResolverCacheCallback = base::Callback<void()>;
  virtual void ClearHostResolverCache(const ClearHostResolverCacheCallback& callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool ClearPredictorCache();

  using ClearPredictorCacheCallback = base::Callback<void()>;
  virtual void ClearPredictorCache(const ClearPredictorCacheCallback& callback) = 0;
};
class  NetBenchmarkingInterceptorForTesting : public NetBenchmarking {
  virtual NetBenchmarking* GetForwardingInterface() = 0;
  void CloseCurrentConnections(const CloseCurrentConnectionsCallback& callback) override;
  void ClearCache(const ClearCacheCallback& callback) override;
  void ClearHostResolverCache(const ClearHostResolverCacheCallback& callback) override;
  void ClearPredictorCache(const ClearPredictorCacheCallback& callback) override;
};
class  NetBenchmarkingAsyncWaiter {
 public:
  explicit NetBenchmarkingAsyncWaiter(NetBenchmarking* proxy);
  ~NetBenchmarkingAsyncWaiter();
  void CloseCurrentConnections(
      );
  void ClearCache(
      int32_t* out_result);
  void ClearHostResolverCache(
      );
  void ClearPredictorCache(
      );

 private:
  NetBenchmarking* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetBenchmarkingAsyncWaiter);
};

class  NetBenchmarkingProxy
    : public NetBenchmarking {
 public:
  explicit NetBenchmarkingProxy(mojo::MessageReceiverWithResponder* receiver);
  bool CloseCurrentConnections() final;
  void CloseCurrentConnections(const CloseCurrentConnectionsCallback& callback) final;
  bool ClearCache(int32_t* out_result) final;
  void ClearCache(const ClearCacheCallback& callback) final;
  bool ClearHostResolverCache() final;
  void ClearHostResolverCache(const ClearHostResolverCacheCallback& callback) final;
  bool ClearPredictorCache() final;
  void ClearPredictorCache(const ClearPredictorCacheCallback& callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  NetBenchmarkingStubDispatch {
 public:
  static bool Accept(NetBenchmarking* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NetBenchmarking* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NetBenchmarking>>
class NetBenchmarkingStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NetBenchmarkingStub() {}
  ~NetBenchmarkingStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetBenchmarkingStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetBenchmarkingStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  NetBenchmarkingRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  NetBenchmarkingResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace chrome

namespace mojo {

}  // namespace mojo

#endif  // CHROME_COMMON_NET_BENCHMARKING_MOJOM_H_