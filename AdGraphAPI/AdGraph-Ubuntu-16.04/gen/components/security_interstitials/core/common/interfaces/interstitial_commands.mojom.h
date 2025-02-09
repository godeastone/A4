// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SECURITY_INTERSTITIALS_CORE_COMMON_INTERFACES_INTERSTITIAL_COMMANDS_MOJOM_H_
#define COMPONENTS_SECURITY_INTERSTITIALS_CORE_COMMON_INTERFACES_INTERSTITIAL_COMMANDS_MOJOM_H_

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
#include "components/security_interstitials/core/common/interfaces/interstitial_commands.mojom-shared.h"
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


namespace security_interstitials {
namespace mojom {
class InterstitialCommands;
using InterstitialCommandsPtr = mojo::InterfacePtr<InterstitialCommands>;
using InterstitialCommandsPtrInfo = mojo::InterfacePtrInfo<InterstitialCommands>;
using ThreadSafeInterstitialCommandsPtr =
    mojo::ThreadSafeInterfacePtr<InterstitialCommands>;
using InterstitialCommandsRequest = mojo::InterfaceRequest<InterstitialCommands>;
using InterstitialCommandsAssociatedPtr =
    mojo::AssociatedInterfacePtr<InterstitialCommands>;
using ThreadSafeInterstitialCommandsAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<InterstitialCommands>;
using InterstitialCommandsAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<InterstitialCommands>;
using InterstitialCommandsAssociatedRequest =
    mojo::AssociatedInterfaceRequest<InterstitialCommands>;


class InterstitialCommandsProxy;

template <typename ImplRefTraits>
class InterstitialCommandsStub;

class InterstitialCommandsRequestValidator;

class  InterstitialCommands
    : public InterstitialCommandsInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = InterstitialCommandsProxy;

  template <typename ImplRefTraits>
  using Stub_ = InterstitialCommandsStub<ImplRefTraits>;

  using RequestValidator_ = InterstitialCommandsRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kDontProceedMinVersion = 0,
    kProceedMinVersion = 0,
    kShowMoreSectionMinVersion = 0,
    kOpenHelpCenterMinVersion = 0,
    kOpenDiagnosticMinVersion = 0,
    kReloadMinVersion = 0,
    kOpenDateSettingsMinVersion = 0,
    kOpenLoginMinVersion = 0,
    kDoReportMinVersion = 0,
    kDontReportMinVersion = 0,
    kOpenReportingPrivacyMinVersion = 0,
    kOpenWhitepaperMinVersion = 0,
    kReportPhishingErrorMinVersion = 0,
  };
  virtual ~InterstitialCommands() {}

  virtual void DontProceed() = 0;

  virtual void Proceed() = 0;

  virtual void ShowMoreSection() = 0;

  virtual void OpenHelpCenter() = 0;

  virtual void OpenDiagnostic() = 0;

  virtual void Reload() = 0;

  virtual void OpenDateSettings() = 0;

  virtual void OpenLogin() = 0;

  virtual void DoReport() = 0;

  virtual void DontReport() = 0;

  virtual void OpenReportingPrivacy() = 0;

  virtual void OpenWhitepaper() = 0;

  virtual void ReportPhishingError() = 0;
};
class  InterstitialCommandsInterceptorForTesting : public InterstitialCommands {
  virtual InterstitialCommands* GetForwardingInterface() = 0;
  void DontProceed() override;
  void Proceed() override;
  void ShowMoreSection() override;
  void OpenHelpCenter() override;
  void OpenDiagnostic() override;
  void Reload() override;
  void OpenDateSettings() override;
  void OpenLogin() override;
  void DoReport() override;
  void DontReport() override;
  void OpenReportingPrivacy() override;
  void OpenWhitepaper() override;
  void ReportPhishingError() override;
};
class  InterstitialCommandsAsyncWaiter {
 public:
  explicit InterstitialCommandsAsyncWaiter(InterstitialCommands* proxy);
  ~InterstitialCommandsAsyncWaiter();

 private:
  InterstitialCommands* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(InterstitialCommandsAsyncWaiter);
};

class  InterstitialCommandsProxy
    : public InterstitialCommands {
 public:
  explicit InterstitialCommandsProxy(mojo::MessageReceiverWithResponder* receiver);
  void DontProceed() final;
  void Proceed() final;
  void ShowMoreSection() final;
  void OpenHelpCenter() final;
  void OpenDiagnostic() final;
  void Reload() final;
  void OpenDateSettings() final;
  void OpenLogin() final;
  void DoReport() final;
  void DontReport() final;
  void OpenReportingPrivacy() final;
  void OpenWhitepaper() final;
  void ReportPhishingError() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  InterstitialCommandsStubDispatch {
 public:
  static bool Accept(InterstitialCommands* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      InterstitialCommands* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<InterstitialCommands>>
class InterstitialCommandsStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  InterstitialCommandsStub() {}
  ~InterstitialCommandsStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InterstitialCommandsStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InterstitialCommandsStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  InterstitialCommandsRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace security_interstitials

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_SECURITY_INTERSTITIALS_CORE_COMMON_INTERFACES_INTERSTITIAL_COMMANDS_MOJOM_H_