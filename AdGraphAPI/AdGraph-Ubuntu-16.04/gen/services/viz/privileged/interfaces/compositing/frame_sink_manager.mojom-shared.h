// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_MANAGER_MOJOM_SHARED_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_MANAGER_MOJOM_SHARED_H_

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
#include "services/viz/privileged/interfaces/compositing/frame_sink_manager.mojom-shared-internal.h"
#include "gpu/ipc/common/surface_handle.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "services/viz/privileged/interfaces/compositing/display_private.mojom-shared.h"
#include "services/viz/privileged/interfaces/compositing/external_begin_frame_controller.mojom-shared.h"
#include "services/viz/privileged/interfaces/compositing/frame_sink_video_capture.mojom-shared.h"
#include "services/viz/privileged/interfaces/compositing/renderer_settings.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/copy_output_request.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/surface_id.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/surface_info.mojom-shared.h"
#include "services/viz/public/interfaces/hit_test/aggregated_hit_test_region.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/video_detector_observer.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace viz {
namespace mojom {
class RootCompositorFrameSinkParamsDataView;



}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::viz::mojom::RootCompositorFrameSinkParamsDataView> {
  using Data = ::viz::mojom::internal::RootCompositorFrameSinkParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {
// Interface base classes. They are used for type safety check.
class FrameSinkManagerInterfaceBase {};

using FrameSinkManagerPtrDataView =
    mojo::InterfacePtrDataView<FrameSinkManagerInterfaceBase>;
using FrameSinkManagerRequestDataView =
    mojo::InterfaceRequestDataView<FrameSinkManagerInterfaceBase>;
using FrameSinkManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FrameSinkManagerInterfaceBase>;
using FrameSinkManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FrameSinkManagerInterfaceBase>;
class FrameSinkManagerClientInterfaceBase {};

using FrameSinkManagerClientPtrDataView =
    mojo::InterfacePtrDataView<FrameSinkManagerClientInterfaceBase>;
using FrameSinkManagerClientRequestDataView =
    mojo::InterfaceRequestDataView<FrameSinkManagerClientInterfaceBase>;
using FrameSinkManagerClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FrameSinkManagerClientInterfaceBase>;
using FrameSinkManagerClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FrameSinkManagerClientInterfaceBase>;
class RootCompositorFrameSinkParamsDataView {
 public:
  RootCompositorFrameSinkParamsDataView() {}

  RootCompositorFrameSinkParamsDataView(
      internal::RootCompositorFrameSinkParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameSinkId(UserType* output) {
    auto* pointer = data_->frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
  inline void GetWidgetDataView(
      ::gpu::mojom::SurfaceHandleDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWidget(UserType* output) {
    auto* pointer = data_->widget.Get();
    return mojo::internal::Deserialize<::gpu::mojom::SurfaceHandleDataView>(
        pointer, output, context_);
  }
  bool gpu_compositing() const {
    return data_->gpu_compositing;
  }
  inline void GetRendererSettingsDataView(
      ::viz::mojom::RendererSettingsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRendererSettings(UserType* output) {
    auto* pointer = data_->renderer_settings.Get();
    return mojo::internal::Deserialize<::viz::mojom::RendererSettingsDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeCompositorFrameSink() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::CompositorFrameSinkAssociatedRequestDataView>(
            &data_->compositor_frame_sink, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeCompositorFrameSinkClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::CompositorFrameSinkClientPtrDataView>(
            &data_->compositor_frame_sink_client, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeDisplayPrivate() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::DisplayPrivateAssociatedRequestDataView>(
            &data_->display_private, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeDisplayClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::DisplayClientPtrDataView>(
            &data_->display_client, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeExternalBeginFrameController() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::ExternalBeginFrameControllerAssociatedRequestDataView>(
            &data_->external_begin_frame_controller, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeExternalBeginFrameControllerClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::ExternalBeginFrameControllerClientPtrDataView>(
            &data_->external_begin_frame_controller_client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::RootCompositorFrameSinkParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameSinkManager_RegisterFrameSinkId_ParamsDataView {
 public:
  FrameSinkManager_RegisterFrameSinkId_ParamsDataView() {}

  FrameSinkManager_RegisterFrameSinkId_ParamsDataView(
      internal::FrameSinkManager_RegisterFrameSinkId_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameSinkId(UserType* output) {
    auto* pointer = data_->frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameSinkManager_RegisterFrameSinkId_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameSinkManager_InvalidateFrameSinkId_ParamsDataView {
 public:
  FrameSinkManager_InvalidateFrameSinkId_ParamsDataView() {}

  FrameSinkManager_InvalidateFrameSinkId_ParamsDataView(
      internal::FrameSinkManager_InvalidateFrameSinkId_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameSinkId(UserType* output) {
    auto* pointer = data_->frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameSinkManager_InvalidateFrameSinkId_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameSinkManager_EnableSynchronizationReporting_ParamsDataView {
 public:
  FrameSinkManager_EnableSynchronizationReporting_ParamsDataView() {}

  FrameSinkManager_EnableSynchronizationReporting_ParamsDataView(
      internal::FrameSinkManager_EnableSynchronizationReporting_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameSinkId(UserType* output) {
    auto* pointer = data_->frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
  inline void GetReportingLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReportingLabel(UserType* output) {
    auto* pointer = data_->reporting_label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameSinkManager_EnableSynchronizationReporting_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameSinkManager_SetFrameSinkDebugLabel_ParamsDataView {
 public:
  FrameSinkManager_SetFrameSinkDebugLabel_ParamsDataView() {}

  FrameSinkManager_SetFrameSinkDebugLabel_ParamsDataView(
      internal::FrameSinkManager_SetFrameSinkDebugLabel_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameSinkId(UserType* output) {
    auto* pointer = data_->frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
  inline void GetDebugLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDebugLabel(UserType* output) {
    auto* pointer = data_->debug_label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameSinkManager_SetFrameSinkDebugLabel_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameSinkManager_CreateRootCompositorFrameSink_ParamsDataView {
 public:
  FrameSinkManager_CreateRootCompositorFrameSink_ParamsDataView() {}

  FrameSinkManager_CreateRootCompositorFrameSink_ParamsDataView(
      internal::FrameSinkManager_CreateRootCompositorFrameSink_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      RootCompositorFrameSinkParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::viz::mojom::RootCompositorFrameSinkParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameSinkManager_CreateRootCompositorFrameSink_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameSinkManager_CreateCompositorFrameSink_ParamsDataView {
 public:
  FrameSinkManager_CreateCompositorFrameSink_ParamsDataView() {}

  FrameSinkManager_CreateCompositorFrameSink_ParamsDataView(
      internal::FrameSinkManager_CreateCompositorFrameSink_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameSinkId(UserType* output) {
    auto* pointer = data_->frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeCompositorFrameSink() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::CompositorFrameSinkRequestDataView>(
            &data_->compositor_frame_sink, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeCompositorFrameSinkClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::CompositorFrameSinkClientPtrDataView>(
            &data_->compositor_frame_sink_client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FrameSinkManager_CreateCompositorFrameSink_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameSinkManager_DestroyCompositorFrameSink_ParamsDataView {
 public:
  FrameSinkManager_DestroyCompositorFrameSink_ParamsDataView() {}

  FrameSinkManager_DestroyCompositorFrameSink_ParamsDataView(
      internal::FrameSinkManager_DestroyCompositorFrameSink_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameSinkId(UserType* output) {
    auto* pointer = data_->frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameSinkManager_DestroyCompositorFrameSink_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameSinkManager_DestroyCompositorFrameSink_ResponseParamsDataView {
 public:
  FrameSinkManager_DestroyCompositorFrameSink_ResponseParamsDataView() {}

  FrameSinkManager_DestroyCompositorFrameSink_ResponseParamsDataView(
      internal::FrameSinkManager_DestroyCompositorFrameSink_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FrameSinkManager_DestroyCompositorFrameSink_ResponseParams_Data* data_ = nullptr;
};

class FrameSinkManager_RegisterFrameSinkHierarchy_ParamsDataView {
 public:
  FrameSinkManager_RegisterFrameSinkHierarchy_ParamsDataView() {}

  FrameSinkManager_RegisterFrameSinkHierarchy_ParamsDataView(
      internal::FrameSinkManager_RegisterFrameSinkHierarchy_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParentFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParentFrameSinkId(UserType* output) {
    auto* pointer = data_->parent_frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
  inline void GetChildFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChildFrameSinkId(UserType* output) {
    auto* pointer = data_->child_frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameSinkManager_RegisterFrameSinkHierarchy_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameSinkManager_UnregisterFrameSinkHierarchy_ParamsDataView {
 public:
  FrameSinkManager_UnregisterFrameSinkHierarchy_ParamsDataView() {}

  FrameSinkManager_UnregisterFrameSinkHierarchy_ParamsDataView(
      internal::FrameSinkManager_UnregisterFrameSinkHierarchy_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParentFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParentFrameSinkId(UserType* output) {
    auto* pointer = data_->parent_frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
  inline void GetChildFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChildFrameSinkId(UserType* output) {
    auto* pointer = data_->child_frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameSinkManager_UnregisterFrameSinkHierarchy_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameSinkManager_AssignTemporaryReference_ParamsDataView {
 public:
  FrameSinkManager_AssignTemporaryReference_ParamsDataView() {}

  FrameSinkManager_AssignTemporaryReference_ParamsDataView(
      internal::FrameSinkManager_AssignTemporaryReference_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSurfaceIdDataView(
      ::viz::mojom::SurfaceIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSurfaceId(UserType* output) {
    auto* pointer = data_->surface_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::SurfaceIdDataView>(
        pointer, output, context_);
  }
  inline void GetOwnerDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOwner(UserType* output) {
    auto* pointer = data_->owner.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameSinkManager_AssignTemporaryReference_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameSinkManager_DropTemporaryReference_ParamsDataView {
 public:
  FrameSinkManager_DropTemporaryReference_ParamsDataView() {}

  FrameSinkManager_DropTemporaryReference_ParamsDataView(
      internal::FrameSinkManager_DropTemporaryReference_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSurfaceIdDataView(
      ::viz::mojom::SurfaceIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSurfaceId(UserType* output) {
    auto* pointer = data_->surface_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::SurfaceIdDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameSinkManager_DropTemporaryReference_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameSinkManager_AddVideoDetectorObserver_ParamsDataView {
 public:
  FrameSinkManager_AddVideoDetectorObserver_ParamsDataView() {}

  FrameSinkManager_AddVideoDetectorObserver_ParamsDataView(
      internal::FrameSinkManager_AddVideoDetectorObserver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::VideoDetectorObserverPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FrameSinkManager_AddVideoDetectorObserver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameSinkManager_CreateVideoCapturer_ParamsDataView {
 public:
  FrameSinkManager_CreateVideoCapturer_ParamsDataView() {}

  FrameSinkManager_CreateVideoCapturer_ParamsDataView(
      internal::FrameSinkManager_CreateVideoCapturer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::FrameSinkVideoCapturerRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FrameSinkManager_CreateVideoCapturer_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameSinkManager_EvictSurfaces_ParamsDataView {
 public:
  FrameSinkManager_EvictSurfaces_ParamsDataView() {}

  FrameSinkManager_EvictSurfaces_ParamsDataView(
      internal::FrameSinkManager_EvictSurfaces_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSurfaceIdsDataView(
      mojo::ArrayDataView<::viz::mojom::SurfaceIdDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSurfaceIds(UserType* output) {
    auto* pointer = data_->surface_ids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::viz::mojom::SurfaceIdDataView>>(
        pointer, output, context_);
  }
 private:
  internal::FrameSinkManager_EvictSurfaces_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameSinkManager_RequestCopyOfOutput_ParamsDataView {
 public:
  FrameSinkManager_RequestCopyOfOutput_ParamsDataView() {}

  FrameSinkManager_RequestCopyOfOutput_ParamsDataView(
      internal::FrameSinkManager_RequestCopyOfOutput_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSurfaceIdDataView(
      ::viz::mojom::SurfaceIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSurfaceId(UserType* output) {
    auto* pointer = data_->surface_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::SurfaceIdDataView>(
        pointer, output, context_);
  }
  inline void GetRequestDataView(
      ::viz::mojom::CopyOutputRequestDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequest(UserType* output) {
    auto* pointer = data_->request.Get();
    return mojo::internal::Deserialize<::viz::mojom::CopyOutputRequestDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameSinkManager_RequestCopyOfOutput_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameSinkManagerClient_OnSurfaceCreated_ParamsDataView {
 public:
  FrameSinkManagerClient_OnSurfaceCreated_ParamsDataView() {}

  FrameSinkManagerClient_OnSurfaceCreated_ParamsDataView(
      internal::FrameSinkManagerClient_OnSurfaceCreated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSurfaceIdDataView(
      ::viz::mojom::SurfaceIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSurfaceId(UserType* output) {
    auto* pointer = data_->surface_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::SurfaceIdDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameSinkManagerClient_OnSurfaceCreated_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameSinkManagerClient_OnFirstSurfaceActivation_ParamsDataView {
 public:
  FrameSinkManagerClient_OnFirstSurfaceActivation_ParamsDataView() {}

  FrameSinkManagerClient_OnFirstSurfaceActivation_ParamsDataView(
      internal::FrameSinkManagerClient_OnFirstSurfaceActivation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSurfaceInfoDataView(
      ::viz::mojom::SurfaceInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSurfaceInfo(UserType* output) {
    auto* pointer = data_->surface_info.Get();
    return mojo::internal::Deserialize<::viz::mojom::SurfaceInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameSinkManagerClient_OnFirstSurfaceActivation_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_ParamsDataView {
 public:
  FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_ParamsDataView() {}

  FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_ParamsDataView(
      internal::FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameSinkId(UserType* output) {
    auto* pointer = data_->frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
  inline void GetHitTestDataDataView(
      mojo::ArrayDataView<::viz::mojom::AggregatedHitTestRegionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHitTestData(UserType* output) {
    auto* pointer = data_->hit_test_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::viz::mojom::AggregatedHitTestRegionDataView>>(
        pointer, output, context_);
  }
 private:
  internal::FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameSinkManagerClient_OnFrameTokenChanged_ParamsDataView {
 public:
  FrameSinkManagerClient_OnFrameTokenChanged_ParamsDataView() {}

  FrameSinkManagerClient_OnFrameTokenChanged_ParamsDataView(
      internal::FrameSinkManagerClient_OnFrameTokenChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameSinkId(UserType* output) {
    auto* pointer = data_->frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
  uint32_t frame_token() const {
    return data_->frame_token;
  }
 private:
  internal::FrameSinkManagerClient_OnFrameTokenChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::RootCompositorFrameSinkParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::RootCompositorFrameSinkParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::RootCompositorFrameSinkParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::frame_sink_id, input, custom_context)) in_frame_sink_id = CallWithContext(Traits::frame_sink_id, input, custom_context);
    typename decltype((*output)->frame_sink_id)::BaseType::BufferWriter
        frame_sink_id_writer;
    mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
        in_frame_sink_id, buffer, &frame_sink_id_writer, context);
    (*output)->frame_sink_id.Set(
        frame_sink_id_writer.is_null() ? nullptr : frame_sink_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->frame_sink_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null frame_sink_id in RootCompositorFrameSinkParams struct");
    decltype(CallWithContext(Traits::widget, input, custom_context)) in_widget = CallWithContext(Traits::widget, input, custom_context);
    typename decltype((*output)->widget)::BaseType::BufferWriter
        widget_writer;
    mojo::internal::Serialize<::gpu::mojom::SurfaceHandleDataView>(
        in_widget, buffer, &widget_writer, context);
    (*output)->widget.Set(
        widget_writer.is_null() ? nullptr : widget_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->widget.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null widget in RootCompositorFrameSinkParams struct");
    (*output)->gpu_compositing = CallWithContext(Traits::gpu_compositing, input, custom_context);
    decltype(CallWithContext(Traits::renderer_settings, input, custom_context)) in_renderer_settings = CallWithContext(Traits::renderer_settings, input, custom_context);
    typename decltype((*output)->renderer_settings)::BaseType::BufferWriter
        renderer_settings_writer;
    mojo::internal::Serialize<::viz::mojom::RendererSettingsDataView>(
        in_renderer_settings, buffer, &renderer_settings_writer, context);
    (*output)->renderer_settings.Set(
        renderer_settings_writer.is_null() ? nullptr : renderer_settings_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->renderer_settings.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null renderer_settings in RootCompositorFrameSinkParams struct");
    decltype(CallWithContext(Traits::compositor_frame_sink, input, custom_context)) in_compositor_frame_sink = CallWithContext(Traits::compositor_frame_sink, input, custom_context);
    mojo::internal::Serialize<::viz::mojom::CompositorFrameSinkAssociatedRequestDataView>(
        in_compositor_frame_sink, &(*output)->compositor_frame_sink, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->compositor_frame_sink),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
        "invalid compositor_frame_sink in RootCompositorFrameSinkParams struct");
    decltype(CallWithContext(Traits::compositor_frame_sink_client, input, custom_context)) in_compositor_frame_sink_client = CallWithContext(Traits::compositor_frame_sink_client, input, custom_context);
    mojo::internal::Serialize<::viz::mojom::CompositorFrameSinkClientPtrDataView>(
        in_compositor_frame_sink_client, &(*output)->compositor_frame_sink_client, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->compositor_frame_sink_client),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid compositor_frame_sink_client in RootCompositorFrameSinkParams struct");
    decltype(CallWithContext(Traits::display_private, input, custom_context)) in_display_private = CallWithContext(Traits::display_private, input, custom_context);
    mojo::internal::Serialize<::viz::mojom::DisplayPrivateAssociatedRequestDataView>(
        in_display_private, &(*output)->display_private, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->display_private),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
        "invalid display_private in RootCompositorFrameSinkParams struct");
    decltype(CallWithContext(Traits::display_client, input, custom_context)) in_display_client = CallWithContext(Traits::display_client, input, custom_context);
    mojo::internal::Serialize<::viz::mojom::DisplayClientPtrDataView>(
        in_display_client, &(*output)->display_client, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->display_client),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid display_client in RootCompositorFrameSinkParams struct");
    decltype(CallWithContext(Traits::external_begin_frame_controller, input, custom_context)) in_external_begin_frame_controller = CallWithContext(Traits::external_begin_frame_controller, input, custom_context);
    mojo::internal::Serialize<::viz::mojom::ExternalBeginFrameControllerAssociatedRequestDataView>(
        in_external_begin_frame_controller, &(*output)->external_begin_frame_controller, context);
    decltype(CallWithContext(Traits::external_begin_frame_controller_client, input, custom_context)) in_external_begin_frame_controller_client = CallWithContext(Traits::external_begin_frame_controller_client, input, custom_context);
    mojo::internal::Serialize<::viz::mojom::ExternalBeginFrameControllerClientPtrDataView>(
        in_external_begin_frame_controller_client, &(*output)->external_begin_frame_controller_client, context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::viz::mojom::internal::RootCompositorFrameSinkParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::RootCompositorFrameSinkParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace viz {
namespace mojom {

inline void RootCompositorFrameSinkParamsDataView::GetFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}
inline void RootCompositorFrameSinkParamsDataView::GetWidgetDataView(
    ::gpu::mojom::SurfaceHandleDataView* output) {
  auto pointer = data_->widget.Get();
  *output = ::gpu::mojom::SurfaceHandleDataView(pointer, context_);
}
inline void RootCompositorFrameSinkParamsDataView::GetRendererSettingsDataView(
    ::viz::mojom::RendererSettingsDataView* output) {
  auto pointer = data_->renderer_settings.Get();
  *output = ::viz::mojom::RendererSettingsDataView(pointer, context_);
}


inline void FrameSinkManager_RegisterFrameSinkId_ParamsDataView::GetFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}


inline void FrameSinkManager_InvalidateFrameSinkId_ParamsDataView::GetFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}


inline void FrameSinkManager_EnableSynchronizationReporting_ParamsDataView::GetFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}
inline void FrameSinkManager_EnableSynchronizationReporting_ParamsDataView::GetReportingLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->reporting_label.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void FrameSinkManager_SetFrameSinkDebugLabel_ParamsDataView::GetFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}
inline void FrameSinkManager_SetFrameSinkDebugLabel_ParamsDataView::GetDebugLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->debug_label.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void FrameSinkManager_CreateRootCompositorFrameSink_ParamsDataView::GetParamsDataView(
    RootCompositorFrameSinkParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = RootCompositorFrameSinkParamsDataView(pointer, context_);
}


inline void FrameSinkManager_CreateCompositorFrameSink_ParamsDataView::GetFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}


inline void FrameSinkManager_DestroyCompositorFrameSink_ParamsDataView::GetFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}




inline void FrameSinkManager_RegisterFrameSinkHierarchy_ParamsDataView::GetParentFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->parent_frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}
inline void FrameSinkManager_RegisterFrameSinkHierarchy_ParamsDataView::GetChildFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->child_frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}


inline void FrameSinkManager_UnregisterFrameSinkHierarchy_ParamsDataView::GetParentFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->parent_frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}
inline void FrameSinkManager_UnregisterFrameSinkHierarchy_ParamsDataView::GetChildFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->child_frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}


inline void FrameSinkManager_AssignTemporaryReference_ParamsDataView::GetSurfaceIdDataView(
    ::viz::mojom::SurfaceIdDataView* output) {
  auto pointer = data_->surface_id.Get();
  *output = ::viz::mojom::SurfaceIdDataView(pointer, context_);
}
inline void FrameSinkManager_AssignTemporaryReference_ParamsDataView::GetOwnerDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->owner.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}


inline void FrameSinkManager_DropTemporaryReference_ParamsDataView::GetSurfaceIdDataView(
    ::viz::mojom::SurfaceIdDataView* output) {
  auto pointer = data_->surface_id.Get();
  *output = ::viz::mojom::SurfaceIdDataView(pointer, context_);
}






inline void FrameSinkManager_EvictSurfaces_ParamsDataView::GetSurfaceIdsDataView(
    mojo::ArrayDataView<::viz::mojom::SurfaceIdDataView>* output) {
  auto pointer = data_->surface_ids.Get();
  *output = mojo::ArrayDataView<::viz::mojom::SurfaceIdDataView>(pointer, context_);
}


inline void FrameSinkManager_RequestCopyOfOutput_ParamsDataView::GetSurfaceIdDataView(
    ::viz::mojom::SurfaceIdDataView* output) {
  auto pointer = data_->surface_id.Get();
  *output = ::viz::mojom::SurfaceIdDataView(pointer, context_);
}
inline void FrameSinkManager_RequestCopyOfOutput_ParamsDataView::GetRequestDataView(
    ::viz::mojom::CopyOutputRequestDataView* output) {
  auto pointer = data_->request.Get();
  *output = ::viz::mojom::CopyOutputRequestDataView(pointer, context_);
}


inline void FrameSinkManagerClient_OnSurfaceCreated_ParamsDataView::GetSurfaceIdDataView(
    ::viz::mojom::SurfaceIdDataView* output) {
  auto pointer = data_->surface_id.Get();
  *output = ::viz::mojom::SurfaceIdDataView(pointer, context_);
}


inline void FrameSinkManagerClient_OnFirstSurfaceActivation_ParamsDataView::GetSurfaceInfoDataView(
    ::viz::mojom::SurfaceInfoDataView* output) {
  auto pointer = data_->surface_info.Get();
  *output = ::viz::mojom::SurfaceInfoDataView(pointer, context_);
}


inline void FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_ParamsDataView::GetFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}
inline void FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_ParamsDataView::GetHitTestDataDataView(
    mojo::ArrayDataView<::viz::mojom::AggregatedHitTestRegionDataView>* output) {
  auto pointer = data_->hit_test_data.Get();
  *output = mojo::ArrayDataView<::viz::mojom::AggregatedHitTestRegionDataView>(pointer, context_);
}


inline void FrameSinkManagerClient_OnFrameTokenChanged_ParamsDataView::GetFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_MANAGER_MOJOM_SHARED_H_
