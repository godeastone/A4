// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_APP_BANNER_APP_BANNER_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_APP_BANNER_APP_BANNER_MOJOM_H_

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
#include "third_party/blink/public/platform/modules/app_banner/app_banner.mojom-shared.h"
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


namespace blink {
namespace mojom {
class AppBannerController;
using AppBannerControllerPtr = mojo::InterfacePtr<AppBannerController>;
using AppBannerControllerPtrInfo = mojo::InterfacePtrInfo<AppBannerController>;
using ThreadSafeAppBannerControllerPtr =
    mojo::ThreadSafeInterfacePtr<AppBannerController>;
using AppBannerControllerRequest = mojo::InterfaceRequest<AppBannerController>;
using AppBannerControllerAssociatedPtr =
    mojo::AssociatedInterfacePtr<AppBannerController>;
using ThreadSafeAppBannerControllerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AppBannerController>;
using AppBannerControllerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AppBannerController>;
using AppBannerControllerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AppBannerController>;

class AppBannerEvent;
using AppBannerEventPtr = mojo::InterfacePtr<AppBannerEvent>;
using AppBannerEventPtrInfo = mojo::InterfacePtrInfo<AppBannerEvent>;
using ThreadSafeAppBannerEventPtr =
    mojo::ThreadSafeInterfacePtr<AppBannerEvent>;
using AppBannerEventRequest = mojo::InterfaceRequest<AppBannerEvent>;
using AppBannerEventAssociatedPtr =
    mojo::AssociatedInterfacePtr<AppBannerEvent>;
using ThreadSafeAppBannerEventAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AppBannerEvent>;
using AppBannerEventAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AppBannerEvent>;
using AppBannerEventAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AppBannerEvent>;

class AppBannerService;
using AppBannerServicePtr = mojo::InterfacePtr<AppBannerService>;
using AppBannerServicePtrInfo = mojo::InterfacePtrInfo<AppBannerService>;
using ThreadSafeAppBannerServicePtr =
    mojo::ThreadSafeInterfacePtr<AppBannerService>;
using AppBannerServiceRequest = mojo::InterfaceRequest<AppBannerService>;
using AppBannerServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<AppBannerService>;
using ThreadSafeAppBannerServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AppBannerService>;
using AppBannerServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AppBannerService>;
using AppBannerServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AppBannerService>;


class AppBannerControllerProxy;

template <typename ImplRefTraits>
class AppBannerControllerStub;

class AppBannerControllerRequestValidator;
class AppBannerControllerResponseValidator;

class CONTENT_EXPORT AppBannerController
    : public AppBannerControllerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = AppBannerControllerProxy;

  template <typename ImplRefTraits>
  using Stub_ = AppBannerControllerStub<ImplRefTraits>;

  using RequestValidator_ = AppBannerControllerRequestValidator;
  using ResponseValidator_ = AppBannerControllerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kBannerPromptRequestMinVersion = 0,
  };
  virtual ~AppBannerController() {}


  using BannerPromptRequestCallback = base::OnceCallback<void(AppBannerPromptReply, const std::string&)>;
  virtual void BannerPromptRequest(AppBannerServicePtr service, AppBannerEventRequest event, const std::vector<std::string>& platform, BannerPromptRequestCallback callback) = 0;
};
class CONTENT_EXPORT AppBannerControllerInterceptorForTesting : public AppBannerController {
  virtual AppBannerController* GetForwardingInterface() = 0;
  void BannerPromptRequest(AppBannerServicePtr service, AppBannerEventRequest event, const std::vector<std::string>& platform, BannerPromptRequestCallback callback) override;
};
class CONTENT_EXPORT AppBannerControllerAsyncWaiter {
 public:
  explicit AppBannerControllerAsyncWaiter(AppBannerController* proxy);
  ~AppBannerControllerAsyncWaiter();
  void BannerPromptRequest(
      AppBannerServicePtr service, AppBannerEventRequest event, const std::vector<std::string>& platform, AppBannerPromptReply* out_reply, std::string* out_referrer);

