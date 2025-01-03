// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_OUTPUT_PROTECTION_MOJOM_SHARED_H_
#define SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_OUTPUT_PROTECTION_MOJOM_SHARED_H_

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
#include "services/ui/public/interfaces/display/output_protection.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace display {
namespace mojom {


}  // namespace mojom
}  // namespace display

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace display {
namespace mojom {
// Interface base classes. They are used for type safety check.
class OutputProtectionInterfaceBase {};

using OutputProtectionPtrDataView =
    mojo::InterfacePtrDataView<OutputProtectionInterfaceBase>;
using OutputProtectionRequestDataView =
    mojo::InterfaceRequestDataView<OutputProtectionInterfaceBase>;
using OutputProtectionAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<OutputProtectionInterfaceBase>;
using OutputProtectionAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<OutputProtectionInterfaceBase>;
class OutputProtection_QueryContentProtectionStatus_ParamsDataView {
 public:
  OutputProtection_QueryContentProtectionStatus_ParamsDataView() {}

  OutputProtection_QueryContentProtectionStatus_ParamsDataView(
      internal::OutputProtection_QueryContentProtectionStatus_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t display_id() const {
    return data_->display_id;
  }
 private:
  internal::OutputProtection_QueryContentProtectionStatus_Params_Data* data_ = nullptr;
};

class OutputProtection_QueryContentProtectionStatus_ResponseParamsDataView {
 public:
  OutputProtection_QueryContentProtectionStatus_ResponseParamsDataView() {}

  OutputProtection_QueryContentProtectionStatus_ResponseParamsDataView(
      internal::OutputProtection_QueryContentProtectionStatus_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  uint32_t link_mask() const {
    return data_->link_mask;
  }
  uint32_t protection_mask() const {
    return data_->protection_mask;
  }
 private:
  internal::OutputProtection_QueryContentProtectionStatus_ResponseParams_Data* data_ = nullptr;
};

class OutputProtection_SetContentProtection_ParamsDataView {
 public:
  OutputProtection_SetContentProtection_ParamsDataView() {}

  OutputProtection_SetContentProtection_ParamsDataView(
      internal::OutputProtection_SetContentProtection_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t display_id() const {
    return data_->display_id;
  }
  uint32_t desired_method_mask() const {
    return data_->desired_method_mask;
  }
 private:
  internal::OutputProtection_SetContentProtection_Params_Data* data_ = nullptr;
};

class OutputProtection_SetContentProtection_ResponseParamsDataView {
 public:
  OutputProtection_SetContentProtection_ResponseParamsDataView() {}

  OutputProtection_SetContentProtection_ResponseParamsDataView(
      internal::OutputProtection_SetContentProtection_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::OutputProtection_SetContentProtection_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace display

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace display {
namespace mojom {










}  // namespace mojom
}  // namespace display

#endif  // SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_OUTPUT_PROTECTION_MOJOM_SHARED_H_
