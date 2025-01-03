// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_IME_CHROMEOS_PUBLIC_INTERFACES_IME_KEYSET_MOJOM_SHARED_H_
#define UI_BASE_IME_CHROMEOS_PUBLIC_INTERFACES_IME_KEYSET_MOJOM_SHARED_H_

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
#include "ui/base/ime/chromeos/public/interfaces/ime_keyset.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace chromeos {
namespace input_method {
namespace mojom {


}  // namespace mojom
}  // namespace input_method
}  // namespace chromeos

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace chromeos {
namespace input_method {
namespace mojom {

enum class ImeKeyset : int32_t {
  kNone = 0,
  kEmoji = 1,
  kHandwriting = 2,
  kVoice = 3,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, ImeKeyset value) {
  switch(value) {
    case ImeKeyset::kNone:
      return os << "ImeKeyset::kNone";
    case ImeKeyset::kEmoji:
      return os << "ImeKeyset::kEmoji";
    case ImeKeyset::kHandwriting:
      return os << "ImeKeyset::kHandwriting";
    case ImeKeyset::kVoice:
      return os << "ImeKeyset::kVoice";
    default:
      return os << "Unknown ImeKeyset value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ImeKeyset value) {
  return internal::ImeKeyset_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace input_method
}  // namespace chromeos

namespace std {

template <>
struct hash<::chromeos::input_method::mojom::ImeKeyset>
    : public mojo::internal::EnumHashImpl<::chromeos::input_method::mojom::ImeKeyset> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::chromeos::input_method::mojom::ImeKeyset, ::chromeos::input_method::mojom::ImeKeyset> {
  static ::chromeos::input_method::mojom::ImeKeyset ToMojom(::chromeos::input_method::mojom::ImeKeyset input) { return input; }
  static bool FromMojom(::chromeos::input_method::mojom::ImeKeyset input, ::chromeos::input_method::mojom::ImeKeyset* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::chromeos::input_method::mojom::ImeKeyset, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::chromeos::input_method::mojom::ImeKeyset, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::chromeos::input_method::mojom::ImeKeyset>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace chromeos {
namespace input_method {
namespace mojom {


}  // namespace mojom
}  // namespace input_method
}  // namespace chromeos

#endif  // UI_BASE_IME_CHROMEOS_PUBLIC_INTERFACES_IME_KEYSET_MOJOM_SHARED_H_
