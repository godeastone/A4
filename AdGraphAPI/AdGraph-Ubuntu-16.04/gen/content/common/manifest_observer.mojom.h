// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_MANIFEST_OBSERVER_MOJOM_H_
#define CONTENT_COMMON_MANIFEST_OBSERVER_MOJOM_H_

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
#include "content/common/manifest_observer.mojom-shared.h"
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
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class ManifestUrlChangeObserver;
using ManifestUrlChangeObserverPtr = mojo::InterfacePtr<ManifestUrlChangeObserver>;
using ManifestUrlChangeObserverPtrInfo = mojo::InterfacePtrInfo<ManifestUrlChangeObserver>;
using ThreadSafeManifestUrlChangeObserverPtr =
    mojo::ThreadSafeInterfacePtr<ManifestUrlChangeObserver>;
using ManifestUrlChangeObserverRequest = mojo::InterfaceRequest<ManifestUrlChangeObserver>;
using ManifestUrlChangeObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<ManifestUrlChangeObserver>;
using ThreadSafeManifestUrlChangeObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ManifestUrlChangeObserver>;
using ManifestUrlChangeObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ManifestUrlChangeObserver>;
using ManifestUrlChangeObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ManifestUrlChangeObserver>;


class ManifestUrlChangeObserverProxy;

template <typename ImplRefTraits>
class ManifestUrlChangeObserverStub;

class ManifestUrlChangeObserverRequestValidator;

class CONTENT_EXPORT ManifestUrlChangeObserver
    : public ManifestUrlChangeObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ManifestUrlChangeObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = ManifestUrlChangeObserverStub<ImplRefTraits>;

  using RequestValidator_ = ManifestUrlChangeObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kManifestUrlChangedMinVersion = 0,
  };
  virtual ~ManifestUrlChangeObserver() {}

  virtual void ManifestUrlChanged(const base::Optional<GURL>& manifest_url) = 0;
};
class CONTENT_EXPORT ManifestUrlChangeObserverInterceptorForTesting : public ManifestUrlChangeObserver {
  virtual ManifestUrlChangeObserver* GetForwardingInterface() = 0;
  void ManifestUrlChanged(const base::Optional<GURL>& manifest_url) override;
};
class CONTENT_EXPORT ManifestUrlChangeObserverAsyncWaiter {
 public:
  explicit ManifestUrlChangeObserverAsyncWaiter(ManifestUrlChangeObserver* proxy);
  ~ManifestUrlChangeObserverAsyncWaiter();

 private:
  ManifestUrlChangeObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ManifestUrlChangeObserverAsyncWaiter);
};

class CONTENT_EXPORT ManifestUrlChangeObserverProxy
    : public ManifestUrlChangeObserver {
 public:
  explicit ManifestUrlChangeObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void ManifestUrlChanged(const base::Optional<GURL>& manifest_url) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT ManifestUrlChangeObserverStubDispatch {
 public:
  static bool Accept(ManifestUrlChangeObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ManifestUrlChangeObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ManifestUrlChangeObserver>>
class ManifestUrlChangeObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ManifestUrlChangeObserverStub() {}
  ~ManifestUrlChangeObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ManifestUrlChangeObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ManifestUrlChangeObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT ManifestUrlChangeObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_MANIFEST_OBSERVER_MOJOM_H_