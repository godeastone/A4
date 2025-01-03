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

#include "services/viz/privileged/interfaces/compositing/renderer_settings.mojom.h"

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

#include "services/viz/privileged/interfaces/compositing/renderer_settings.mojom-shared-message-ids.h"
namespace viz {
namespace mojom {
RendererSettings::RendererSettings()
    : allow_antialiasing(),
      finish_rendering_on_resize(),
      force_antialiasing(),
      force_blending_with_shaders(),
      tint_gl_composited_content(),
      highp_threshold_min(),
      partial_swap_enabled(),
      release_overlay_resources_after_gpu_query(),
      should_clear_root_render_pass(),
      show_overdraw_feedback(),
      enable_draw_occlusion(),
      slow_down_compositing_scale_factor(),
      use_skia_renderer(),
      use_skia_deferred_display_list(),
      allow_overlays() {}

RendererSettings::RendererSettings(
    bool allow_antialiasing_in,
    bool finish_rendering_on_resize_in,
    bool force_antialiasing_in,
    bool force_blending_with_shaders_in,
    bool tint_gl_composited_content_in,
    int32_t highp_threshold_min_in,
    bool partial_swap_enabled_in,
    bool release_overlay_resources_after_gpu_query_in,
    bool should_clear_root_render_pass_in,
    bool show_overdraw_feedback_in,
    bool enable_draw_occlusion_in,
    int32_t slow_down_compositing_scale_factor_in,
    bool use_skia_renderer_in,
    bool use_skia_deferred_display_list_in,
    bool allow_overlays_in)
    : allow_antialiasing(std::move(allow_antialiasing_in)),
      finish_rendering_on_resize(std::move(finish_rendering_on_resize_in)),
      force_antialiasing(std::move(force_antialiasing_in)),
      force_blending_with_shaders(std::move(force_blending_with_shaders_in)),
      tint_gl_composited_content(std::move(tint_gl_composited_content_in)),
      highp_threshold_min(std::move(highp_threshold_min_in)),
      partial_swap_enabled(std::move(partial_swap_enabled_in)),
      release_overlay_resources_after_gpu_query(std::move(release_overlay_resources_after_gpu_query_in)),
      should_clear_root_render_pass(std::move(should_clear_root_render_pass_in)),
      show_overdraw_feedback(std::move(show_overdraw_feedback_in)),
      enable_draw_occlusion(std::move(enable_draw_occlusion_in)),
      slow_down_compositing_scale_factor(std::move(slow_down_compositing_scale_factor_in)),
      use_skia_renderer(std::move(use_skia_renderer_in)),
      use_skia_deferred_display_list(std::move(use_skia_deferred_display_list_in)),
      allow_overlays(std::move(allow_overlays_in)) {}

RendererSettings::~RendererSettings() = default;

bool RendererSettings::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace viz

namespace mojo {


// static
bool StructTraits<::viz::mojom::RendererSettings::DataView, ::viz::mojom::RendererSettingsPtr>::Read(
    ::viz::mojom::RendererSettings::DataView input,
    ::viz::mojom::RendererSettingsPtr* output) {
  bool success = true;
  ::viz::mojom::RendererSettingsPtr result(::viz::mojom::RendererSettings::New());
  
      result->allow_antialiasing = input.allow_antialiasing();
      result->finish_rendering_on_resize = input.finish_rendering_on_resize();
      result->force_antialiasing = input.force_antialiasing();
      result->force_blending_with_shaders = input.force_blending_with_shaders();
      result->tint_gl_composited_content = input.tint_gl_composited_content();
      result->highp_threshold_min = input.highp_threshold_min();
      result->partial_swap_enabled = input.partial_swap_enabled();
      result->release_overlay_resources_after_gpu_query = input.release_overlay_resources_after_gpu_query();
      result->should_clear_root_render_pass = input.should_clear_root_render_pass();
      result->show_overdraw_feedback = input.show_overdraw_feedback();
      result->enable_draw_occlusion = input.enable_draw_occlusion();
      result->slow_down_compositing_scale_factor = input.slow_down_compositing_scale_factor();
      result->use_skia_renderer = input.use_skia_renderer();
      result->use_skia_deferred_display_list = input.use_skia_deferred_display_list();
      result->allow_overlays = input.allow_overlays();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif