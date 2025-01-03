// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDER_FRAME_METADATA_MOJOM_SHARED_H_
#define CONTENT_COMMON_RENDER_FRAME_METADATA_MOJOM_SHARED_H_

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
#include "content/common/render_frame_metadata.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/selection.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {
class RenderFrameMetadataDataView;



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::content::mojom::RenderFrameMetadataDataView> {
  using Data = ::content::mojom::internal::RenderFrameMetadata_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {
// Interface base classes. They are used for type safety check.
class RenderFrameMetadataObserverInterfaceBase {};

using RenderFrameMetadataObserverPtrDataView =
    mojo::InterfacePtrDataView<RenderFrameMetadataObserverInterfaceBase>;
using RenderFrameMetadataObserverRequestDataView =
    mojo::InterfaceRequestDataView<RenderFrameMetadataObserverInterfaceBase>;
using RenderFrameMetadataObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RenderFrameMetadataObserverInterfaceBase>;
using RenderFrameMetadataObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RenderFrameMetadataObserverInterfaceBase>;
class RenderFrameMetadataObserverClientInterfaceBase {};

using RenderFrameMetadataObserverClientPtrDataView =
    mojo::InterfacePtrDataView<RenderFrameMetadataObserverClientInterfaceBase>;
using RenderFrameMetadataObserverClientRequestDataView =
    mojo::InterfaceRequestDataView<RenderFrameMetadataObserverClientInterfaceBase>;
using RenderFrameMetadataObserverClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RenderFrameMetadataObserverClientInterfaceBase>;
using RenderFrameMetadataObserverClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RenderFrameMetadataObserverClientInterfaceBase>;
class RenderFrameMetadataDataView {
 public:
  RenderFrameMetadataDataView() {}

  RenderFrameMetadataDataView(
      internal::RenderFrameMetadata_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t root_background_color() const {
    return data_->root_background_color;
  }
  inline void GetRootScrollOffsetDataView(
      ::gfx::mojom::Vector2dFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRootScrollOffset(UserType* output) {
    auto* pointer = data_->root_scroll_offset.Get();
    return mojo::internal::Deserialize<::gfx::mojom::Vector2dFDataView>(
        pointer, output, context_);
  }
  bool is_scroll_offset_at_top() const {
    return data_->is_scroll_offset_at_top;
  }
  inline void GetSelectionDataView(
      ::viz::mojom::SelectionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSelection(UserType* output) {
    auto* pointer = data_->selection.Get();
    return mojo::internal::Deserialize<::viz::mojom::SelectionDataView>(
        pointer, output, context_);
  }
  bool is_mobile_optimized() const {
    return data_->is_mobile_optimized;
  }
  float device_scale_factor() const {
    return data_->device_scale_factor;
  }
  inline void GetViewportSizeInPixelsDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadViewportSizeInPixels(UserType* output) {
    auto* pointer = data_->viewport_size_in_pixels.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  inline void GetLocalSurfaceIdDataView(
      ::viz::mojom::LocalSurfaceIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalSurfaceId(UserType* output) {
    auto* pointer = data_->local_surface_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::LocalSurfaceIdDataView>(
        pointer, output, context_);
  }
  float top_controls_height() const {
    return data_->top_controls_height;
  }
  float top_controls_shown_ratio() const {
    return data_->top_controls_shown_ratio;
  }
  float bottom_controls_height() const {
    return data_->bottom_controls_height;
  }
  float bottom_controls_shown_ratio() const {
    return data_->bottom_controls_shown_ratio;
  }
 private:
  internal::RenderFrameMetadata_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_ParamsDataView {
 public:
  RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_ParamsDataView() {}

  RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_ParamsDataView(
      internal::RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool enabled() const {
    return data_->enabled;
  }
 private:
  internal::RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params_Data* data_ = nullptr;
};

class RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_ParamsDataView {
 public:
  RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_ParamsDataView() {}

  RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_ParamsDataView(
      internal::RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t frame_token() const {
    return data_->frame_token;
  }
  inline void GetMetadataDataView(
      RenderFrameMetadataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMetadata(UserType* output) {
    auto* pointer = data_->metadata.Get();
    return mojo::internal::Deserialize<::content::mojom::RenderFrameMetadataDataView>(
        pointer, output, context_);
  }
 private:
  internal::RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_ParamsDataView {
 public:
  RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_ParamsDataView() {}

  RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_ParamsDataView(
      internal::RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t frame_token() const {
    return data_->frame_token;
  }
 private:
  internal::RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::RenderFrameMetadataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::RenderFrameMetadataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::RenderFrameMetadata_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->root_background_color = CallWithContext(Traits::root_background_color, input, custom_context);
    decltype(CallWithContext(Traits::root_scroll_offset, input, custom_context)) in_root_scroll_offset = CallWithContext(Traits::root_scroll_offset, input, custom_context);
    typename decltype((*output)->root_scroll_offset)::BaseType::BufferWriter
        root_scroll_offset_writer;
    mojo::internal::Serialize<::gfx::mojom::Vector2dFDataView>(
        in_root_scroll_offset, buffer, &root_scroll_offset_writer, context);
    (*output)->root_scroll_offset.Set(
        root_scroll_offset_writer.is_null() ? nullptr : root_scroll_offset_writer.data());
    (*output)->is_scroll_offset_at_top = CallWithContext(Traits::is_scroll_offset_at_top, input, custom_context);
    decltype(CallWithContext(Traits::selection, input, custom_context)) in_selection = CallWithContext(Traits::selection, input, custom_context);
    typename decltype((*output)->selection)::BaseType::BufferWriter
        selection_writer;
    mojo::internal::Serialize<::viz::mojom::SelectionDataView>(
        in_selection, buffer, &selection_writer, context);
    (*output)->selection.Set(
        selection_writer.is_null() ? nullptr : selection_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->selection.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null selection in RenderFrameMetadata struct");
    (*output)->is_mobile_optimized = CallWithContext(Traits::is_mobile_optimized, input, custom_context);
    (*output)->device_scale_factor = CallWithContext(Traits::device_scale_factor, input, custom_context);
    decltype(CallWithContext(Traits::viewport_size_in_pixels, input, custom_context)) in_viewport_size_in_pixels = CallWithContext(Traits::viewport_size_in_pixels, input, custom_context);
    typename decltype((*output)->viewport_size_in_pixels)::BaseType::BufferWriter
        viewport_size_in_pixels_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_viewport_size_in_pixels, buffer, &viewport_size_in_pixels_writer, context);
    (*output)->viewport_size_in_pixels.Set(
        viewport_size_in_pixels_writer.is_null() ? nullptr : viewport_size_in_pixels_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->viewport_size_in_pixels.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null viewport_size_in_pixels in RenderFrameMetadata struct");
    decltype(CallWithContext(Traits::local_surface_id, input, custom_context)) in_local_surface_id = CallWithContext(Traits::local_surface_id, input, custom_context);
    typename decltype((*output)->local_surface_id)::BaseType::BufferWriter
        local_surface_id_writer;
    mojo::internal::Serialize<::viz::mojom::LocalSurfaceIdDataView>(
        in_local_surface_id, buffer, &local_surface_id_writer, context);
    (*output)->local_surface_id.Set(
        local_surface_id_writer.is_null() ? nullptr : local_surface_id_writer.data());
    (*output)->top_controls_height = CallWithContext(Traits::top_controls_height, input, custom_context);
    (*output)->top_controls_shown_ratio = CallWithContext(Traits::top_controls_shown_ratio, input, custom_context);
    (*output)->bottom_controls_height = CallWithContext(Traits::bottom_controls_height, input, custom_context);
    (*output)->bottom_controls_shown_ratio = CallWithContext(Traits::bottom_controls_shown_ratio, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::RenderFrameMetadata_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::RenderFrameMetadataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content {
namespace mojom {

inline void RenderFrameMetadataDataView::GetRootScrollOffsetDataView(
    ::gfx::mojom::Vector2dFDataView* output) {
  auto pointer = data_->root_scroll_offset.Get();
  *output = ::gfx::mojom::Vector2dFDataView(pointer, context_);
}
inline void RenderFrameMetadataDataView::GetSelectionDataView(
    ::viz::mojom::SelectionDataView* output) {
  auto pointer = data_->selection.Get();
  *output = ::viz::mojom::SelectionDataView(pointer, context_);
}
inline void RenderFrameMetadataDataView::GetViewportSizeInPixelsDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->viewport_size_in_pixels.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void RenderFrameMetadataDataView::GetLocalSurfaceIdDataView(
    ::viz::mojom::LocalSurfaceIdDataView* output) {
  auto pointer = data_->local_surface_id.Get();
  *output = ::viz::mojom::LocalSurfaceIdDataView(pointer, context_);
}




inline void RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_ParamsDataView::GetMetadataDataView(
    RenderFrameMetadataDataView* output) {
  auto pointer = data_->metadata.Get();
  *output = RenderFrameMetadataDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_RENDER_FRAME_METADATA_MOJOM_SHARED_H_
