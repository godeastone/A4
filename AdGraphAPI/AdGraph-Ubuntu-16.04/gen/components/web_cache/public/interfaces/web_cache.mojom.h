// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_WEB_CACHE_PUBLIC_INTERFACES_WEB_CACHE_MOJOM_H_
#define COMPONENTS_WEB_CACHE_PUBLIC_INTERFACES_WEB_CACHE_MOJOM_H_

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
#include "components/web_cache/public/interfaces/web_cache.mojom-shared.h"
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


namespace web_cache {
namespace mojom {
class WebCache;
using WebCachePtr = mojo::InterfacePtr<WebCache>;
using WebCachePtrInfo = mojo::InterfacePtrInfo<WebCache>;
using ThreadSafeWebCachePtr =
    mojo::ThreadSafeInterfacePtr<WebCache>;
using WebCacheRequest = mojo::InterfaceRequest<WebCache>;
using WebCacheAssociatedPtr =
    mojo::AssociatedInterfacePtr<WebCache>;
using ThreadSafeWebCacheAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WebCache>;
using WebCacheAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WebCache>;
using WebCacheAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WebCache>;


class WebCacheProxy;

template <typename ImplRefTraits>
class WebCacheStub;

class WebCacheRequestValidator;

class  WebCache
    : public WebCacheInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = WebCacheProxy;

  template <typename ImplRefTraits>
  using Stub_ = WebCacheStub<ImplRefTraits>;

  using RequestValidator_ = WebCacheRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetCacheCapacityMinVersion = 0,
    kClearCacheMinVersion = 0,
  };
  virtual ~WebCache() {}

  virtual void SetCacheCapacity(uint64_t capacity) = 0;

  virtual void ClearCache(bool on_navigation) = 0;
};
class  WebCacheInterceptorForTesting : public WebCache {
  virtual WebCache* GetForwardingInterface() = 0;
  void SetCacheCapacity(uint64_t capacity) override;
  void ClearCache(bool on_navigation) override;
};
class  WebCacheAsyncWaiter {
 public:
  explicit WebCacheAsyncWaiter(WebCache* proxy);
  ~WebCacheAsyncWaiter();

 private:
  WebCache* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WebCacheAsyncWaiter);
};

class  WebCacheProxy
    : public WebCache {
 public:
  explicit WebCacheProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetCacheCapacity(uint64_t capacity) final;
  void ClearCache(bool on_navigation) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  WebCacheStubDispatch {
 public:
  static bool Accept(WebCache* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WebCache* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WebCache>>
class WebCacheStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WebCacheStub() {}
  ~WebCacheStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WebCacheStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WebCacheStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  WebCacheRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace web_cache

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_WEB_CACHE_PUBLIC_INTERFACES_WEB_CACHE_MOJOM_H_