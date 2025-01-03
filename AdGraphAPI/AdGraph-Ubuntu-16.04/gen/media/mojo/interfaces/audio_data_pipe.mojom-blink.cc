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

#include "media/mojo/interfaces/audio_data_pipe.mojom-blink.h"

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

#include "media/mojo/interfaces/audio_data_pipe.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
namespace media {
namespace mojom {
namespace blink {
AudioDataPipe::AudioDataPipe()
    : shared_memory(),
      socket() {}

AudioDataPipe::AudioDataPipe(
    mojo::ScopedSharedBufferHandle shared_memory_in,
    mojo::ScopedHandle socket_in)
    : shared_memory(std::move(shared_memory_in)),
      socket(std::move(socket_in)) {}

AudioDataPipe::~AudioDataPipe() = default;

bool AudioDataPipe::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {


// static
bool StructTraits<::media::mojom::blink::AudioDataPipe::DataView, ::media::mojom::blink::AudioDataPipePtr>::Read(
    ::media::mojom::blink::AudioDataPipe::DataView input,
    ::media::mojom::blink::AudioDataPipePtr* output) {
  bool success = true;
  ::media::mojom::blink::AudioDataPipePtr result(::media::mojom::blink::AudioDataPipe::New());
  
      result->shared_memory = input.TakeSharedMemory();
      result->socket = input.TakeSocket();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif