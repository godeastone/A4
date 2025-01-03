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

#include "services/ui/public/interfaces/event_matcher.mojom.h"

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

#include "services/ui/public/interfaces/event_matcher.mojom-shared-message-ids.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace ui {
namespace mojom {
KeyEventMatcher::KeyEventMatcher()
    : keyboard_code() {}

KeyEventMatcher::KeyEventMatcher(
    ::ui::mojom::KeyboardCode keyboard_code_in)
    : keyboard_code(std::move(keyboard_code_in)) {}

KeyEventMatcher::~KeyEventMatcher() = default;
size_t KeyEventMatcher::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->keyboard_code);
  return seed;
}

bool KeyEventMatcher::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PointerKindMatcher::PointerKindMatcher()
    : pointer_kind() {}

PointerKindMatcher::PointerKindMatcher(
    ::ui::mojom::PointerKind pointer_kind_in)
    : pointer_kind(std::move(pointer_kind_in)) {}

PointerKindMatcher::~PointerKindMatcher() = default;
size_t PointerKindMatcher::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->pointer_kind);
  return seed;
}

bool PointerKindMatcher::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PointerLocationMatcher::PointerLocationMatcher()
    : region() {}

PointerLocationMatcher::PointerLocationMatcher(
    const gfx::RectF& region_in)
    : region(std::move(region_in)) {}

PointerLocationMatcher::~PointerLocationMatcher() = default;

bool PointerLocationMatcher::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
EventTypeMatcher::EventTypeMatcher()
    : type() {}

EventTypeMatcher::EventTypeMatcher(
    ::ui::mojom::EventType type_in)
    : type(std::move(type_in)) {}

EventTypeMatcher::~EventTypeMatcher() = default;
size_t EventTypeMatcher::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->type);
  return seed;
}

bool EventTypeMatcher::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
EventFlagsMatcher::EventFlagsMatcher()
    : flags() {}

EventFlagsMatcher::EventFlagsMatcher(
    int32_t flags_in)
    : flags(std::move(flags_in)) {}

EventFlagsMatcher::~EventFlagsMatcher() = default;
size_t EventFlagsMatcher::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->flags);
  return seed;
}

bool EventFlagsMatcher::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
EventMatcher::EventMatcher()
    : accelerator_phase(),
      type_matcher(),
      flags_matcher(),
      ignore_flags_matcher(),
      key_matcher(),
      pointer_kind_matcher(),
      pointer_location_matcher() {}

EventMatcher::EventMatcher(
    ::ui::mojom::AcceleratorPhase accelerator_phase_in,
    EventTypeMatcherPtr type_matcher_in,
    EventFlagsMatcherPtr flags_matcher_in,
    EventFlagsMatcherPtr ignore_flags_matcher_in,
    KeyEventMatcherPtr key_matcher_in,
    PointerKindMatcherPtr pointer_kind_matcher_in,
    PointerLocationMatcherPtr pointer_location_matcher_in)
    : accelerator_phase(std::move(accelerator_phase_in)),
      type_matcher(std::move(type_matcher_in)),
      flags_matcher(std::move(flags_matcher_in)),
      ignore_flags_matcher(std::move(ignore_flags_matcher_in)),
      key_matcher(std::move(key_matcher_in)),
      pointer_kind_matcher(std::move(pointer_kind_matcher_in)),
      pointer_location_matcher(std::move(pointer_location_matcher_in)) {}

EventMatcher::~EventMatcher() = default;

bool EventMatcher::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace ui

namespace mojo {


// static
bool StructTraits<::ui::mojom::KeyEventMatcher::DataView, ::ui::mojom::KeyEventMatcherPtr>::Read(
    ::ui::mojom::KeyEventMatcher::DataView input,
    ::ui::mojom::KeyEventMatcherPtr* output) {
  bool success = true;
  ::ui::mojom::KeyEventMatcherPtr result(::ui::mojom::KeyEventMatcher::New());
  
      if (!input.ReadKeyboardCode(&result->keyboard_code))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::PointerKindMatcher::DataView, ::ui::mojom::PointerKindMatcherPtr>::Read(
    ::ui::mojom::PointerKindMatcher::DataView input,
    ::ui::mojom::PointerKindMatcherPtr* output) {
  bool success = true;
  ::ui::mojom::PointerKindMatcherPtr result(::ui::mojom::PointerKindMatcher::New());
  
      if (!input.ReadPointerKind(&result->pointer_kind))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::PointerLocationMatcher::DataView, ::ui::mojom::PointerLocationMatcherPtr>::Read(
    ::ui::mojom::PointerLocationMatcher::DataView input,
    ::ui::mojom::PointerLocationMatcherPtr* output) {
  bool success = true;
  ::ui::mojom::PointerLocationMatcherPtr result(::ui::mojom::PointerLocationMatcher::New());
  
      if (!input.ReadRegion(&result->region))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::EventTypeMatcher::DataView, ::ui::mojom::EventTypeMatcherPtr>::Read(
    ::ui::mojom::EventTypeMatcher::DataView input,
    ::ui::mojom::EventTypeMatcherPtr* output) {
  bool success = true;
  ::ui::mojom::EventTypeMatcherPtr result(::ui::mojom::EventTypeMatcher::New());
  
      if (!input.ReadType(&result->type))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::EventFlagsMatcher::DataView, ::ui::mojom::EventFlagsMatcherPtr>::Read(
    ::ui::mojom::EventFlagsMatcher::DataView input,
    ::ui::mojom::EventFlagsMatcherPtr* output) {
  bool success = true;
  ::ui::mojom::EventFlagsMatcherPtr result(::ui::mojom::EventFlagsMatcher::New());
  
      result->flags = input.flags();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::EventMatcher::DataView, ::ui::mojom::EventMatcherPtr>::Read(
    ::ui::mojom::EventMatcher::DataView input,
    ::ui::mojom::EventMatcherPtr* output) {
  bool success = true;
  ::ui::mojom::EventMatcherPtr result(::ui::mojom::EventMatcher::New());
  
      if (!input.ReadAcceleratorPhase(&result->accelerator_phase))
        success = false;
      if (!input.ReadTypeMatcher(&result->type_matcher))
        success = false;
      if (!input.ReadFlagsMatcher(&result->flags_matcher))
        success = false;
      if (!input.ReadIgnoreFlagsMatcher(&result->ignore_flags_matcher))
        success = false;
      if (!input.ReadKeyMatcher(&result->key_matcher))
        success = false;
      if (!input.ReadPointerKindMatcher(&result->pointer_kind_matcher))
        success = false;
      if (!input.ReadPointerLocationMatcher(&result->pointer_location_matcher))
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