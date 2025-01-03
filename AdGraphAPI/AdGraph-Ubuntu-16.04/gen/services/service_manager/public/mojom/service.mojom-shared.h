// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_SHARED_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_SHARED_H_

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
#include "services/service_manager/public/mojom/service.mojom-shared-internal.h"
#include "services/service_manager/public/mojom/connector.mojom-shared.h"
#include "services/service_manager/public/mojom/interface_provider.mojom-shared.h"
#include "services/service_manager/public/mojom/interface_provider_spec.mojom-shared.h"
#include "services/service_manager/public/mojom/service_control.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace service_manager {
namespace mojom {
class BindSourceInfoDataView;



}  // namespace mojom
}  // namespace service_manager

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::service_manager::mojom::BindSourceInfoDataView> {
  using Data = ::service_manager::mojom::internal::BindSourceInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace service_manager {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ServiceInterfaceBase {};

using ServicePtrDataView =
    mojo::InterfacePtrDataView<ServiceInterfaceBase>;
using ServiceRequestDataView =
    mojo::InterfaceRequestDataView<ServiceInterfaceBase>;
using ServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceInterfaceBase>;
using ServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceInterfaceBase>;
class BindSourceInfoDataView {
 public:
  BindSourceInfoDataView() {}

  BindSourceInfoDataView(
      internal::BindSourceInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdentityDataView(
      ::service_manager::mojom::IdentityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIdentity(UserType* output) {
    auto* pointer = data_->identity.Get();
    return mojo::internal::Deserialize<::service_manager::mojom::IdentityDataView>(
        pointer, output, context_);
  }
  inline void GetRequiredCapabilitiesDataView(
      ::service_manager::mojom::CapabilitySetDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequiredCapabilities(UserType* output) {
    auto* pointer = data_->required_capabilities.Get();
    return mojo::internal::Deserialize<::service_manager::mojom::CapabilitySetDataView>(
        pointer, output, context_);
  }
 private:
  internal::BindSourceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Service_OnStart_ParamsDataView {
 public:
  Service_OnStart_ParamsDataView() {}

  Service_OnStart_ParamsDataView(
      internal::Service_OnStart_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdentityDataView(
      ::service_manager::mojom::IdentityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIdentity(UserType* output) {
    auto* pointer = data_->identity.Get();
    return mojo::internal::Deserialize<::service_manager::mojom::IdentityDataView>(
        pointer, output, context_);
  }
 private:
  internal::Service_OnStart_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Service_OnStart_ResponseParamsDataView {
 public:
  Service_OnStart_ResponseParamsDataView() {}

  Service_OnStart_ResponseParamsDataView(
      internal::Service_OnStart_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeConnectorRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::service_manager::mojom::ConnectorRequestDataView>(
            &data_->connector_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeControlRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::service_manager::mojom::ServiceControlAssociatedRequestDataView>(
            &data_->control_request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Service_OnStart_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Service_OnBindInterface_ParamsDataView {
 public:
  Service_OnBindInterface_ParamsDataView() {}

  Service_OnBindInterface_ParamsDataView(
      internal::Service_OnBindInterface_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSourceDataView(
      BindSourceInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSource(UserType* output) {
    auto* pointer = data_->source.Get();
    return mojo::internal::Deserialize<::service_manager::mojom::BindSourceInfoDataView>(
        pointer, output, context_);
  }
  inline void GetInterfaceNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInterfaceName(UserType* output) {
    auto* pointer = data_->interface_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  mojo::ScopedMessagePipeHandle TakeInterfacePipe() {
    mojo::ScopedMessagePipeHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->interface_pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Service_OnBindInterface_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Service_OnBindInterface_ResponseParamsDataView {
 public:
  Service_OnBindInterface_ResponseParamsDataView() {}

  Service_OnBindInterface_ResponseParamsDataView(
      internal::Service_OnBindInterface_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Service_OnBindInterface_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace service_manager

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::service_manager::mojom::BindSourceInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::service_manager::mojom::BindSourceInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::service_manager::mojom::internal::BindSourceInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::identity, input, custom_context)) in_identity = CallWithContext(Traits::identity, input, custom_context);
    typename decltype((*output)->identity)::BaseType::BufferWriter
        identity_writer;
    mojo::internal::Serialize<::service_manager::mojom::IdentityDataView>(
        in_identity, buffer, &identity_writer, context);
    (*output)->identity.Set(
        identity_writer.is_null() ? nullptr : identity_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->identity.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null identity in BindSourceInfo struct");
    decltype(CallWithContext(Traits::required_capabilities, input, custom_context)) in_required_capabilities = CallWithContext(Traits::required_capabilities, input, custom_context);
    typename decltype((*output)->required_capabilities)::BaseType::BufferWriter
        required_capabilities_writer;
    mojo::internal::Serialize<::service_manager::mojom::CapabilitySetDataView>(
        in_required_capabilities, buffer, &required_capabilities_writer, context);
    (*output)->required_capabilities.Set(
        required_capabilities_writer.is_null() ? nullptr : required_capabilities_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->required_capabilities.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null required_capabilities in BindSourceInfo struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::service_manager::mojom::internal::BindSourceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::service_manager::mojom::BindSourceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace service_manager {
namespace mojom {

inline void BindSourceInfoDataView::GetIdentityDataView(
    ::service_manager::mojom::IdentityDataView* output) {
  auto pointer = data_->identity.Get();
  *output = ::service_manager::mojom::IdentityDataView(pointer, context_);
}
inline void BindSourceInfoDataView::GetRequiredCapabilitiesDataView(
    ::service_manager::mojom::CapabilitySetDataView* output) {
  auto pointer = data_->required_capabilities.Get();
  *output = ::service_manager::mojom::CapabilitySetDataView(pointer, context_);
}


inline void Service_OnStart_ParamsDataView::GetIdentityDataView(
    ::service_manager::mojom::IdentityDataView* output) {
  auto pointer = data_->identity.Get();
  *output = ::service_manager::mojom::IdentityDataView(pointer, context_);
}




inline void Service_OnBindInterface_ParamsDataView::GetSourceDataView(
    BindSourceInfoDataView* output) {
  auto pointer = data_->source.Get();
  *output = BindSourceInfoDataView(pointer, context_);
}
inline void Service_OnBindInterface_ParamsDataView::GetInterfaceNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->interface_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_SHARED_H_
