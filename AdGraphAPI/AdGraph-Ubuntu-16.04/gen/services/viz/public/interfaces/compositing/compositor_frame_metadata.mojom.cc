// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "services/viz/public/interfaces/compositing/compositor_frame_metadata.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "services/viz/public/interfaces/compositing/compositor_frame_metadata.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/viz/public/cpp/compositing/begin_frame_args_struct_traits.h"
#include "services/viz/public/cpp/compositing/frame_deadline_struct_traits.h"
#include "services/viz/public/cpp/compositing/frame_sink_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/local_surface_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/selection_struct_traits.h"
#include "services/viz/public/cpp/compositing/surface_id_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/mojo/selection_bound_struct_traits.h"
#include "ui/latency/mojo/latency_info_struct_traits.h"
namespace viz {
namespace mojom {
CompositorFrameMetadata::CompositorFrameMetadata()
    : device_scale_factor(),
      root_scroll_offset(),
      page_scale_factor(),
      scrollable_viewport_size(),
      root_layer_size(),
      min_page_scale_factor(),
      max_page_scale_factor(),
      root_overflow_y_hidden(),
      may_contain_video(),
      is_resourceless_software_draw_with_scroll_or_animation(),
      top_controls_height(),
      top_controls_shown_ratio(),
      bottom_controls_height(),
      bottom_controls_shown_ratio(),
      root_background_color(),
      selection(),
      latency_info(),
      referenced_surfaces(),
      deadline(),
      activation_dependencies(),
      content_source_id(),
      begin_frame_ack(),
      frame_token(),
      presentation_token() {}

CompositorFrameMetadata::CompositorFrameMetadata(
    float device_scale_factor_in,
    const gfx::Vector2dF& root_scroll_offset_in,
    float page_scale_factor_in,
    const gfx::SizeF& scrollable_viewport_size_in,
    const gfx::SizeF& root_layer_size_in,
    float min_page_scale_factor_in,
    float max_page_scale_factor_in,
    bool root_overflow_y_hidden_in,
    bool may_contain_video_in,
    bool is_resourceless_software_draw_with_scroll_or_animation_in,
    float top_controls_height_in,
    float top_controls_shown_ratio_in,
    float bottom_controls_height_in,
    float bottom_controls_shown_ratio_in,
    uint32_t root_background_color_in,
    const viz::Selection<gfx::SelectionBound>& selection_in,
    const std::vector<ui::LatencyInfo>& latency_info_in,
    const std::vector<viz::SurfaceId>& referenced_surfaces_in,
    const viz::FrameDeadline& deadline_in,
    const std::vector<viz::SurfaceId>& activation_dependencies_in,
    uint32_t content_source_id_in,
    const viz::BeginFrameAck& begin_frame_ack_in,
    uint32_t frame_token_in,
    uint32_t presentation_token_in)
    : device_scale_factor(std::move(device_scale_factor_in)),
      root_scroll_offset(std::move(root_scroll_offset_in)),
      page_scale_factor(std::move(page_scale_factor_in)),
      scrollable_viewport_size(std::move(scrollable_viewport_size_in)),
      root_layer_size(std::move(root_layer_size_in)),
      min_page_scale_factor(std::move(min_page_scale_factor_in)),
      max_page_scale_factor(std::move(max_page_scale_factor_in)),
      root_overflow_y_hidden(std::move(root_overflow_y_hidden_in)),
      may_contain_video(std::move(may_contain_video_in)),
      is_resourceless_software_draw_with_scroll_or_animation(std::move(is_resourceless_software_draw_with_scroll_or_animation_in)),
      top_controls_height(std::move(top_controls_height_in)),
      top_controls_shown_ratio(std::move(top_controls_shown_ratio_in)),
      bottom_controls_height(std::move(bottom_controls_height_in)),
      bottom_controls_shown_ratio(std::move(bottom_controls_shown_ratio_in)),
      root_background_color(std::move(root_background_color_in)),
      selection(std::move(selection_in)),
      latency_info(std::move(latency_info_in)),
      referenced_surfaces(std::move(referenced_surfaces_in)),
      deadline(std::move(deadline_in)),
      activation_dependencies(std::move(activation_dependencies_in)),
      content_source_id(std::move(content_source_id_in)),
      begin_frame_ack(std::move(begin_frame_ack_in)),
      frame_token(std::move(frame_token_in)),
      presentation_token(std::move(presentation_token_in)) {}

CompositorFrameMetadata::~CompositorFrameMetadata() = default;

bool CompositorFrameMetadata::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace viz

namespace mojo {


// static
bool StructTraits<::viz::mojom::CompositorFrameMetadata::DataView, ::viz::mojom::CompositorFrameMetadataPtr>::Read(
    ::viz::mojom::CompositorFrameMetadata::DataView input,
    ::viz::mojom::CompositorFrameMetadataPtr* output) {
  bool success = true;
  ::viz::mojom::CompositorFrameMetadataPtr result(::viz::mojom::CompositorFrameMetadata::New());
  
      result->device_scale_factor = input.device_scale_factor();
      if (!input.ReadRootScrollOffset(&result->root_scroll_offset))
        success = false;
      result->page_scale_factor = input.page_scale_factor();
      if (!input.ReadScrollableViewportSize(&result->scrollable_viewport_size))
        success = false;
      if (!input.ReadRootLayerSize(&result->root_layer_size))
        success = false;
      result->min_page_scale_factor = input.min_page_scale_factor();
      result->max_page_scale_factor = input.max_page_scale_factor();
      result->root_overflow_y_hidden = input.root_overflow_y_hidden();
      result->may_contain_video = input.may_contain_video();
      result->is_resourceless_software_draw_with_scroll_or_animation = input.is_resourceless_software_draw_with_scroll_or_animation();
      result->top_controls_height = input.top_controls_height();
      result->top_controls_shown_ratio = input.top_controls_shown_ratio();
      result->bottom_controls_height = input.bottom_controls_height();
      result->bottom_controls_shown_ratio = input.bottom_controls_shown_ratio();
      result->root_background_color = input.root_background_color();
      if (!input.ReadSelection(&result->selection))
        success = false;
      if (!input.ReadLatencyInfo(&result->latency_info))
        success = false;
      if (!input.ReadReferencedSurfaces(&result->referenced_surfaces))
        success = false;
      if (!input.ReadDeadline(&result->deadline))
        success = false;
      if (!input.ReadActivationDependencies(&result->activation_dependencies))
        success = false;
      result->content_source_id = input.content_source_id();
      if (!input.ReadBeginFrameAck(&result->begin_frame_ack))
        success = false;
      result->frame_token = input.frame_token();
      result->presentation_token = input.presentation_token();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif