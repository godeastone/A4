// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_HISTOGRAM_FETCHER_MOJOM_H_
#define CONTENT_COMMON_HISTOGRAM_FETCHER_MOJOM_H_

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
#include "content/common/histogram_fetcher.mojom-shared.h"
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


namespace content {
namespace mojom {
class ChildHistogramFetcherFactory;
using ChildHistogramFetcherFactoryPtr = mojo::InterfacePtr<ChildHistogramFetcherFactory>;
using ChildHistogramFetcherFactoryPtrInfo = mojo::InterfacePtrInfo<ChildHistogramFetcherFactory>;
using ThreadSafeChildHistogramFetcherFactoryPtr =
    mojo::ThreadSafeInterfacePtr<ChildHistogramFetcherFactory>;
using ChildHistogramFetcherFactoryRequest = mojo::InterfaceRequest<ChildHistogramFetcherFactory>;
using ChildHistogramFetcherFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<ChildHistogramFetcherFactory>;
using ThreadSafeChildHistogramFetcherFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ChildHistogramFetcherFactory>;
using ChildHistogramFetcherFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ChildHistogramFetcherFactory>;
using ChildHistogramFetcherFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ChildHistogramFetcherFactory>;

class ChildHistogramFetcher;
using ChildHistogramFetcherPtr = mojo::InterfacePtr<ChildHistogramFetcher>;
using ChildHistogramFetcherPtrInfo = mojo::InterfacePtrInfo<ChildHistogramFetcher>;
using ThreadSafeChildHistogramFetcherPtr =
    mojo::ThreadSafeInterfacePtr<ChildHistogramFetcher>;
using ChildHistogramFetcherRequest = mojo::InterfaceRequest<ChildHistogramFetcher>;
using ChildHistogramFetcherAssociatedPtr =
    mojo::AssociatedInterfacePtr<ChildHistogramFetcher>;
using ThreadSafeChildHistogramFetcherAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ChildHistogramFetcher>;
using ChildHistogramFetcherAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ChildHistogramFetcher>;
using ChildHistogramFetcherAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ChildHistogramFetcher>;


class ChildHistogramFetcherFactoryProxy;

template <typename ImplRefTraits>
class ChildHistogramFetcherFactoryStub;

class ChildHistogramFetcherFactoryRequestValidator;

class CONTENT_EXPORT ChildHistogramFetcherFactory
    : public ChildHistogramFetcherFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ChildHistogramFetcherFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = ChildHistogramFetcherFactoryStub<ImplRefTraits>;

  using RequestValidator_ = ChildHistogramFetcherFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateFetcherMinVersion = 0,
  };
  virtual ~ChildHistogramFetcherFactory() {}

  virtual void CreateFetcher(mojo::ScopedSharedBufferHandle shm_handle, ChildHistogramFetcherRequest child_histogram_fetcher) = 0;
};
class CONTENT_EXPORT ChildHistogramFetcherFactoryInterceptorForTesting : public ChildHistogramFetcherFactory {
  virtual ChildHistogramFetcherFactory* GetForwardingInterface() = 0;
  void CreateFetcher(mojo::ScopedSharedBufferHandle shm_handle, ChildHistogramFetcherRequest child_histogram_fetcher) override;
};
class CONTENT_EXPORT ChildHistogramFetcherFactoryAsyncWaiter {
 public:
  explicit ChildHistogramFetcherFactoryAsyncWaiter(ChildHistogramFetcherFactory* proxy);
  ~ChildHistogramFetcherFactoryAsyncWaiter();

 private:
  ChildHistogramFetcherFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ChildHistogramFetcherFactoryAsyncWaiter);
};

class ChildHistogramFetcherProxy;

template <typename ImplRefTraits>
class ChildHistogramFetcherStub;

class ChildHistogramFetcherRequestValidator;
class ChildHistogramFetcherResponseValidator;

class CONTENT_EXPORT ChildHistogramFetcher
    : public ChildHistogramFetcherInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ChildHistogramFetcherProxy;

  template <typename ImplRefTraits>
  using Stub_ = ChildHistogramFetcherStub<ImplRefTraits>;

  using RequestValidator_ = ChildHistogramFetcherRequestValidator;
  using ResponseValidator_ = ChildHistogramFetcherResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetChildNonPersistentHistogramDataMinVersion = 0,
  };
  virtual ~ChildHistogramFetcher() {}


  using GetChildNonPersistentHistogramDataCallback = base::OnceCallback<void(const std::vector<std::string>&)>;
  virtual void GetChildNonPersistentHistogramData(GetChildNonPersistentHistogramDataCallback callback) = 0;
};
class CONTENT_EXPORT ChildHistogramFetcherInterceptorForTesting : public ChildHistogramFetcher {
  virtual ChildHistogramFetcher* GetForwardingInterface() = 0;
  void GetChildNonPersistentHistogramData(GetChildNonPersistentHistogramDataCallback callback) override;
};
class CONTENT_EXPORT ChildHistogramFetcherAsyncWaiter {
 public:
  explicit ChildHistogramFetcherAsyncWaiter(ChildHistogramFetcher* proxy);
  ~ChildHistogramFetcherAsyncWaiter();
  void GetChildNonPersistentHistogramData(
      std::vector<std::string>* out_deltas);

 private:
  ChildHistogramFetcher* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ChildHistogramFetcherAsyncWaiter);
};

class CONTENT_EXPORT ChildHistogramFetcherFactoryProxy
    : public ChildHistogramFetcherFactory {
 public:
  explicit ChildHistogramFetcherFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateFetcher(mojo::ScopedSharedBufferHandle shm_handle, ChildHistogramFetcherRequest child_histogram_fetcher) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT ChildHistogramFetcherProxy
    : public ChildHistogramFetcher {
 public:
  explicit ChildHistogramFetcherProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetChildNonPersistentHistogramData(GetChildNonPersistentHistogramDataCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT ChildHistogramFetcherFactoryStubDispatch {
 public:
  static bool Accept(ChildHistogramFetcherFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ChildHistogramFetcherFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ChildHistogramFetcherFactory>>
class ChildHistogramFetcherFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ChildHistogramFetcherFactoryStub() {}
  ~ChildHistogramFetcherFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ChildHistogramFetcherFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ChildHistogramFetcherFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT ChildHistogramFetcherStubDispatch {
 public:
  static bool Accept(ChildHistogramFetcher* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ChildHistogramFetcher* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ChildHistogramFetcher>>
class ChildHistogramFetcherStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ChildHistogramFetcherStub() {}
  ~ChildHistogramFetcherStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ChildHistogramFetcherStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ChildHistogramFetcherStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT ChildHistogramFetcherFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT ChildHistogramFetcherRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT ChildHistogramFetcherResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_HISTOGRAM_FETCHER_MOJOM_H_