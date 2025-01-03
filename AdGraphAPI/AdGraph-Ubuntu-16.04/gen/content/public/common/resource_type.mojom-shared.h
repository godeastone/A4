// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_RESOURCE_TYPE_MOJOM_SHARED_H_
#define CONTENT_PUBLIC_COMMON_RESOURCE_TYPE_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "content/public/common/resource_type.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace content {
namespace mojom {


}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {

enum class ResourceType : int32_t {
  RESOURCE_TYPE_MAIN_FRAME = 0,
  RESOURCE_TYPE_SUB_FRAME = 1,
  RESOURCE_TYPE_STYLESHEET = 2,
  RESOURCE_TYPE_SCRIPT = 3,
  RESOURCE_TYPE_IMAGE = 4,
  RESOURCE_TYPE_FONT_RESOURCE = 5,
  RESOURCE_TYPE_SUB_RESOURCE = 6,
  RESOURCE_TYPE_OBJECT = 7,
  RESOURCE_TYPE_MEDIA = 8,
  RESOURCE_TYPE_WORKER = 9,
  RESOURCE_TYPE_SHARED_WORKER = 10,
  RESOURCE_TYPE_PREFETCH = 11,
  RESOURCE_TYPE_FAVICON = 12,
  RESOURCE_TYPE_XHR = 13,
  RESOURCE_TYPE_PING = 14,
  RESOURCE_TYPE_SERVICE_WORKER = 15,
  RESOURCE_TYPE_CSP_REPORT = 16,
  RESOURCE_TYPE_PLUGIN_RESOURCE = 17,
  RESOURCE_TYPE_LAST_TYPE,
  kMinValue = 0,
  kMaxValue = 18,
};

inline std::ostream& operator<<(std::ostream& os, ResourceType value) {
  switch(value) {
    case ResourceType::RESOURCE_TYPE_MAIN_FRAME:
      return os << "ResourceType::RESOURCE_TYPE_MAIN_FRAME";
    case ResourceType::RESOURCE_TYPE_SUB_FRAME:
      return os << "ResourceType::RESOURCE_TYPE_SUB_FRAME";
    case ResourceType::RESOURCE_TYPE_STYLESHEET:
      return os << "ResourceType::RESOURCE_TYPE_STYLESHEET";
    case ResourceType::RESOURCE_TYPE_SCRIPT:
      return os << "ResourceType::RESOURCE_TYPE_SCRIPT";
    case ResourceType::RESOURCE_TYPE_IMAGE:
      return os << "ResourceType::RESOURCE_TYPE_IMAGE";
    case ResourceType::RESOURCE_TYPE_FONT_RESOURCE:
      return os << "ResourceType::RESOURCE_TYPE_FONT_RESOURCE";
    case ResourceType::RESOURCE_TYPE_SUB_RESOURCE:
      return os << "ResourceType::RESOURCE_TYPE_SUB_RESOURCE";
    case ResourceType::RESOURCE_TYPE_OBJECT:
      return os << "ResourceType::RESOURCE_TYPE_OBJECT";
    case ResourceType::RESOURCE_TYPE_MEDIA:
      return os << "ResourceType::RESOURCE_TYPE_MEDIA";
    case ResourceType::RESOURCE_TYPE_WORKER:
      return os << "ResourceType::RESOURCE_TYPE_WORKER";
    case ResourceType::RESOURCE_TYPE_SHARED_WORKER:
      return os << "ResourceType::RESOURCE_TYPE_SHARED_WORKER";
    case ResourceType::RESOURCE_TYPE_PREFETCH:
      return os << "ResourceType::RESOURCE_TYPE_PREFETCH";
    case ResourceType::RESOURCE_TYPE_FAVICON:
      return os << "ResourceType::RESOURCE_TYPE_FAVICON";
    case ResourceType::RESOURCE_TYPE_XHR:
      return os << "ResourceType::RESOURCE_TYPE_XHR";
    case ResourceType::RESOURCE_TYPE_PING:
      return os << "ResourceType::RESOURCE_TYPE_PING";
    case ResourceType::RESOURCE_TYPE_SERVICE_WORKER:
      return os << "ResourceType::RESOURCE_TYPE_SERVICE_WORKER";
    case ResourceType::RESOURCE_TYPE_CSP_REPORT:
      return os << "ResourceType::RESOURCE_TYPE_CSP_REPORT";
    case ResourceType::RESOURCE_TYPE_PLUGIN_RESOURCE:
      return os << "ResourceType::RESOURCE_TYPE_PLUGIN_RESOURCE";
    case ResourceType::RESOURCE_TYPE_LAST_TYPE:
      return os << "ResourceType::RESOURCE_TYPE_LAST_TYPE";
    default:
      return os << "Unknown ResourceType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ResourceType value) {
  return internal::ResourceType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace content

namespace std {

template <>
struct hash<::content::mojom::ResourceType>
    : public mojo::internal::EnumHashImpl<::content::mojom::ResourceType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::content::mojom::ResourceType, ::content::mojom::ResourceType> {
  static ::content::mojom::ResourceType ToMojom(::content::mojom::ResourceType input) { return input; }
  static bool FromMojom(::content::mojom::ResourceType input, ::content::mojom::ResourceType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::ResourceType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::content::mojom::ResourceType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::content::mojom::ResourceType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content {
namespace mojom {


}  // namespace mojom
}  // namespace content

#endif  // CONTENT_PUBLIC_COMMON_RESOURCE_TYPE_MOJOM_SHARED_H_
