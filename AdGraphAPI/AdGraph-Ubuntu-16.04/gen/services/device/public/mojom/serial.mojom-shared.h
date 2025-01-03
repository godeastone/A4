// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_SHARED_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_SHARED_H_

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
#include "services/device/public/mojom/serial.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace device {
namespace mojom {
class SerialDeviceInfoDataView;

class SerialConnectionOptionsDataView;

class SerialConnectionInfoDataView;

class SerialHostControlSignalsDataView;

class SerialDeviceControlSignalsDataView;



}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::device::mojom::SerialDeviceInfoDataView> {
  using Data = ::device::mojom::internal::SerialDeviceInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::SerialConnectionOptionsDataView> {
  using Data = ::device::mojom::internal::SerialConnectionOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::SerialConnectionInfoDataView> {
  using Data = ::device::mojom::internal::SerialConnectionInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::SerialHostControlSignalsDataView> {
  using Data = ::device::mojom::internal::SerialHostControlSignals_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::SerialDeviceControlSignalsDataView> {
  using Data = ::device::mojom::internal::SerialDeviceControlSignals_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {

enum class SerialSendError : int32_t {
  NONE,
  DISCONNECTED,
  PENDING,
  TIMEOUT,
  SYSTEM_ERROR,
  kMinValue = 0,
  kMaxValue = 4,
};

inline std::ostream& operator<<(std::ostream& os, SerialSendError value) {
  switch(value) {
    case SerialSendError::NONE:
      return os << "SerialSendError::NONE";
    case SerialSendError::DISCONNECTED:
      return os << "SerialSendError::DISCONNECTED";
    case SerialSendError::PENDING:
      return os << "SerialSendError::PENDING";
    case SerialSendError::TIMEOUT:
      return os << "SerialSendError::TIMEOUT";
    case SerialSendError::SYSTEM_ERROR:
      return os << "SerialSendError::SYSTEM_ERROR";
    default:
      return os << "Unknown SerialSendError value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(SerialSendError value) {
  return internal::SerialSendError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class SerialReceiveError : int32_t {
  NONE,
  DISCONNECTED,
  TIMEOUT,
  DEVICE_LOST,
  BREAK,
  FRAME_ERROR,
  OVERRUN,
  BUFFER_OVERFLOW,
  PARITY_ERROR,
  SYSTEM_ERROR,
  kMinValue = 0,
  kMaxValue = 9,
};

inline std::ostream& operator<<(std::ostream& os, SerialReceiveError value) {
  switch(value) {
    case SerialReceiveError::NONE:
      return os << "SerialReceiveError::NONE";
    case SerialReceiveError::DISCONNECTED:
      return os << "SerialReceiveError::DISCONNECTED";
    case SerialReceiveError::TIMEOUT:
      return os << "SerialReceiveError::TIMEOUT";
    case SerialReceiveError::DEVICE_LOST:
      return os << "SerialReceiveError::DEVICE_LOST";
    case SerialReceiveError::BREAK:
      return os << "SerialReceiveError::BREAK";
    case SerialReceiveError::FRAME_ERROR:
      return os << "SerialReceiveError::FRAME_ERROR";
    case SerialReceiveError::OVERRUN:
      return os << "SerialReceiveError::OVERRUN";
    case SerialReceiveError::BUFFER_OVERFLOW:
      return os << "SerialReceiveError::BUFFER_OVERFLOW";
    case SerialReceiveError::PARITY_ERROR:
      return os << "SerialReceiveError::PARITY_ERROR";
    case SerialReceiveError::SYSTEM_ERROR:
      return os << "SerialReceiveError::SYSTEM_ERROR";
    default:
      return os << "Unknown SerialReceiveError value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(SerialReceiveError value) {
  return internal::SerialReceiveError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class SerialDataBits : int32_t {
  NONE,
  SEVEN,
  EIGHT,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, SerialDataBits value) {
  switch(value) {
    case SerialDataBits::NONE:
      return os << "SerialDataBits::NONE";
    case SerialDataBits::SEVEN:
      return os << "SerialDataBits::SEVEN";
    case SerialDataBits::EIGHT:
      return os << "SerialDataBits::EIGHT";
    default:
      return os << "Unknown SerialDataBits value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(SerialDataBits value) {
  return internal::SerialDataBits_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class SerialParityBit : int32_t {
  NONE,
  NO_PARITY,
  ODD,
  EVEN,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, SerialParityBit value) {
  switch(value) {
    case SerialParityBit::NONE:
      return os << "SerialParityBit::NONE";
    case SerialParityBit::NO_PARITY:
      return os << "SerialParityBit::NO_PARITY";
    case SerialParityBit::ODD:
      return os << "SerialParityBit::ODD";
    case SerialParityBit::EVEN:
      return os << "SerialParityBit::EVEN";
    default:
      return os << "Unknown SerialParityBit value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(SerialParityBit value) {
  return internal::SerialParityBit_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class SerialStopBits : int32_t {
  NONE,
  ONE,
  TWO,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, SerialStopBits value) {
  switch(value) {
    case SerialStopBits::NONE:
      return os << "SerialStopBits::NONE";
    case SerialStopBits::ONE:
      return os << "SerialStopBits::ONE";
    case SerialStopBits::TWO:
      return os << "SerialStopBits::TWO";
    default:
      return os << "Unknown SerialStopBits value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(SerialStopBits value) {
  return internal::SerialStopBits_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class SerialDeviceEnumeratorInterfaceBase {};

using SerialDeviceEnumeratorPtrDataView =
    mojo::InterfacePtrDataView<SerialDeviceEnumeratorInterfaceBase>;
using SerialDeviceEnumeratorRequestDataView =
    mojo::InterfaceRequestDataView<SerialDeviceEnumeratorInterfaceBase>;
using SerialDeviceEnumeratorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SerialDeviceEnumeratorInterfaceBase>;
using SerialDeviceEnumeratorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SerialDeviceEnumeratorInterfaceBase>;
class SerialIoHandlerInterfaceBase {};

using SerialIoHandlerPtrDataView =
    mojo::InterfacePtrDataView<SerialIoHandlerInterfaceBase>;
using SerialIoHandlerRequestDataView =
    mojo::InterfaceRequestDataView<SerialIoHandlerInterfaceBase>;
using SerialIoHandlerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SerialIoHandlerInterfaceBase>;
using SerialIoHandlerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SerialIoHandlerInterfaceBase>;
class SerialDeviceInfoDataView {
 public:
  SerialDeviceInfoDataView() {}

  SerialDeviceInfoDataView(
      internal::SerialDeviceInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint16_t vendor_id() const {
    return data_->vendor_id;
  }
  bool has_vendor_id() const {
    return data_->has_vendor_id;
  }
  uint16_t product_id() const {
    return data_->product_id;
  }
  bool has_product_id() const {
    return data_->has_product_id;
  }
  inline void GetDisplayNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplayName(UserType* output) {
    auto* pointer = data_->display_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::SerialDeviceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SerialConnectionOptionsDataView {
 public:
  SerialConnectionOptionsDataView() {}

  SerialConnectionOptionsDataView(
      internal::SerialConnectionOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t bitrate() const {
    return data_->bitrate;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDataBits(UserType* output) const {
    auto data_value = data_->data_bits;
    return mojo::internal::Deserialize<::device::mojom::SerialDataBits>(
        data_value, output);
  }

  SerialDataBits data_bits() const {
    return static_cast<SerialDataBits>(data_->data_bits);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParityBit(UserType* output) const {
    auto data_value = data_->parity_bit;
    return mojo::internal::Deserialize<::device::mojom::SerialParityBit>(
        data_value, output);
  }

  SerialParityBit parity_bit() const {
    return static_cast<SerialParityBit>(data_->parity_bit);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStopBits(UserType* output) const {
    auto data_value = data_->stop_bits;
    return mojo::internal::Deserialize<::device::mojom::SerialStopBits>(
        data_value, output);
  }

  SerialStopBits stop_bits() const {
    return static_cast<SerialStopBits>(data_->stop_bits);
  }
  bool cts_flow_control() const {
    return data_->cts_flow_control;
  }
  bool has_cts_flow_control() const {
    return data_->has_cts_flow_control;
  }
 private:
  internal::SerialConnectionOptions_Data* data_ = nullptr;
};

class SerialConnectionInfoDataView {
 public:
  SerialConnectionInfoDataView() {}

  SerialConnectionInfoDataView(
      internal::SerialConnectionInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t bitrate() const {
    return data_->bitrate;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDataBits(UserType* output) const {
    auto data_value = data_->data_bits;
    return mojo::internal::Deserialize<::device::mojom::SerialDataBits>(
        data_value, output);
  }

  SerialDataBits data_bits() const {
    return static_cast<SerialDataBits>(data_->data_bits);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParityBit(UserType* output) const {
    auto data_value = data_->parity_bit;
    return mojo::internal::Deserialize<::device::mojom::SerialParityBit>(
        data_value, output);
  }

  SerialParityBit parity_bit() const {
    return static_cast<SerialParityBit>(data_->parity_bit);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStopBits(UserType* output) const {
    auto data_value = data_->stop_bits;
    return mojo::internal::Deserialize<::device::mojom::SerialStopBits>(
        data_value, output);
  }

  SerialStopBits stop_bits() const {
    return static_cast<SerialStopBits>(data_->stop_bits);
  }
  bool cts_flow_control() const {
    return data_->cts_flow_control;
  }
 private:
  internal::SerialConnectionInfo_Data* data_ = nullptr;
};

class SerialHostControlSignalsDataView {
 public:
  SerialHostControlSignalsDataView() {}

  SerialHostControlSignalsDataView(
      internal::SerialHostControlSignals_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool dtr() const {
    return data_->dtr;
  }
  bool has_dtr() const {
    return data_->has_dtr;
  }
  bool rts() const {
    return data_->rts;
  }
  bool has_rts() const {
    return data_->has_rts;
  }
 private:
  internal::SerialHostControlSignals_Data* data_ = nullptr;
};

class SerialDeviceControlSignalsDataView {
 public:
  SerialDeviceControlSignalsDataView() {}

  SerialDeviceControlSignalsDataView(
      internal::SerialDeviceControlSignals_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool dcd() const {
    return data_->dcd;
  }
  bool cts() const {
    return data_->cts;
  }
  bool ri() const {
    return data_->ri;
  }
  bool dsr() const {
    return data_->dsr;
  }
 private:
  internal::SerialDeviceControlSignals_Data* data_ = nullptr;
};

class SerialDeviceEnumerator_GetDevices_ParamsDataView {
 public:
  SerialDeviceEnumerator_GetDevices_ParamsDataView() {}

  SerialDeviceEnumerator_GetDevices_ParamsDataView(
      internal::SerialDeviceEnumerator_GetDevices_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SerialDeviceEnumerator_GetDevices_Params_Data* data_ = nullptr;
};

class SerialDeviceEnumerator_GetDevices_ResponseParamsDataView {
 public:
  SerialDeviceEnumerator_GetDevices_ResponseParamsDataView() {}

  SerialDeviceEnumerator_GetDevices_ResponseParamsDataView(
      internal::SerialDeviceEnumerator_GetDevices_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDevicesDataView(
      mojo::ArrayDataView<SerialDeviceInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevices(UserType* output) {
    auto* pointer = data_->devices.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::SerialDeviceInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::SerialDeviceEnumerator_GetDevices_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SerialIoHandler_Open_ParamsDataView {
 public:
  SerialIoHandler_Open_ParamsDataView() {}

  SerialIoHandler_Open_ParamsDataView(
      internal::SerialIoHandler_Open_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPortDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPort(UserType* output) {
    auto* pointer = data_->port.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetOptionsDataView(
      SerialConnectionOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::device::mojom::SerialConnectionOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::SerialIoHandler_Open_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SerialIoHandler_Open_ResponseParamsDataView {
 public:
  SerialIoHandler_Open_ResponseParamsDataView() {}

  SerialIoHandler_Open_ResponseParamsDataView(
      internal::SerialIoHandler_Open_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::SerialIoHandler_Open_ResponseParams_Data* data_ = nullptr;
};

class SerialIoHandler_Read_ParamsDataView {
 public:
  SerialIoHandler_Read_ParamsDataView() {}

  SerialIoHandler_Read_ParamsDataView(
      internal::SerialIoHandler_Read_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t bytes() const {
    return data_->bytes;
  }
 private:
  internal::SerialIoHandler_Read_Params_Data* data_ = nullptr;
};

class SerialIoHandler_Read_ResponseParamsDataView {
 public:
  SerialIoHandler_Read_ResponseParamsDataView() {}

  SerialIoHandler_Read_ResponseParamsDataView(
      internal::SerialIoHandler_Read_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::device::mojom::SerialReceiveError>(
        data_value, output);
  }

  SerialReceiveError error() const {
    return static_cast<SerialReceiveError>(data_->error);
  }
 private:
  internal::SerialIoHandler_Read_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SerialIoHandler_Write_ParamsDataView {
 public:
  SerialIoHandler_Write_ParamsDataView() {}

  SerialIoHandler_Write_ParamsDataView(
      internal::SerialIoHandler_Write_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::SerialIoHandler_Write_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SerialIoHandler_Write_ResponseParamsDataView {
 public:
  SerialIoHandler_Write_ResponseParamsDataView() {}

  SerialIoHandler_Write_ResponseParamsDataView(
      internal::SerialIoHandler_Write_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t bytes_written() const {
    return data_->bytes_written;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::device::mojom::SerialSendError>(
        data_value, output);
  }

  SerialSendError error() const {
    return static_cast<SerialSendError>(data_->error);
  }
 private:
  internal::SerialIoHandler_Write_ResponseParams_Data* data_ = nullptr;
};

class SerialIoHandler_CancelRead_ParamsDataView {
 public:
  SerialIoHandler_CancelRead_ParamsDataView() {}

  SerialIoHandler_CancelRead_ParamsDataView(
      internal::SerialIoHandler_CancelRead_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::device::mojom::SerialReceiveError>(
        data_value, output);
  }

  SerialReceiveError reason() const {
    return static_cast<SerialReceiveError>(data_->reason);
  }
 private:
  internal::SerialIoHandler_CancelRead_Params_Data* data_ = nullptr;
};

class SerialIoHandler_CancelWrite_ParamsDataView {
 public:
  SerialIoHandler_CancelWrite_ParamsDataView() {}

  SerialIoHandler_CancelWrite_ParamsDataView(
      internal::SerialIoHandler_CancelWrite_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::device::mojom::SerialSendError>(
        data_value, output);
  }

  SerialSendError reason() const {
    return static_cast<SerialSendError>(data_->reason);
  }
 private:
  internal::SerialIoHandler_CancelWrite_Params_Data* data_ = nullptr;
};

class SerialIoHandler_Flush_ParamsDataView {
 public:
  SerialIoHandler_Flush_ParamsDataView() {}

  SerialIoHandler_Flush_ParamsDataView(
      internal::SerialIoHandler_Flush_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SerialIoHandler_Flush_Params_Data* data_ = nullptr;
};

class SerialIoHandler_Flush_ResponseParamsDataView {
 public:
  SerialIoHandler_Flush_ResponseParamsDataView() {}

  SerialIoHandler_Flush_ResponseParamsDataView(
      internal::SerialIoHandler_Flush_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::SerialIoHandler_Flush_ResponseParams_Data* data_ = nullptr;
};

class SerialIoHandler_GetControlSignals_ParamsDataView {
 public:
  SerialIoHandler_GetControlSignals_ParamsDataView() {}

  SerialIoHandler_GetControlSignals_ParamsDataView(
      internal::SerialIoHandler_GetControlSignals_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SerialIoHandler_GetControlSignals_Params_Data* data_ = nullptr;
};

class SerialIoHandler_GetControlSignals_ResponseParamsDataView {
 public:
  SerialIoHandler_GetControlSignals_ResponseParamsDataView() {}

  SerialIoHandler_GetControlSignals_ResponseParamsDataView(
      internal::SerialIoHandler_GetControlSignals_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSignalsDataView(
      SerialDeviceControlSignalsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSignals(UserType* output) {
    auto* pointer = data_->signals.Get();
    return mojo::internal::Deserialize<::device::mojom::SerialDeviceControlSignalsDataView>(
        pointer, output, context_);
  }
 private:
  internal::SerialIoHandler_GetControlSignals_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SerialIoHandler_SetControlSignals_ParamsDataView {
 public:
  SerialIoHandler_SetControlSignals_ParamsDataView() {}

  SerialIoHandler_SetControlSignals_ParamsDataView(
      internal::SerialIoHandler_SetControlSignals_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSignalsDataView(
      SerialHostControlSignalsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSignals(UserType* output) {
    auto* pointer = data_->signals.Get();
    return mojo::internal::Deserialize<::device::mojom::SerialHostControlSignalsDataView>(
        pointer, output, context_);
  }
 private:
  internal::SerialIoHandler_SetControlSignals_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SerialIoHandler_SetControlSignals_ResponseParamsDataView {
 public:
  SerialIoHandler_SetControlSignals_ResponseParamsDataView() {}

  SerialIoHandler_SetControlSignals_ResponseParamsDataView(
      internal::SerialIoHandler_SetControlSignals_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::SerialIoHandler_SetControlSignals_ResponseParams_Data* data_ = nullptr;
};

class SerialIoHandler_ConfigurePort_ParamsDataView {
 public:
  SerialIoHandler_ConfigurePort_ParamsDataView() {}

  SerialIoHandler_ConfigurePort_ParamsDataView(
      internal::SerialIoHandler_ConfigurePort_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOptionsDataView(
      SerialConnectionOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::device::mojom::SerialConnectionOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::SerialIoHandler_ConfigurePort_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SerialIoHandler_ConfigurePort_ResponseParamsDataView {
 public:
  SerialIoHandler_ConfigurePort_ResponseParamsDataView() {}

  SerialIoHandler_ConfigurePort_ResponseParamsDataView(
      internal::SerialIoHandler_ConfigurePort_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::SerialIoHandler_ConfigurePort_ResponseParams_Data* data_ = nullptr;
};

class SerialIoHandler_GetPortInfo_ParamsDataView {
 public:
  SerialIoHandler_GetPortInfo_ParamsDataView() {}

  SerialIoHandler_GetPortInfo_ParamsDataView(
      internal::SerialIoHandler_GetPortInfo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SerialIoHandler_GetPortInfo_Params_Data* data_ = nullptr;
};

class SerialIoHandler_GetPortInfo_ResponseParamsDataView {
 public:
  SerialIoHandler_GetPortInfo_ResponseParamsDataView() {}

  SerialIoHandler_GetPortInfo_ResponseParamsDataView(
      internal::SerialIoHandler_GetPortInfo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      SerialConnectionInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::device::mojom::SerialConnectionInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::SerialIoHandler_GetPortInfo_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SerialIoHandler_SetBreak_ParamsDataView {
 public:
  SerialIoHandler_SetBreak_ParamsDataView() {}

  SerialIoHandler_SetBreak_ParamsDataView(
      internal::SerialIoHandler_SetBreak_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SerialIoHandler_SetBreak_Params_Data* data_ = nullptr;
};

class SerialIoHandler_SetBreak_ResponseParamsDataView {
 public:
  SerialIoHandler_SetBreak_ResponseParamsDataView() {}

  SerialIoHandler_SetBreak_ResponseParamsDataView(
      internal::SerialIoHandler_SetBreak_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::SerialIoHandler_SetBreak_ResponseParams_Data* data_ = nullptr;
};

class SerialIoHandler_ClearBreak_ParamsDataView {
 public:
  SerialIoHandler_ClearBreak_ParamsDataView() {}

  SerialIoHandler_ClearBreak_ParamsDataView(
      internal::SerialIoHandler_ClearBreak_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SerialIoHandler_ClearBreak_Params_Data* data_ = nullptr;
};

class SerialIoHandler_ClearBreak_ResponseParamsDataView {
 public:
  SerialIoHandler_ClearBreak_ResponseParamsDataView() {}

  SerialIoHandler_ClearBreak_ResponseParamsDataView(
      internal::SerialIoHandler_ClearBreak_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::SerialIoHandler_ClearBreak_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

template <>
struct hash<::device::mojom::SerialSendError>
    : public mojo::internal::EnumHashImpl<::device::mojom::SerialSendError> {};

template <>
struct hash<::device::mojom::SerialReceiveError>
    : public mojo::internal::EnumHashImpl<::device::mojom::SerialReceiveError> {};

template <>
struct hash<::device::mojom::SerialDataBits>
    : public mojo::internal::EnumHashImpl<::device::mojom::SerialDataBits> {};

template <>
struct hash<::device::mojom::SerialParityBit>
    : public mojo::internal::EnumHashImpl<::device::mojom::SerialParityBit> {};

template <>
struct hash<::device::mojom::SerialStopBits>
    : public mojo::internal::EnumHashImpl<::device::mojom::SerialStopBits> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::device::mojom::SerialSendError, ::device::mojom::SerialSendError> {
  static ::device::mojom::SerialSendError ToMojom(::device::mojom::SerialSendError input) { return input; }
  static bool FromMojom(::device::mojom::SerialSendError input, ::device::mojom::SerialSendError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialSendError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::SerialSendError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::SerialSendError>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::SerialReceiveError, ::device::mojom::SerialReceiveError> {
  static ::device::mojom::SerialReceiveError ToMojom(::device::mojom::SerialReceiveError input) { return input; }
  static bool FromMojom(::device::mojom::SerialReceiveError input, ::device::mojom::SerialReceiveError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialReceiveError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::SerialReceiveError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::SerialReceiveError>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::SerialDataBits, ::device::mojom::SerialDataBits> {
  static ::device::mojom::SerialDataBits ToMojom(::device::mojom::SerialDataBits input) { return input; }
  static bool FromMojom(::device::mojom::SerialDataBits input, ::device::mojom::SerialDataBits* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialDataBits, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::SerialDataBits, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::SerialDataBits>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::SerialParityBit, ::device::mojom::SerialParityBit> {
  static ::device::mojom::SerialParityBit ToMojom(::device::mojom::SerialParityBit input) { return input; }
  static bool FromMojom(::device::mojom::SerialParityBit input, ::device::mojom::SerialParityBit* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialParityBit, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::SerialParityBit, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::SerialParityBit>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::SerialStopBits, ::device::mojom::SerialStopBits> {
  static ::device::mojom::SerialStopBits ToMojom(::device::mojom::SerialStopBits input) { return input; }
  static bool FromMojom(::device::mojom::SerialStopBits input, ::device::mojom::SerialStopBits* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialStopBits, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::SerialStopBits, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::SerialStopBits>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialDeviceInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::SerialDeviceInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::SerialDeviceInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::path, input, custom_context)) in_path = CallWithContext(Traits::path, input, custom_context);
    typename decltype((*output)->path)::BaseType::BufferWriter
        path_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_path, buffer, &path_writer, context);
    (*output)->path.Set(
        path_writer.is_null() ? nullptr : path_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null path in SerialDeviceInfo struct");
    (*output)->vendor_id = CallWithContext(Traits::vendor_id, input, custom_context);
    (*output)->has_vendor_id = CallWithContext(Traits::has_vendor_id, input, custom_context);
    (*output)->product_id = CallWithContext(Traits::product_id, input, custom_context);
    (*output)->has_product_id = CallWithContext(Traits::has_product_id, input, custom_context);
    decltype(CallWithContext(Traits::display_name, input, custom_context)) in_display_name = CallWithContext(Traits::display_name, input, custom_context);
    typename decltype((*output)->display_name)::BaseType::BufferWriter
        display_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_display_name, buffer, &display_name_writer, context);
    (*output)->display_name.Set(
        display_name_writer.is_null() ? nullptr : display_name_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::SerialDeviceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::SerialDeviceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialConnectionOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::SerialConnectionOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::SerialConnectionOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->bitrate = CallWithContext(Traits::bitrate, input, custom_context);
    mojo::internal::Serialize<::device::mojom::SerialDataBits>(
        CallWithContext(Traits::data_bits, input, custom_context), &(*output)->data_bits);
    mojo::internal::Serialize<::device::mojom::SerialParityBit>(
        CallWithContext(Traits::parity_bit, input, custom_context), &(*output)->parity_bit);
    mojo::internal::Serialize<::device::mojom::SerialStopBits>(
        CallWithContext(Traits::stop_bits, input, custom_context), &(*output)->stop_bits);
    (*output)->cts_flow_control = CallWithContext(Traits::cts_flow_control, input, custom_context);
    (*output)->has_cts_flow_control = CallWithContext(Traits::has_cts_flow_control, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::SerialConnectionOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::SerialConnectionOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialConnectionInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::SerialConnectionInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::SerialConnectionInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->bitrate = CallWithContext(Traits::bitrate, input, custom_context);
    mojo::internal::Serialize<::device::mojom::SerialDataBits>(
        CallWithContext(Traits::data_bits, input, custom_context), &(*output)->data_bits);
    mojo::internal::Serialize<::device::mojom::SerialParityBit>(
        CallWithContext(Traits::parity_bit, input, custom_context), &(*output)->parity_bit);
    mojo::internal::Serialize<::device::mojom::SerialStopBits>(
        CallWithContext(Traits::stop_bits, input, custom_context), &(*output)->stop_bits);
    (*output)->cts_flow_control = CallWithContext(Traits::cts_flow_control, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::SerialConnectionInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::SerialConnectionInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialHostControlSignalsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::SerialHostControlSignalsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::SerialHostControlSignals_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->dtr = CallWithContext(Traits::dtr, input, custom_context);
    (*output)->has_dtr = CallWithContext(Traits::has_dtr, input, custom_context);
    (*output)->rts = CallWithContext(Traits::rts, input, custom_context);
    (*output)->has_rts = CallWithContext(Traits::has_rts, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::SerialHostControlSignals_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::SerialHostControlSignalsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialDeviceControlSignalsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::SerialDeviceControlSignalsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::SerialDeviceControlSignals_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->dcd = CallWithContext(Traits::dcd, input, custom_context);
    (*output)->cts = CallWithContext(Traits::cts, input, custom_context);
    (*output)->ri = CallWithContext(Traits::ri, input, custom_context);
    (*output)->dsr = CallWithContext(Traits::dsr, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::SerialDeviceControlSignals_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::SerialDeviceControlSignalsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace device {
namespace mojom {

inline void SerialDeviceInfoDataView::GetPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->path.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void SerialDeviceInfoDataView::GetDisplayNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->display_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}












inline void SerialDeviceEnumerator_GetDevices_ResponseParamsDataView::GetDevicesDataView(
    mojo::ArrayDataView<SerialDeviceInfoDataView>* output) {
  auto pointer = data_->devices.Get();
  *output = mojo::ArrayDataView<SerialDeviceInfoDataView>(pointer, context_);
}


inline void SerialIoHandler_Open_ParamsDataView::GetPortDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->port.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void SerialIoHandler_Open_ParamsDataView::GetOptionsDataView(
    SerialConnectionOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = SerialConnectionOptionsDataView(pointer, context_);
}






inline void SerialIoHandler_Read_ResponseParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void SerialIoHandler_Write_ParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}














inline void SerialIoHandler_GetControlSignals_ResponseParamsDataView::GetSignalsDataView(
    SerialDeviceControlSignalsDataView* output) {
  auto pointer = data_->signals.Get();
  *output = SerialDeviceControlSignalsDataView(pointer, context_);
}


inline void SerialIoHandler_SetControlSignals_ParamsDataView::GetSignalsDataView(
    SerialHostControlSignalsDataView* output) {
  auto pointer = data_->signals.Get();
  *output = SerialHostControlSignalsDataView(pointer, context_);
}




inline void SerialIoHandler_ConfigurePort_ParamsDataView::GetOptionsDataView(
    SerialConnectionOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = SerialConnectionOptionsDataView(pointer, context_);
}






inline void SerialIoHandler_GetPortInfo_ResponseParamsDataView::GetInfoDataView(
    SerialConnectionInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = SerialConnectionInfoDataView(pointer, context_);
}











}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_SHARED_H_
