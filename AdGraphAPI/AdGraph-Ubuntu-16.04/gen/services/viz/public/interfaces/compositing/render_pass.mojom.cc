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

#include "services/viz/public/interfaces/compositing/render_pass.mojom.h"

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

#include "services/viz/public/interfaces/compositing/render_pass.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/viz/public/cpp/compositing/copy_output_request_struct_traits.h"
#include "services/viz/public/cpp/compositing/filter_operation_struct_traits.h"
#include "services/viz/public/cpp/compositing/filter_operations_struct_traits.h"
#include "services/viz/public/cpp/compositing/frame_sink_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/local_surface_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/paint_filter_struct_traits.h"
#include "services/viz/public/cpp/compositing/shared_quad_state_struct_traits.h"
#include "services/viz/public/cpp/compositing/surface_id_struct_traits.h"
#include "skia/public/interfaces/blur_image_filter_tile_mode_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/ipc/color/gfx_param_traits.h"
#include "ui/gfx/mojo/transform_struct_traits.h"
namespace viz {
namespace mojom {
RenderPass::RenderPass()
    : id(),
      output_rect(),
      damage_rect(),
      transform_to_root_target(),
      filters(),
      background_filters(),
      color_space(),
      has_transparent_background(),
      cache_render_pass(false),
      has_damage_from_contributing_content(false),
      generate_mipmap(false),
      copy_requests(),
      quad_list() {}

RenderPass::RenderPass(
    uint64_t id_in,
    const gfx::Rect& output_rect_in,
    const gfx::Rect& damage_rect_in,
    const gfx::Transform& transform_to_root_target_in,
    const cc::FilterOperations& filters_in,
    const cc::FilterOperations& background_filters_in,
    const gfx::ColorSpace& color_space_in,
    bool has_transparent_background_in,
    bool cache_render_pass_in,
    bool has_damage_from_contributing_content_in,
    bool generate_mipmap_in,
    std::vector<std::unique_ptr<viz::CopyOutputRequest>> copy_requests_in,
    std::vector<::viz::mojom::DrawQuadPtr> quad_list_in)
    : id(std::move(id_in)),
      output_rect(std::move(output_rect_in)),
      damage_rect(std::move(damage_rect_in)),
      transform_to_root_target(std::move(transform_to_root_target_in)),
      filters(std::move(filters_in)),
      background_filters(std::move(background_filters_in)),
      color_space(std::move(color_space_in)),
      has_transparent_background(std::move(has_transparent_background_in)),
      cache_render_pass(std::move(cache_render_pass_in)),
      has_damage_from_contributing_content(std::move(has_damage_from_contributing_content_in)),
      generate_mipmap(std::move(generate_mipmap_in)),
      copy_requests(std::move(copy_requests_in)),
      quad_list(std::move(quad_list_in)) {}

RenderPass::~RenderPass() = default;

bool RenderPass::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace viz

namespace mojo {


// static
bool StructTraits<::viz::mojom::RenderPass::DataView, ::viz::mojom::RenderPassPtr>::Read(
    ::viz::mojom::RenderPass::DataView input,
    ::viz::mojom::RenderPassPtr* output) {
  bool success = true;
  ::viz::mojom::RenderPassPtr result(::viz::mojom::RenderPass::New());
  
      result->id = input.id();
      if (!input.ReadOutputRect(&result->output_rect))
        success = false;
      if (!input.ReadDamageRect(&result->damage_rect))
        success = false;
      if (!input.ReadTransformToRootTarget(&result->transform_to_root_target))
        success = false;
      if (!input.ReadFilters(&result->filters))
        success = false;
      if (!input.ReadBackgroundFilters(&result->background_filters))
        success = false;
      if (!input.ReadColorSpace(&result->color_space))
        success = false;
      result->has_transparent_background = input.has_transparent_background();
      result->cache_render_pass = input.cache_render_pass();
      result->has_damage_from_contributing_content = input.has_damage_from_contributing_content();
      result->generate_mipmap = input.generate_mipmap();
      if (!input.ReadCopyRequests(&result->copy_requests))
        success = false;
      if (!input.ReadQuadList(&result->quad_list))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif