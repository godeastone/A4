// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_GPU_PREFERENCES_MOJOM_BLINK_H_
#define GPU_IPC_COMMON_GPU_PREFERENCES_MOJOM_BLINK_H_

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
#include "gpu/ipc/common/gpu_preferences.mojom-shared.h"
#include "ui/gfx/mojo/buffer_types.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace WTF {
struct gpu_mojom_internal_VpxDecodeVendors_DataHashFn {
  static unsigned GetHash(const ::gpu::mojom::VpxDecodeVendors& value) {
    using utype = std::underlying_type<::gpu::mojom::VpxDecodeVendors>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::gpu::mojom::VpxDecodeVendors& left, const ::gpu::mojom::VpxDecodeVendors& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::gpu::mojom::VpxDecodeVendors> {
  using Hash = gpu_mojom_internal_VpxDecodeVendors_DataHashFn;
};

template <>
struct HashTraits<::gpu::mojom::VpxDecodeVendors>
    : public GenericHashTraits<::gpu::mojom::VpxDecodeVendors> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::gpu::mojom::VpxDecodeVendors& value) {
    return value == static_cast<::gpu::mojom::VpxDecodeVendors>(-1000000);
  }
  static void ConstructDeletedValue(::gpu::mojom::VpxDecodeVendors& slot, bool) {
    slot = static_cast<::gpu::mojom::VpxDecodeVendors>(-1000001);
  }
  static bool IsDeletedValue(const ::gpu::mojom::VpxDecodeVendors& value) {
    return value == static_cast<::gpu::mojom::VpxDecodeVendors>(-1000001);
  }
};
}  // namespace WTF


namespace gpu {
namespace mojom {
namespace blink {
using VpxDecodeVendors = VpxDecodeVendors;  // Alias for definition in the parent namespace.
class GpuPreferences;
using GpuPreferencesPtr = mojo::StructPtr<GpuPreferences>;






class  GpuPreferences {
 public:
  using DataView = GpuPreferencesDataView;
  using Data_ = internal::GpuPreferences_Data;

