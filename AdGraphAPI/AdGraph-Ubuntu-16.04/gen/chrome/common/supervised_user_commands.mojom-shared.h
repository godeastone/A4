// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_SUPERVISED_USER_COMMANDS_MOJOM_SHARED_H_
#define CHROME_COMMON_SUPERVISED_USER_COMMANDS_MOJOM_SHARED_H_

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
#include "chrome/common/supervised_user_commands.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace supervised_user {
namespace mojom {


}  // namespace mojom
}  // namespace supervised_user

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace supervised_user {
namespace mojom {
// Interface base classes. They are used for type safety check.
class SupervisedUserCommandsInterfaceBase {};

using SupervisedUserCommandsPtrDataView =
    mojo::InterfacePtrDataView<SupervisedUserCommandsInterfaceBase>;
using SupervisedUserCommandsRequestDataView =
    mojo::InterfaceRequestDataView<SupervisedUserCommandsInterfaceBase>;
using SupervisedUserCommandsAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SupervisedUserCommandsInterfaceBase>;
using SupervisedUserCommandsAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SupervisedUserCommandsInterfaceBase>;
class SupervisedUserCommands_GoBack_ParamsDataView {
 public:
  SupervisedUserCommands_GoBack_ParamsDataView() {}

  SupervisedUserCommands_GoBack_ParamsDataView(
      internal::SupervisedUserCommands_GoBack_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SupervisedUserCommands_GoBack_Params_Data* data_ = nullptr;
};

class SupervisedUserCommands_RequestPermission_ParamsDataView {
 public:
  SupervisedUserCommands_RequestPermission_ParamsDataView() {}

  SupervisedUserCommands_RequestPermission_ParamsDataView(
      internal::SupervisedUserCommands_RequestPermission_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SupervisedUserCommands_RequestPermission_Params_Data* data_ = nullptr;
};

class SupervisedUserCommands_RequestPermission_ResponseParamsDataView {
 public:
  SupervisedUserCommands_RequestPermission_ResponseParamsDataView() {}

  SupervisedUserCommands_RequestPermission_ResponseParamsDataView(
      internal::SupervisedUserCommands_RequestPermission_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::SupervisedUserCommands_RequestPermission_ResponseParams_Data* data_ = nullptr;
};

class SupervisedUserCommands_Feedback_ParamsDataView {
 public:
  SupervisedUserCommands_Feedback_ParamsDataView() {}

  SupervisedUserCommands_Feedback_ParamsDataView(
      internal::SupervisedUserCommands_Feedback_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SupervisedUserCommands_Feedback_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace supervised_user

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace supervised_user {
namespace mojom {










}  // namespace mojom
}  // namespace supervised_user

#endif  // CHROME_COMMON_SUPERVISED_USER_COMMANDS_MOJOM_SHARED_H_
