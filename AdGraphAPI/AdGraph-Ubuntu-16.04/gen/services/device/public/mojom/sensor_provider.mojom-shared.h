// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_PROVIDER_MOJOM_SHARED_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_PROVIDER_MOJOM_SHARED_H_

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
#include "services/device/public/mojom/sensor_provider.mojom-shared-internal.h"
#include "services/device/public/mojom/sensor.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace device {
namespace mojom {
class SensorInitParamsDataView;



}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::device::mojom::SensorInitParamsDataView> {
  using Data = ::device::mojom::internal::SensorInitParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {

enum class SensorCreationResult : int32_t {
  SUCCESS,
  ERROR_NOT_AVAILABLE,
  ERROR_NOT_ALLOWED,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, SensorCreationResult value) {
  switch(value) {
    case SensorCreationResult::SUCCESS:
      return os << "SensorCreationResult::SUCCESS";
    case SensorCreationResult::ERROR_NOT_AVAILABLE:
      return os << "SensorCreationResult::ERROR_NOT_AVAILABLE";
    case SensorCreationResult::ERROR_NOT_ALLOWED:
      return os << "SensorCreationResult::ERROR_NOT_ALLOWED";
    default:
      return os << "Unknown SensorCreationResult value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(SensorCreationResult value) {
  return internal::SensorCreationResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class SensorProviderInterfaceBase {};

using SensorProviderPtrDataView =
    mojo::InterfacePtrDataView<SensorProviderInterfaceBase>;
using SensorProviderRequestDataView =
    mojo::InterfaceRequestDataView<SensorProviderInterfaceBase>;
using SensorProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SensorProviderInterfaceBase>;
using SensorProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SensorProviderInterfaceBase>;
class SensorInitParamsDataView {
 public:
  SensorInitParamsDataView() {}

  SensorInitParamsDataView(
      internal::SensorInitParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeSensor() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::SensorPtrDataView>(
            &data_->sensor, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClientRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::SensorClientRequestDataView>(
            &data_->client_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedSharedBufferHandle TakeMemory() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->memory, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint64_t buffer_offset() const {
    return data_->buffer_offset;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMode(UserType* output) const {
    auto data_value = data_->mode;
    return mojo::internal::Deserialize<::device::mojom::ReportingMode>(
        data_value, output);
  }

  ::device::mojom::ReportingMode mode() const {
    return static_cast<::device::mojom::ReportingMode>(data_->mode);
  }
  inline void GetDefaultConfigurationDataView(
      ::device::mojom::SensorConfigurationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDefaultConfiguration(UserType* output) {
    auto* pointer = data_->default_configuration.Get();
    return mojo::internal::Deserialize<::device::mojom::SensorConfigurationDataView>(
        pointer, output, context_);
  }
  double maximum_frequency() const {
    return data_->maximum_frequency;
  }
  double minimum_frequency() const {
    return data_->minimum_frequency;
  }
 private:
  internal::SensorInitParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SensorProvider_GetSensor_ParamsDataView {
 public:
  SensorProvider_GetSensor_ParamsDataView() {}

  SensorProvider_GetSensor_ParamsDataView(
      internal::SensorProvider_GetSensor_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::device::mojom::SensorType>(
        data_value, output);
  }

  ::device::mojom::SensorType type() const {
    return static_cast<::device::mojom::SensorType>(data_->type);
  }
 private:
  internal::SensorProvider_GetSensor_Params_Data* data_ = nullptr;
};

class SensorProvider_GetSensor_ResponseParamsDataView {
 public:
  SensorProvider_GetSensor_ResponseParamsDataView() {}

  SensorProvider_GetSensor_ResponseParamsDataView(
      internal::SensorProvider_GetSensor_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::device::mojom::SensorCreationResult>(
        data_value, output);
  }

  SensorCreationResult result() const {
    return static_cast<SensorCreationResult>(data_->result);
  }
  inline void GetInitParamsDataView(
      SensorInitParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInitParams(UserType* output) {
    auto* pointer = data_->init_params.Get();
    return mojo::internal::Deserialize<::device::mojom::SensorInitParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::SensorProvider_GetSensor_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

template <>
struct hash<::device::mojom::SensorCreationResult>
    : public mojo::internal::EnumHashImpl<::device::mojom::SensorCreationResult> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::device::mojom::SensorCreationResult, ::device::mojom::SensorCreationResult> {
  static ::device::mojom::SensorCreationResult ToMojom(::device::mojom::SensorCreationResult input) { return input; }
  static bool FromMojom(::device::mojom::SensorCreationResult input, ::device::mojom::SensorCreationResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SensorCreationResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::SensorCreationResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::SensorCreationResult>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SensorInitParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::SensorInitParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::SensorInitParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::sensor, input, custom_context)) in_sensor = CallWithContext(Traits::sensor, input, custom_context);
    mojo::internal::Serialize<::device::mojom::SensorPtrDataView>(
        in_sensor, &(*output)->sensor, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->sensor),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid sensor in SensorInitParams struct");
    decltype(CallWithContext(Traits::client_request, input, custom_context)) in_client_request = CallWithContext(Traits::client_request, input, custom_context);
    mojo::internal::Serialize<::device::mojom::SensorClientRequestDataView>(
        in_client_request, &(*output)->client_request, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->client_request),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid client_request in SensorInitParams struct");
    decltype(CallWithContext(Traits::memory, input, custom_context)) in_memory = CallWithContext(Traits::memory, input, custom_context);
    mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
        in_memory, &(*output)->memory, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->memory),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid memory in SensorInitParams struct");
    (*output)->buffer_offset = CallWithContext(Traits::buffer_offset, input, custom_context);
    mojo::internal::Serialize<::device::mojom::ReportingMode>(
        CallWithContext(Traits::mode, input, custom_context), &(*output)->mode);
    decltype(CallWithContext(Traits::default_configuration, input, custom_context)) in_default_configuration = CallWithContext(Traits::default_configuration, input, custom_context);
    typename decltype((*output)->default_configuration)::BaseType::BufferWriter
        default_configuration_writer;
    mojo::internal::Serialize<::device::mojom::SensorConfigurationDataView>(
        in_default_configuration, buffer, &default_configuration_writer, context);
    (*output)->default_configuration.Set(
        default_configuration_writer.is_null() ? nullptr : default_configuration_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->default_configuration.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null default_configuration in SensorInitParams struct");
    (*output)->maximum_frequency = CallWithContext(Traits::maximum_frequency, input, custom_context);
    (*output)->minimum_frequency = CallWithContext(Traits::minimum_frequency, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::SensorInitParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::SensorInitParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace device {
namespace mojom {

inline void SensorInitParamsDataView::GetDefaultConfigurationDataView(
    ::device::mojom::SensorConfigurationDataView* output) {
  auto pointer = data_->default_configuration.Get();
  *output = ::device::mojom::SensorConfigurationDataView(pointer, context_);
}




inline void SensorProvider_GetSensor_ResponseParamsDataView::GetInitParamsDataView(
    SensorInitParamsDataView* output) {
  auto pointer = data_->init_params.Get();
  *output = SensorInitParamsDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_PROVIDER_MOJOM_SHARED_H_
