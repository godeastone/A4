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

#include "services/viz/public/interfaces/compositing/begin_frame_args.mojom-blink.h"

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

#include "services/viz/public/interfaces/compositing/begin_frame_args.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "ipc/ipc_message_utils.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
namespace viz {
namespace mojom {
namespace blink {
BeginFrameArgs::BeginFrameArgs()
    : frame_time(),
      deadline(),
      interval(),
      source_id(),
      sequence_number(),
      type(),
      on_critical_path(),
      animate_only() {}

BeginFrameArgs::BeginFrameArgs(
    ::mojo_base::mojom::blink::TimeTicksPtr frame_time_in,
    ::mojo_base::mojom::blink::TimeTicksPtr deadline_in,
    WTF::TimeDelta interval_in,
    uint64_t source_id_in,
    uint64_t sequence_number_in,
    BeginFrameArgsType type_in,
    bool on_critical_path_in,
    bool animate_only_in)
    : frame_time(std::move(frame_time_in)),
      deadline(std::move(deadline_in)),
      interval(std::move(interval_in)),
      source_id(std::move(source_id_in)),
      sequence_number(std::move(sequence_number_in)),
      type(std::move(type_in)),
      on_critical_path(std::move(on_critical_path_in)),
      animate_only(std::move(animate_only_in)) {}

BeginFrameArgs::~BeginFrameArgs() = default;

bool BeginFrameArgs::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
BeginFrameAck::BeginFrameAck()
    : source_id(),
      sequence_number(),
      has_damage() {}

BeginFrameAck::BeginFrameAck(
    uint64_t source_id_in,
    uint64_t sequence_number_in,
    bool has_damage_in)
    : source_id(std::move(source_id_in)),
      sequence_number(std::move(sequence_number_in)),
      has_damage(std::move(has_damage_in)) {}

BeginFrameAck::~BeginFrameAck() = default;

bool BeginFrameAck::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {


// static
bool StructTraits<::viz::mojom::blink::BeginFrameArgs::DataView, ::viz::mojom::blink::BeginFrameArgsPtr>::Read(
    ::viz::mojom::blink::BeginFrameArgs::DataView input,
    ::viz::mojom::blink::BeginFrameArgsPtr* output) {
  bool success = true;
  ::viz::mojom::blink::BeginFrameArgsPtr result(::viz::mojom::blink::BeginFrameArgs::New());
  
      if (!input.ReadFrameTime(&result->frame_time))
        success = false;
      if (!input.ReadDeadline(&result->deadline))
        success = false;
      if (!input.ReadInterval(&result->interval))
        success = false;
      result->source_id = input.source_id();
      result->sequence_number = input.sequence_number();
      if (!input.ReadType(&result->type))
        success = false;
      result->on_critical_path = input.on_critical_path();
      result->animate_only = input.animate_only();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::viz::mojom::blink::BeginFrameAck::DataView, ::viz::mojom::blink::BeginFrameAckPtr>::Read(
    ::viz::mojom::blink::BeginFrameAck::DataView input,
    ::viz::mojom::blink::BeginFrameAckPtr* output) {
  bool success = true;
  ::viz::mojom::blink::BeginFrameAckPtr result(::viz::mojom::blink::BeginFrameAck::New());
  
      result->source_id = input.source_id();
      result->sequence_number = input.sequence_number();
      result->has_damage = input.has_damage();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif