// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_AUTOPLAY_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_AUTOPLAY_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/autoplay.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared.h"

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
// Interface base classes. They are used for type safety check.
class AutoplayConfigurationClientInterfaceBase {};

using AutoplayConfigurationClientPtrDataView =
    mojo::InterfacePtrDataView<AutoplayConfigurationClientInterfaceBase>;
using AutoplayConfigurationClientRequestDataView =
    mojo::InterfaceRequestDataView<AutoplayConfigurationClientInterfaceBase>;
using AutoplayConfigurationClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AutoplayConfigurationClientInterfaceBase>;
using AutoplayConfigurationClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AutoplayConfigurationClientInterfaceBase>;
class AutoplayConfigurationClient_AddAutoplayFlags_ParamsDataView {
 public:
  AutoplayConfigurationClient_AddAutoplayFlags_ParamsDataView() {}

  AutoplayConfigurationClient_AddAutoplayFlags_ParamsDataView(
      internal::AutoplayConfigurationClient_AddAutoplayFlags_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  int32_t flags() const {
    return data_->flags;
  }
 private:
  internal::AutoplayConfigurationClient_AddAutoplayFlags_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace blink {
namespace mojom {

inline void AutoplayConfigurationClient_AddAutoplayFlags_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_AUTOPLAY_MOJOM_SHARED_H_
