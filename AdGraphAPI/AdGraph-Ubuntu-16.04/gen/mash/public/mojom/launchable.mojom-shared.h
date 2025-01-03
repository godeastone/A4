// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MASH_PUBLIC_MOJOM_LAUNCHABLE_MOJOM_SHARED_H_
#define MASH_PUBLIC_MOJOM_LAUNCHABLE_MOJOM_SHARED_H_

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
#include "mash/public/mojom/launchable.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace mash {
namespace mojom {


}  // namespace mojom
}  // namespace mash

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace mash {
namespace mojom {

enum class LaunchMode : int32_t {
  DEFAULT,
  REUSE,
  MAKE_NEW,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, LaunchMode value) {
  switch(value) {
    case LaunchMode::DEFAULT:
      return os << "LaunchMode::DEFAULT";
    case LaunchMode::REUSE:
      return os << "LaunchMode::REUSE";
    case LaunchMode::MAKE_NEW:
      return os << "LaunchMode::MAKE_NEW";
    default:
      return os << "Unknown LaunchMode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(LaunchMode value) {
  return internal::LaunchMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class LaunchableInterfaceBase {};

using LaunchablePtrDataView =
    mojo::InterfacePtrDataView<LaunchableInterfaceBase>;
using LaunchableRequestDataView =
    mojo::InterfaceRequestDataView<LaunchableInterfaceBase>;
using LaunchableAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<LaunchableInterfaceBase>;
using LaunchableAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<LaunchableInterfaceBase>;
class Launchable_Launch_ParamsDataView {
 public:
  Launchable_Launch_ParamsDataView() {}

  Launchable_Launch_ParamsDataView(
      internal::Launchable_Launch_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t what() const {
    return data_->what;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHow(UserType* output) const {
    auto data_value = data_->how;
    return mojo::internal::Deserialize<::mash::mojom::LaunchMode>(
        data_value, output);
  }

  LaunchMode how() const {
    return static_cast<LaunchMode>(data_->how);
  }
 private:
  internal::Launchable_Launch_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace mash

namespace std {

template <>
struct hash<::mash::mojom::LaunchMode>
    : public mojo::internal::EnumHashImpl<::mash::mojom::LaunchMode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::mash::mojom::LaunchMode, ::mash::mojom::LaunchMode> {
  static ::mash::mojom::LaunchMode ToMojom(::mash::mojom::LaunchMode input) { return input; }
  static bool FromMojom(::mash::mojom::LaunchMode input, ::mash::mojom::LaunchMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mash::mojom::LaunchMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::mash::mojom::LaunchMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::mash::mojom::LaunchMode>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace mash {
namespace mojom {




}  // namespace mojom
}  // namespace mash

#endif  // MASH_PUBLIC_MOJOM_LAUNCHABLE_MOJOM_SHARED_H_
