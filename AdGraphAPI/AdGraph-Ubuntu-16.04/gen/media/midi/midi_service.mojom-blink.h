// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MIDI_MIDI_SERVICE_MOJOM_BLINK_H_
#define MEDIA_MIDI_MIDI_SERVICE_MOJOM_BLINK_H_

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
#include "media/midi/midi_service.mojom-shared.h"

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
struct midi_mojom_internal_Result_DataHashFn {
  static unsigned GetHash(const ::midi::mojom::Result& value) {
    using utype = std::underlying_type<::midi::mojom::Result>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::midi::mojom::Result& left, const ::midi::mojom::Result& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::midi::mojom::Result> {
  using Hash = midi_mojom_internal_Result_DataHashFn;
};

template <>
struct HashTraits<::midi::mojom::Result>
    : public GenericHashTraits<::midi::mojom::Result> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::midi::mojom::Result& value) {
    return value == static_cast<::midi::mojom::Result>(-1000000);
  }
  static void ConstructDeletedValue(::midi::mojom::Result& slot, bool) {
    slot = static_cast<::midi::mojom::Result>(-1000001);
  }
  static bool IsDeletedValue(const ::midi::mojom::Result& value) {
    return value == static_cast<::midi::mojom::Result>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct midi_mojom_internal_PortState_DataHashFn {
  static unsigned GetHash(const ::midi::mojom::PortState& value) {
    using utype = std::underlying_type<::midi::mojom::PortState>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::midi::mojom::PortState& left, const ::midi::mojom::PortState& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::midi::mojom::PortState> {
  using Hash = midi_mojom_internal_PortState_DataHashFn;
};

template <>
struct HashTraits<::midi::mojom::PortState>
    : public GenericHashTraits<::midi::mojom::PortState> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::midi::mojom::PortState& value) {
    return value == static_cast<::midi::mojom::PortState>(-1000000);
  }
  static void ConstructDeletedValue(::midi::mojom::PortState& slot, bool) {
    slot = static_cast<::midi::mojom::PortState>(-1000001);
  }
  static bool IsDeletedValue(const ::midi::mojom::PortState& value) {
    return value == static_cast<::midi::mojom::PortState>(-1000001);
  }
};
}  // namespace WTF


namespace midi {
namespace mojom {
namespace blink {
using Result = Result;  // Alias for definition in the parent namespace.
using PortState = PortState;  // Alias for definition in the parent namespace.





}  // namespace blink
}  // namespace mojom
}  // namespace midi

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MIDI_MIDI_SERVICE_MOJOM_BLINK_H_