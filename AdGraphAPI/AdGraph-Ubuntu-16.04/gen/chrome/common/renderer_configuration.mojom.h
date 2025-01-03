// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_RENDERER_CONFIGURATION_MOJOM_H_
#define CHROME_COMMON_RENDERER_CONFIGURATION_MOJOM_H_

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
#include "chrome/common/renderer_configuration.mojom-shared.h"
#include "components/content_settings/core/common/content_settings.mojom.h"
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
class RendererConfiguration;
using RendererConfigurationPtr = mojo::InterfacePtr<RendererConfiguration>;
using RendererConfigurationPtrInfo = mojo::InterfacePtrInfo<RendererConfiguration>;
using ThreadSafeRendererConfigurationPtr =
    mojo::ThreadSafeInterfacePtr<RendererConfiguration>;
using RendererConfigurationRequest = mojo::InterfaceRequest<RendererConfiguration>;
using RendererConfigurationAssociatedPtr =
    mojo::AssociatedInterfacePtr<RendererConfiguration>;
using ThreadSafeRendererConfigurationAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<RendererConfiguration>;
using RendererConfigurationAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<RendererConfiguration>;
using RendererConfigurationAssociatedRequest =
    mojo::AssociatedInterfaceRequest<RendererConfiguration>;


class RendererConfigurationProxy;

template <typename ImplRefTraits>
class RendererConfigurationStub;

class RendererConfigurationRequestValidator;

class  RendererConfiguration
    : public RendererConfigurationInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = RendererConfigurationProxy;

  template <typename ImplRefTraits>
  using Stub_ = RendererConfigurationStub<ImplRefTraits>;

  using RequestValidator_ = RendererConfigurationRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetInitialConfigurationMinVersion = 0,
    kSetContentSettingRulesMinVersion = 0,
    kSetFieldTrialGroupMinVersion = 0,
  };
  virtual ~RendererConfiguration() {}

  virtual void SetInitialConfiguration(bool is_incognito_process) = 0;

  virtual void SetContentSettingRules(const ::RendererContentSettingRules& rules) = 0;

  virtual void SetFieldTrialGroup(const std::string& trial_name, const std::string& group_name) = 0;
};
class  RendererConfigurationInterceptorForTesting : public RendererConfiguration {
  virtual RendererConfiguration* GetForwardingInterface() = 0;
  void SetInitialConfiguration(bool is_incognito_process) override;
  void SetContentSettingRules(const ::RendererContentSettingRules& rules) override;
  void SetFieldTrialGroup(const std::string& trial_name, const std::string& group_name) override;
};
class  RendererConfigurationAsyncWaiter {
 public:
  explicit RendererConfigurationAsyncWaiter(RendererConfiguration* proxy);
  ~RendererConfigurationAsyncWaiter();

 private:
  RendererConfiguration* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RendererConfigurationAsyncWaiter);
};

class  RendererConfigurationProxy
    : public RendererConfiguration {
 public:
  explicit RendererConfigurationProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetInitialConfiguration(bool is_incognito_process) final;
  void SetContentSettingRules(const ::RendererContentSettingRules& rules) final;
  void SetFieldTrialGroup(const std::string& trial_name, const std::string& group_name) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  RendererConfigurationStubDispatch {
 public:
  static bool Accept(RendererConfiguration* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RendererConfiguration* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RendererConfiguration>>
class RendererConfigurationStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RendererConfigurationStub() {}
  ~RendererConfigurationStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RendererConfigurationStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RendererConfigurationStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  RendererConfigurationRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace chrome

namespace mojo {

}  // namespace mojo

#endif  // CHROME_COMMON_RENDERER_CONFIGURATION_MOJOM_H_