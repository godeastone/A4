// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_VIZ_MAIN_MOJOM_SHARED_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_VIZ_MAIN_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "services/viz/privileged/interfaces/viz_main.mojom-shared-internal.h"
#include "components/discardable_memory/public/interfaces/discardable_shared_memory_manager.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/compositing_mode_watcher.mojom-shared.h"
#include "services/viz/privileged/interfaces/compositing/frame_sink_manager.mojom-shared.h"
#include "services/viz/privileged/interfaces/gl/gpu_host.mojom-shared.h"
#include "services/viz/privileged/interfaces/gl/gpu_service.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace viz {
namespace mojom {
class FrameSinkManagerParamsDataView;



}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::viz::mojom::FrameSinkManagerParamsDataView> {
  using Data = ::viz::mojom::internal::FrameSinkManagerParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {
// Interface base classes. They are used for type safety check.
class VizMainInterfaceBase {};

using VizMainPtrDataView =
    mojo::InterfacePtrDataView<VizMainInterfaceBase>;
using VizMainRequestDataView =
    mojo::InterfaceRequestDataView<VizMainInterfaceBase>;
using VizMainAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VizMainInterfaceBase>;
using VizMainAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VizMainInterfaceBase>;
class FrameSinkManagerParamsDataView {
 public:
  FrameSinkManagerParamsDataView() {}

  FrameSinkManagerParamsDataView(
      internal::FrameSinkManagerParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t restart_id() const {
    return data_->restart_id;
  }
  bool use_activation_deadline() const {
    return data_->use_activation_deadline;
  }
  uint32_t activation_deadline_in_frames() const {
    return data_->activation_deadline_in_frames;
  }
  template <typename UserType>
  UserType TakeFrameSinkManager() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::FrameSinkManagerRequestDataView>(
            &data_->frame_sink_manager, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeFrameSinkManagerClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::FrameSinkManagerClientPtrDataView>(
            &data_->frame_sink_manager_client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FrameSinkManagerParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VizMain_CreateFrameSinkManager_ParamsDataView {
 public:
  VizMain_CreateFrameSinkManager_ParamsDataView() {}

  VizMain_CreateFrameSinkManager_ParamsDataView(
      internal::VizMain_CreateFrameSinkManager_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      FrameSinkManagerParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkManagerParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::VizMain_CreateFrameSinkManager_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VizMain_CreateGpuService_ParamsDataView {
 public:
  VizMain_CreateGpuService_ParamsDataView() {}

  VizMain_CreateGpuService_ParamsDataView(
      internal::VizMain_CreateGpuService_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeGpuService() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::GpuServiceRequestDataView>(
            &data_->gpu_service, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeGpuHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::GpuHostPtrDataView>(
            &data_->gpu_host, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeDiscardableMemoryManager() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::discardable_memory::mojom::DiscardableSharedMemoryManagerPtrDataView>(
            &data_->discardable_memory_manager, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedSharedBufferHandle TakeActivityFlags() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->activity_flags, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::VizMain_CreateGpuService_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::FrameSinkManagerParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::FrameSinkManagerParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::FrameSinkManagerParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->restart_id = CallWithContext(Traits::restart_id, input, custom_context);
    (*output)->use_activation_deadline = CallWithContext(Traits::use_activation_deadline, input, custom_context);
    (*output)->activation_deadline_in_frames = CallWithContext(Traits::activation_deadline_in_frames, input, custom_context);
    decltype(CallWithContext(Traits::frame_sink_manager, input, custom_context)) in_frame_sink_manager = CallWithContext(Traits::frame_sink_manager, input, custom_context);
    mojo::internal::Serialize<::viz::mojom::FrameSinkManagerRequestDataView>(
        in_frame_sink_manager, &(*output)->frame_sink_manager, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->frame_sink_manager),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid frame_sink_manager in FrameSinkManagerParams struct");
    decltype(CallWithContext(Traits::frame_sink_manager_client, input, custom_context)) in_frame_sink_manager_client = CallWithContext(Traits::frame_sink_manager_client, input, custom_context);
    mojo::internal::Serialize<::viz::mojom::FrameSinkManagerClientPtrDataView>(
        in_frame_sink_manager_client, &(*output)->frame_sink_manager_client, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->frame_sink_manager_client),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid frame_sink_manager_client in FrameSinkManagerParams struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::viz::mojom::internal::FrameSinkManagerParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::FrameSinkManagerParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace viz {
namespace mojom {



inline void VizMain_CreateFrameSinkManager_ParamsDataView::GetParamsDataView(
    FrameSinkManagerParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = FrameSinkManagerParamsDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_VIZ_MAIN_MOJOM_SHARED_H_