  template <typename... Args>
  static GpuPreferencesPtr New(Args&&... args) {
    return GpuPreferencesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GpuPreferencesPtr From(const U& u) {
    return mojo::TypeConverter<GpuPreferencesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GpuPreferences>::Convert(*this);
  }


  GpuPreferences();

  GpuPreferences(
      bool single_process,
      bool in_process_gpu,
      bool disable_accelerated_video_decode,
      bool disable_accelerated_video_encode,
      bool gpu_startup_dialog,
      bool disable_gpu_watchdog,
      bool gpu_sandbox_start_early,
      VpxDecodeVendors enable_accelerated_vpx_decode,
      bool enable_low_latency_dxva,
      bool enable_zero_copy_dxgi_video,
      bool enable_nv12_dxgi_video,
      bool enable_media_foundation_vea_on_windows7,
      bool disable_software_rasterizer,
      bool log_gpu_control_list_decisions,
      bool compile_shader_always_succeeds,
      bool disable_gl_error_limit,
      bool disable_glsl_translator,
      bool disable_shader_name_hashing,
      bool enable_gpu_command_logging,
      bool enable_gpu_debugging,
      bool enable_gpu_service_logging_gpu,
      bool enable_gpu_driver_debug_logging,
      bool disable_gpu_program_cache,
      bool enforce_gl_minimums,
      uint32_t force_gpu_mem_available,
      uint32_t gpu_program_cache_size,
      bool disable_gpu_shader_disk_cache,
      bool enable_threaded_texture_mailboxes,
      bool gl_shader_interm_output,
      bool emulate_shader_precision,
      bool enable_gpu_service_logging,
      bool enable_gpu_service_tracing,
      bool use_passthrough_cmd_decoder,
      bool disable_biplanar_gpu_memory_buffers_for_video_frames,
      WTF::Vector<::gfx::mojom::blink::BufferUsageAndFormatPtr> texture_target_exception_list,
      bool disable_gpu_driver_bug_workarounds,
      bool ignore_gpu_blacklist,
      bool enable_oop_rasterization,
      bool use_gpu_fences_for_overlay_planes);

  ~GpuPreferences();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GpuPreferencesPtr>
  GpuPreferencesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GpuPreferences>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GpuPreferences::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GpuPreferences::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GpuPreferences_UnserializedMessageContext<
            UserType, GpuPreferences::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GpuPreferences::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return GpuPreferences::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GpuPreferences_UnserializedMessageContext<
            UserType, GpuPreferences::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GpuPreferences::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  bool single_process;
  bool in_process_gpu;
  bool disable_accelerated_video_decode;
  bool disable_accelerated_video_encode;
  bool gpu_startup_dialog;
  bool disable_gpu_watchdog;
  bool gpu_sandbox_start_early;
  VpxDecodeVendors enable_accelerated_vpx_decode;
  bool enable_low_latency_dxva;
  bool enable_zero_copy_dxgi_video;
  bool enable_nv12_dxgi_video;
  bool enable_media_foundation_vea_on_windows7;
  bool disable_software_rasterizer;
  bool log_gpu_control_list_decisions;
  bool compile_shader_always_succeeds;
  bool disable_gl_error_limit;
  bool disable_glsl_translator;
  bool disable_shader_name_hashing;
  bool enable_gpu_command_logging;
  bool enable_gpu_debugging;
  bool enable_gpu_service_logging_gpu;
  bool enable_gpu_driver_debug_logging;
  bool disable_gpu_program_cache;
  bool enforce_gl_minimums;
  uint32_t force_gpu_mem_available;
  uint32_t gpu_program_cache_size;
  bool disable_gpu_shader_disk_cache;
  bool enable_threaded_texture_mailboxes;
  bool gl_shader_interm_output;
  bool emulate_shader_precision;
  bool enable_gpu_service_logging;
  bool enable_gpu_service_tracing;
  bool use_passthrough_cmd_decoder;
  bool disable_biplanar_gpu_memory_buffers_for_video_frames;
  WTF::Vector<::gfx::mojom::blink::BufferUsageAndFormatPtr> texture_target_exception_list;
  bool disable_gpu_driver_bug_workarounds;
  bool ignore_gpu_blacklist;
  bool enable_oop_rasterization;
  bool use_gpu_fences_for_overlay_planes;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(GpuPreferences);
};

template <typename StructPtrType>
GpuPreferencesPtr GpuPreferences::Clone() const {
  return New(
      mojo::Clone(single_process),
      mojo::Clone(in_process_gpu),
      mojo::Clone(disable_accelerated_video_decode),
      mojo::Clone(disable_accelerated_video_encode),
      mojo::Clone(gpu_startup_dialog),
      mojo::Clone(disable_gpu_watchdog),
      mojo::Clone(gpu_sandbox_start_early),
      mojo::Clone(enable_accelerated_vpx_decode),
      mojo::Clone(enable_low_latency_dxva),
      mojo::Clone(enable_zero_copy_dxgi_video),
      mojo::Clone(enable_nv12_dxgi_video),
      mojo::Clone(enable_media_foundation_vea_on_windows7),
      mojo::Clone(disable_software_rasterizer),
      mojo::Clone(log_gpu_control_list_decisions),
      mojo::Clone(compile_shader_always_succeeds),
      mojo::Clone(disable_gl_error_limit),
      mojo::Clone(disable_glsl_translator),
      mojo::Clone(disable_shader_name_hashing),
      mojo::Clone(enable_gpu_command_logging),
      mojo::Clone(enable_gpu_debugging),
      mojo::Clone(enable_gpu_service_logging_gpu),
      mojo::Clone(enable_gpu_driver_debug_logging),
      mojo::Clone(disable_gpu_program_cache),
      mojo::Clone(enforce_gl_minimums),
      mojo::Clone(force_gpu_mem_available),
      mojo::Clone(gpu_program_cache_size),
      mojo::Clone(disable_gpu_shader_disk_cache),
      mojo::Clone(enable_threaded_texture_mailboxes),
      mojo::Clone(gl_shader_interm_output),
      mojo::Clone(emulate_shader_precision),
      mojo::Clone(enable_gpu_service_logging),
      mojo::Clone(enable_gpu_service_tracing),
      mojo::Clone(use_passthrough_cmd_decoder),
      mojo::Clone(disable_biplanar_gpu_memory_buffers_for_video_frames),
      mojo::Clone(texture_target_exception_list),
      mojo::Clone(disable_gpu_driver_bug_workarounds),
      mojo::Clone(ignore_gpu_blacklist),
      mojo::Clone(enable_oop_rasterization),
      mojo::Clone(use_gpu_fences_for_overlay_planes)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GpuPreferences>::value>::type*>
bool GpuPreferences::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->single_process, other_struct.single_process))
    return false;
  if (!mojo::Equals(this->in_process_gpu, other_struct.in_process_gpu))
    return false;
  if (!mojo::Equals(this->disable_accelerated_video_decode, other_struct.disable_accelerated_video_decode))
    return false;
  if (!mojo::Equals(this->disable_accelerated_video_encode, other_struct.disable_accelerated_video_encode))
    return false;
  if (!mojo::Equals(this->gpu_startup_dialog, other_struct.gpu_startup_dialog))
    return false;
  if (!mojo::Equals(this->disable_gpu_watchdog, other_struct.disable_gpu_watchdog))
    return false;
  if (!mojo::Equals(this->gpu_sandbox_start_early, other_struct.gpu_sandbox_start_early))
    return false;
  if (!mojo::Equals(this->enable_accelerated_vpx_decode, other_struct.enable_accelerated_vpx_decode))
    return false;
  if (!mojo::Equals(this->enable_low_latency_dxva, other_struct.enable_low_latency_dxva))
    return false;
  if (!mojo::Equals(this->enable_zero_copy_dxgi_video, other_struct.enable_zero_copy_dxgi_video))
    return false;
  if (!mojo::Equals(this->enable_nv12_dxgi_video, other_struct.enable_nv12_dxgi_video))
    return false;
  if (!mojo::Equals(this->enable_media_foundation_vea_on_windows7, other_struct.enable_media_foundation_vea_on_windows7))
    return false;
  if (!mojo::Equals(this->disable_software_rasterizer, other_struct.disable_software_rasterizer))
    return false;
  if (!mojo::Equals(this->log_gpu_control_list_decisions, other_struct.log_gpu_control_list_decisions))
    return false;
  if (!mojo::Equals(this->compile_shader_always_succeeds, other_struct.compile_shader_always_succeeds))
    return false;
  if (!mojo::Equals(this->disable_gl_error_limit, other_struct.disable_gl_error_limit))
    return false;
  if (!mojo::Equals(this->disable_glsl_translator, other_struct.disable_glsl_translator))
    return false;
  if (!mojo::Equals(this->disable_shader_name_hashing, other_struct.disable_shader_name_hashing))
    return false;
  if (!mojo::Equals(this->enable_gpu_command_logging, other_struct.enable_gpu_command_logging))
    return false;
  if (!mojo::Equals(this->enable_gpu_debugging, other_struct.enable_gpu_debugging))
    return false;
  if (!mojo::Equals(this->enable_gpu_service_logging_gpu, other_struct.enable_gpu_service_logging_gpu))
    return false;
  if (!mojo::Equals(this->enable_gpu_driver_debug_logging, other_struct.enable_gpu_driver_debug_logging))
    return false;
  if (!mojo::Equals(this->disable_gpu_program_cache, other_struct.disable_gpu_program_cache))
    return false;
  if (!mojo::Equals(this->enforce_gl_minimums, other_struct.enforce_gl_minimums))
    return false;
  if (!mojo::Equals(this->force_gpu_mem_available, other_struct.force_gpu_mem_available))
    return false;
  if (!mojo::Equals(this->gpu_program_cache_size, other_struct.gpu_program_cache_size))
    return false;
  if (!mojo::Equals(this->disable_gpu_shader_disk_cache, other_struct.disable_gpu_shader_disk_cache))
    return false;
  if (!mojo::Equals(this->enable_threaded_texture_mailboxes, other_struct.enable_threaded_texture_mailboxes))
    return false;
  if (!mojo::Equals(this->gl_shader_interm_output, other_struct.gl_shader_interm_output))
    return false;
  if (!mojo::Equals(this->emulate_shader_precision, other_struct.emulate_shader_precision))
    return false;
  if (!mojo::Equals(this->enable_gpu_service_logging, other_struct.enable_gpu_service_logging))
    return false;
  if (!mojo::Equals(this->enable_gpu_service_tracing, other_struct.enable_gpu_service_tracing))
    return false;
  if (!mojo::Equals(this->use_passthrough_cmd_decoder, other_struct.use_passthrough_cmd_decoder))
    return false;
  if (!mojo::Equals(this->disable_biplanar_gpu_memory_buffers_for_video_frames, other_struct.disable_biplanar_gpu_memory_buffers_for_video_frames))
    return false;
  if (!mojo::Equals(this->texture_target_exception_list, other_struct.texture_target_exception_list))
    return false;
  if (!mojo::Equals(this->disable_gpu_driver_bug_workarounds, other_struct.disable_gpu_driver_bug_workarounds))
    return false;
  if (!mojo::Equals(this->ignore_gpu_blacklist, other_struct.ignore_gpu_blacklist))
    return false;
  if (!mojo::Equals(this->enable_oop_rasterization, other_struct.enable_oop_rasterization))
    return false;
  if (!mojo::Equals(this->use_gpu_fences_for_overlay_planes, other_struct.use_gpu_fences_for_overlay_planes))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace gpu

namespace mojo {


template <>
struct  StructTraits<::gpu::mojom::blink::GpuPreferences::DataView,
                                         ::gpu::mojom::blink::GpuPreferencesPtr> {
  static bool IsNull(const ::gpu::mojom::blink::GpuPreferencesPtr& input) { return !input; }
  static void SetToNull(::gpu::mojom::blink::GpuPreferencesPtr* output) { output->reset(); }

  static decltype(::gpu::mojom::blink::GpuPreferences::single_process) single_process(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->single_process;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::in_process_gpu) in_process_gpu(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->in_process_gpu;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::disable_accelerated_video_decode) disable_accelerated_video_decode(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->disable_accelerated_video_decode;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::disable_accelerated_video_encode) disable_accelerated_video_encode(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->disable_accelerated_video_encode;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::gpu_startup_dialog) gpu_startup_dialog(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->gpu_startup_dialog;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::disable_gpu_watchdog) disable_gpu_watchdog(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->disable_gpu_watchdog;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::gpu_sandbox_start_early) gpu_sandbox_start_early(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->gpu_sandbox_start_early;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::enable_accelerated_vpx_decode) enable_accelerated_vpx_decode(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->enable_accelerated_vpx_decode;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::enable_low_latency_dxva) enable_low_latency_dxva(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->enable_low_latency_dxva;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::enable_zero_copy_dxgi_video) enable_zero_copy_dxgi_video(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->enable_zero_copy_dxgi_video;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::enable_nv12_dxgi_video) enable_nv12_dxgi_video(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->enable_nv12_dxgi_video;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::enable_media_foundation_vea_on_windows7) enable_media_foundation_vea_on_windows7(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->enable_media_foundation_vea_on_windows7;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::disable_software_rasterizer) disable_software_rasterizer(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->disable_software_rasterizer;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::log_gpu_control_list_decisions) log_gpu_control_list_decisions(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->log_gpu_control_list_decisions;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::compile_shader_always_succeeds) compile_shader_always_succeeds(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->compile_shader_always_succeeds;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::disable_gl_error_limit) disable_gl_error_limit(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->disable_gl_error_limit;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::disable_glsl_translator) disable_glsl_translator(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->disable_glsl_translator;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::disable_shader_name_hashing) disable_shader_name_hashing(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->disable_shader_name_hashing;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::enable_gpu_command_logging) enable_gpu_command_logging(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->enable_gpu_command_logging;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::enable_gpu_debugging) enable_gpu_debugging(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->enable_gpu_debugging;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::enable_gpu_service_logging_gpu) enable_gpu_service_logging_gpu(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->enable_gpu_service_logging_gpu;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::enable_gpu_driver_debug_logging) enable_gpu_driver_debug_logging(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->enable_gpu_driver_debug_logging;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::disable_gpu_program_cache) disable_gpu_program_cache(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->disable_gpu_program_cache;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::enforce_gl_minimums) enforce_gl_minimums(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->enforce_gl_minimums;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::force_gpu_mem_available) force_gpu_mem_available(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->force_gpu_mem_available;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::gpu_program_cache_size) gpu_program_cache_size(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->gpu_program_cache_size;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::disable_gpu_shader_disk_cache) disable_gpu_shader_disk_cache(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->disable_gpu_shader_disk_cache;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::enable_threaded_texture_mailboxes) enable_threaded_texture_mailboxes(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->enable_threaded_texture_mailboxes;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::gl_shader_interm_output) gl_shader_interm_output(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->gl_shader_interm_output;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::emulate_shader_precision) emulate_shader_precision(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->emulate_shader_precision;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::enable_gpu_service_logging) enable_gpu_service_logging(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->enable_gpu_service_logging;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::enable_gpu_service_tracing) enable_gpu_service_tracing(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->enable_gpu_service_tracing;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::use_passthrough_cmd_decoder) use_passthrough_cmd_decoder(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->use_passthrough_cmd_decoder;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::disable_biplanar_gpu_memory_buffers_for_video_frames) disable_biplanar_gpu_memory_buffers_for_video_frames(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->disable_biplanar_gpu_memory_buffers_for_video_frames;
  }

  static const decltype(::gpu::mojom::blink::GpuPreferences::texture_target_exception_list)& texture_target_exception_list(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->texture_target_exception_list;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::disable_gpu_driver_bug_workarounds) disable_gpu_driver_bug_workarounds(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->disable_gpu_driver_bug_workarounds;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::ignore_gpu_blacklist) ignore_gpu_blacklist(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->ignore_gpu_blacklist;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::enable_oop_rasterization) enable_oop_rasterization(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->enable_oop_rasterization;
  }

  static decltype(::gpu::mojom::blink::GpuPreferences::use_gpu_fences_for_overlay_planes) use_gpu_fences_for_overlay_planes(
      const ::gpu::mojom::blink::GpuPreferencesPtr& input) {
    return input->use_gpu_fences_for_overlay_planes;
  }

  static bool Read(::gpu::mojom::blink::GpuPreferences::DataView input, ::gpu::mojom::blink::GpuPreferencesPtr* output);
};

}  // namespace mojo

#endif  // GPU_IPC_COMMON_GPU_PREFERENCES_MOJOM_BLINK_H_