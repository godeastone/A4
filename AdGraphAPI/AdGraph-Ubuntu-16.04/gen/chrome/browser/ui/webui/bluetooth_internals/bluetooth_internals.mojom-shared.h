// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_BLUETOOTH_INTERNALS_BLUETOOTH_INTERNALS_MOJOM_SHARED_H_
#define CHROME_BROWSER_UI_WEBUI_BLUETOOTH_INTERNALS_BLUETOOTH_INTERNALS_MOJOM_SHARED_H_

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
#include "chrome/browser/ui/webui/bluetooth_internals/bluetooth_internals.mojom-shared-internal.h"
#include "device/bluetooth/public/mojom/adapter.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace mojom {


}  // namespace mojom

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace mojom {
// Interface base classes. They are used for type safety check.
class BluetoothInternalsHandlerInterfaceBase {};

using BluetoothInternalsHandlerPtrDataView =
    mojo::InterfacePtrDataView<BluetoothInternalsHandlerInterfaceBase>;
using BluetoothInternalsHandlerRequestDataView =
    mojo::InterfaceRequestDataView<BluetoothInternalsHandlerInterfaceBase>;
using BluetoothInternalsHandlerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<BluetoothInternalsHandlerInterfaceBase>;
using BluetoothInternalsHandlerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<BluetoothInternalsHandlerInterfaceBase>;
class BluetoothInternalsHandler_GetAdapter_ParamsDataView {
 public:
  BluetoothInternalsHandler_GetAdapter_ParamsDataView() {}

  BluetoothInternalsHandler_GetAdapter_ParamsDataView(
      internal::BluetoothInternalsHandler_GetAdapter_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::BluetoothInternalsHandler_GetAdapter_Params_Data* data_ = nullptr;
};

class BluetoothInternalsHandler_GetAdapter_ResponseParamsDataView {
 public:
  BluetoothInternalsHandler_GetAdapter_ResponseParamsDataView() {}

  BluetoothInternalsHandler_GetAdapter_ResponseParamsDataView(
      internal::BluetoothInternalsHandler_GetAdapter_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeAdapter() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::bluetooth::mojom::AdapterPtrDataView>(
            &data_->adapter, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::BluetoothInternalsHandler_GetAdapter_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace mojom {






}  // namespace mojom

#endif  // CHROME_BROWSER_UI_WEBUI_BLUETOOTH_INTERNALS_BLUETOOTH_INTERNALS_MOJOM_SHARED_H_
