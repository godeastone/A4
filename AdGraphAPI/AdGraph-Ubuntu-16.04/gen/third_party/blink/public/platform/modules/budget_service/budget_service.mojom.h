// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BUDGET_SERVICE_BUDGET_SERVICE_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BUDGET_SERVICE_BUDGET_SERVICE_MOJOM_H_

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
#include "third_party/blink/public/platform/modules/budget_service/budget_service.mojom-shared.h"
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
class BudgetService;
using BudgetServicePtr = mojo::InterfacePtr<BudgetService>;
using BudgetServicePtrInfo = mojo::InterfacePtrInfo<BudgetService>;
using ThreadSafeBudgetServicePtr =
    mojo::ThreadSafeInterfacePtr<BudgetService>;
using BudgetServiceRequest = mojo::InterfaceRequest<BudgetService>;
using BudgetServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<BudgetService>;
using ThreadSafeBudgetServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<BudgetService>;
using BudgetServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BudgetService>;
using BudgetServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BudgetService>;

class BudgetState;
using BudgetStatePtr = mojo::InlinedStructPtr<BudgetState>;


class BudgetServiceProxy;

template <typename ImplRefTraits>
class BudgetServiceStub;

class BudgetServiceRequestValidator;
class BudgetServiceResponseValidator;

class CONTENT_EXPORT BudgetService
    : public BudgetServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = BudgetServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = BudgetServiceStub<ImplRefTraits>;

  using RequestValidator_ = BudgetServiceRequestValidator;
  using ResponseValidator_ = BudgetServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetCostMinVersion = 0,
    kGetBudgetMinVersion = 0,
    kReserveMinVersion = 0,
  };
  virtual ~BudgetService() {}


  using GetCostCallback = base::OnceCallback<void(double)>;
  virtual void GetCost(BudgetOperationType operation, GetCostCallback callback) = 0;


  using GetBudgetCallback = base::OnceCallback<void(BudgetServiceErrorType, std::vector<BudgetStatePtr>)>;
  virtual void GetBudget(GetBudgetCallback callback) = 0;


  using ReserveCallback = base::OnceCallback<void(BudgetServiceErrorType, bool)>;
  virtual void Reserve(BudgetOperationType operation, ReserveCallback callback) = 0;
};
class CONTENT_EXPORT BudgetServiceInterceptorForTesting : public BudgetService {
  virtual BudgetService* GetForwardingInterface() = 0;
  void GetCost(BudgetOperationType operation, GetCostCallback callback) override;
  void GetBudget(GetBudgetCallback callback) override;
  void Reserve(BudgetOperationType operation, ReserveCallback callback) override;
};
class CONTENT_EXPORT BudgetServiceAsyncWaiter {
 public:
  explicit BudgetServiceAsyncWaiter(BudgetService* proxy);
  ~BudgetServiceAsyncWaiter();
  void GetCost(
      BudgetOperationType operation, double* out_cost);
  void GetBudget(
      BudgetServiceErrorType* out_error_type, std::vector<BudgetStatePtr>* out_budget);
  void Reserve(
      BudgetOperationType operation, BudgetServiceErrorType* out_error_type, bool* out_success);

 private:
  BudgetService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BudgetServiceAsyncWaiter);
};

class CONTENT_EXPORT BudgetServiceProxy
    : public BudgetService {
 public:
  explicit BudgetServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetCost(BudgetOperationType operation, GetCostCallback callback) final;
  void GetBudget(GetBudgetCallback callback) final;
  void Reserve(BudgetOperationType operation, ReserveCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT BudgetServiceStubDispatch {
 public:
  static bool Accept(BudgetService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BudgetService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BudgetService>>
class BudgetServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BudgetServiceStub() {}
  ~BudgetServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BudgetServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BudgetServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT BudgetServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT BudgetServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};


class CONTENT_EXPORT BudgetState {
 public:
  using DataView = BudgetStateDataView;
  using Data_ = internal::BudgetState_Data;

  template <typename... Args>
  static BudgetStatePtr New(Args&&... args) {
    return BudgetStatePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BudgetStatePtr From(const U& u) {
    return mojo::TypeConverter<BudgetStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BudgetState>::Convert(*this);
  }


  BudgetState();

  BudgetState(
      double budget_at,
      double time);

  ~BudgetState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BudgetStatePtr>
  BudgetStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BudgetState>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BudgetState::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BudgetState::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BudgetState_UnserializedMessageContext<
            UserType, BudgetState::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BudgetState::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return BudgetState::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BudgetState_UnserializedMessageContext<
            UserType, BudgetState::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BudgetState::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  double budget_at;
  double time;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
BudgetStatePtr BudgetState::Clone() const {
  return New(
      mojo::Clone(budget_at),
      mojo::Clone(time)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BudgetState>::value>::type*>
bool BudgetState::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->budget_at, other_struct.budget_at))
    return false;
  if (!mojo::Equals(this->time, other_struct.time))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::BudgetState::DataView,
                                         ::blink::mojom::BudgetStatePtr> {
  static bool IsNull(const ::blink::mojom::BudgetStatePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::BudgetStatePtr* output) { output->reset(); }

  static decltype(::blink::mojom::BudgetState::budget_at) budget_at(
      const ::blink::mojom::BudgetStatePtr& input) {
    return input->budget_at;
  }

  static decltype(::blink::mojom::BudgetState::time) time(
      const ::blink::mojom::BudgetStatePtr& input) {
    return input->time;
  }

  static bool Read(::blink::mojom::BudgetState::DataView input, ::blink::mojom::BudgetStatePtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BUDGET_SERVICE_BUDGET_SERVICE_MOJOM_H_