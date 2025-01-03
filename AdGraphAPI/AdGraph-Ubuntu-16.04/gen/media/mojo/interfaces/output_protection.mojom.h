// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_H_

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
#include "media/mojo/interfaces/output_protection.mojom-shared.h"
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


namespace media {
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
    kQueryStatusMinVersion = 0,
    kEnableProtectionMinVersion = 0,
  };
  using ProtectionType = OutputProtection_ProtectionType;
  using LinkType = OutputProtection_LinkType;
  virtual ~OutputProtection() {}


  using QueryStatusCallback = base::OnceCallback<void(bool, uint32_t, uint32_t)>;
  virtual void QueryStatus(QueryStatusCallback callback) = 0;


  using EnableProtectionCallback = base::OnceCallback<void(bool)>;
  virtual void EnableProtection(uint32_t desired_protection_mask, EnableProtectionCallback callback) = 0;
};
class  OutputProtectionInterceptorForTesting : public OutputProtection {
  virtual OutputProtection* GetForwardingInterface() = 0;
  void QueryStatus(QueryStatusCallback callback) override;
  void EnableProtection(uint32_t desired_protection_mask, EnableProtectionCallback callback) override;
};
class  OutputProtectionAsyncWaiter {
 public:
  explicit OutputProtectionAsyncWaiter(OutputProtection* proxy);
  ~OutputProtectionAsyncWaiter();
  void QueryStatus(
      bool* out_success, uint32_t* out_link_mask, uint32_t* out_protection_mask);
  void EnableProtection(
      uint32_t desired_protection_mask, bool* out_success);

 private:
  OutputProtection* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(OutputProtectionAsyncWaiter);
};

class  OutputProtectionProxy
    : public OutputProtection {
 public:
  explicit OutputProtectionProxy(mojo::MessageReceiverWithResponder* receiver);
  void QueryStatus(QueryStatusCallback callback) final;
  void EnableProtection(uint32_t desired_protection_mask, EnableProtectionCallback callback) final;

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
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_H_