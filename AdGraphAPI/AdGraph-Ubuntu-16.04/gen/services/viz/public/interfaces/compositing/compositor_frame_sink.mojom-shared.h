// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_SHARED_H_

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
#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/begin_frame_args.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/compositor_frame.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/returned_resource.mojom-shared.h"
#include "services/viz/public/interfaces/hit_test/hit_test_region_list.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "gpu/ipc/common/mailbox.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace viz {
namespace mojom {


}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {
// Interface base classes. They are used for type safety check.
class CompositorFrameSinkInterfaceBase {};

using CompositorFrameSinkPtrDataView =
    mojo::InterfacePtrDataView<CompositorFrameSinkInterfaceBase>;
using CompositorFrameSinkRequestDataView =
    mojo::InterfaceRequestDataView<CompositorFrameSinkInterfaceBase>;
using CompositorFrameSinkAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CompositorFrameSinkInterfaceBase>;
using CompositorFrameSinkAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CompositorFrameSinkInterfaceBase>;
class CompositorFrameSinkClientInterfaceBase {};

using CompositorFrameSinkClientPtrDataView =
    mojo::InterfacePtrDataView<CompositorFrameSinkClientInterfaceBase>;
using CompositorFrameSinkClientRequestDataView =
    mojo::InterfaceRequestDataView<CompositorFrameSinkClientInterfaceBase>;
using CompositorFrameSinkClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CompositorFrameSinkClientInterfaceBase>;
using CompositorFrameSinkClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CompositorFrameSinkClientInterfaceBase>;
class CompositorFrameSink_SetNeedsBeginFrame_ParamsDataView {
 public:
  CompositorFrameSink_SetNeedsBeginFrame_ParamsDataView() {}

  CompositorFrameSink_SetNeedsBeginFrame_ParamsDataView(
      internal::CompositorFrameSink_SetNeedsBeginFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool needs_begin_frame() const {
    return data_->needs_begin_frame;
  }
 private:
  internal::CompositorFrameSink_SetNeedsBeginFrame_Params_Data* data_ = nullptr;
};

class CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_ParamsDataView {
 public:
  CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_ParamsDataView() {}

  CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_ParamsDataView(
      internal::CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data* data_ = nullptr;
};

class CompositorFrameSink_SubmitCompositorFrame_ParamsDataView {
 public:
  CompositorFrameSink_SubmitCompositorFrame_ParamsDataView() {}

  CompositorFrameSink_SubmitCompositorFrame_ParamsDataView(
      internal::CompositorFrameSink_SubmitCompositorFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLocalSurfaceIdDataView(
      ::viz::mojom::LocalSurfaceIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalSurfaceId(UserType* output) {
    auto* pointer = data_->local_surface_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::LocalSurfaceIdDataView>(
        pointer, output, context_);
  }
  inline void GetFrameDataView(
      ::viz::mojom::CompositorFrameDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrame(UserType* output) {
    auto* pointer = data_->frame.Get();
    return mojo::internal::Deserialize<::viz::mojom::CompositorFrameDataView>(
        pointer, output, context_);
  }
  inline void GetHitTestRegionListDataView(
      ::viz::mojom::HitTestRegionListDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHitTestRegionList(UserType* output) {
    auto* pointer = data_->hit_test_region_list.Get();
    return mojo::internal::Deserialize<::viz::mojom::HitTestRegionListDataView>(
        pointer, output, context_);
  }
  uint64_t submit_time() const {
    return data_->submit_time;
  }
 private:
  internal::CompositorFrameSink_SubmitCompositorFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CompositorFrameSink_SubmitCompositorFrameSync_ParamsDataView {
 public:
  CompositorFrameSink_SubmitCompositorFrameSync_ParamsDataView() {}

  CompositorFrameSink_SubmitCompositorFrameSync_ParamsDataView(
      internal::CompositorFrameSink_SubmitCompositorFrameSync_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLocalSurfaceIdDataView(
      ::viz::mojom::LocalSurfaceIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalSurfaceId(UserType* output) {
    auto* pointer = data_->local_surface_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::LocalSurfaceIdDataView>(
        pointer, output, context_);
  }
  inline void GetFrameDataView(
      ::viz::mojom::CompositorFrameDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrame(UserType* output) {
    auto* pointer = data_->frame.Get();
    return mojo::internal::Deserialize<::viz::mojom::CompositorFrameDataView>(
        pointer, output, context_);
  }
  inline void GetHitTestRegionListDataView(
      ::viz::mojom::HitTestRegionListDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHitTestRegionList(UserType* output) {
    auto* pointer = data_->hit_test_region_list.Get();
    return mojo::internal::Deserialize<::viz::mojom::HitTestRegionListDataView>(
        pointer, output, context_);
  }
  uint64_t submit_time() const {
    return data_->submit_time;
  }
 private:
  internal::CompositorFrameSink_SubmitCompositorFrameSync_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CompositorFrameSink_SubmitCompositorFrameSync_ResponseParamsDataView {
 public:
  CompositorFrameSink_SubmitCompositorFrameSync_ResponseParamsDataView() {}

  CompositorFrameSink_SubmitCompositorFrameSync_ResponseParamsDataView(
      internal::CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResourcesDataView(
      mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResources(UserType* output) {
    auto* pointer = data_->resources.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>>(
        pointer, output, context_);
  }
 private:
  internal::CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CompositorFrameSink_DidNotProduceFrame_ParamsDataView {
 public:
  CompositorFrameSink_DidNotProduceFrame_ParamsDataView() {}

  CompositorFrameSink_DidNotProduceFrame_ParamsDataView(
      internal::CompositorFrameSink_DidNotProduceFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAckDataView(
      ::viz::mojom::BeginFrameAckDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAck(UserType* output) {
    auto* pointer = data_->ack.Get();
    return mojo::internal::Deserialize<::viz::mojom::BeginFrameAckDataView>(
        pointer, output, context_);
  }
 private:
  internal::CompositorFrameSink_DidNotProduceFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CompositorFrameSink_DidAllocateSharedBitmap_ParamsDataView {
 public:
  CompositorFrameSink_DidAllocateSharedBitmap_ParamsDataView() {}

  CompositorFrameSink_DidAllocateSharedBitmap_ParamsDataView(
      internal::CompositorFrameSink_DidAllocateSharedBitmap_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedSharedBufferHandle TakeBuffer() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->buffer, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetIdDataView(
      ::gpu::mojom::MailboxDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::gpu::mojom::MailboxDataView>(
        pointer, output, context_);
  }
 private:
  internal::CompositorFrameSink_DidAllocateSharedBitmap_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CompositorFrameSink_DidDeleteSharedBitmap_ParamsDataView {
 public:
  CompositorFrameSink_DidDeleteSharedBitmap_ParamsDataView() {}

  CompositorFrameSink_DidDeleteSharedBitmap_ParamsDataView(
      internal::CompositorFrameSink_DidDeleteSharedBitmap_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      ::gpu::mojom::MailboxDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::gpu::mojom::MailboxDataView>(
        pointer, output, context_);
  }
 private:
  internal::CompositorFrameSink_DidDeleteSharedBitmap_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CompositorFrameSinkClient_DidReceiveCompositorFrameAck_ParamsDataView {
 public:
  CompositorFrameSinkClient_DidReceiveCompositorFrameAck_ParamsDataView() {}

  CompositorFrameSinkClient_DidReceiveCompositorFrameAck_ParamsDataView(
      internal::CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResourcesDataView(
      mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResources(UserType* output) {
    auto* pointer = data_->resources.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>>(
        pointer, output, context_);
  }
 private:
  internal::CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CompositorFrameSinkClient_DidPresentCompositorFrame_ParamsDataView {
 public:
  CompositorFrameSinkClient_DidPresentCompositorFrame_ParamsDataView() {}

  CompositorFrameSinkClient_DidPresentCompositorFrame_ParamsDataView(
      internal::CompositorFrameSinkClient_DidPresentCompositorFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t presentation_token() const {
    return data_->presentation_token;
  }
  inline void GetTimeDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTime(UserType* output) {
    auto* pointer = data_->time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetRefreshDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRefresh(UserType* output) {
    auto* pointer = data_->refresh.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  uint32_t flags() const {
    return data_->flags;
  }
 private:
  internal::CompositorFrameSinkClient_DidPresentCompositorFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CompositorFrameSinkClient_DidDiscardCompositorFrame_ParamsDataView {
 public:
  CompositorFrameSinkClient_DidDiscardCompositorFrame_ParamsDataView() {}

  CompositorFrameSinkClient_DidDiscardCompositorFrame_ParamsDataView(
      internal::CompositorFrameSinkClient_DidDiscardCompositorFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t presentation_token() const {
    return data_->presentation_token;
  }
 private:
  internal::CompositorFrameSinkClient_DidDiscardCompositorFrame_Params_Data* data_ = nullptr;
};

class CompositorFrameSinkClient_OnBeginFrame_ParamsDataView {
 public:
  CompositorFrameSinkClient_OnBeginFrame_ParamsDataView() {}

  CompositorFrameSinkClient_OnBeginFrame_ParamsDataView(
      internal::CompositorFrameSinkClient_OnBeginFrame_Params_Data* data,
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
  internal::CompositorFrameSinkClient_OnBeginFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CompositorFrameSinkClient_OnBeginFramePausedChanged_ParamsDataView {
 public:
  CompositorFrameSinkClient_OnBeginFramePausedChanged_ParamsDataView() {}

  CompositorFrameSinkClient_OnBeginFramePausedChanged_ParamsDataView(
      internal::CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool paused() const {
    return data_->paused;
  }
 private:
  internal::CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data* data_ = nullptr;
};

class CompositorFrameSinkClient_ReclaimResources_ParamsDataView {
 public:
  CompositorFrameSinkClient_ReclaimResources_ParamsDataView() {}

  CompositorFrameSinkClient_ReclaimResources_ParamsDataView(
      internal::CompositorFrameSinkClient_ReclaimResources_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResourcesDataView(
      mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResources(UserType* output) {
    auto* pointer = data_->resources.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>>(
        pointer, output, context_);
  }
 private:
  internal::CompositorFrameSinkClient_ReclaimResources_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace viz {
namespace mojom {





inline void CompositorFrameSink_SubmitCompositorFrame_ParamsDataView::GetLocalSurfaceIdDataView(
    ::viz::mojom::LocalSurfaceIdDataView* output) {
  auto pointer = data_->local_surface_id.Get();
  *output = ::viz::mojom::LocalSurfaceIdDataView(pointer, context_);
}
inline void CompositorFrameSink_SubmitCompositorFrame_ParamsDataView::GetFrameDataView(
    ::viz::mojom::CompositorFrameDataView* output) {
  auto pointer = data_->frame.Get();
  *output = ::viz::mojom::CompositorFrameDataView(pointer, context_);
}
inline void CompositorFrameSink_SubmitCompositorFrame_ParamsDataView::GetHitTestRegionListDataView(
    ::viz::mojom::HitTestRegionListDataView* output) {
  auto pointer = data_->hit_test_region_list.Get();
  *output = ::viz::mojom::HitTestRegionListDataView(pointer, context_);
}


inline void CompositorFrameSink_SubmitCompositorFrameSync_ParamsDataView::GetLocalSurfaceIdDataView(
    ::viz::mojom::LocalSurfaceIdDataView* output) {
  auto pointer = data_->local_surface_id.Get();
  *output = ::viz::mojom::LocalSurfaceIdDataView(pointer, context_);
}
inline void CompositorFrameSink_SubmitCompositorFrameSync_ParamsDataView::GetFrameDataView(
    ::viz::mojom::CompositorFrameDataView* output) {
  auto pointer = data_->frame.Get();
  *output = ::viz::mojom::CompositorFrameDataView(pointer, context_);
}
inline void CompositorFrameSink_SubmitCompositorFrameSync_ParamsDataView::GetHitTestRegionListDataView(
    ::viz::mojom::HitTestRegionListDataView* output) {
  auto pointer = data_->hit_test_region_list.Get();
  *output = ::viz::mojom::HitTestRegionListDataView(pointer, context_);
}


inline void CompositorFrameSink_SubmitCompositorFrameSync_ResponseParamsDataView::GetResourcesDataView(
    mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>* output) {
  auto pointer = data_->resources.Get();
  *output = mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>(pointer, context_);
}


inline void CompositorFrameSink_DidNotProduceFrame_ParamsDataView::GetAckDataView(
    ::viz::mojom::BeginFrameAckDataView* output) {
  auto pointer = data_->ack.Get();
  *output = ::viz::mojom::BeginFrameAckDataView(pointer, context_);
}


inline void CompositorFrameSink_DidAllocateSharedBitmap_ParamsDataView::GetIdDataView(
    ::gpu::mojom::MailboxDataView* output) {
  auto pointer = data_->id.Get();
  *output = ::gpu::mojom::MailboxDataView(pointer, context_);
}


inline void CompositorFrameSink_DidDeleteSharedBitmap_ParamsDataView::GetIdDataView(
    ::gpu::mojom::MailboxDataView* output) {
  auto pointer = data_->id.Get();
  *output = ::gpu::mojom::MailboxDataView(pointer, context_);
}


inline void CompositorFrameSinkClient_DidReceiveCompositorFrameAck_ParamsDataView::GetResourcesDataView(
    mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>* output) {
  auto pointer = data_->resources.Get();
  *output = mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>(pointer, context_);
}


inline void CompositorFrameSinkClient_DidPresentCompositorFrame_ParamsDataView::GetTimeDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->time.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void CompositorFrameSinkClient_DidPresentCompositorFrame_ParamsDataView::GetRefreshDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->refresh.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}




inline void CompositorFrameSinkClient_OnBeginFrame_ParamsDataView::GetArgsDataView(
    ::viz::mojom::BeginFrameArgsDataView* output) {
  auto pointer = data_->args.Get();
  *output = ::viz::mojom::BeginFrameArgsDataView(pointer, context_);
}




inline void CompositorFrameSinkClient_ReclaimResources_ParamsDataView::GetResourcesDataView(
    mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>* output) {
  auto pointer = data_->resources.Get();
  *output = mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_SHARED_H_
