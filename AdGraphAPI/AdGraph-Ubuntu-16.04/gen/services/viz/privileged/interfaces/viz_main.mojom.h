// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_VIZ_MAIN_MOJOM_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_VIZ_MAIN_MOJOM_H_

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
#include "services/viz/privileged/interfaces/viz_main.mojom-shared.h"
#include "components/discardable_memory/public/interfaces/discardable_shared_memory_manager.mojom.h"
#include "services/viz/public/interfaces/compositing/compositing_mode_watcher.mojom.h"
#include "services/viz/privileged/interfaces/compositing/frame_sink_manager.mojom.h"
#include "services/viz/privileged/interfaces/gl/gpu_host.mojom.h"
#include "services/viz/privileged/interfaces/gl/gpu_service.mojom.h"
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


namespace viz {
namespace mojom {
class VizMain;
using VizMainPtr = mojo::InterfacePtr<VizMain>;
using VizMainPtrInfo = mojo::InterfacePtrInfo<VizMain>;
using ThreadSafeVizMainPtr =
    mojo::ThreadSafeInterfacePtr<VizMain>;
using VizMainRequest = mojo::InterfaceRequest<VizMain>;
using VizMainAssociatedPtr =
    mojo::AssociatedInterfacePtr<VizMain>;
using ThreadSafeVizMainAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VizMain>;
using VizMainAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VizMain>;
using VizMainAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VizMain>;

class FrameSinkManagerParams;
using FrameSinkManagerParamsPtr = mojo::StructPtr<FrameSinkManagerParams>;


class VizMainProxy;

template <typename ImplRefTraits>
class VizMainStub;

class VizMainRequestValidator;

class  VizMain
    : public VizMainInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = VizMainProxy;

  template <typename ImplRefTraits>
  using Stub_ = VizMainStub<ImplRefTraits>;

  using RequestValidator_ = VizMainRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateFrameSinkManagerMinVersion = 0,
    kCreateGpuServiceMinVersion = 0,
  };
  virtual ~VizMain() {}

  virtual void CreateFrameSinkManager(FrameSinkManagerParamsPtr params) = 0;

  virtual void CreateGpuService(::viz::mojom::GpuServiceRequest gpu_service, ::viz::mojom::GpuHostPtr gpu_host, ::discardable_memory::mojom::DiscardableSharedMemoryManagerPtr discardable_memory_manager, mojo::ScopedSharedBufferHandle activity_flags) = 0;
};
class  VizMainInterceptorForTesting : public VizMain {
  virtual VizMain* GetForwardingInterface() = 0;
  void CreateFrameSinkManager(FrameSinkManagerParamsPtr params) override;
  void CreateGpuService(::viz::mojom::GpuServiceRequest gpu_service, ::viz::mojom::GpuHostPtr gpu_host, ::discardable_memory::mojom::DiscardableSharedMemoryManagerPtr discardable_memory_manager, mojo::ScopedSharedBufferHandle activity_flags) override;
};
class  VizMainAsyncWaiter {
 public:
  explicit VizMainAsyncWaiter(VizMain* proxy);
  ~VizMainAsyncWaiter();

 private:
  VizMain* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VizMainAsyncWaiter);
};

