// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_RENDERER_SETTINGS_MOJOM_SHARED_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_RENDERER_SETTINGS_MOJOM_SHARED_H_

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
#include "services/viz/privileged/interfaces/compositing/renderer_settings.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace viz {
namespace mojom {
class RendererSettingsDataView;



}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::viz::mojom::RendererSettingsDataView> {
  using Data = ::viz::mojom::internal::RendererSettings_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {
class RendererSettingsDataView {
 public:
  RendererSettingsDataView() {}

  RendererSettingsDataView(
      internal::RendererSettings_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool allow_antialiasing() const {
    return data_->allow_antialiasing;
  }
  bool finish_rendering_on_resize() const {
    return data_->finish_rendering_on_resize;
  }
  bool force_antialiasing() const {
    return data_->force_antialiasing;
  }
  bool force_blending_with_shaders() const {
    return data_->force_blending_with_shaders;
  }
  bool tint_gl_composited_content() const {
    return data_->tint_gl_composited_content;
  }
  int32_t highp_threshold_min() const {
    return data_->highp_threshold_min;
  }
  bool partial_swap_enabled() const {
    return data_->partial_swap_enabled;
  }
  bool release_overlay_resources_after_gpu_query() const {
    return data_->release_overlay_resources_after_gpu_query;
  }
  bool should_clear_root_render_pass() const {
    return data_->should_clear_root_render_pass;
  }
  bool show_overdraw_feedback() const {
    return data_->show_overdraw_feedback;
  }
  bool enable_draw_occlusion() const {
    return data_->enable_draw_occlusion;
  }
  int32_t slow_down_compositing_scale_factor() const {
    return data_->slow_down_compositing_scale_factor;
  }
  bool use_skia_renderer() const {
    return data_->use_skia_renderer;
  }
  bool use_skia_deferred_display_list() const {
    return data_->use_skia_deferred_display_list;
  }
  bool allow_overlays() const {
    return data_->allow_overlays;
  }
 private:
  internal::RendererSettings_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::RendererSettingsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::RendererSettingsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::RendererSettings_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->allow_antialiasing = CallWithContext(Traits::allow_antialiasing, input, custom_context);
    (*output)->finish_rendering_on_resize = CallWithContext(Traits::finish_rendering_on_resize, input, custom_context);
    (*output)->force_antialiasing = CallWithContext(Traits::force_antialiasing, input, custom_context);
    (*output)->force_blending_with_shaders = CallWithContext(Traits::force_blending_with_shaders, input, custom_context);
    (*output)->tint_gl_composited_content = CallWithContext(Traits::tint_gl_composited_content, input, custom_context);
    (*output)->highp_threshold_min = CallWithContext(Traits::highp_threshold_min, input, custom_context);
    (*output)->partial_swap_enabled = CallWithContext(Traits::partial_swap_enabled, input, custom_context);
    (*output)->release_overlay_resources_after_gpu_query = CallWithContext(Traits::release_overlay_resources_after_gpu_query, input, custom_context);
    (*output)->should_clear_root_render_pass = CallWithContext(Traits::should_clear_root_render_pass, input, custom_context);
    (*output)->show_overdraw_feedback = CallWithContext(Traits::show_overdraw_feedback, input, custom_context);
    (*output)->enable_draw_occlusion = CallWithContext(Traits::enable_draw_occlusion, input, custom_context);
    (*output)->slow_down_compositing_scale_factor = CallWithContext(Traits::slow_down_compositing_scale_factor, input, custom_context);
    (*output)->use_skia_renderer = CallWithContext(Traits::use_skia_renderer, input, custom_context);
    (*output)->use_skia_deferred_display_list = CallWithContext(Traits::use_skia_deferred_display_list, input, custom_context);
    (*output)->allow_overlays = CallWithContext(Traits::allow_overlays, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::viz::mojom::internal::RendererSettings_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::RendererSettingsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace viz {
namespace mojom {




}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_RENDERER_SETTINGS_MOJOM_SHARED_H_
