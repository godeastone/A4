// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_PRERENDER_MOJOM_H_
#define CHROME_COMMON_PRERENDER_MOJOM_H_

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
#include "chrome/common/prerender.mojom-shared.h"
#include "url/mojom/url.mojom.h"
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
class PrerenderCanceler;
using PrerenderCancelerPtr = mojo::InterfacePtr<PrerenderCanceler>;
using PrerenderCancelerPtrInfo = mojo::InterfacePtrInfo<PrerenderCanceler>;
using ThreadSafePrerenderCancelerPtr =
    mojo::ThreadSafeInterfacePtr<PrerenderCanceler>;
using PrerenderCancelerRequest = mojo::InterfaceRequest<PrerenderCanceler>;
using PrerenderCancelerAssociatedPtr =
    mojo::AssociatedInterfacePtr<PrerenderCanceler>;
using ThreadSafePrerenderCancelerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PrerenderCanceler>;
using PrerenderCancelerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PrerenderCanceler>;
using PrerenderCancelerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PrerenderCanceler>;

class PrerenderDispatcher;
using PrerenderDispatcherPtr = mojo::InterfacePtr<PrerenderDispatcher>;
using PrerenderDispatcherPtrInfo = mojo::InterfacePtrInfo<PrerenderDispatcher>;
using ThreadSafePrerenderDispatcherPtr =
    mojo::ThreadSafeInterfacePtr<PrerenderDispatcher>;
using PrerenderDispatcherRequest = mojo::InterfaceRequest<PrerenderDispatcher>;
using PrerenderDispatcherAssociatedPtr =
    mojo::AssociatedInterfacePtr<PrerenderDispatcher>;
using ThreadSafePrerenderDispatcherAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PrerenderDispatcher>;
using PrerenderDispatcherAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PrerenderDispatcher>;
using PrerenderDispatcherAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PrerenderDispatcher>;


class PrerenderCancelerProxy;

template <typename ImplRefTraits>
class PrerenderCancelerStub;

class PrerenderCancelerRequestValidator;

class  PrerenderCanceler
    : public PrerenderCancelerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PrerenderCancelerProxy;

  template <typename ImplRefTraits>
  using Stub_ = PrerenderCancelerStub<ImplRefTraits>;

  using RequestValidator_ = PrerenderCancelerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCancelPrerenderForPrintingMinVersion = 0,
    kCancelPrerenderForUnsupportedMethodMinVersion = 0,
    kCancelPrerenderForUnsupportedSchemeMinVersion = 0,
    kCancelPrerenderForSyncDeferredRedirectMinVersion = 0,
  };
  virtual ~PrerenderCanceler() {}

  virtual void CancelPrerenderForPrinting() = 0;

  virtual void CancelPrerenderForUnsupportedMethod() = 0;

  virtual void CancelPrerenderForUnsupportedScheme(const GURL& url) = 0;

  virtual void CancelPrerenderForSyncDeferredRedirect() = 0;
};
class  PrerenderCancelerInterceptorForTesting : public PrerenderCanceler {
  virtual PrerenderCanceler* GetForwardingInterface() = 0;
  void CancelPrerenderForPrinting() override;
  void CancelPrerenderForUnsupportedMethod() override;
  void CancelPrerenderForUnsupportedScheme(const GURL& url) override;
  void CancelPrerenderForSyncDeferredRedirect() override;
};
class  PrerenderCancelerAsyncWaiter {
 public:
  explicit PrerenderCancelerAsyncWaiter(PrerenderCanceler* proxy);
  ~PrerenderCancelerAsyncWaiter();

 private:
  PrerenderCanceler* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PrerenderCancelerAsyncWaiter);
};

class PrerenderDispatcherProxy;

template <typename ImplRefTraits>
class PrerenderDispatcherStub;

class PrerenderDispatcherRequestValidator;

class  PrerenderDispatcher
    : public PrerenderDispatcherInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PrerenderDispatcherProxy;

  template <typename ImplRefTraits>
  using Stub_ = PrerenderDispatcherStub<ImplRefTraits>;

  using RequestValidator_ = PrerenderDispatcherRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kPrerenderStartMinVersion = 0,
    kPrerenderStopLoadingMinVersion = 0,
    kPrerenderDomContentLoadedMinVersion = 0,
    kPrerenderAddAliasMinVersion = 0,
    kPrerenderRemoveAliasesMinVersion = 0,
    kPrerenderStopMinVersion = 0,
  };
  virtual ~PrerenderDispatcher() {}

  virtual void PrerenderStart(int32_t prerender_id) = 0;

  virtual void PrerenderStopLoading(int32_t prerender_id) = 0;

  virtual void PrerenderDomContentLoaded(int32_t prerender_id) = 0;

  virtual void PrerenderAddAlias(const GURL& alias) = 0;

  virtual void PrerenderRemoveAliases(const std::vector<GURL>& aliases) = 0;

  virtual void PrerenderStop(int32_t prerender_id) = 0;
};
class  PrerenderDispatcherInterceptorForTesting : public PrerenderDispatcher {
  virtual PrerenderDispatcher* GetForwardingInterface() = 0;
  void PrerenderStart(int32_t prerender_id) override;
  void PrerenderStopLoading(int32_t prerender_id) override;
  void PrerenderDomContentLoaded(int32_t prerender_id) override;
  void PrerenderAddAlias(const GURL& alias) override;
  void PrerenderRemoveAliases(const std::vector<GURL>& aliases) override;
  void PrerenderStop(int32_t prerender_id) override;
};
class  PrerenderDispatcherAsyncWaiter {
 public:
  explicit PrerenderDispatcherAsyncWaiter(PrerenderDispatcher* proxy);
  ~PrerenderDispatcherAsyncWaiter();

 private:
  PrerenderDispatcher* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PrerenderDispatcherAsyncWaiter);
};

class  PrerenderCancelerProxy
    : public PrerenderCanceler {
 public:
  explicit PrerenderCancelerProxy(mojo::MessageReceiverWithResponder* receiver);
  void CancelPrerenderForPrinting() final;
  void CancelPrerenderForUnsupportedMethod() final;
  void CancelPrerenderForUnsupportedScheme(const GURL& url) final;
  void CancelPrerenderForSyncDeferredRedirect() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  PrerenderDispatcherProxy
    : public PrerenderDispatcher {
 public:
  explicit PrerenderDispatcherProxy(mojo::MessageReceiverWithResponder* receiver);
  void PrerenderStart(int32_t prerender_id) final;
  void PrerenderStopLoading(int32_t prerender_id) final;
  void PrerenderDomContentLoaded(int32_t prerender_id) final;
  void PrerenderAddAlias(const GURL& alias) final;
  void PrerenderRemoveAliases(const std::vector<GURL>& aliases) final;
  void PrerenderStop(int32_t prerender_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  PrerenderCancelerStubDispatch {
 public:
  static bool Accept(PrerenderCanceler* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PrerenderCanceler* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PrerenderCanceler>>
class PrerenderCancelerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PrerenderCancelerStub() {}
  ~PrerenderCancelerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PrerenderCancelerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PrerenderCancelerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PrerenderDispatcherStubDispatch {
 public:
  static bool Accept(PrerenderDispatcher* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PrerenderDispatcher* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PrerenderDispatcher>>
class PrerenderDispatcherStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PrerenderDispatcherStub() {}
  ~PrerenderDispatcherStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PrerenderDispatcherStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PrerenderDispatcherStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PrerenderCancelerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PrerenderDispatcherRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace chrome

namespace mojo {

}  // namespace mojo

#endif  // CHROME_COMMON_PRERENDER_MOJOM_H_