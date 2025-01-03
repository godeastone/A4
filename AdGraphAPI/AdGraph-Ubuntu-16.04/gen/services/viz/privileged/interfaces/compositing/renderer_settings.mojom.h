// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_RENDERER_SETTINGS_MOJOM_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_RENDERER_SETTINGS_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "services/viz/privileged/interfaces/compositing/renderer_settings.mojom-shared.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "components/viz/common/display/renderer_settings.h"


namespace viz {
namespace mojom {
class RendererSettings;
using RendererSettingsPtr = mojo::StructPtr<RendererSettings>;






class  RendererSettings {
 public:
  using DataView = RendererSettingsDataView;
  using Data_ = internal::RendererSettings_Data;

  template <typename... Args>
  static RendererSettingsPtr New(Args&&... args) {
    return RendererSettingsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RendererSettingsPtr From(const U& u) {
    return mojo::TypeConverter<RendererSettingsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RendererSettings>::Convert(*this);
  }


  RendererSettings();

  RendererSettings(
      bool allow_antialiasing,
      bool finish_rendering_on_resize,
      bool force_antialiasing,
      bool force_blending_with_shaders,
      bool tint_gl_composited_content,
      int32_t highp_threshold_min,
      bool partial_swap_enabled,
      bool release_overlay_resources_after_gpu_query,
      bool should_clear_root_render_pass,
      bool show_overdraw_feedback,
      bool enable_draw_occlusion,
      int32_t slow_down_compositing_scale_factor,
      bool use_skia_renderer,
      bool use_skia_deferred_display_list,
      bool allow_overlays);

  ~RendererSettings();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RendererSettingsPtr>
  RendererSettingsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RendererSettings>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RendererSettings::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RendererSettings::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RendererSettings_UnserializedMessageContext<
            UserType, RendererSettings::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RendererSettings::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RendererSettings::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RendererSettings_UnserializedMessageContext<
            UserType, RendererSettings::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RendererSettings::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  bool allow_antialiasing;
  bool finish_rendering_on_resize;
  bool force_antialiasing;
  bool force_blending_with_shaders;
  bool tint_gl_composited_content;
  int32_t highp_threshold_min;
  bool partial_swap_enabled;
  bool release_overlay_resources_after_gpu_query;
  bool should_clear_root_render_pass;
  bool show_overdraw_feedback;
  bool enable_draw_occlusion;
  int32_t slow_down_compositing_scale_factor;
  bool use_skia_renderer;
  bool use_skia_deferred_display_list;
  bool allow_overlays;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
RendererSettingsPtr RendererSettings::Clone() const {
  return New(
      mojo::Clone(allow_antialiasing),
      mojo::Clone(finish_rendering_on_resize),
      mojo::Clone(force_antialiasing),
      mojo::Clone(force_blending_with_shaders),
      mojo::Clone(tint_gl_composited_content),
      mojo::Clone(highp_threshold_min),
      mojo::Clone(partial_swap_enabled),
      mojo::Clone(release_overlay_resources_after_gpu_query),
      mojo::Clone(should_clear_root_render_pass),
      mojo::Clone(show_overdraw_feedback),
      mojo::Clone(enable_draw_occlusion),
      mojo::Clone(slow_down_compositing_scale_factor),
      mojo::Clone(use_skia_renderer),
      mojo::Clone(use_skia_deferred_display_list),
      mojo::Clone(allow_overlays)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RendererSettings>::value>::type*>
bool RendererSettings::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->allow_antialiasing, other_struct.allow_antialiasing))
    return false;
  if (!mojo::Equals(this->finish_rendering_on_resize, other_struct.finish_rendering_on_resize))
    return false;
  if (!mojo::Equals(this->force_antialiasing, other_struct.force_antialiasing))
    return false;
  if (!mojo::Equals(this->force_blending_with_shaders, other_struct.force_blending_with_shaders))
    return false;
  if (!mojo::Equals(this->tint_gl_composited_content, other_struct.tint_gl_composited_content))
    return false;
  if (!mojo::Equals(this->highp_threshold_min, other_struct.highp_threshold_min))
    return false;
  if (!mojo::Equals(this->partial_swap_enabled, other_struct.partial_swap_enabled))
    return false;
  if (!mojo::Equals(this->release_overlay_resources_after_gpu_query, other_struct.release_overlay_resources_after_gpu_query))
    return false;
  if (!mojo::Equals(this->should_clear_root_render_pass, other_struct.should_clear_root_render_pass))
    return false;
  if (!mojo::Equals(this->show_overdraw_feedback, other_struct.show_overdraw_feedback))
    return false;
  if (!mojo::Equals(this->enable_draw_occlusion, other_struct.enable_draw_occlusion))
    return false;
  if (!mojo::Equals(this->slow_down_compositing_scale_factor, other_struct.slow_down_compositing_scale_factor))
    return false;
  if (!mojo::Equals(this->use_skia_renderer, other_struct.use_skia_renderer))
    return false;
  if (!mojo::Equals(this->use_skia_deferred_display_list, other_struct.use_skia_deferred_display_list))
    return false;
  if (!mojo::Equals(this->allow_overlays, other_struct.allow_overlays))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct  StructTraits<::viz::mojom::RendererSettings::DataView,
                                         ::viz::mojom::RendererSettingsPtr> {
  static bool IsNull(const ::viz::mojom::RendererSettingsPtr& input) { return !input; }
  static void SetToNull(::viz::mojom::RendererSettingsPtr* output) { output->reset(); }

  static decltype(::viz::mojom::RendererSettings::allow_antialiasing) allow_antialiasing(
      const ::viz::mojom::RendererSettingsPtr& input) {
    return input->allow_antialiasing;
  }

  static decltype(::viz::mojom::RendererSettings::finish_rendering_on_resize) finish_rendering_on_resize(
      const ::viz::mojom::RendererSettingsPtr& input) {
    return input->finish_rendering_on_resize;
  }

  static decltype(::viz::mojom::RendererSettings::force_antialiasing) force_antialiasing(
      const ::viz::mojom::RendererSettingsPtr& input) {
    return input->force_antialiasing;
  }

  static decltype(::viz::mojom::RendererSettings::force_blending_with_shaders) force_blending_with_shaders(
      const ::viz::mojom::RendererSettingsPtr& input) {
    return input->force_blending_with_shaders;
  }

  static decltype(::viz::mojom::RendererSettings::tint_gl_composited_content) tint_gl_composited_content(
      const ::viz::mojom::RendererSettingsPtr& input) {
    return input->tint_gl_composited_content;
  }

  static decltype(::viz::mojom::RendererSettings::highp_threshold_min) highp_threshold_min(
      const ::viz::mojom::RendererSettingsPtr& input) {
    return input->highp_threshold_min;
  }

  static decltype(::viz::mojom::RendererSettings::partial_swap_enabled) partial_swap_enabled(
      const ::viz::mojom::RendererSettingsPtr& input) {
    return input->partial_swap_enabled;
  }

  static decltype(::viz::mojom::RendererSettings::release_overlay_resources_after_gpu_query) release_overlay_resources_after_gpu_query(
      const ::viz::mojom::RendererSettingsPtr& input) {
    return input->release_overlay_resources_after_gpu_query;
  }

  static decltype(::viz::mojom::RendererSettings::should_clear_root_render_pass) should_clear_root_render_pass(
      const ::viz::mojom::RendererSettingsPtr& input) {
    return input->should_clear_root_render_pass;
  }

  static decltype(::viz::mojom::RendererSettings::show_overdraw_feedback) show_overdraw_feedback(
      const ::viz::mojom::RendererSettingsPtr& input) {
    return input->show_overdraw_feedback;
  }

  static decltype(::viz::mojom::RendererSettings::enable_draw_occlusion) enable_draw_occlusion(
      const ::viz::mojom::RendererSettingsPtr& input) {
    return input->enable_draw_occlusion;
  }

  static decltype(::viz::mojom::RendererSettings::slow_down_compositing_scale_factor) slow_down_compositing_scale_factor(
      const ::viz::mojom::RendererSettingsPtr& input) {
    return input->slow_down_compositing_scale_factor;
  }

  static decltype(::viz::mojom::RendererSettings::use_skia_renderer) use_skia_renderer(
      const ::viz::mojom::RendererSettingsPtr& input) {
    return input->use_skia_renderer;
  }

  static decltype(::viz::mojom::RendererSettings::use_skia_deferred_display_list) use_skia_deferred_display_list(
      const ::viz::mojom::RendererSettingsPtr& input) {
    return input->use_skia_deferred_display_list;
  }

  static decltype(::viz::mojom::RendererSettings::allow_overlays) allow_overlays(
      const ::viz::mojom::RendererSettingsPtr& input) {
    return input->allow_overlays;
  }

  static bool Read(::viz::mojom::RendererSettings::DataView input, ::viz::mojom::RendererSettingsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_RENDERER_SETTINGS_MOJOM_H_