// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_BLUETOOTH_PUBLIC_MOJOM_ADAPTER_MOJOM_SHARED_H_
#define DEVICE_BLUETOOTH_PUBLIC_MOJOM_ADAPTER_MOJOM_SHARED_H_

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
#include "device/bluetooth/public/mojom/adapter.mojom-shared-internal.h"
#include "device/bluetooth/public/mojom/device.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace bluetooth {
namespace mojom {
class AdapterInfoDataView;



}  // namespace mojom
}  // namespace bluetooth

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::bluetooth::mojom::AdapterInfoDataView> {
  using Data = ::bluetooth::mojom::internal::AdapterInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace bluetooth {
namespace mojom {

enum class ConnectResult : int32_t {
  SUCCESS,
  AUTH_CANCELED,
  AUTH_FAILED,
  AUTH_REJECTED,
  AUTH_TIMEOUT,
  FAILED,
  INPROGRESS,
  UNKNOWN,
  UNSUPPORTED_DEVICE,
  DEVICE_NO_LONGER_IN_RANGE,
  kMinValue = 0,
  kMaxValue = 9,
};

inline std::ostream& operator<<(std::ostream& os, ConnectResult value) {
  switch(value) {
    case ConnectResult::SUCCESS:
      return os << "ConnectResult::SUCCESS";
    case ConnectResult::AUTH_CANCELED:
      return os << "ConnectResult::AUTH_CANCELED";
    case ConnectResult::AUTH_FAILED:
      return os << "ConnectResult::AUTH_FAILED";
    case ConnectResult::AUTH_REJECTED:
      return os << "ConnectResult::AUTH_REJECTED";
    case ConnectResult::AUTH_TIMEOUT:
      return os << "ConnectResult::AUTH_TIMEOUT";
    case ConnectResult::FAILED:
      return os << "ConnectResult::FAILED";
    case ConnectResult::INPROGRESS:
      return os << "ConnectResult::INPROGRESS";
    case ConnectResult::UNKNOWN:
      return os << "ConnectResult::UNKNOWN";
    case ConnectResult::UNSUPPORTED_DEVICE:
      return os << "ConnectResult::UNSUPPORTED_DEVICE";
    case ConnectResult::DEVICE_NO_LONGER_IN_RANGE:
      return os << "ConnectResult::DEVICE_NO_LONGER_IN_RANGE";
    default:
      return os << "Unknown ConnectResult value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ConnectResult value) {
  return internal::ConnectResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class DiscoverySessionInterfaceBase {};

using DiscoverySessionPtrDataView =
    mojo::InterfacePtrDataView<DiscoverySessionInterfaceBase>;
using DiscoverySessionRequestDataView =
    mojo::InterfaceRequestDataView<DiscoverySessionInterfaceBase>;
using DiscoverySessionAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DiscoverySessionInterfaceBase>;
using DiscoverySessionAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DiscoverySessionInterfaceBase>;
class AdapterInterfaceBase {};

using AdapterPtrDataView =
    mojo::InterfacePtrDataView<AdapterInterfaceBase>;
using AdapterRequestDataView =
    mojo::InterfaceRequestDataView<AdapterInterfaceBase>;
using AdapterAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AdapterInterfaceBase>;
using AdapterAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AdapterInterfaceBase>;
class AdapterClientInterfaceBase {};

using AdapterClientPtrDataView =
    mojo::InterfacePtrDataView<AdapterClientInterfaceBase>;
using AdapterClientRequestDataView =
    mojo::InterfaceRequestDataView<AdapterClientInterfaceBase>;
using AdapterClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AdapterClientInterfaceBase>;
using AdapterClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AdapterClientInterfaceBase>;
class AdapterInfoDataView {
 public:
  AdapterInfoDataView() {}

  AdapterInfoDataView(
      internal::AdapterInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAddressDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAddress(UserType* output) {
    auto* pointer = data_->address.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool initialized() const {
    return data_->initialized;
  }
  bool present() const {
    return data_->present;
  }
  bool powered() const {
    return data_->powered;
  }
  bool discoverable() const {
    return data_->discoverable;
  }
  bool discovering() const {
    return data_->discovering;
  }
 private:
  internal::AdapterInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DiscoverySession_IsActive_ParamsDataView {
 public:
  DiscoverySession_IsActive_ParamsDataView() {}

  DiscoverySession_IsActive_ParamsDataView(
      internal::DiscoverySession_IsActive_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DiscoverySession_IsActive_Params_Data* data_ = nullptr;
};

class DiscoverySession_IsActive_ResponseParamsDataView {
 public:
  DiscoverySession_IsActive_ResponseParamsDataView() {}

  DiscoverySession_IsActive_ResponseParamsDataView(
      internal::DiscoverySession_IsActive_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool active() const {
    return data_->active;
  }
 private:
  internal::DiscoverySession_IsActive_ResponseParams_Data* data_ = nullptr;
};

class DiscoverySession_Stop_ParamsDataView {
 public:
  DiscoverySession_Stop_ParamsDataView() {}

  DiscoverySession_Stop_ParamsDataView(
      internal::DiscoverySession_Stop_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DiscoverySession_Stop_Params_Data* data_ = nullptr;
};

class DiscoverySession_Stop_ResponseParamsDataView {
 public:
  DiscoverySession_Stop_ResponseParamsDataView() {}

  DiscoverySession_Stop_ResponseParamsDataView(
      internal::DiscoverySession_Stop_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::DiscoverySession_Stop_ResponseParams_Data* data_ = nullptr;
};

class Adapter_ConnectToDevice_ParamsDataView {
 public:
  Adapter_ConnectToDevice_ParamsDataView() {}

  Adapter_ConnectToDevice_ParamsDataView(
      internal::Adapter_ConnectToDevice_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAddressDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAddress(UserType* output) {
    auto* pointer = data_->address.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Adapter_ConnectToDevice_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Adapter_ConnectToDevice_ResponseParamsDataView {
 public:
  Adapter_ConnectToDevice_ResponseParamsDataView() {}

  Adapter_ConnectToDevice_ResponseParamsDataView(
      internal::Adapter_ConnectToDevice_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::bluetooth::mojom::ConnectResult>(
        data_value, output);
  }

  ConnectResult result() const {
    return static_cast<ConnectResult>(data_->result);
  }
  template <typename UserType>
  UserType TakeDevice() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::bluetooth::mojom::DevicePtrDataView>(
            &data_->device, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Adapter_ConnectToDevice_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Adapter_GetDevices_ParamsDataView {
 public:
  Adapter_GetDevices_ParamsDataView() {}

  Adapter_GetDevices_ParamsDataView(
      internal::Adapter_GetDevices_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Adapter_GetDevices_Params_Data* data_ = nullptr;
};

class Adapter_GetDevices_ResponseParamsDataView {
 public:
  Adapter_GetDevices_ResponseParamsDataView() {}

  Adapter_GetDevices_ResponseParamsDataView(
      internal::Adapter_GetDevices_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDevicesDataView(
      mojo::ArrayDataView<::bluetooth::mojom::DeviceInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevices(UserType* output) {
    auto* pointer = data_->devices.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::bluetooth::mojom::DeviceInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::Adapter_GetDevices_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Adapter_GetInfo_ParamsDataView {
 public:
  Adapter_GetInfo_ParamsDataView() {}

  Adapter_GetInfo_ParamsDataView(
      internal::Adapter_GetInfo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Adapter_GetInfo_Params_Data* data_ = nullptr;
};

class Adapter_GetInfo_ResponseParamsDataView {
 public:
  Adapter_GetInfo_ResponseParamsDataView() {}

  Adapter_GetInfo_ResponseParamsDataView(
      internal::Adapter_GetInfo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      AdapterInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::bluetooth::mojom::AdapterInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::Adapter_GetInfo_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Adapter_SetClient_ParamsDataView {
 public:
  Adapter_SetClient_ParamsDataView() {}

  Adapter_SetClient_ParamsDataView(
      internal::Adapter_SetClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::bluetooth::mojom::AdapterClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Adapter_SetClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Adapter_StartDiscoverySession_ParamsDataView {
 public:
  Adapter_StartDiscoverySession_ParamsDataView() {}

  Adapter_StartDiscoverySession_ParamsDataView(
      internal::Adapter_StartDiscoverySession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Adapter_StartDiscoverySession_Params_Data* data_ = nullptr;
};

class Adapter_StartDiscoverySession_ResponseParamsDataView {
 public:
  Adapter_StartDiscoverySession_ResponseParamsDataView() {}

  Adapter_StartDiscoverySession_ResponseParamsDataView(
      internal::Adapter_StartDiscoverySession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeSession() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::bluetooth::mojom::DiscoverySessionPtrDataView>(
            &data_->session, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Adapter_StartDiscoverySession_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AdapterClient_PresentChanged_ParamsDataView {
 public:
  AdapterClient_PresentChanged_ParamsDataView() {}

  AdapterClient_PresentChanged_ParamsDataView(
      internal::AdapterClient_PresentChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool present() const {
    return data_->present;
  }
 private:
  internal::AdapterClient_PresentChanged_Params_Data* data_ = nullptr;
};

class AdapterClient_PoweredChanged_ParamsDataView {
 public:
  AdapterClient_PoweredChanged_ParamsDataView() {}

  AdapterClient_PoweredChanged_ParamsDataView(
      internal::AdapterClient_PoweredChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool powered() const {
    return data_->powered;
  }
 private:
  internal::AdapterClient_PoweredChanged_Params_Data* data_ = nullptr;
};

class AdapterClient_DiscoverableChanged_ParamsDataView {
 public:
  AdapterClient_DiscoverableChanged_ParamsDataView() {}

  AdapterClient_DiscoverableChanged_ParamsDataView(
      internal::AdapterClient_DiscoverableChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool discoverable() const {
    return data_->discoverable;
  }
 private:
  internal::AdapterClient_DiscoverableChanged_Params_Data* data_ = nullptr;
};

class AdapterClient_DiscoveringChanged_ParamsDataView {
 public:
  AdapterClient_DiscoveringChanged_ParamsDataView() {}

  AdapterClient_DiscoveringChanged_ParamsDataView(
      internal::AdapterClient_DiscoveringChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool discovering() const {
    return data_->discovering;
  }
 private:
  internal::AdapterClient_DiscoveringChanged_Params_Data* data_ = nullptr;
};

class AdapterClient_DeviceAdded_ParamsDataView {
 public:
  AdapterClient_DeviceAdded_ParamsDataView() {}

  AdapterClient_DeviceAdded_ParamsDataView(
      internal::AdapterClient_DeviceAdded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceDataView(
      ::bluetooth::mojom::DeviceInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevice(UserType* output) {
    auto* pointer = data_->device.Get();
    return mojo::internal::Deserialize<::bluetooth::mojom::DeviceInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::AdapterClient_DeviceAdded_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AdapterClient_DeviceChanged_ParamsDataView {
 public:
  AdapterClient_DeviceChanged_ParamsDataView() {}

  AdapterClient_DeviceChanged_ParamsDataView(
      internal::AdapterClient_DeviceChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceDataView(
      ::bluetooth::mojom::DeviceInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevice(UserType* output) {
    auto* pointer = data_->device.Get();
    return mojo::internal::Deserialize<::bluetooth::mojom::DeviceInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::AdapterClient_DeviceChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AdapterClient_DeviceRemoved_ParamsDataView {
 public:
  AdapterClient_DeviceRemoved_ParamsDataView() {}

  AdapterClient_DeviceRemoved_ParamsDataView(
      internal::AdapterClient_DeviceRemoved_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceDataView(
      ::bluetooth::mojom::DeviceInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevice(UserType* output) {
    auto* pointer = data_->device.Get();
    return mojo::internal::Deserialize<::bluetooth::mojom::DeviceInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::AdapterClient_DeviceRemoved_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace bluetooth

namespace std {

template <>
struct hash<::bluetooth::mojom::ConnectResult>
    : public mojo::internal::EnumHashImpl<::bluetooth::mojom::ConnectResult> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::bluetooth::mojom::ConnectResult, ::bluetooth::mojom::ConnectResult> {
  static ::bluetooth::mojom::ConnectResult ToMojom(::bluetooth::mojom::ConnectResult input) { return input; }
  static bool FromMojom(::bluetooth::mojom::ConnectResult input, ::bluetooth::mojom::ConnectResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::bluetooth::mojom::ConnectResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::bluetooth::mojom::ConnectResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::bluetooth::mojom::ConnectResult>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::bluetooth::mojom::AdapterInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::bluetooth::mojom::AdapterInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::bluetooth::mojom::internal::AdapterInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::address, input, custom_context)) in_address = CallWithContext(Traits::address, input, custom_context);
    typename decltype((*output)->address)::BaseType::BufferWriter
        address_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_address, buffer, &address_writer, context);
    (*output)->address.Set(
        address_writer.is_null() ? nullptr : address_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->address.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null address in AdapterInfo struct");
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
        "null name in AdapterInfo struct");
    (*output)->initialized = CallWithContext(Traits::initialized, input, custom_context);
    (*output)->present = CallWithContext(Traits::present, input, custom_context);
    (*output)->powered = CallWithContext(Traits::powered, input, custom_context);
    (*output)->discoverable = CallWithContext(Traits::discoverable, input, custom_context);
    (*output)->discovering = CallWithContext(Traits::discovering, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::bluetooth::mojom::internal::AdapterInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::bluetooth::mojom::AdapterInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace bluetooth {
namespace mojom {

inline void AdapterInfoDataView::GetAddressDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->address.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AdapterInfoDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}










inline void Adapter_ConnectToDevice_ParamsDataView::GetAddressDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->address.Get();
  *output = mojo::StringDataView(pointer, context_);
}






inline void Adapter_GetDevices_ResponseParamsDataView::GetDevicesDataView(
    mojo::ArrayDataView<::bluetooth::mojom::DeviceInfoDataView>* output) {
  auto pointer = data_->devices.Get();
  *output = mojo::ArrayDataView<::bluetooth::mojom::DeviceInfoDataView>(pointer, context_);
}




inline void Adapter_GetInfo_ResponseParamsDataView::GetInfoDataView(
    AdapterInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = AdapterInfoDataView(pointer, context_);
}
















inline void AdapterClient_DeviceAdded_ParamsDataView::GetDeviceDataView(
    ::bluetooth::mojom::DeviceInfoDataView* output) {
  auto pointer = data_->device.Get();
  *output = ::bluetooth::mojom::DeviceInfoDataView(pointer, context_);
}


inline void AdapterClient_DeviceChanged_ParamsDataView::GetDeviceDataView(
    ::bluetooth::mojom::DeviceInfoDataView* output) {
  auto pointer = data_->device.Get();
  *output = ::bluetooth::mojom::DeviceInfoDataView(pointer, context_);
}


inline void AdapterClient_DeviceRemoved_ParamsDataView::GetDeviceDataView(
    ::bluetooth::mojom::DeviceInfoDataView* output) {
  auto pointer = data_->device.Get();
  *output = ::bluetooth::mojom::DeviceInfoDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace bluetooth

#endif  // DEVICE_BLUETOOTH_PUBLIC_MOJOM_ADAPTER_MOJOM_SHARED_H_
