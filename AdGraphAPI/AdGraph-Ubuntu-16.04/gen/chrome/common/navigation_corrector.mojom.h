// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_NAVIGATION_CORRECTOR_MOJOM_H_
#define CHROME_COMMON_NAVIGATION_CORRECTOR_MOJOM_H_

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
#include "chrome/common/navigation_corrector.mojom-shared.h"
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
class NavigationCorrector;
using NavigationCorrectorPtr = mojo::InterfacePtr<NavigationCorrector>;
using NavigationCorrectorPtrInfo = mojo::InterfacePtrInfo<NavigationCorrector>;
using ThreadSafeNavigationCorrectorPtr =
    mojo::ThreadSafeInterfacePtr<NavigationCorrector>;
using NavigationCorrectorRequest = mojo::InterfaceRequest<NavigationCorrector>;
using NavigationCorrectorAssociatedPtr =
    mojo::AssociatedInterfacePtr<NavigationCorrector>;
using ThreadSafeNavigationCorrectorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NavigationCorrector>;
using NavigationCorrectorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NavigationCorrector>;
using NavigationCorrectorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NavigationCorrector>;


class NavigationCorrectorProxy;

template <typename ImplRefTraits>
class NavigationCorrectorStub;

class NavigationCorrectorRequestValidator;

class  NavigationCorrector
    : public NavigationCorrectorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = NavigationCorrectorProxy;

  template <typename ImplRefTraits>
  using Stub_ = NavigationCorrectorStub<ImplRefTraits>;

  using RequestValidator_ = NavigationCorrectorRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetNavigationCorrectionInfoMinVersion = 0,
  };
  virtual ~NavigationCorrector() {}

  virtual void SetNavigationCorrectionInfo(const GURL& navigation_correction_url, const std::string& language, const std::string& country_code, const std::string& api_key, const GURL& search_url) = 0;
};
class  NavigationCorrectorInterceptorForTesting : public NavigationCorrector {
  virtual NavigationCorrector* GetForwardingInterface() = 0;
  void SetNavigationCorrectionInfo(const GURL& navigation_correction_url, const std::string& language, const std::string& country_code, const std::string& api_key, const GURL& search_url) override;
};
class  NavigationCorrectorAsyncWaiter {
 public:
  explicit NavigationCorrectorAsyncWaiter(NavigationCorrector* proxy);
  ~NavigationCorrectorAsyncWaiter();

 private:
  NavigationCorrector* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NavigationCorrectorAsyncWaiter);
};

class  NavigationCorrectorProxy
    : public NavigationCorrector {
 public:
  explicit NavigationCorrectorProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetNavigationCorrectionInfo(const GURL& navigation_correction_url, const std::string& language, const std::string& country_code, const std::string& api_key, const GURL& search_url) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  NavigationCorrectorStubDispatch {
 public:
  static bool Accept(NavigationCorrector* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NavigationCorrector* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NavigationCorrector>>
class NavigationCorrectorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NavigationCorrectorStub() {}
  ~NavigationCorrectorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NavigationCorrectorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NavigationCorrectorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  NavigationCorrectorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace chrome

namespace mojo {

}  // namespace mojo

#endif  // CHROME_COMMON_NAVIGATION_CORRECTOR_MOJOM_H_