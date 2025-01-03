// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_INSECURE_INPUT_INSECURE_INPUT_SERVICE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_INSECURE_INPUT_INSECURE_INPUT_SERVICE_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/modules/insecure_input/insecure_input_service.mojom-shared-internal.h"

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
class InsecureInputServiceInterfaceBase {};

using InsecureInputServicePtrDataView =
    mojo::InterfacePtrDataView<InsecureInputServiceInterfaceBase>;
using InsecureInputServiceRequestDataView =
    mojo::InterfaceRequestDataView<InsecureInputServiceInterfaceBase>;
using InsecureInputServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<InsecureInputServiceInterfaceBase>;
using InsecureInputServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<InsecureInputServiceInterfaceBase>;
class InsecureInputService_PasswordFieldVisibleInInsecureContext_ParamsDataView {
 public:
  InsecureInputService_PasswordFieldVisibleInInsecureContext_ParamsDataView() {}

  InsecureInputService_PasswordFieldVisibleInInsecureContext_ParamsDataView(
      internal::InsecureInputService_PasswordFieldVisibleInInsecureContext_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InsecureInputService_PasswordFieldVisibleInInsecureContext_Params_Data* data_ = nullptr;
};

class InsecureInputService_AllPasswordFieldsInInsecureContextInvisible_ParamsDataView {
 public:
  InsecureInputService_AllPasswordFieldsInInsecureContextInvisible_ParamsDataView() {}

  InsecureInputService_AllPasswordFieldsInInsecureContextInvisible_ParamsDataView(
      internal::InsecureInputService_AllPasswordFieldsInInsecureContextInvisible_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InsecureInputService_AllPasswordFieldsInInsecureContextInvisible_Params_Data* data_ = nullptr;
};

class InsecureInputService_DidEditFieldInInsecureContext_ParamsDataView {
 public:
  InsecureInputService_DidEditFieldInInsecureContext_ParamsDataView() {}

  InsecureInputService_DidEditFieldInInsecureContext_ParamsDataView(
      internal::InsecureInputService_DidEditFieldInInsecureContext_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::InsecureInputService_DidEditFieldInInsecureContext_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace blink {
namespace mojom {








}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_INSECURE_INPUT_INSECURE_INPUT_SERVICE_MOJOM_SHARED_H_
