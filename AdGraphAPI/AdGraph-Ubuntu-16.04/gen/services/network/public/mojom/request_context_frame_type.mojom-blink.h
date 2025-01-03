// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_REQUEST_CONTEXT_FRAME_TYPE_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_REQUEST_CONTEXT_FRAME_TYPE_MOJOM_BLINK_H_

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
#include "services/network/public/mojom/request_context_frame_type.mojom-shared.h"

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
#include "third_party/blink/public/platform/web_common.h"


namespace WTF {
struct network_mojom_internal_RequestContextFrameType_DataHashFn {
  static unsigned GetHash(const ::network::mojom::RequestContextFrameType& value) {
    using utype = std::underlying_type<::network::mojom::RequestContextFrameType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::network::mojom::RequestContextFrameType& left, const ::network::mojom::RequestContextFrameType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::network::mojom::RequestContextFrameType> {
  using Hash = network_mojom_internal_RequestContextFrameType_DataHashFn;
};

template <>
struct HashTraits<::network::mojom::RequestContextFrameType>
    : public GenericHashTraits<::network::mojom::RequestContextFrameType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::network::mojom::RequestContextFrameType& value) {
    return value == static_cast<::network::mojom::RequestContextFrameType>(-1000000);
  }
  static void ConstructDeletedValue(::network::mojom::RequestContextFrameType& slot, bool) {
    slot = static_cast<::network::mojom::RequestContextFrameType>(-1000001);
  }
  static bool IsDeletedValue(const ::network::mojom::RequestContextFrameType& value) {
    return value == static_cast<::network::mojom::RequestContextFrameType>(-1000001);
  }
};
}  // namespace WTF


namespace network {
namespace mojom {
namespace blink {
using RequestContextFrameType = RequestContextFrameType;  // Alias for definition in the parent namespace.





}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_REQUEST_CONTEXT_FRAME_TYPE_MOJOM_BLINK_H_