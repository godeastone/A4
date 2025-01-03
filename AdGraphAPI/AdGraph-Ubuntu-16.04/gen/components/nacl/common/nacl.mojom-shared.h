// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_NACL_COMMON_NACL_MOJOM_SHARED_H_
#define COMPONENTS_NACL_COMMON_NACL_MOJOM_SHARED_H_

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
#include "components/nacl/common/nacl.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace nacl {
namespace mojom {


}  // namespace mojom
}  // namespace nacl

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace nacl {
namespace mojom {
using NaClErrorCode = mojo::NativeEnum;
// Interface base classes. They are used for type safety check.
class NaClRendererHostInterfaceBase {};

using NaClRendererHostPtrDataView =
    mojo::InterfacePtrDataView<NaClRendererHostInterfaceBase>;
using NaClRendererHostRequestDataView =
    mojo::InterfaceRequestDataView<NaClRendererHostInterfaceBase>;
using NaClRendererHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NaClRendererHostInterfaceBase>;
using NaClRendererHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NaClRendererHostInterfaceBase>;
class NaClExitControlInterfaceBase {};

using NaClExitControlPtrDataView =
    mojo::InterfacePtrDataView<NaClExitControlInterfaceBase>;
using NaClExitControlRequestDataView =
    mojo::InterfaceRequestDataView<NaClExitControlInterfaceBase>;
using NaClExitControlAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NaClExitControlInterfaceBase>;
using NaClExitControlAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NaClExitControlInterfaceBase>;
class NaClRendererHost_ReportExitStatus_ParamsDataView {
 public:
  NaClRendererHost_ReportExitStatus_ParamsDataView() {}

  NaClRendererHost_ReportExitStatus_ParamsDataView(
      internal::NaClRendererHost_ReportExitStatus_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t exit_status() const {
    return data_->exit_status;
  }
 private:
  internal::NaClRendererHost_ReportExitStatus_Params_Data* data_ = nullptr;
};

class NaClRendererHost_ReportExitStatus_ResponseParamsDataView {
 public:
  NaClRendererHost_ReportExitStatus_ResponseParamsDataView() {}

  NaClRendererHost_ReportExitStatus_ResponseParamsDataView(
      internal::NaClRendererHost_ReportExitStatus_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NaClRendererHost_ReportExitStatus_ResponseParams_Data* data_ = nullptr;
};

class NaClRendererHost_ReportLoadStatus_ParamsDataView {
 public:
  NaClRendererHost_ReportLoadStatus_ParamsDataView() {}

  NaClRendererHost_ReportLoadStatus_ParamsDataView(
      internal::NaClRendererHost_ReportLoadStatus_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLoadStatus(UserType* output) const {
    auto data_value = data_->load_status;
    return mojo::internal::Deserialize<::nacl::mojom::NaClErrorCode>(
        data_value, output);
  }

  NaClErrorCode load_status() const {
    return static_cast<NaClErrorCode>(data_->load_status);
  }
 private:
  internal::NaClRendererHost_ReportLoadStatus_Params_Data* data_ = nullptr;
};

class NaClRendererHost_ReportLoadStatus_ResponseParamsDataView {
 public:
  NaClRendererHost_ReportLoadStatus_ResponseParamsDataView() {}

  NaClRendererHost_ReportLoadStatus_ResponseParamsDataView(
      internal::NaClRendererHost_ReportLoadStatus_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NaClRendererHost_ReportLoadStatus_ResponseParams_Data* data_ = nullptr;
};

class NaClRendererHost_ProvideExitControl_ParamsDataView {
 public:
  NaClRendererHost_ProvideExitControl_ParamsDataView() {}

  NaClRendererHost_ProvideExitControl_ParamsDataView(
      internal::NaClRendererHost_ProvideExitControl_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeExitControl() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::nacl::mojom::NaClExitControlPtrDataView>(
            &data_->exit_control, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NaClRendererHost_ProvideExitControl_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace nacl

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace nacl {
namespace mojom {












}  // namespace mojom
}  // namespace nacl

#endif  // COMPONENTS_NACL_COMMON_NACL_MOJOM_SHARED_H_
