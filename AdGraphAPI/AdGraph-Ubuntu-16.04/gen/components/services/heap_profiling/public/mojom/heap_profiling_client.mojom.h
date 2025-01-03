// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_H_
#define COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_H_

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
#include "components/services/heap_profiling/public/mojom/heap_profiling_client.mojom-shared.h"
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


namespace heap_profiling {
namespace mojom {
class ProfilingClient;
using ProfilingClientPtr = mojo::InterfacePtr<ProfilingClient>;
using ProfilingClientPtrInfo = mojo::InterfacePtrInfo<ProfilingClient>;
using ThreadSafeProfilingClientPtr =
    mojo::ThreadSafeInterfacePtr<ProfilingClient>;
using ProfilingClientRequest = mojo::InterfaceRequest<ProfilingClient>;
using ProfilingClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProfilingClient>;
using ThreadSafeProfilingClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ProfilingClient>;
using ProfilingClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProfilingClient>;
using ProfilingClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ProfilingClient>;

class ProfilingParams;
using ProfilingParamsPtr = mojo::StructPtr<ProfilingParams>;


class ProfilingClientProxy;

template <typename ImplRefTraits>
class ProfilingClientStub;

class ProfilingClientRequestValidator;

class  ProfilingClient
    : public ProfilingClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ProfilingClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = ProfilingClientStub<ImplRefTraits>;

  using RequestValidator_ = ProfilingClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kStartProfilingMinVersion = 0,
    kFlushMemlogPipeMinVersion = 0,
  };
  virtual ~ProfilingClient() {}

  virtual void StartProfiling(ProfilingParamsPtr params) = 0;

  virtual void FlushMemlogPipe(uint32_t barrier_id) = 0;
};
class  ProfilingClientInterceptorForTesting : public ProfilingClient {
  virtual ProfilingClient* GetForwardingInterface() = 0;
  void StartProfiling(ProfilingParamsPtr params) override;
  void FlushMemlogPipe(uint32_t barrier_id) override;
};
class  ProfilingClientAsyncWaiter {
 public:
  explicit ProfilingClientAsyncWaiter(ProfilingClient* proxy);
  ~ProfilingClientAsyncWaiter();

 private:
  ProfilingClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProfilingClientAsyncWaiter);
};

class  ProfilingClientProxy
    : public ProfilingClient {
 public:
  explicit ProfilingClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void StartProfiling(ProfilingParamsPtr params) final;
  void FlushMemlogPipe(uint32_t barrier_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ProfilingClientStubDispatch {
 public:
  static bool Accept(ProfilingClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ProfilingClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ProfilingClient>>
class ProfilingClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ProfilingClientStub() {}
  ~ProfilingClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProfilingClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProfilingClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ProfilingClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  ProfilingParams {
 public:
  using DataView = ProfilingParamsDataView;
  using Data_ = internal::ProfilingParams_Data;

  template <typename... Args>
  static ProfilingParamsPtr New(Args&&... args) {
    return ProfilingParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ProfilingParamsPtr From(const U& u) {
    return mojo::TypeConverter<ProfilingParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ProfilingParams>::Convert(*this);
  }


  ProfilingParams();

  ProfilingParams(
      mojo::ScopedHandle sender_pipe,
      StackMode stack_mode,
      uint32_t sampling_rate);

  ~ProfilingParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ProfilingParamsPtr>
  ProfilingParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ProfilingParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ProfilingParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ProfilingParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ProfilingParams_UnserializedMessageContext<
            UserType, ProfilingParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ProfilingParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ProfilingParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ProfilingParams_UnserializedMessageContext<
            UserType, ProfilingParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ProfilingParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  mojo::ScopedHandle sender_pipe;
  StackMode stack_mode;
  uint32_t sampling_rate;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ProfilingParams);
};

template <typename StructPtrType>
ProfilingParamsPtr ProfilingParams::Clone() const {
  return New(
      mojo::Clone(sender_pipe),
      mojo::Clone(stack_mode),
      mojo::Clone(sampling_rate)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ProfilingParams>::value>::type*>
bool ProfilingParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->sender_pipe, other_struct.sender_pipe))
    return false;
  if (!mojo::Equals(this->stack_mode, other_struct.stack_mode))
    return false;
  if (!mojo::Equals(this->sampling_rate, other_struct.sampling_rate))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace heap_profiling

namespace mojo {


template <>
struct  StructTraits<::heap_profiling::mojom::ProfilingParams::DataView,
                                         ::heap_profiling::mojom::ProfilingParamsPtr> {
  static bool IsNull(const ::heap_profiling::mojom::ProfilingParamsPtr& input) { return !input; }
  static void SetToNull(::heap_profiling::mojom::ProfilingParamsPtr* output) { output->reset(); }

  static  decltype(::heap_profiling::mojom::ProfilingParams::sender_pipe)& sender_pipe(
       ::heap_profiling::mojom::ProfilingParamsPtr& input) {
    return input->sender_pipe;
  }

  static decltype(::heap_profiling::mojom::ProfilingParams::stack_mode) stack_mode(
      const ::heap_profiling::mojom::ProfilingParamsPtr& input) {
    return input->stack_mode;
  }

  static decltype(::heap_profiling::mojom::ProfilingParams::sampling_rate) sampling_rate(
      const ::heap_profiling::mojom::ProfilingParamsPtr& input) {
    return input->sampling_rate;
  }

  static bool Read(::heap_profiling::mojom::ProfilingParams::DataView input, ::heap_profiling::mojom::ProfilingParamsPtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_H_