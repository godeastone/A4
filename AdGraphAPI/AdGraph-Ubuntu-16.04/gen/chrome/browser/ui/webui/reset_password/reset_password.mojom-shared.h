// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_RESET_PASSWORD_RESET_PASSWORD_MOJOM_SHARED_H_
#define CHROME_BROWSER_UI_WEBUI_RESET_PASSWORD_RESET_PASSWORD_MOJOM_SHARED_H_

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
#include "chrome/browser/ui/webui/reset_password/reset_password.mojom-shared-internal.h"

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
class ResetPasswordHandlerInterfaceBase {};

using ResetPasswordHandlerPtrDataView =
    mojo::InterfacePtrDataView<ResetPasswordHandlerInterfaceBase>;
using ResetPasswordHandlerRequestDataView =
    mojo::InterfaceRequestDataView<ResetPasswordHandlerInterfaceBase>;
using ResetPasswordHandlerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ResetPasswordHandlerInterfaceBase>;
using ResetPasswordHandlerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ResetPasswordHandlerInterfaceBase>;
class ResetPasswordHandler_HandlePasswordReset_ParamsDataView {
 public:
  ResetPasswordHandler_HandlePasswordReset_ParamsDataView() {}

  ResetPasswordHandler_HandlePasswordReset_ParamsDataView(
      internal::ResetPasswordHandler_HandlePasswordReset_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ResetPasswordHandler_HandlePasswordReset_Params_Data* data_ = nullptr;
};



}  // namespace mojom

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace mojom {




}  // namespace mojom

#endif  // CHROME_BROWSER_UI_WEBUI_RESET_PASSWORD_RESET_PASSWORD_MOJOM_SHARED_H_
