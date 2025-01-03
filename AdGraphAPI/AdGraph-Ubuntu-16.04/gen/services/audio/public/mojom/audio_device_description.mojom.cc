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

#include "services/audio/public/mojom/audio_device_description.mojom.h"

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

#include "services/audio/public/mojom/audio_device_description.mojom-shared-message-ids.h"
namespace audio {
namespace mojom {
AudioDeviceDescription::AudioDeviceDescription()
    : device_name(),
      unique_id(),
      group_id() {}

AudioDeviceDescription::AudioDeviceDescription(
    const std::string& device_name_in,
    const std::string& unique_id_in,
    const std::string& group_id_in)
    : device_name(std::move(device_name_in)),
      unique_id(std::move(unique_id_in)),
      group_id(std::move(group_id_in)) {}

AudioDeviceDescription::~AudioDeviceDescription() = default;

bool AudioDeviceDescription::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace audio

namespace mojo {


// static
bool StructTraits<::audio::mojom::AudioDeviceDescription::DataView, ::audio::mojom::AudioDeviceDescriptionPtr>::Read(
    ::audio::mojom::AudioDeviceDescription::DataView input,
    ::audio::mojom::AudioDeviceDescriptionPtr* output) {
  bool success = true;
  ::audio::mojom::AudioDeviceDescriptionPtr result(::audio::mojom::AudioDeviceDescription::New());
  
      if (!input.ReadDeviceName(&result->device_name))
        success = false;
      if (!input.ReadUniqueId(&result->unique_id))
        success = false;
      if (!input.ReadGroupId(&result->group_id))
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