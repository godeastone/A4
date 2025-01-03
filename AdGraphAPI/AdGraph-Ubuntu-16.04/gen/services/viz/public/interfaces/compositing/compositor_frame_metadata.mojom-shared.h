// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_METADATA_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_METADATA_MOJOM_SHARED_H_

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
#include "services/viz/public/interfaces/compositing/compositor_frame_metadata.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/begin_frame_args.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/frame_deadline.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/selection.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/surface_id.mojom-shared.h"
#include "ui/latency/mojo/latency_info.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace viz {
namespace mojom {
class CompositorFrameMetadataDataView;



}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::viz::mojom::CompositorFrameMetadataDataView> {
  using Data = ::viz::mojom::internal::CompositorFrameMetadata_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {
class CompositorFrameMetadataDataView {
 public:
  CompositorFrameMetadataDataView() {}

  CompositorFrameMetadataDataView(
      internal::CompositorFrameMetadata_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  float device_scale_factor() const {
    return data_->device_scale_factor;
  }
  inline void GetRootScrollOffsetDataView(
      ::gfx::mojom::Vector2dFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRootScrollOffset(UserType* output) {
    auto* pointer = data_->root_scroll_offset.Get();
    return mojo::internal::Deserialize<::gfx::mojom::Vector2dFDataView>(
        pointer, output, context_);
  }
  float page_scale_factor() const {
    return data_->page_scale_factor;
  }
  inline void GetScrollableViewportSizeDataView(
      ::gfx::mojom::SizeFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScrollableViewportSize(UserType* output) {
    auto* pointer = data_->scrollable_viewport_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeFDataView>(
        pointer, output, context_);
  }
  inline void GetRootLayerSizeDataView(
      ::gfx::mojom::SizeFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRootLayerSize(UserType* output) {
    auto* pointer = data_->root_layer_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeFDataView>(
        pointer, output, context_);
  }
  float min_page_scale_factor() const {
    return data_->min_page_scale_factor;
  }
  float max_page_scale_factor() const {
    return data_->max_page_scale_factor;
  }
  bool root_overflow_y_hidden() const {
    return data_->root_overflow_y_hidden;
  }
  bool may_contain_video() const {
    return data_->may_contain_video;
  }
  bool is_resourceless_software_draw_with_scroll_or_animation() const {
    return data_->is_resourceless_software_draw_with_scroll_or_animation;
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
  uint32_t root_background_color() const {
    return data_->root_background_color;
  }
  inline void GetSelectionDataView(
      ::viz::mojom::SelectionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSelection(UserType* output) {
    auto* pointer = data_->selection.Get();
    return mojo::internal::Deserialize<::viz::mojom::SelectionDataView>(
        pointer, output, context_);
  }
  inline void GetLatencyInfoDataView(
      mojo::ArrayDataView<::ui::mojom::LatencyInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLatencyInfo(UserType* output) {
    auto* pointer = data_->latency_info.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::ui::mojom::LatencyInfoDataView>>(
        pointer, output, context_);
  }
  inline void GetReferencedSurfacesDataView(
      mojo::ArrayDataView<::viz::mojom::SurfaceIdDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReferencedSurfaces(UserType* output) {
    auto* pointer = data_->referenced_surfaces.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::viz::mojom::SurfaceIdDataView>>(
        pointer, output, context_);
  }
  inline void GetDeadlineDataView(
      ::viz::mojom::FrameDeadlineDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeadline(UserType* output) {
    auto* pointer = data_->deadline.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameDeadlineDataView>(
        pointer, output, context_);
  }
  inline void GetActivationDependenciesDataView(
      mojo::ArrayDataView<::viz::mojom::SurfaceIdDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadActivationDependencies(UserType* output) {
    auto* pointer = data_->activation_dependencies.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::viz::mojom::SurfaceIdDataView>>(
        pointer, output, context_);
  }
  uint32_t content_source_id() const {
    return data_->content_source_id;
  }
  inline void GetBeginFrameAckDataView(
      ::viz::mojom::BeginFrameAckDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBeginFrameAck(UserType* output) {
    auto* pointer = data_->begin_frame_ack.Get();
    return mojo::internal::Deserialize<::viz::mojom::BeginFrameAckDataView>(
        pointer, output, context_);
  }
  uint32_t frame_token() const {
    return data_->frame_token;
  }
  uint32_t presentation_token() const {
    return data_->presentation_token;
  }
 private:
  internal::CompositorFrameMetadata_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::CompositorFrameMetadataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::CompositorFrameMetadataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::CompositorFrameMetadata_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->device_scale_factor = CallWithContext(Traits::device_scale_factor, input, custom_context);
    decltype(CallWithContext(Traits::root_scroll_offset, input, custom_context)) in_root_scroll_offset = CallWithContext(Traits::root_scroll_offset, input, custom_context);
    typename decltype((*output)->root_scroll_offset)::BaseType::BufferWriter
        root_scroll_offset_writer;
    mojo::internal::Serialize<::gfx::mojom::Vector2dFDataView>(
        in_root_scroll_offset, buffer, &root_scroll_offset_writer, context);
    (*output)->root_scroll_offset.Set(
        root_scroll_offset_writer.is_null() ? nullptr : root_scroll_offset_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->root_scroll_offset.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null root_scroll_offset in CompositorFrameMetadata struct");
    (*output)->page_scale_factor = CallWithContext(Traits::page_scale_factor, input, custom_context);
    decltype(CallWithContext(Traits::scrollable_viewport_size, input, custom_context)) in_scrollable_viewport_size = CallWithContext(Traits::scrollable_viewport_size, input, custom_context);
    typename decltype((*output)->scrollable_viewport_size)::BaseType::BufferWriter
        scrollable_viewport_size_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeFDataView>(
        in_scrollable_viewport_size, buffer, &scrollable_viewport_size_writer, context);
    (*output)->scrollable_viewport_size.Set(
        scrollable_viewport_size_writer.is_null() ? nullptr : scrollable_viewport_size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->scrollable_viewport_size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null scrollable_viewport_size in CompositorFrameMetadata struct");
    decltype(CallWithContext(Traits::root_layer_size, input, custom_context)) in_root_layer_size = CallWithContext(Traits::root_layer_size, input, custom_context);
    typename decltype((*output)->root_layer_size)::BaseType::BufferWriter
        root_layer_size_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeFDataView>(
        in_root_layer_size, buffer, &root_layer_size_writer, context);
    (*output)->root_layer_size.Set(
        root_layer_size_writer.is_null() ? nullptr : root_layer_size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->root_layer_size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null root_layer_size in CompositorFrameMetadata struct");
    (*output)->min_page_scale_factor = CallWithContext(Traits::min_page_scale_factor, input, custom_context);
    (*output)->max_page_scale_factor = CallWithContext(Traits::max_page_scale_factor, input, custom_context);
    (*output)->root_overflow_y_hidden = CallWithContext(Traits::root_overflow_y_hidden, input, custom_context);
    (*output)->may_contain_video = CallWithContext(Traits::may_contain_video, input, custom_context);
    (*output)->is_resourceless_software_draw_with_scroll_or_animation = CallWithContext(Traits::is_resourceless_software_draw_with_scroll_or_animation, input, custom_context);
    (*output)->top_controls_height = CallWithContext(Traits::top_controls_height, input, custom_context);
    (*output)->top_controls_shown_ratio = CallWithContext(Traits::top_controls_shown_ratio, input, custom_context);
    (*output)->bottom_controls_height = CallWithContext(Traits::bottom_controls_height, input, custom_context);
    (*output)->bottom_controls_shown_ratio = CallWithContext(Traits::bottom_controls_shown_ratio, input, custom_context);
    (*output)->root_background_color = CallWithContext(Traits::root_background_color, input, custom_context);
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
        "null selection in CompositorFrameMetadata struct");
    decltype(CallWithContext(Traits::latency_info, input, custom_context)) in_latency_info = CallWithContext(Traits::latency_info, input, custom_context);
    typename decltype((*output)->latency_info)::BaseType::BufferWriter
        latency_info_writer;
    const mojo::internal::ContainerValidateParams latency_info_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::ui::mojom::LatencyInfoDataView>>(
        in_latency_info, buffer, &latency_info_writer, &latency_info_validate_params,
        context);
    (*output)->latency_info.Set(
        latency_info_writer.is_null() ? nullptr : latency_info_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->latency_info.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null latency_info in CompositorFrameMetadata struct");
    decltype(CallWithContext(Traits::referenced_surfaces, input, custom_context)) in_referenced_surfaces = CallWithContext(Traits::referenced_surfaces, input, custom_context);
    typename decltype((*output)->referenced_surfaces)::BaseType::BufferWriter
        referenced_surfaces_writer;
    const mojo::internal::ContainerValidateParams referenced_surfaces_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::viz::mojom::SurfaceIdDataView>>(
        in_referenced_surfaces, buffer, &referenced_surfaces_writer, &referenced_surfaces_validate_params,
        context);
    (*output)->referenced_surfaces.Set(
        referenced_surfaces_writer.is_null() ? nullptr : referenced_surfaces_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->referenced_surfaces.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null referenced_surfaces in CompositorFrameMetadata struct");
    decltype(CallWithContext(Traits::deadline, input, custom_context)) in_deadline = CallWithContext(Traits::deadline, input, custom_context);
    typename decltype((*output)->deadline)::BaseType::BufferWriter
        deadline_writer;
    mojo::internal::Serialize<::viz::mojom::FrameDeadlineDataView>(
        in_deadline, buffer, &deadline_writer, context);
    (*output)->deadline.Set(
        deadline_writer.is_null() ? nullptr : deadline_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->deadline.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null deadline in CompositorFrameMetadata struct");
    decltype(CallWithContext(Traits::activation_dependencies, input, custom_context)) in_activation_dependencies = CallWithContext(Traits::activation_dependencies, input, custom_context);
    typename decltype((*output)->activation_dependencies)::BaseType::BufferWriter
        activation_dependencies_writer;
    const mojo::internal::ContainerValidateParams activation_dependencies_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::viz::mojom::SurfaceIdDataView>>(
        in_activation_dependencies, buffer, &activation_dependencies_writer, &activation_dependencies_validate_params,
        context);
    (*output)->activation_dependencies.Set(
        activation_dependencies_writer.is_null() ? nullptr : activation_dependencies_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->activation_dependencies.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null activation_dependencies in CompositorFrameMetadata struct");
    (*output)->content_source_id = CallWithContext(Traits::content_source_id, input, custom_context);
    decltype(CallWithContext(Traits::begin_frame_ack, input, custom_context)) in_begin_frame_ack = CallWithContext(Traits::begin_frame_ack, input, custom_context);
    typename decltype((*output)->begin_frame_ack)::BaseType::BufferWriter
        begin_frame_ack_writer;
    mojo::internal::Serialize<::viz::mojom::BeginFrameAckDataView>(
        in_begin_frame_ack, buffer, &begin_frame_ack_writer, context);
    (*output)->begin_frame_ack.Set(
        begin_frame_ack_writer.is_null() ? nullptr : begin_frame_ack_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->begin_frame_ack.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null begin_frame_ack in CompositorFrameMetadata struct");
    (*output)->frame_token = CallWithContext(Traits::frame_token, input, custom_context);
    (*output)->presentation_token = CallWithContext(Traits::presentation_token, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::viz::mojom::internal::CompositorFrameMetadata_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::CompositorFrameMetadataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace viz {
namespace mojom {

inline void CompositorFrameMetadataDataView::GetRootScrollOffsetDataView(
    ::gfx::mojom::Vector2dFDataView* output) {
  auto pointer = data_->root_scroll_offset.Get();
  *output = ::gfx::mojom::Vector2dFDataView(pointer, context_);
}
inline void CompositorFrameMetadataDataView::GetScrollableViewportSizeDataView(
    ::gfx::mojom::SizeFDataView* output) {
  auto pointer = data_->scrollable_viewport_size.Get();
  *output = ::gfx::mojom::SizeFDataView(pointer, context_);
}
inline void CompositorFrameMetadataDataView::GetRootLayerSizeDataView(
    ::gfx::mojom::SizeFDataView* output) {
  auto pointer = data_->root_layer_size.Get();
  *output = ::gfx::mojom::SizeFDataView(pointer, context_);
}
inline void CompositorFrameMetadataDataView::GetSelectionDataView(
    ::viz::mojom::SelectionDataView* output) {
  auto pointer = data_->selection.Get();
  *output = ::viz::mojom::SelectionDataView(pointer, context_);
}
inline void CompositorFrameMetadataDataView::GetLatencyInfoDataView(
    mojo::ArrayDataView<::ui::mojom::LatencyInfoDataView>* output) {
  auto pointer = data_->latency_info.Get();
  *output = mojo::ArrayDataView<::ui::mojom::LatencyInfoDataView>(pointer, context_);
}
inline void CompositorFrameMetadataDataView::GetReferencedSurfacesDataView(
    mojo::ArrayDataView<::viz::mojom::SurfaceIdDataView>* output) {
  auto pointer = data_->referenced_surfaces.Get();
  *output = mojo::ArrayDataView<::viz::mojom::SurfaceIdDataView>(pointer, context_);
}
inline void CompositorFrameMetadataDataView::GetDeadlineDataView(
    ::viz::mojom::FrameDeadlineDataView* output) {
  auto pointer = data_->deadline.Get();
  *output = ::viz::mojom::FrameDeadlineDataView(pointer, context_);
}
inline void CompositorFrameMetadataDataView::GetActivationDependenciesDataView(
    mojo::ArrayDataView<::viz::mojom::SurfaceIdDataView>* output) {
  auto pointer = data_->activation_dependencies.Get();
  *output = mojo::ArrayDataView<::viz::mojom::SurfaceIdDataView>(pointer, context_);
}
inline void CompositorFrameMetadataDataView::GetBeginFrameAckDataView(
    ::viz::mojom::BeginFrameAckDataView* output) {
  auto pointer = data_->begin_frame_ack.Get();
  *output = ::viz::mojom::BeginFrameAckDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_METADATA_MOJOM_SHARED_H_
