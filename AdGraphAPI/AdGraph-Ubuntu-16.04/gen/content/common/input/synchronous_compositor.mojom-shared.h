// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_INPUT_SYNCHRONOUS_COMPOSITOR_MOJOM_SHARED_H_
#define CONTENT_COMMON_INPUT_SYNCHRONOUS_COMPOSITOR_MOJOM_SHARED_H_

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
#include "content/common/input/synchronous_compositor.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/begin_frame_args.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/compositor_frame.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/compositor_frame_metadata.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/returned_resource.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {
using SyncCompositorDemandDrawHwParamsDataView = mojo::native::NativeStructDataView;

using SyncCompositorSetSharedMemoryParamsDataView = mojo::native::NativeStructDataView;

using SyncCompositorDemandDrawSwParamsDataView = mojo::native::NativeStructDataView;

using SyncCompositorCommonRendererParamsDataView = mojo::native::NativeStructDataView;



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {
// Interface base classes. They are used for type safety check.
class SynchronousCompositorInterfaceBase {};

using SynchronousCompositorPtrDataView =
    mojo::InterfacePtrDataView<SynchronousCompositorInterfaceBase>;
using SynchronousCompositorRequestDataView =
    mojo::InterfaceRequestDataView<SynchronousCompositorInterfaceBase>;
using SynchronousCompositorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SynchronousCompositorInterfaceBase>;
using SynchronousCompositorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SynchronousCompositorInterfaceBase>;
class SynchronousCompositorHostInterfaceBase {};

using SynchronousCompositorHostPtrDataView =
    mojo::InterfacePtrDataView<SynchronousCompositorHostInterfaceBase>;
using SynchronousCompositorHostRequestDataView =
    mojo::InterfaceRequestDataView<SynchronousCompositorHostInterfaceBase>;
using SynchronousCompositorHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SynchronousCompositorHostInterfaceBase>;
using SynchronousCompositorHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SynchronousCompositorHostInterfaceBase>;
class SynchronousCompositorControlHostInterfaceBase {};

using SynchronousCompositorControlHostPtrDataView =
    mojo::InterfacePtrDataView<SynchronousCompositorControlHostInterfaceBase>;
using SynchronousCompositorControlHostRequestDataView =
    mojo::InterfaceRequestDataView<SynchronousCompositorControlHostInterfaceBase>;
using SynchronousCompositorControlHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SynchronousCompositorControlHostInterfaceBase>;
using SynchronousCompositorControlHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SynchronousCompositorControlHostInterfaceBase>;
class SynchronousCompositor_ComputeScroll_ParamsDataView {
 public:
  SynchronousCompositor_ComputeScroll_ParamsDataView() {}

  SynchronousCompositor_ComputeScroll_ParamsDataView(
      internal::SynchronousCompositor_ComputeScroll_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTimeDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTime(UserType* output) {
    auto* pointer = data_->time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
 private:
  internal::SynchronousCompositor_ComputeScroll_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SynchronousCompositor_DemandDrawHwAsync_ParamsDataView {
 public:
  SynchronousCompositor_DemandDrawHwAsync_ParamsDataView() {}

  SynchronousCompositor_DemandDrawHwAsync_ParamsDataView(
      internal::SynchronousCompositor_DemandDrawHwAsync_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDrawParamsDataView(
      SyncCompositorDemandDrawHwParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDrawParams(UserType* output) {
    auto* pointer = data_->draw_params.Get();
    return mojo::internal::Deserialize<::content::mojom::SyncCompositorDemandDrawHwParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::SynchronousCompositor_DemandDrawHwAsync_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SynchronousCompositor_DemandDrawHw_ParamsDataView {
 public:
  SynchronousCompositor_DemandDrawHw_ParamsDataView() {}

  SynchronousCompositor_DemandDrawHw_ParamsDataView(
      internal::SynchronousCompositor_DemandDrawHw_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDrawParamsDataView(
      SyncCompositorDemandDrawHwParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDrawParams(UserType* output) {
    auto* pointer = data_->draw_params.Get();
    return mojo::internal::Deserialize<::content::mojom::SyncCompositorDemandDrawHwParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::SynchronousCompositor_DemandDrawHw_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SynchronousCompositor_DemandDrawHw_ResponseParamsDataView {
 public:
  SynchronousCompositor_DemandDrawHw_ResponseParamsDataView() {}

  SynchronousCompositor_DemandDrawHw_ResponseParamsDataView(
      internal::SynchronousCompositor_DemandDrawHw_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      SyncCompositorCommonRendererParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::content::mojom::SyncCompositorCommonRendererParamsDataView>(
        pointer, output, context_);
  }
  uint32_t layer_tree_frame_sink_id() const {
    return data_->layer_tree_frame_sink_id;
  }
  uint32_t metadata_version() const {
    return data_->metadata_version;
  }
  inline void GetFrameDataView(
      ::viz::mojom::CompositorFrameDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrame(UserType* output) {
    auto* pointer = data_->frame.Get();
    return mojo::internal::Deserialize<::viz::mojom::CompositorFrameDataView>(
        pointer, output, context_);
  }
 private:
  internal::SynchronousCompositor_DemandDrawHw_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SynchronousCompositor_SetSharedMemory_ParamsDataView {
 public:
  SynchronousCompositor_SetSharedMemory_ParamsDataView() {}

  SynchronousCompositor_SetSharedMemory_ParamsDataView(
      internal::SynchronousCompositor_SetSharedMemory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      SyncCompositorSetSharedMemoryParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::content::mojom::SyncCompositorSetSharedMemoryParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::SynchronousCompositor_SetSharedMemory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SynchronousCompositor_SetSharedMemory_ResponseParamsDataView {
 public:
  SynchronousCompositor_SetSharedMemory_ResponseParamsDataView() {}

  SynchronousCompositor_SetSharedMemory_ResponseParamsDataView(
      internal::SynchronousCompositor_SetSharedMemory_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetResultDataView(
      SyncCompositorCommonRendererParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::content::mojom::SyncCompositorCommonRendererParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::SynchronousCompositor_SetSharedMemory_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SynchronousCompositor_DemandDrawSw_ParamsDataView {
 public:
  SynchronousCompositor_DemandDrawSw_ParamsDataView() {}

  SynchronousCompositor_DemandDrawSw_ParamsDataView(
      internal::SynchronousCompositor_DemandDrawSw_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDrawParamsDataView(
      SyncCompositorDemandDrawSwParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDrawParams(UserType* output) {
    auto* pointer = data_->draw_params.Get();
    return mojo::internal::Deserialize<::content::mojom::SyncCompositorDemandDrawSwParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::SynchronousCompositor_DemandDrawSw_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SynchronousCompositor_DemandDrawSw_ResponseParamsDataView {
 public:
  SynchronousCompositor_DemandDrawSw_ResponseParamsDataView() {}

  SynchronousCompositor_DemandDrawSw_ResponseParamsDataView(
      internal::SynchronousCompositor_DemandDrawSw_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      SyncCompositorCommonRendererParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::content::mojom::SyncCompositorCommonRendererParamsDataView>(
        pointer, output, context_);
  }
  uint32_t metadata_version() const {
    return data_->metadata_version;
  }
  inline void GetMetaDataDataView(
      ::viz::mojom::CompositorFrameMetadataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMetaData(UserType* output) {
    auto* pointer = data_->meta_data.Get();
    return mojo::internal::Deserialize<::viz::mojom::CompositorFrameMetadataDataView>(
        pointer, output, context_);
  }
 private:
  internal::SynchronousCompositor_DemandDrawSw_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SynchronousCompositor_ZeroSharedMemory_ParamsDataView {
 public:
  SynchronousCompositor_ZeroSharedMemory_ParamsDataView() {}

  SynchronousCompositor_ZeroSharedMemory_ParamsDataView(
      internal::SynchronousCompositor_ZeroSharedMemory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SynchronousCompositor_ZeroSharedMemory_Params_Data* data_ = nullptr;
};

class SynchronousCompositor_ZoomBy_ParamsDataView {
 public:
  SynchronousCompositor_ZoomBy_ParamsDataView() {}

  SynchronousCompositor_ZoomBy_ParamsDataView(
      internal::SynchronousCompositor_ZoomBy_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  float delta() const {
    return data_->delta;
  }
  inline void GetAnchorDataView(
      ::gfx::mojom::PointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAnchor(UserType* output) {
    auto* pointer = data_->anchor.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointDataView>(
        pointer, output, context_);
  }
 private:
  internal::SynchronousCompositor_ZoomBy_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SynchronousCompositor_ZoomBy_ResponseParamsDataView {
 public:
  SynchronousCompositor_ZoomBy_ResponseParamsDataView() {}

  SynchronousCompositor_ZoomBy_ResponseParamsDataView(
      internal::SynchronousCompositor_ZoomBy_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      SyncCompositorCommonRendererParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::content::mojom::SyncCompositorCommonRendererParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::SynchronousCompositor_ZoomBy_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SynchronousCompositor_SetMemoryPolicy_ParamsDataView {
 public:
  SynchronousCompositor_SetMemoryPolicy_ParamsDataView() {}

  SynchronousCompositor_SetMemoryPolicy_ParamsDataView(
      internal::SynchronousCompositor_SetMemoryPolicy_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t bytes_limit() const {
    return data_->bytes_limit;
  }
 private:
  internal::SynchronousCompositor_SetMemoryPolicy_Params_Data* data_ = nullptr;
};

class SynchronousCompositor_ReclaimResources_ParamsDataView {
 public:
  SynchronousCompositor_ReclaimResources_ParamsDataView() {}

  SynchronousCompositor_ReclaimResources_ParamsDataView(
      internal::SynchronousCompositor_ReclaimResources_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t layer_tree_frame_sink_id() const {
    return data_->layer_tree_frame_sink_id;
  }
  inline void GetResourcesDataView(
      mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResources(UserType* output) {
    auto* pointer = data_->resources.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>>(
        pointer, output, context_);
  }
 private:
  internal::SynchronousCompositor_ReclaimResources_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SynchronousCompositor_SetScroll_ParamsDataView {
 public:
  SynchronousCompositor_SetScroll_ParamsDataView() {}

  SynchronousCompositor_SetScroll_ParamsDataView(
      internal::SynchronousCompositor_SetScroll_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOffsetDataView(
      ::gfx::mojom::ScrollOffsetDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOffset(UserType* output) {
    auto* pointer = data_->offset.Get();
    return mojo::internal::Deserialize<::gfx::mojom::ScrollOffsetDataView>(
        pointer, output, context_);
  }
 private:
  internal::SynchronousCompositor_SetScroll_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SynchronousCompositor_BeginFrame_ParamsDataView {
 public:
  SynchronousCompositor_BeginFrame_ParamsDataView() {}

  SynchronousCompositor_BeginFrame_ParamsDataView(
      internal::SynchronousCompositor_BeginFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetArgsDataView(
      ::viz::mojom::BeginFrameArgsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadArgs(UserType* output) {
    auto* pointer = data_->args.Get();
    return mojo::internal::Deserialize<::viz::mojom::BeginFrameArgsDataView>(
        pointer, output, context_);
  }
 private:
  internal::SynchronousCompositor_BeginFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SynchronousCompositor_SetBeginFrameSourcePaused_ParamsDataView {
 public:
  SynchronousCompositor_SetBeginFrameSourcePaused_ParamsDataView() {}

  SynchronousCompositor_SetBeginFrameSourcePaused_ParamsDataView(
      internal::SynchronousCompositor_SetBeginFrameSourcePaused_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool paused() const {
    return data_->paused;
  }
 private:
  internal::SynchronousCompositor_SetBeginFrameSourcePaused_Params_Data* data_ = nullptr;
};

class SynchronousCompositorHost_LayerTreeFrameSinkCreated_ParamsDataView {
 public:
  SynchronousCompositorHost_LayerTreeFrameSinkCreated_ParamsDataView() {}

  SynchronousCompositorHost_LayerTreeFrameSinkCreated_ParamsDataView(
      internal::SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params_Data* data_ = nullptr;
};

class SynchronousCompositorHost_UpdateState_ParamsDataView {
 public:
  SynchronousCompositorHost_UpdateState_ParamsDataView() {}

  SynchronousCompositorHost_UpdateState_ParamsDataView(
      internal::SynchronousCompositorHost_UpdateState_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      SyncCompositorCommonRendererParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::content::mojom::SyncCompositorCommonRendererParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::SynchronousCompositorHost_UpdateState_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SynchronousCompositorHost_SetNeedsBeginFrames_ParamsDataView {
 public:
  SynchronousCompositorHost_SetNeedsBeginFrames_ParamsDataView() {}

  SynchronousCompositorHost_SetNeedsBeginFrames_ParamsDataView(
      internal::SynchronousCompositorHost_SetNeedsBeginFrames_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool needs_begin_frames() const {
    return data_->needs_begin_frames;
  }
 private:
  internal::SynchronousCompositorHost_SetNeedsBeginFrames_Params_Data* data_ = nullptr;
};

class SynchronousCompositorControlHost_ReturnFrame_ParamsDataView {
 public:
  SynchronousCompositorControlHost_ReturnFrame_ParamsDataView() {}

  SynchronousCompositorControlHost_ReturnFrame_ParamsDataView(
      internal::SynchronousCompositorControlHost_ReturnFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t layer_tree_frame_sink_id() const {
    return data_->layer_tree_frame_sink_id;
  }
  uint32_t metadata_version() const {
    return data_->metadata_version;
  }
  inline void GetFrameDataView(
      ::viz::mojom::CompositorFrameDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrame(UserType* output) {
    auto* pointer = data_->frame.Get();
    return mojo::internal::Deserialize<::viz::mojom::CompositorFrameDataView>(
        pointer, output, context_);
  }
 private:
  internal::SynchronousCompositorControlHost_ReturnFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SynchronousCompositorControlHost_BeginFrameResponse_ParamsDataView {
 public:
  SynchronousCompositorControlHost_BeginFrameResponse_ParamsDataView() {}

  SynchronousCompositorControlHost_BeginFrameResponse_ParamsDataView(
      internal::SynchronousCompositorControlHost_BeginFrameResponse_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      SyncCompositorCommonRendererParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::content::mojom::SyncCompositorCommonRendererParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::SynchronousCompositorControlHost_BeginFrameResponse_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace content {
namespace mojom {

inline void SynchronousCompositor_ComputeScroll_ParamsDataView::GetTimeDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->time.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}


inline void SynchronousCompositor_DemandDrawHwAsync_ParamsDataView::GetDrawParamsDataView(
    SyncCompositorDemandDrawHwParamsDataView* output) {
  auto pointer = data_->draw_params.Get();
  *output = SyncCompositorDemandDrawHwParamsDataView(pointer, context_);
}


inline void SynchronousCompositor_DemandDrawHw_ParamsDataView::GetDrawParamsDataView(
    SyncCompositorDemandDrawHwParamsDataView* output) {
  auto pointer = data_->draw_params.Get();
  *output = SyncCompositorDemandDrawHwParamsDataView(pointer, context_);
}


inline void SynchronousCompositor_DemandDrawHw_ResponseParamsDataView::GetResultDataView(
    SyncCompositorCommonRendererParamsDataView* output) {
  auto pointer = data_->result.Get();
  *output = SyncCompositorCommonRendererParamsDataView(pointer, context_);
}
inline void SynchronousCompositor_DemandDrawHw_ResponseParamsDataView::GetFrameDataView(
    ::viz::mojom::CompositorFrameDataView* output) {
  auto pointer = data_->frame.Get();
  *output = ::viz::mojom::CompositorFrameDataView(pointer, context_);
}


inline void SynchronousCompositor_SetSharedMemory_ParamsDataView::GetParamsDataView(
    SyncCompositorSetSharedMemoryParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = SyncCompositorSetSharedMemoryParamsDataView(pointer, context_);
}


inline void SynchronousCompositor_SetSharedMemory_ResponseParamsDataView::GetResultDataView(
    SyncCompositorCommonRendererParamsDataView* output) {
  auto pointer = data_->result.Get();
  *output = SyncCompositorCommonRendererParamsDataView(pointer, context_);
}


inline void SynchronousCompositor_DemandDrawSw_ParamsDataView::GetDrawParamsDataView(
    SyncCompositorDemandDrawSwParamsDataView* output) {
  auto pointer = data_->draw_params.Get();
  *output = SyncCompositorDemandDrawSwParamsDataView(pointer, context_);
}


inline void SynchronousCompositor_DemandDrawSw_ResponseParamsDataView::GetResultDataView(
    SyncCompositorCommonRendererParamsDataView* output) {
  auto pointer = data_->result.Get();
  *output = SyncCompositorCommonRendererParamsDataView(pointer, context_);
}
inline void SynchronousCompositor_DemandDrawSw_ResponseParamsDataView::GetMetaDataDataView(
    ::viz::mojom::CompositorFrameMetadataDataView* output) {
  auto pointer = data_->meta_data.Get();
  *output = ::viz::mojom::CompositorFrameMetadataDataView(pointer, context_);
}




inline void SynchronousCompositor_ZoomBy_ParamsDataView::GetAnchorDataView(
    ::gfx::mojom::PointDataView* output) {
  auto pointer = data_->anchor.Get();
  *output = ::gfx::mojom::PointDataView(pointer, context_);
}


inline void SynchronousCompositor_ZoomBy_ResponseParamsDataView::GetResultDataView(
    SyncCompositorCommonRendererParamsDataView* output) {
  auto pointer = data_->result.Get();
  *output = SyncCompositorCommonRendererParamsDataView(pointer, context_);
}




inline void SynchronousCompositor_ReclaimResources_ParamsDataView::GetResourcesDataView(
    mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>* output) {
  auto pointer = data_->resources.Get();
  *output = mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>(pointer, context_);
}


inline void SynchronousCompositor_SetScroll_ParamsDataView::GetOffsetDataView(
    ::gfx::mojom::ScrollOffsetDataView* output) {
  auto pointer = data_->offset.Get();
  *output = ::gfx::mojom::ScrollOffsetDataView(pointer, context_);
}


inline void SynchronousCompositor_BeginFrame_ParamsDataView::GetArgsDataView(
    ::viz::mojom::BeginFrameArgsDataView* output) {
  auto pointer = data_->args.Get();
  *output = ::viz::mojom::BeginFrameArgsDataView(pointer, context_);
}






inline void SynchronousCompositorHost_UpdateState_ParamsDataView::GetParamsDataView(
    SyncCompositorCommonRendererParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = SyncCompositorCommonRendererParamsDataView(pointer, context_);
}




inline void SynchronousCompositorControlHost_ReturnFrame_ParamsDataView::GetFrameDataView(
    ::viz::mojom::CompositorFrameDataView* output) {
  auto pointer = data_->frame.Get();
  *output = ::viz::mojom::CompositorFrameDataView(pointer, context_);
}


inline void SynchronousCompositorControlHost_BeginFrameResponse_ParamsDataView::GetParamsDataView(
    SyncCompositorCommonRendererParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = SyncCompositorCommonRendererParamsDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_INPUT_SYNCHRONOUS_COMPOSITOR_MOJOM_SHARED_H_