class  VizMainProxy
    : public VizMain {
 public:
  explicit VizMainProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateFrameSinkManager(FrameSinkManagerParamsPtr params) final;
  void CreateGpuService(::viz::mojom::GpuServiceRequest gpu_service, ::viz::mojom::GpuHostPtr gpu_host, ::discardable_memory::mojom::DiscardableSharedMemoryManagerPtr discardable_memory_manager, mojo::ScopedSharedBufferHandle activity_flags) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  VizMainStubDispatch {
 public:
  static bool Accept(VizMain* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VizMain* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VizMain>>
class VizMainStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VizMainStub() {}
  ~VizMainStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VizMainStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VizMainStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  VizMainRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  FrameSinkManagerParams {
 public:
  using DataView = FrameSinkManagerParamsDataView;
  using Data_ = internal::FrameSinkManagerParams_Data;

  template <typename... Args>
  static FrameSinkManagerParamsPtr New(Args&&... args) {
    return FrameSinkManagerParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FrameSinkManagerParamsPtr From(const U& u) {
    return mojo::TypeConverter<FrameSinkManagerParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FrameSinkManagerParams>::Convert(*this);
  }


  FrameSinkManagerParams();

  FrameSinkManagerParams(
      uint32_t restart_id,
      bool use_activation_deadline,
      uint32_t activation_deadline_in_frames,
      ::viz::mojom::FrameSinkManagerRequest frame_sink_manager,
      ::viz::mojom::FrameSinkManagerClientPtrInfo frame_sink_manager_client);

  ~FrameSinkManagerParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FrameSinkManagerParamsPtr>
  FrameSinkManagerParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FrameSinkManagerParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FrameSinkManagerParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FrameSinkManagerParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FrameSinkManagerParams_UnserializedMessageContext<
            UserType, FrameSinkManagerParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FrameSinkManagerParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FrameSinkManagerParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FrameSinkManagerParams_UnserializedMessageContext<
            UserType, FrameSinkManagerParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FrameSinkManagerParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint32_t restart_id;
  bool use_activation_deadline;
  uint32_t activation_deadline_in_frames;
  ::viz::mojom::FrameSinkManagerRequest frame_sink_manager;
  ::viz::mojom::FrameSinkManagerClientPtrInfo frame_sink_manager_client;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(FrameSinkManagerParams);
};

template <typename StructPtrType>
FrameSinkManagerParamsPtr FrameSinkManagerParams::Clone() const {
  return New(
      mojo::Clone(restart_id),
      mojo::Clone(use_activation_deadline),
      mojo::Clone(activation_deadline_in_frames),
      mojo::Clone(frame_sink_manager),
      mojo::Clone(frame_sink_manager_client)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FrameSinkManagerParams>::value>::type*>
bool FrameSinkManagerParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->restart_id, other_struct.restart_id))
    return false;
  if (!mojo::Equals(this->use_activation_deadline, other_struct.use_activation_deadline))
    return false;
  if (!mojo::Equals(this->activation_deadline_in_frames, other_struct.activation_deadline_in_frames))
    return false;
  if (!mojo::Equals(this->frame_sink_manager, other_struct.frame_sink_manager))
    return false;
  if (!mojo::Equals(this->frame_sink_manager_client, other_struct.frame_sink_manager_client))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct  StructTraits<::viz::mojom::FrameSinkManagerParams::DataView,
                                         ::viz::mojom::FrameSinkManagerParamsPtr> {
  static bool IsNull(const ::viz::mojom::FrameSinkManagerParamsPtr& input) { return !input; }
  static void SetToNull(::viz::mojom::FrameSinkManagerParamsPtr* output) { output->reset(); }

  static decltype(::viz::mojom::FrameSinkManagerParams::restart_id) restart_id(
      const ::viz::mojom::FrameSinkManagerParamsPtr& input) {
    return input->restart_id;
  }

  static decltype(::viz::mojom::FrameSinkManagerParams::use_activation_deadline) use_activation_deadline(
      const ::viz::mojom::FrameSinkManagerParamsPtr& input) {
    return input->use_activation_deadline;
  }

  static decltype(::viz::mojom::FrameSinkManagerParams::activation_deadline_in_frames) activation_deadline_in_frames(
      const ::viz::mojom::FrameSinkManagerParamsPtr& input) {
    return input->activation_deadline_in_frames;
  }

  static  decltype(::viz::mojom::FrameSinkManagerParams::frame_sink_manager)& frame_sink_manager(
       ::viz::mojom::FrameSinkManagerParamsPtr& input) {
    return input->frame_sink_manager;
  }

  static  decltype(::viz::mojom::FrameSinkManagerParams::frame_sink_manager_client)& frame_sink_manager_client(
       ::viz::mojom::FrameSinkManagerParamsPtr& input) {
    return input->frame_sink_manager_client;
  }

  static bool Read(::viz::mojom::FrameSinkManagerParams::DataView input, ::viz::mojom::FrameSinkManagerParamsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_VIZ_MAIN_MOJOM_H_