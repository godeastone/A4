// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_CACHE_STATS_RECORDER_MOJOM_H_
#define CHROME_COMMON_CACHE_STATS_RECORDER_MOJOM_H_

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
#include "chrome/common/cache_stats_recorder.mojom-shared.h"
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
class CacheStatsRecorder;
using CacheStatsRecorderPtr = mojo::InterfacePtr<CacheStatsRecorder>;
using CacheStatsRecorderPtrInfo = mojo::InterfacePtrInfo<CacheStatsRecorder>;
using ThreadSafeCacheStatsRecorderPtr =
    mojo::ThreadSafeInterfacePtr<CacheStatsRecorder>;
using CacheStatsRecorderRequest = mojo::InterfaceRequest<CacheStatsRecorder>;
using CacheStatsRecorderAssociatedPtr =
    mojo::AssociatedInterfacePtr<CacheStatsRecorder>;
using ThreadSafeCacheStatsRecorderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CacheStatsRecorder>;
using CacheStatsRecorderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CacheStatsRecorder>;
using CacheStatsRecorderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CacheStatsRecorder>;


class CacheStatsRecorderProxy;

template <typename ImplRefTraits>
class CacheStatsRecorderStub;

class CacheStatsRecorderRequestValidator;

class  CacheStatsRecorder
    : public CacheStatsRecorderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = CacheStatsRecorderProxy;

  template <typename ImplRefTraits>
  using Stub_ = CacheStatsRecorderStub<ImplRefTraits>;

  using RequestValidator_ = CacheStatsRecorderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRecordCacheStatsMinVersion = 0,
  };
  virtual ~CacheStatsRecorder() {}

  virtual void RecordCacheStats(uint64_t capacity, uint64_t size) = 0;
};
class  CacheStatsRecorderInterceptorForTesting : public CacheStatsRecorder {
  virtual CacheStatsRecorder* GetForwardingInterface() = 0;
  void RecordCacheStats(uint64_t capacity, uint64_t size) override;
};
class  CacheStatsRecorderAsyncWaiter {
 public:
  explicit CacheStatsRecorderAsyncWaiter(CacheStatsRecorder* proxy);
  ~CacheStatsRecorderAsyncWaiter();

 private:
  CacheStatsRecorder* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CacheStatsRecorderAsyncWaiter);
};

class  CacheStatsRecorderProxy
    : public CacheStatsRecorder {
 public:
  explicit CacheStatsRecorderProxy(mojo::MessageReceiverWithResponder* receiver);
  void RecordCacheStats(uint64_t capacity, uint64_t size) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  CacheStatsRecorderStubDispatch {
 public:
  static bool Accept(CacheStatsRecorder* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CacheStatsRecorder* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CacheStatsRecorder>>
class CacheStatsRecorderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CacheStatsRecorderStub() {}
  ~CacheStatsRecorderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CacheStatsRecorderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CacheStatsRecorderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  CacheStatsRecorderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace chrome

namespace mojo {

}  // namespace mojo

#endif  // CHROME_COMMON_CACHE_STATS_RECORDER_MOJOM_H_