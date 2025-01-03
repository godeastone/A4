// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_WEB_CONSOLE_MESSAGE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_WEB_CONSOLE_MESSAGE_MOJOM_SHARED_H_

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
#include "third_party/blink/public/web/console_message.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {

enum class ConsoleMessageLevel : int32_t {
  Verbose,
  Info,
  Warning,
  Error,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, ConsoleMessageLevel value) {
  switch(value) {
    case ConsoleMessageLevel::Verbose:
      return os << "ConsoleMessageLevel::Verbose";
    case ConsoleMessageLevel::Info:
      return os << "ConsoleMessageLevel::Info";
    case ConsoleMessageLevel::Warning:
      return os << "ConsoleMessageLevel::Warning";
    case ConsoleMessageLevel::Error:
      return os << "ConsoleMessageLevel::Error";
    default:
      return os << "Unknown ConsoleMessageLevel value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ConsoleMessageLevel value) {
  return internal::ConsoleMessageLevel_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::ConsoleMessageLevel>
    : public mojo::internal::EnumHashImpl<::blink::mojom::ConsoleMessageLevel> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::ConsoleMessageLevel, ::blink::mojom::ConsoleMessageLevel> {
  static ::blink::mojom::ConsoleMessageLevel ToMojom(::blink::mojom::ConsoleMessageLevel input) { return input; }
  static bool FromMojom(::blink::mojom::ConsoleMessageLevel input, ::blink::mojom::ConsoleMessageLevel* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ConsoleMessageLevel, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::ConsoleMessageLevel, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::ConsoleMessageLevel>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_WEB_CONSOLE_MESSAGE_MOJOM_SHARED_H_
