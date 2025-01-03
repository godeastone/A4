// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_TYPES_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_TYPES_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/quota/quota_types.mojom-shared.h"

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
#include "third_party/blink/renderer/platform/platform_export.h"


namespace WTF {
struct blink_mojom_internal_StorageType_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::StorageType& value) {
    using utype = std::underlying_type<::blink::mojom::StorageType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::StorageType& left, const ::blink::mojom::StorageType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::blink::mojom::StorageType> {
  using Hash = blink_mojom_internal_StorageType_DataHashFn;
};

template <>
struct HashTraits<::blink::mojom::StorageType>
    : public GenericHashTraits<::blink::mojom::StorageType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::StorageType& value) {
    return value == static_cast<::blink::mojom::StorageType>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::StorageType& slot, bool) {
    slot = static_cast<::blink::mojom::StorageType>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::StorageType& value) {
    return value == static_cast<::blink::mojom::StorageType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_QuotaStatusCode_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::QuotaStatusCode& value) {
    using utype = std::underlying_type<::blink::mojom::QuotaStatusCode>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::QuotaStatusCode& left, const ::blink::mojom::QuotaStatusCode& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::blink::mojom::QuotaStatusCode> {
  using Hash = blink_mojom_internal_QuotaStatusCode_DataHashFn;
};

template <>
struct HashTraits<::blink::mojom::QuotaStatusCode>
    : public GenericHashTraits<::blink::mojom::QuotaStatusCode> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::QuotaStatusCode& value) {
    return value == static_cast<::blink::mojom::QuotaStatusCode>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::QuotaStatusCode& slot, bool) {
    slot = static_cast<::blink::mojom::QuotaStatusCode>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::QuotaStatusCode& value) {
    return value == static_cast<::blink::mojom::QuotaStatusCode>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using StorageType = StorageType;  // Alias for definition in the parent namespace.
using QuotaStatusCode = QuotaStatusCode;  // Alias for definition in the parent namespace.





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_TYPES_MOJOM_BLINK_H_