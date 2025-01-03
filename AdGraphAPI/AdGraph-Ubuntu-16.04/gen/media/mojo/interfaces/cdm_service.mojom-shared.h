// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CDM_SERVICE_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_CDM_SERVICE_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/cdm_service.mojom-shared-internal.h"
#include "media/mojo/interfaces/content_decryption_module.mojom-shared.h"
#include "mojo/public/mojom/base/file_path.mojom-shared.h"
#include "services/service_manager/public/mojom/interface_provider.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace media {
namespace mojom {


}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {
// Interface base classes. They are used for type safety check.
class CdmServiceInterfaceBase {};

using CdmServicePtrDataView =
    mojo::InterfacePtrDataView<CdmServiceInterfaceBase>;
using CdmServiceRequestDataView =
    mojo::InterfaceRequestDataView<CdmServiceInterfaceBase>;
using CdmServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CdmServiceInterfaceBase>;
using CdmServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CdmServiceInterfaceBase>;
class CdmService_LoadCdm_ParamsDataView {
 public:
  CdmService_LoadCdm_ParamsDataView() {}

  CdmService_LoadCdm_ParamsDataView(
      internal::CdmService_LoadCdm_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCdmPathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCdmPath(UserType* output) {
    auto* pointer = data_->cdm_path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
 private:
  internal::CdmService_LoadCdm_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CdmService_CreateCdmFactory_ParamsDataView {
 public:
  CdmService_CreateCdmFactory_ParamsDataView() {}

  CdmService_CreateCdmFactory_ParamsDataView(
      internal::CdmService_CreateCdmFactory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeFactory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::CdmFactoryRequestDataView>(
            &data_->factory, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeHostInterfaces() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::service_manager::mojom::InterfaceProviderPtrDataView>(
            &data_->host_interfaces, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::CdmService_CreateCdmFactory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace media {
namespace mojom {

inline void CdmService_LoadCdm_ParamsDataView::GetCdmPathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->cdm_path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CDM_SERVICE_MOJOM_SHARED_H_
