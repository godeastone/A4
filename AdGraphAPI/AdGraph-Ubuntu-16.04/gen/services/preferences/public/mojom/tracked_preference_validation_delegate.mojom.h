// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_PREFERENCES_PUBLIC_MOJOM_TRACKED_PREFERENCE_VALIDATION_DELEGATE_MOJOM_H_
#define SERVICES_PREFERENCES_PUBLIC_MOJOM_TRACKED_PREFERENCE_VALIDATION_DELEGATE_MOJOM_H_

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
#include "services/preferences/public/mojom/tracked_preference_validation_delegate.mojom-shared.h"
#include "mojo/public/mojom/base/values.mojom.h"
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


namespace prefs {
namespace mojom {
class TrackedPreferenceValidationDelegate;
using TrackedPreferenceValidationDelegatePtr = mojo::InterfacePtr<TrackedPreferenceValidationDelegate>;
using TrackedPreferenceValidationDelegatePtrInfo = mojo::InterfacePtrInfo<TrackedPreferenceValidationDelegate>;
using ThreadSafeTrackedPreferenceValidationDelegatePtr =
    mojo::ThreadSafeInterfacePtr<TrackedPreferenceValidationDelegate>;
using TrackedPreferenceValidationDelegateRequest = mojo::InterfaceRequest<TrackedPreferenceValidationDelegate>;
using TrackedPreferenceValidationDelegateAssociatedPtr =
    mojo::AssociatedInterfacePtr<TrackedPreferenceValidationDelegate>;
using ThreadSafeTrackedPreferenceValidationDelegateAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<TrackedPreferenceValidationDelegate>;
using TrackedPreferenceValidationDelegateAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TrackedPreferenceValidationDelegate>;
using TrackedPreferenceValidationDelegateAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TrackedPreferenceValidationDelegate>;


class TrackedPreferenceValidationDelegateProxy;

template <typename ImplRefTraits>
class TrackedPreferenceValidationDelegateStub;

class TrackedPreferenceValidationDelegateRequestValidator;

class  TrackedPreferenceValidationDelegate
    : public TrackedPreferenceValidationDelegateInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = TrackedPreferenceValidationDelegateProxy;

  template <typename ImplRefTraits>
  using Stub_ = TrackedPreferenceValidationDelegateStub<ImplRefTraits>;

  using RequestValidator_ = TrackedPreferenceValidationDelegateRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnAtomicPreferenceValidationMinVersion = 0,
    kOnSplitPreferenceValidationMinVersion = 0,
  };
  using ValueState = TrackedPreferenceValidationDelegate_ValueState;
  virtual ~TrackedPreferenceValidationDelegate() {}

  virtual void OnAtomicPreferenceValidation(const std::string& pref_path, base::Optional<base::Value> value, TrackedPreferenceValidationDelegate::ValueState value_state, TrackedPreferenceValidationDelegate::ValueState external_validation_value_state, bool is_personal) = 0;

  virtual void OnSplitPreferenceValidation(const std::string& pref_path, const std::vector<std::string>& invalid_keys, const std::vector<std::string>& external_validation_invalid_keys, TrackedPreferenceValidationDelegate::ValueState value_state, TrackedPreferenceValidationDelegate::ValueState external_validation_value_state, bool is_personal) = 0;
};
class  TrackedPreferenceValidationDelegateInterceptorForTesting : public TrackedPreferenceValidationDelegate {
  virtual TrackedPreferenceValidationDelegate* GetForwardingInterface() = 0;
  void OnAtomicPreferenceValidation(const std::string& pref_path, base::Optional<base::Value> value, TrackedPreferenceValidationDelegate::ValueState value_state, TrackedPreferenceValidationDelegate::ValueState external_validation_value_state, bool is_personal) override;
  void OnSplitPreferenceValidation(const std::string& pref_path, const std::vector<std::string>& invalid_keys, const std::vector<std::string>& external_validation_invalid_keys, TrackedPreferenceValidationDelegate::ValueState value_state, TrackedPreferenceValidationDelegate::ValueState external_validation_value_state, bool is_personal) override;
};
class  TrackedPreferenceValidationDelegateAsyncWaiter {
 public:
  explicit TrackedPreferenceValidationDelegateAsyncWaiter(TrackedPreferenceValidationDelegate* proxy);
  ~TrackedPreferenceValidationDelegateAsyncWaiter();

 private:
  TrackedPreferenceValidationDelegate* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TrackedPreferenceValidationDelegateAsyncWaiter);
};

class  TrackedPreferenceValidationDelegateProxy
    : public TrackedPreferenceValidationDelegate {
 public:
  explicit TrackedPreferenceValidationDelegateProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnAtomicPreferenceValidation(const std::string& pref_path, base::Optional<base::Value> value, TrackedPreferenceValidationDelegate::ValueState value_state, TrackedPreferenceValidationDelegate::ValueState external_validation_value_state, bool is_personal) final;
  void OnSplitPreferenceValidation(const std::string& pref_path, const std::vector<std::string>& invalid_keys, const std::vector<std::string>& external_validation_invalid_keys, TrackedPreferenceValidationDelegate::ValueState value_state, TrackedPreferenceValidationDelegate::ValueState external_validation_value_state, bool is_personal) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  TrackedPreferenceValidationDelegateStubDispatch {
 public:
  static bool Accept(TrackedPreferenceValidationDelegate* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TrackedPreferenceValidationDelegate* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TrackedPreferenceValidationDelegate>>
class TrackedPreferenceValidationDelegateStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TrackedPreferenceValidationDelegateStub() {}
  ~TrackedPreferenceValidationDelegateStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TrackedPreferenceValidationDelegateStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TrackedPreferenceValidationDelegateStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  TrackedPreferenceValidationDelegateRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace prefs

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_PREFERENCES_PUBLIC_MOJOM_TRACKED_PREFERENCE_VALIDATION_DELEGATE_MOJOM_H_