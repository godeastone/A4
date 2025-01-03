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

#include "ui/latency/mojo/latency_info.mojom-blink.h"

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

#include "ui/latency/mojo/latency_info.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
namespace ui {
namespace mojom {
namespace blink {
LatencyComponentId::LatencyComponentId()
    : type(),
      id() {}

LatencyComponentId::LatencyComponentId(
    LatencyComponentType type_in,
    int64_t id_in)
    : type(std::move(type_in)),
      id(std::move(id_in)) {}

LatencyComponentId::~LatencyComponentId() = default;
size_t LatencyComponentId::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->type);
  seed = mojo::internal::WTFHash(seed, this->id);
  return seed;
}

bool LatencyComponentId::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
LatencyComponent::LatencyComponent()
    : event_time(),
      event_count(),
      first_event_time(),
      last_event_time() {}

LatencyComponent::LatencyComponent(
    ::mojo_base::mojom::blink::TimeTicksPtr event_time_in,
    uint32_t event_count_in,
    ::mojo_base::mojom::blink::TimeTicksPtr first_event_time_in,
    ::mojo_base::mojom::blink::TimeTicksPtr last_event_time_in)
    : event_time(std::move(event_time_in)),
      event_count(std::move(event_count_in)),
      first_event_time(std::move(first_event_time_in)),
      last_event_time(std::move(last_event_time_in)) {}

LatencyComponent::~LatencyComponent() = default;
size_t LatencyComponent::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->event_time);
  seed = mojo::internal::WTFHash(seed, this->event_count);
  seed = mojo::internal::WTFHash(seed, this->first_event_time);
  seed = mojo::internal::WTFHash(seed, this->last_event_time);
  return seed;
}

bool LatencyComponent::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
LatencyComponentPair::LatencyComponentPair()
    : key(),
      value() {}

LatencyComponentPair::LatencyComponentPair(
    LatencyComponentIdPtr key_in,
    LatencyComponentPtr value_in)
    : key(std::move(key_in)),
      value(std::move(value_in)) {}

LatencyComponentPair::~LatencyComponentPair() = default;
size_t LatencyComponentPair::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->key);
  seed = mojo::internal::WTFHash(seed, this->value);
  return seed;
}

bool LatencyComponentPair::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
LatencyInfo::LatencyInfo()
    : trace_name(),
      latency_components(),
      trace_id(),
      snapshots(),
      ukm_source_id(),
      coalesced(),
      began(),
      terminated(),
      source_event_type() {}

LatencyInfo::LatencyInfo(
    const WTF::String& trace_name_in,
    WTF::Vector<LatencyComponentPairPtr> latency_components_in,
    int64_t trace_id_in,
    const WTF::HashMap<int64_t, int64_t>& snapshots_in,
    int64_t ukm_source_id_in,
    bool coalesced_in,
    bool began_in,
    bool terminated_in,
    SourceEventType source_event_type_in)
    : trace_name(std::move(trace_name_in)),
      latency_components(std::move(latency_components_in)),
      trace_id(std::move(trace_id_in)),
      snapshots(std::move(snapshots_in)),
      ukm_source_id(std::move(ukm_source_id_in)),
      coalesced(std::move(coalesced_in)),
      began(std::move(began_in)),
      terminated(std::move(terminated_in)),
      source_event_type(std::move(source_event_type_in)) {}

LatencyInfo::~LatencyInfo() = default;

bool LatencyInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace ui

namespace mojo {


// static
bool StructTraits<::ui::mojom::blink::LatencyComponentId::DataView, ::ui::mojom::blink::LatencyComponentIdPtr>::Read(
    ::ui::mojom::blink::LatencyComponentId::DataView input,
    ::ui::mojom::blink::LatencyComponentIdPtr* output) {
  bool success = true;
  ::ui::mojom::blink::LatencyComponentIdPtr result(::ui::mojom::blink::LatencyComponentId::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      result->id = input.id();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::blink::LatencyComponent::DataView, ::ui::mojom::blink::LatencyComponentPtr>::Read(
    ::ui::mojom::blink::LatencyComponent::DataView input,
    ::ui::mojom::blink::LatencyComponentPtr* output) {
  bool success = true;
  ::ui::mojom::blink::LatencyComponentPtr result(::ui::mojom::blink::LatencyComponent::New());
  
      if (!input.ReadEventTime(&result->event_time))
        success = false;
      result->event_count = input.event_count();
      if (!input.ReadFirstEventTime(&result->first_event_time))
        success = false;
      if (!input.ReadLastEventTime(&result->last_event_time))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::blink::LatencyComponentPair::DataView, ::ui::mojom::blink::LatencyComponentPairPtr>::Read(
    ::ui::mojom::blink::LatencyComponentPair::DataView input,
    ::ui::mojom::blink::LatencyComponentPairPtr* output) {
  bool success = true;
  ::ui::mojom::blink::LatencyComponentPairPtr result(::ui::mojom::blink::LatencyComponentPair::New());
  
      if (!input.ReadKey(&result->key))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::blink::LatencyInfo::DataView, ::ui::mojom::blink::LatencyInfoPtr>::Read(
    ::ui::mojom::blink::LatencyInfo::DataView input,
    ::ui::mojom::blink::LatencyInfoPtr* output) {
  bool success = true;
  ::ui::mojom::blink::LatencyInfoPtr result(::ui::mojom::blink::LatencyInfo::New());
  
      if (!input.ReadTraceName(&result->trace_name))
        success = false;
      if (!input.ReadLatencyComponents(&result->latency_components))
        success = false;
      result->trace_id = input.trace_id();
      if (!input.ReadSnapshots(&result->snapshots))
        success = false;
      result->ukm_source_id = input.ukm_source_id();
      result->coalesced = input.coalesced();
      result->began = input.began();
      result->terminated = input.terminated();
      if (!input.ReadSourceEventType(&result->source_event_type))
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