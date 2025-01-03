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

#include "gpu/ipc/common/gpu_preferences.mojom.h"

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

#include "gpu/ipc/common/gpu_preferences.mojom-shared-message-ids.h"
#include "gpu/ipc/common/gpu_preferences_struct_traits.h"
#include "ui/gfx/mojo/buffer_types_struct_traits.h"
namespace gpu {
namespace mojom {
GpuPreferences::GpuPreferences()
    : single_process(),
      in_process_gpu(),
      disable_accelerated_video_decode(),
      disable_accelerated_video_encode(),
      gpu_startup_dialog(),
      disable_gpu_watchdog(),
      gpu_sandbox_start_early(),
      enable_accelerated_vpx_decode(),
      enable_low_latency_dxva(),
      enable_zero_copy_dxgi_video(),
      enable_nv12_dxgi_video(),
      enable_media_foundation_vea_on_windows7(),
      disable_software_rasterizer(),
      log_gpu_control_list_decisions(),
      compile_shader_always_succeeds(),
      disable_gl_error_limit(),
      disable_glsl_translator(),
      disable_shader_name_hashing(),
      enable_gpu_command_logging(),
      enable_gpu_debugging(),
      enable_gpu_service_logging_gpu(),
      enable_gpu_driver_debug_logging(),
      disable_gpu_program_cache(),
      enforce_gl_minimums(),
      force_gpu_mem_available(),
      gpu_program_cache_size(),
      disable_gpu_shader_disk_cache(),
      enable_threaded_texture_mailboxes(),
      gl_shader_interm_output(),
      emulate_shader_precision(),
      enable_gpu_service_logging(),
      enable_gpu_service_tracing(),
      use_passthrough_cmd_decoder(),
      disable_biplanar_gpu_memory_buffers_for_video_frames(),
      texture_target_exception_list(),
      disable_gpu_driver_bug_workarounds(),
      ignore_gpu_blacklist(),
      enable_oop_rasterization(),
      use_gpu_fences_for_overlay_planes() {}

GpuPreferences::GpuPreferences(
    bool single_process_in,
    bool in_process_gpu_in,
    bool disable_accelerated_video_decode_in,
    bool disable_accelerated_video_encode_in,
    bool gpu_startup_dialog_in,
    bool disable_gpu_watchdog_in,
    bool gpu_sandbox_start_early_in,
    gpu::GpuPreferences::VpxDecodeVendors enable_accelerated_vpx_decode_in,
    bool enable_low_latency_dxva_in,
    bool enable_zero_copy_dxgi_video_in,
    bool enable_nv12_dxgi_video_in,
    bool enable_media_foundation_vea_on_windows7_in,
    bool disable_software_rasterizer_in,
    bool log_gpu_control_list_decisions_in,
    bool compile_shader_always_succeeds_in,
    bool disable_gl_error_limit_in,
    bool disable_glsl_translator_in,
    bool disable_shader_name_hashing_in,
    bool enable_gpu_command_logging_in,
    bool enable_gpu_debugging_in,
    bool enable_gpu_service_logging_gpu_in,
    bool enable_gpu_driver_debug_logging_in,
    bool disable_gpu_program_cache_in,
    bool enforce_gl_minimums_in,
    uint32_t force_gpu_mem_available_in,
    uint32_t gpu_program_cache_size_in,
    bool disable_gpu_shader_disk_cache_in,
    bool enable_threaded_texture_mailboxes_in,
    bool gl_shader_interm_output_in,
    bool emulate_shader_precision_in,
    bool enable_gpu_service_logging_in,
    bool enable_gpu_service_tracing_in,
    bool use_passthrough_cmd_decoder_in,
    bool disable_biplanar_gpu_memory_buffers_for_video_frames_in,
    const std::vector<gfx::BufferUsageAndFormat>& texture_target_exception_list_in,
    bool disable_gpu_driver_bug_workarounds_in,
    bool ignore_gpu_blacklist_in,
    bool enable_oop_rasterization_in,
    bool use_gpu_fences_for_overlay_planes_in)
    : single_process(std::move(single_process_in)),
      in_process_gpu(std::move(in_process_gpu_in)),
      disable_accelerated_video_decode(std::move(disable_accelerated_video_decode_in)),
      disable_accelerated_video_encode(std::move(disable_accelerated_video_encode_in)),
      gpu_startup_dialog(std::move(gpu_startup_dialog_in)),
      disable_gpu_watchdog(std::move(disable_gpu_watchdog_in)),
      gpu_sandbox_start_early(std::move(gpu_sandbox_start_early_in)),
      enable_accelerated_vpx_decode(std::move(enable_accelerated_vpx_decode_in)),
      enable_low_latency_dxva(std::move(enable_low_latency_dxva_in)),
      enable_zero_copy_dxgi_video(std::move(enable_zero_copy_dxgi_video_in)),
      enable_nv12_dxgi_video(std::move(enable_nv12_dxgi_video_in)),
      enable_media_foundation_vea_on_windows7(std::move(enable_media_foundation_vea_on_windows7_in)),
      disable_software_rasterizer(std::move(disable_software_rasterizer_in)),
      log_gpu_control_list_decisions(std::move(log_gpu_control_list_decisions_in)),
      compile_shader_always_succeeds(std::move(compile_shader_always_succeeds_in)),
      disable_gl_error_limit(std::move(disable_gl_error_limit_in)),
      disable_glsl_translator(std::move(disable_glsl_translator_in)),
      disable_shader_name_hashing(std::move(disable_shader_name_hashing_in)),
      enable_gpu_command_logging(std::move(enable_gpu_command_logging_in)),
      enable_gpu_debugging(std::move(enable_gpu_debugging_in)),
      enable_gpu_service_logging_gpu(std::move(enable_gpu_service_logging_gpu_in)),
      enable_gpu_driver_debug_logging(std::move(enable_gpu_driver_debug_logging_in)),
      disable_gpu_program_cache(std::move(disable_gpu_program_cache_in)),
      enforce_gl_minimums(std::move(enforce_gl_minimums_in)),
      force_gpu_mem_available(std::move(force_gpu_mem_available_in)),
      gpu_program_cache_size(std::move(gpu_program_cache_size_in)),
      disable_gpu_shader_disk_cache(std::move(disable_gpu_shader_disk_cache_in)),
      enable_threaded_texture_mailboxes(std::move(enable_threaded_texture_mailboxes_in)),
      gl_shader_interm_output(std::move(gl_shader_interm_output_in)),
      emulate_shader_precision(std::move(emulate_shader_precision_in)),
      enable_gpu_service_logging(std::move(enable_gpu_service_logging_in)),
      enable_gpu_service_tracing(std::move(enable_gpu_service_tracing_in)),
      use_passthrough_cmd_decoder(std::move(use_passthrough_cmd_decoder_in)),
      disable_biplanar_gpu_memory_buffers_for_video_frames(std::move(disable_biplanar_gpu_memory_buffers_for_video_frames_in)),
      texture_target_exception_list(std::move(texture_target_exception_list_in)),
      disable_gpu_driver_bug_workarounds(std::move(disable_gpu_driver_bug_workarounds_in)),
      ignore_gpu_blacklist(std::move(ignore_gpu_blacklist_in)),
      enable_oop_rasterization(std::move(enable_oop_rasterization_in)),
      use_gpu_fences_for_overlay_planes(std::move(use_gpu_fences_for_overlay_planes_in)) {}

GpuPreferences::~GpuPreferences() = default;

bool GpuPreferences::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace gpu

namespace mojo {


// static
bool StructTraits<::gpu::mojom::GpuPreferences::DataView, ::gpu::mojom::GpuPreferencesPtr>::Read(
    ::gpu::mojom::GpuPreferences::DataView input,
    ::gpu::mojom::GpuPreferencesPtr* output) {
  bool success = true;
  ::gpu::mojom::GpuPreferencesPtr result(::gpu::mojom::GpuPreferences::New());
  
      result->single_process = input.single_process();
      result->in_process_gpu = input.in_process_gpu();
      result->disable_accelerated_video_decode = input.disable_accelerated_video_decode();
      result->disable_accelerated_video_encode = input.disable_accelerated_video_encode();
      result->gpu_startup_dialog = input.gpu_startup_dialog();
      result->disable_gpu_watchdog = input.disable_gpu_watchdog();
      result->gpu_sandbox_start_early = input.gpu_sandbox_start_early();
      if (!input.ReadEnableAcceleratedVpxDecode(&result->enable_accelerated_vpx_decode))
        success = false;
      result->enable_low_latency_dxva = input.enable_low_latency_dxva();
      result->enable_zero_copy_dxgi_video = input.enable_zero_copy_dxgi_video();
      result->enable_nv12_dxgi_video = input.enable_nv12_dxgi_video();
      result->enable_media_foundation_vea_on_windows7 = input.enable_media_foundation_vea_on_windows7();
      result->disable_software_rasterizer = input.disable_software_rasterizer();
      result->log_gpu_control_list_decisions = input.log_gpu_control_list_decisions();
      result->compile_shader_always_succeeds = input.compile_shader_always_succeeds();
      result->disable_gl_error_limit = input.disable_gl_error_limit();
      result->disable_glsl_translator = input.disable_glsl_translator();
      result->disable_shader_name_hashing = input.disable_shader_name_hashing();
      result->enable_gpu_command_logging = input.enable_gpu_command_logging();
      result->enable_gpu_debugging = input.enable_gpu_debugging();
      result->enable_gpu_service_logging_gpu = input.enable_gpu_service_logging_gpu();
      result->enable_gpu_driver_debug_logging = input.enable_gpu_driver_debug_logging();
      result->disable_gpu_program_cache = input.disable_gpu_program_cache();
      result->enforce_gl_minimums = input.enforce_gl_minimums();
      result->force_gpu_mem_available = input.force_gpu_mem_available();
      result->gpu_program_cache_size = input.gpu_program_cache_size();
      result->disable_gpu_shader_disk_cache = input.disable_gpu_shader_disk_cache();
      result->enable_threaded_texture_mailboxes = input.enable_threaded_texture_mailboxes();
      result->gl_shader_interm_output = input.gl_shader_interm_output();
      result->emulate_shader_precision = input.emulate_shader_precision();
      result->enable_gpu_service_logging = input.enable_gpu_service_logging();
      result->enable_gpu_service_tracing = input.enable_gpu_service_tracing();
      result->use_passthrough_cmd_decoder = input.use_passthrough_cmd_decoder();
      result->disable_biplanar_gpu_memory_buffers_for_video_frames = input.disable_biplanar_gpu_memory_buffers_for_video_frames();
      if (!input.ReadTextureTargetExceptionList(&result->texture_target_exception_list))
        success = false;
      result->disable_gpu_driver_bug_workarounds = input.disable_gpu_driver_bug_workarounds();
      result->ignore_gpu_blacklist = input.ignore_gpu_blacklist();
      result->enable_oop_rasterization = input.enable_oop_rasterization();
      result->use_gpu_fences_for_overlay_planes = input.use_gpu_fences_for_overlay_planes();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif