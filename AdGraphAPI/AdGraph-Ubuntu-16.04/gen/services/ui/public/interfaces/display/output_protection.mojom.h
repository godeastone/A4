// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_OUTPUT_PROTECTION_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_OUTPUT_PROTECTION_MOJOM_H_

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
#include "services/ui/public/interfaces/display/output_protection.mojom-shared.h"
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


namespace display {
namespace mojom {
class OutputProtection;
using OutputProtectionPtr = mojo::InterfacePtr<OutputProtection>;
using OutputProtectionPtrInfo = mojo::InterfacePtrInfo<OutputProtection>;
using ThreadSafeOutputProtectionPtr =
    mojo::ThreadSafeInterfacePtr<OutputProtection>;
using OutputProtectionRequest = mojo::InterfaceRequest<OutputProtection>;
using OutputProtectionAssociatedPtr =
    mojo::AssociatedInterfacePtr<OutputProtection>;
using ThreadSafeOutputProtectionAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<OutputProtection>;
using OutputProtectionAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<OutputProtection>;
using OutputProtectionAssociatedRequest =
    mojo::AssociatedInterfaceRequest<OutputProtection>;


class OutputProtectionProxy;

template <typename ImplRefTraits>
class OutputProtectionStub;

class OutputProtectionRequestValidator;
class OutputProtectionResponseValidator;

class  OutputProtection
    : public OutputProtectionInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = OutputProtectionProxy;

  template <typename ImplRefTraits>
  using Stub_ = OutputProtectionStub<ImplRefTraits>;

  using RequestValidator_ = OutputProtectionRequestValidator;
  using ResponseValidator_ = OutputProtectionResponseValidator;
  enum MethodMinVersions : uint32_t {
    kQueryContentProtectionStatusMinVersion = 0,
    kSetContentProtectionMinVersion = 0,
  };
  virtual ~OutputProtection() {}


  using QueryContentProtectionStatusCallback = base::Callback<void(bool, uint32_t, uint32_t)>;
  virtual void QueryContentProtectionStatus(int64_t display_id, const QueryContentProtectionStatusCallback& callback) = 0;


  using SetContentProtectionCallback = base::Callback<void(bool)>;
  virtual void SetContentProtection(int64_t display_id, uint32_t desired_method_mask, const SetContentProtectionCallback& callback) = 0;
};
class  OutputProtectionInterceptorForTesting : public OutputProtection {
  virtual OutputProtection* GetForwardingInterface() = 0;
  void QueryContentProtectionStatus(int64_t display_id, const QueryContentProtectionStatusCallback& callback) override;
  void SetContentProtection(int64_t display_id, uint32_t desired_method_mask, const SetContentProtectionCallback& callback) override;
};
class  OutputProtectionAsyncWaiter {
 public:
  explicit OutputProtectionAsyncWaiter(OutputProtection* proxy);
  ~OutputProtectionAsyncWaiter();
  void QueryContentProtectionStatus(
      int64_t display_id, bool* out_success, uint32_t* out_link_mask, uint32_t* out_protection_mask);
  void SetContentProtection(
      int64_t display_id, uint32_t desired_method_mask, bool* out_success);

 private:
  OutputProtection* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(OutputProtectionAsyncWaiter);
};

class  OutputProtectionProxy
    : public OutputProtection {
 public:
  explicit OutputProtectionProxy(mojo::MessageReceiverWithResponder* receiver);
  void QueryContentProtectionStatus(int64_t display_id, const QueryContentProtectionStatusCallback& callback) final;
  void SetContentProtection(int64_t display_id, uint32_t desired_method_mask, const SetContentProtectionCallback& callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  OutputProtectionStubDispatch {
 public:
  static bool Accept(OutputProtection* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      OutputProtection* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<OutputProtection>>
class OutputProtectionStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  OutputProtectionStub() {}
  ~OutputProtectionStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return OutputProtectionStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return OutputProtectionStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  OutputProtectionRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  OutputProtectionResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace display

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_OUTPUT_PROTECTION_MOJOM_H_