 private:
  AppBannerController* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AppBannerControllerAsyncWaiter);
};

class AppBannerEventProxy;

template <typename ImplRefTraits>
class AppBannerEventStub;

class AppBannerEventRequestValidator;

class CONTENT_EXPORT AppBannerEvent
    : public AppBannerEventInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = AppBannerEventProxy;

  template <typename ImplRefTraits>
  using Stub_ = AppBannerEventStub<ImplRefTraits>;

  using RequestValidator_ = AppBannerEventRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kBannerAcceptedMinVersion = 0,
    kBannerDismissedMinVersion = 0,
  };
  virtual ~AppBannerEvent() {}

  virtual void BannerAccepted(const std::string& platform) = 0;

  virtual void BannerDismissed() = 0;
};
class CONTENT_EXPORT AppBannerEventInterceptorForTesting : public AppBannerEvent {
  virtual AppBannerEvent* GetForwardingInterface() = 0;
  void BannerAccepted(const std::string& platform) override;
  void BannerDismissed() override;
};
class CONTENT_EXPORT AppBannerEventAsyncWaiter {
 public:
  explicit AppBannerEventAsyncWaiter(AppBannerEvent* proxy);
  ~AppBannerEventAsyncWaiter();

 private:
  AppBannerEvent* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AppBannerEventAsyncWaiter);
};

class AppBannerServiceProxy;

template <typename ImplRefTraits>
class AppBannerServiceStub;

class AppBannerServiceRequestValidator;

class CONTENT_EXPORT AppBannerService
    : public AppBannerServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = AppBannerServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = AppBannerServiceStub<ImplRefTraits>;

  using RequestValidator_ = AppBannerServiceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kDisplayAppBannerMinVersion = 0,
  };
  virtual ~AppBannerService() {}

  virtual void DisplayAppBanner(bool user_gesture) = 0;
};
class CONTENT_EXPORT AppBannerServiceInterceptorForTesting : public AppBannerService {
  virtual AppBannerService* GetForwardingInterface() = 0;
  void DisplayAppBanner(bool user_gesture) override;
};
class CONTENT_EXPORT AppBannerServiceAsyncWaiter {
 public:
  explicit AppBannerServiceAsyncWaiter(AppBannerService* proxy);
  ~AppBannerServiceAsyncWaiter();

 private:
  AppBannerService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AppBannerServiceAsyncWaiter);
};

class CONTENT_EXPORT AppBannerControllerProxy
    : public AppBannerController {
 public:
  explicit AppBannerControllerProxy(mojo::MessageReceiverWithResponder* receiver);
  void BannerPromptRequest(AppBannerServicePtr service, AppBannerEventRequest event, const std::vector<std::string>& platform, BannerPromptRequestCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT AppBannerEventProxy
    : public AppBannerEvent {
 public:
  explicit AppBannerEventProxy(mojo::MessageReceiverWithResponder* receiver);
  void BannerAccepted(const std::string& platform) final;
  void BannerDismissed() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT AppBannerServiceProxy
    : public AppBannerService {
 public:
  explicit AppBannerServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void DisplayAppBanner(bool user_gesture) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT AppBannerControllerStubDispatch {
 public:
  static bool Accept(AppBannerController* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AppBannerController* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AppBannerController>>
class AppBannerControllerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AppBannerControllerStub() {}
  ~AppBannerControllerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AppBannerControllerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AppBannerControllerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT AppBannerEventStubDispatch {
 public:
  static bool Accept(AppBannerEvent* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AppBannerEvent* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AppBannerEvent>>
class AppBannerEventStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AppBannerEventStub() {}
  ~AppBannerEventStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AppBannerEventStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AppBannerEventStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT AppBannerServiceStubDispatch {
 public:
  static bool Accept(AppBannerService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AppBannerService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AppBannerService>>
class AppBannerServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AppBannerServiceStub() {}
  ~AppBannerServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AppBannerServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AppBannerServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT AppBannerControllerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT AppBannerEventRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT AppBannerServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT AppBannerControllerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_APP_BANNER_APP_BANNER_MOJOM_H_