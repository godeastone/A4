// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_SHARED_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_SHARED_H_

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
#include "services/service_manager/public/mojom/connector.mojom-shared-internal.h"
#include "services/service_manager/public/mojom/constants.mojom-shared.h"
#include "services/service_manager/public/mojom/interface_provider.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace service_manager {
namespace mojom {
class IdentityDataView;



}  // namespace mojom
}  // namespace service_manager

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::service_manager::mojom::IdentityDataView> {
  using Data = ::service_manager::mojom::internal::Identity_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace service_manager {
namespace mojom {

enum class ConnectResult : int32_t {
  SUCCEEDED,
  INVALID_ARGUMENT,
  ACCESS_DENIED,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, ConnectResult value) {
  switch(value) {
    case ConnectResult::SUCCEEDED:
      return os << "ConnectResult::SUCCEEDED";
    case ConnectResult::INVALID_ARGUMENT:
      return os << "ConnectResult::INVALID_ARGUMENT";
    case ConnectResult::ACCESS_DENIED:
      return os << "ConnectResult::ACCESS_DENIED";
    default:
      return os << "Unknown ConnectResult value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ConnectResult value) {
  return internal::ConnectResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class PIDReceiverInterfaceBase {};

using PIDReceiverPtrDataView =
    mojo::InterfacePtrDataView<PIDReceiverInterfaceBase>;
using PIDReceiverRequestDataView =
    mojo::InterfaceRequestDataView<PIDReceiverInterfaceBase>;
using PIDReceiverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PIDReceiverInterfaceBase>;
using PIDReceiverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PIDReceiverInterfaceBase>;
class ConnectorInterfaceBase {};

using ConnectorPtrDataView =
    mojo::InterfacePtrDataView<ConnectorInterfaceBase>;
using ConnectorRequestDataView =
    mojo::InterfaceRequestDataView<ConnectorInterfaceBase>;
using ConnectorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ConnectorInterfaceBase>;
using ConnectorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ConnectorInterfaceBase>;
class IdentityDataView {
 public:
  IdentityDataView() {}

  IdentityDataView(
      internal::Identity_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUserIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUserId(UserType* output) {
    auto* pointer = data_->user_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetInstanceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstance(UserType* output) {
    auto* pointer = data_->instance.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Identity_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PIDReceiver_SetPID_ParamsDataView {
 public:
  PIDReceiver_SetPID_ParamsDataView() {}

  PIDReceiver_SetPID_ParamsDataView(
      internal::PIDReceiver_SetPID_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t pid() const {
    return data_->pid;
  }
 private:
  internal::PIDReceiver_SetPID_Params_Data* data_ = nullptr;
};

class Connector_BindInterface_ParamsDataView {
 public:
  Connector_BindInterface_ParamsDataView() {}

  Connector_BindInterface_ParamsDataView(
      internal::Connector_BindInterface_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTargetDataView(
      IdentityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTarget(UserType* output) {
    auto* pointer = data_->target.Get();
    return mojo::internal::Deserialize<::service_manager::mojom::IdentityDataView>(
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
  internal::Connector_BindInterface_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Connector_BindInterface_ResponseParamsDataView {
 public:
  Connector_BindInterface_ResponseParamsDataView() {}

  Connector_BindInterface_ResponseParamsDataView(
      internal::Connector_BindInterface_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::service_manager::mojom::ConnectResult>(
        data_value, output);
  }

  ConnectResult result() const {
    return static_cast<ConnectResult>(data_->result);
  }
  inline void GetUserIdDataView(
      IdentityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUserId(UserType* output) {
    auto* pointer = data_->user_id.Get();
    return mojo::internal::Deserialize<::service_manager::mojom::IdentityDataView>(
        pointer, output, context_);
  }
 private:
  internal::Connector_BindInterface_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Connector_QueryService_ParamsDataView {
 public:
  Connector_QueryService_ParamsDataView() {}

  Connector_QueryService_ParamsDataView(
      internal::Connector_QueryService_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTargetDataView(
      IdentityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTarget(UserType* output) {
    auto* pointer = data_->target.Get();
    return mojo::internal::Deserialize<::service_manager::mojom::IdentityDataView>(
        pointer, output, context_);
  }
 private:
  internal::Connector_QueryService_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Connector_QueryService_ResponseParamsDataView {
 public:
  Connector_QueryService_ResponseParamsDataView() {}

  Connector_QueryService_ResponseParamsDataView(
      internal::Connector_QueryService_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::service_manager::mojom::ConnectResult>(
        data_value, output);
  }

  ConnectResult result() const {
    return static_cast<ConnectResult>(data_->result);
  }
  inline void GetSandboxTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSandboxType(UserType* output) {
    auto* pointer = data_->sandbox_type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Connector_QueryService_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Connector_StartService_ParamsDataView {
 public:
  Connector_StartService_ParamsDataView() {}

  Connector_StartService_ParamsDataView(
      internal::Connector_StartService_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTargetDataView(
      IdentityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTarget(UserType* output) {
    auto* pointer = data_->target.Get();
    return mojo::internal::Deserialize<::service_manager::mojom::IdentityDataView>(
        pointer, output, context_);
  }
 private:
  internal::Connector_StartService_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Connector_StartService_ResponseParamsDataView {
 public:
  Connector_StartService_ResponseParamsDataView() {}

  Connector_StartService_ResponseParamsDataView(
      internal::Connector_StartService_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::service_manager::mojom::ConnectResult>(
        data_value, output);
  }

  ConnectResult result() const {
    return static_cast<ConnectResult>(data_->result);
  }
  inline void GetIdentityDataView(
      IdentityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIdentity(UserType* output) {
    auto* pointer = data_->identity.Get();
    return mojo::internal::Deserialize<::service_manager::mojom::IdentityDataView>(
        pointer, output, context_);
  }
 private:
  internal::Connector_StartService_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Connector_StartServiceWithProcess_ParamsDataView {
 public:
  Connector_StartServiceWithProcess_ParamsDataView() {}

  Connector_StartServiceWithProcess_ParamsDataView(
      internal::Connector_StartServiceWithProcess_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTargetDataView(
      IdentityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTarget(UserType* output) {
    auto* pointer = data_->target.Get();
    return mojo::internal::Deserialize<::service_manager::mojom::IdentityDataView>(
        pointer, output, context_);
  }
  mojo::ScopedMessagePipeHandle TakeService() {
    mojo::ScopedMessagePipeHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->service, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakePidReceiverRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::service_manager::mojom::PIDReceiverRequestDataView>(
            &data_->pid_receiver_request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Connector_StartServiceWithProcess_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Connector_StartServiceWithProcess_ResponseParamsDataView {
 public:
  Connector_StartServiceWithProcess_ResponseParamsDataView() {}

  Connector_StartServiceWithProcess_ResponseParamsDataView(
      internal::Connector_StartServiceWithProcess_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::service_manager::mojom::ConnectResult>(
        data_value, output);
  }

  ConnectResult result() const {
    return static_cast<ConnectResult>(data_->result);
  }
  inline void GetIdentityDataView(
      IdentityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIdentity(UserType* output) {
    auto* pointer = data_->identity.Get();
    return mojo::internal::Deserialize<::service_manager::mojom::IdentityDataView>(
        pointer, output, context_);
  }
 private:
  internal::Connector_StartServiceWithProcess_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Connector_Clone_ParamsDataView {
 public:
  Connector_Clone_ParamsDataView() {}

  Connector_Clone_ParamsDataView(
      internal::Connector_Clone_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::service_manager::mojom::ConnectorRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Connector_Clone_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Connector_FilterInterfaces_ParamsDataView {
 public:
  Connector_FilterInterfaces_ParamsDataView() {}

  Connector_FilterInterfaces_ParamsDataView(
      internal::Connector_FilterInterfaces_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSpecDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSpec(UserType* output) {
    auto* pointer = data_->spec.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSourceDataView(
      IdentityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSource(UserType* output) {
    auto* pointer = data_->source.Get();
    return mojo::internal::Deserialize<::service_manager::mojom::IdentityDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeSourceRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::service_manager::mojom::InterfaceProviderRequestDataView>(
            &data_->source_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeTarget() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::service_manager::mojom::InterfaceProviderPtrDataView>(
            &data_->target, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Connector_FilterInterfaces_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace service_manager

namespace std {

template <>
struct hash<::service_manager::mojom::ConnectResult>
    : public mojo::internal::EnumHashImpl<::service_manager::mojom::ConnectResult> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::service_manager::mojom::ConnectResult, ::service_manager::mojom::ConnectResult> {
  static ::service_manager::mojom::ConnectResult ToMojom(::service_manager::mojom::ConnectResult input) { return input; }
  static bool FromMojom(::service_manager::mojom::ConnectResult input, ::service_manager::mojom::ConnectResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::service_manager::mojom::ConnectResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::service_manager::mojom::ConnectResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::service_manager::mojom::ConnectResult>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::service_manager::mojom::IdentityDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::service_manager::mojom::IdentityDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::service_manager::mojom::internal::Identity_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in Identity struct");
    decltype(CallWithContext(Traits::user_id, input, custom_context)) in_user_id = CallWithContext(Traits::user_id, input, custom_context);
    typename decltype((*output)->user_id)::BaseType::BufferWriter
        user_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_user_id, buffer, &user_id_writer, context);
    (*output)->user_id.Set(
        user_id_writer.is_null() ? nullptr : user_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->user_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null user_id in Identity struct");
    decltype(CallWithContext(Traits::instance, input, custom_context)) in_instance = CallWithContext(Traits::instance, input, custom_context);
    typename decltype((*output)->instance)::BaseType::BufferWriter
        instance_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_instance, buffer, &instance_writer, context);
    (*output)->instance.Set(
        instance_writer.is_null() ? nullptr : instance_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->instance.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null instance in Identity struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::service_manager::mojom::internal::Identity_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::service_manager::mojom::IdentityDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace service_manager {
namespace mojom {

inline void IdentityDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void IdentityDataView::GetUserIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->user_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void IdentityDataView::GetInstanceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->instance.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void Connector_BindInterface_ParamsDataView::GetTargetDataView(
    IdentityDataView* output) {
  auto pointer = data_->target.Get();
  *output = IdentityDataView(pointer, context_);
}
inline void Connector_BindInterface_ParamsDataView::GetInterfaceNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->interface_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Connector_BindInterface_ResponseParamsDataView::GetUserIdDataView(
    IdentityDataView* output) {
  auto pointer = data_->user_id.Get();
  *output = IdentityDataView(pointer, context_);
}


inline void Connector_QueryService_ParamsDataView::GetTargetDataView(
    IdentityDataView* output) {
  auto pointer = data_->target.Get();
  *output = IdentityDataView(pointer, context_);
}


inline void Connector_QueryService_ResponseParamsDataView::GetSandboxTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->sandbox_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Connector_StartService_ParamsDataView::GetTargetDataView(
    IdentityDataView* output) {
  auto pointer = data_->target.Get();
  *output = IdentityDataView(pointer, context_);
}


inline void Connector_StartService_ResponseParamsDataView::GetIdentityDataView(
    IdentityDataView* output) {
  auto pointer = data_->identity.Get();
  *output = IdentityDataView(pointer, context_);
}


inline void Connector_StartServiceWithProcess_ParamsDataView::GetTargetDataView(
    IdentityDataView* output) {
  auto pointer = data_->target.Get();
  *output = IdentityDataView(pointer, context_);
}


inline void Connector_StartServiceWithProcess_ResponseParamsDataView::GetIdentityDataView(
    IdentityDataView* output) {
  auto pointer = data_->identity.Get();
  *output = IdentityDataView(pointer, context_);
}




inline void Connector_FilterInterfaces_ParamsDataView::GetSpecDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->spec.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Connector_FilterInterfaces_ParamsDataView::GetSourceDataView(
    IdentityDataView* output) {
  auto pointer = data_->source.Get();
  *output = IdentityDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_SHARED_H_
