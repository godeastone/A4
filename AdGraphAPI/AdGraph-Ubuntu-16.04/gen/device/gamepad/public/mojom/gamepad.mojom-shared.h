// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_SHARED_H_
#define DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_SHARED_H_

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
#include "device/gamepad/public/mojom/gamepad.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace device {
namespace mojom {
class GamepadQuaternionDataView;

class GamepadVectorDataView;

class GamepadButtonDataView;

class GamepadPoseDataView;

class GamepadHapticActuatorDataView;

class GamepadDataView;

class GamepadEffectParametersDataView;



}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::device::mojom::GamepadQuaternionDataView> {
  using Data = ::device::mojom::internal::GamepadQuaternion_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::GamepadVectorDataView> {
  using Data = ::device::mojom::internal::GamepadVector_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::GamepadButtonDataView> {
  using Data = ::device::mojom::internal::GamepadButton_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::GamepadPoseDataView> {
  using Data = ::device::mojom::internal::GamepadPose_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::GamepadHapticActuatorDataView> {
  using Data = ::device::mojom::internal::GamepadHapticActuator_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::GamepadDataView> {
  using Data = ::device::mojom::internal::Gamepad_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::GamepadEffectParametersDataView> {
  using Data = ::device::mojom::internal::GamepadEffectParameters_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {

enum class GamepadHand : int32_t {
  GamepadHandNone = 0,
  GamepadHandLeft = 1,
  GamepadHandRight = 2,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, GamepadHand value) {
  switch(value) {
    case GamepadHand::GamepadHandNone:
      return os << "GamepadHand::GamepadHandNone";
    case GamepadHand::GamepadHandLeft:
      return os << "GamepadHand::GamepadHandLeft";
    case GamepadHand::GamepadHandRight:
      return os << "GamepadHand::GamepadHandRight";
    default:
      return os << "Unknown GamepadHand value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(GamepadHand value) {
  return internal::GamepadHand_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class GamepadHapticActuatorType : int32_t {
  GamepadHapticActuatorTypeVibration = 0,
  GamepadHapticActuatorTypeDualRumble = 1,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, GamepadHapticActuatorType value) {
  switch(value) {
    case GamepadHapticActuatorType::GamepadHapticActuatorTypeVibration:
      return os << "GamepadHapticActuatorType::GamepadHapticActuatorTypeVibration";
    case GamepadHapticActuatorType::GamepadHapticActuatorTypeDualRumble:
      return os << "GamepadHapticActuatorType::GamepadHapticActuatorTypeDualRumble";
    default:
      return os << "Unknown GamepadHapticActuatorType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(GamepadHapticActuatorType value) {
  return internal::GamepadHapticActuatorType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class GamepadHapticEffectType : int32_t {
  GamepadHapticEffectTypeDualRumble = 0,
  kMinValue = 0,
  kMaxValue = 0,
};

inline std::ostream& operator<<(std::ostream& os, GamepadHapticEffectType value) {
  switch(value) {
    case GamepadHapticEffectType::GamepadHapticEffectTypeDualRumble:
      return os << "GamepadHapticEffectType::GamepadHapticEffectTypeDualRumble";
    default:
      return os << "Unknown GamepadHapticEffectType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(GamepadHapticEffectType value) {
  return internal::GamepadHapticEffectType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class GamepadHapticsResult : int32_t {
  GamepadHapticsResultError = 0,
  GamepadHapticsResultComplete = 1,
  GamepadHapticsResultPreempted = 2,
  GamepadHapticsResultInvalidParameter = 3,
  GamepadHapticsResultNotSupported = 4,
  kMinValue = 0,
  kMaxValue = 4,
};

inline std::ostream& operator<<(std::ostream& os, GamepadHapticsResult value) {
  switch(value) {
    case GamepadHapticsResult::GamepadHapticsResultError:
      return os << "GamepadHapticsResult::GamepadHapticsResultError";
    case GamepadHapticsResult::GamepadHapticsResultComplete:
      return os << "GamepadHapticsResult::GamepadHapticsResultComplete";
    case GamepadHapticsResult::GamepadHapticsResultPreempted:
      return os << "GamepadHapticsResult::GamepadHapticsResultPreempted";
    case GamepadHapticsResult::GamepadHapticsResultInvalidParameter:
      return os << "GamepadHapticsResult::GamepadHapticsResultInvalidParameter";
    case GamepadHapticsResult::GamepadHapticsResultNotSupported:
      return os << "GamepadHapticsResult::GamepadHapticsResultNotSupported";
    default:
      return os << "Unknown GamepadHapticsResult value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(GamepadHapticsResult value) {
  return internal::GamepadHapticsResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class GamepadObserverInterfaceBase {};

using GamepadObserverPtrDataView =
    mojo::InterfacePtrDataView<GamepadObserverInterfaceBase>;
using GamepadObserverRequestDataView =
    mojo::InterfaceRequestDataView<GamepadObserverInterfaceBase>;
using GamepadObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<GamepadObserverInterfaceBase>;
using GamepadObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<GamepadObserverInterfaceBase>;
class GamepadMonitorInterfaceBase {};

using GamepadMonitorPtrDataView =
    mojo::InterfacePtrDataView<GamepadMonitorInterfaceBase>;
using GamepadMonitorRequestDataView =
    mojo::InterfaceRequestDataView<GamepadMonitorInterfaceBase>;
using GamepadMonitorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<GamepadMonitorInterfaceBase>;
using GamepadMonitorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<GamepadMonitorInterfaceBase>;
class GamepadHapticsManagerInterfaceBase {};

using GamepadHapticsManagerPtrDataView =
    mojo::InterfacePtrDataView<GamepadHapticsManagerInterfaceBase>;
using GamepadHapticsManagerRequestDataView =
    mojo::InterfaceRequestDataView<GamepadHapticsManagerInterfaceBase>;
using GamepadHapticsManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<GamepadHapticsManagerInterfaceBase>;
using GamepadHapticsManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<GamepadHapticsManagerInterfaceBase>;
class GamepadQuaternionDataView {
 public:
  GamepadQuaternionDataView() {}

  GamepadQuaternionDataView(
      internal::GamepadQuaternion_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float x() const {
    return data_->x;
  }
  float y() const {
    return data_->y;
  }
  float z() const {
    return data_->z;
  }
  float w() const {
    return data_->w;
  }
 private:
  internal::GamepadQuaternion_Data* data_ = nullptr;
};

class GamepadVectorDataView {
 public:
  GamepadVectorDataView() {}

  GamepadVectorDataView(
      internal::GamepadVector_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float x() const {
    return data_->x;
  }
  float y() const {
    return data_->y;
  }
  float z() const {
    return data_->z;
  }
 private:
  internal::GamepadVector_Data* data_ = nullptr;
};

class GamepadButtonDataView {
 public:
  GamepadButtonDataView() {}

  GamepadButtonDataView(
      internal::GamepadButton_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool pressed() const {
    return data_->pressed;
  }
  bool touched() const {
    return data_->touched;
  }
  double value() const {
    return data_->value;
  }
 private:
  internal::GamepadButton_Data* data_ = nullptr;
};

class GamepadPoseDataView {
 public:
  GamepadPoseDataView() {}

  GamepadPoseDataView(
      internal::GamepadPose_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOrientationDataView(
      GamepadQuaternionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrientation(UserType* output) {
    auto* pointer = data_->orientation.Get();
    return mojo::internal::Deserialize<::device::mojom::GamepadQuaternionDataView>(
        pointer, output, context_);
  }
  inline void GetPositionDataView(
      GamepadVectorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPosition(UserType* output) {
    auto* pointer = data_->position.Get();
    return mojo::internal::Deserialize<::device::mojom::GamepadVectorDataView>(
        pointer, output, context_);
  }
  inline void GetAngularVelocityDataView(
      GamepadVectorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAngularVelocity(UserType* output) {
    auto* pointer = data_->angular_velocity.Get();
    return mojo::internal::Deserialize<::device::mojom::GamepadVectorDataView>(
        pointer, output, context_);
  }
  inline void GetLinearVelocityDataView(
      GamepadVectorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLinearVelocity(UserType* output) {
    auto* pointer = data_->linear_velocity.Get();
    return mojo::internal::Deserialize<::device::mojom::GamepadVectorDataView>(
        pointer, output, context_);
  }
  inline void GetAngularAccelerationDataView(
      GamepadVectorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAngularAcceleration(UserType* output) {
    auto* pointer = data_->angular_acceleration.Get();
    return mojo::internal::Deserialize<::device::mojom::GamepadVectorDataView>(
        pointer, output, context_);
  }
  inline void GetLinearAccelerationDataView(
      GamepadVectorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLinearAcceleration(UserType* output) {
    auto* pointer = data_->linear_acceleration.Get();
    return mojo::internal::Deserialize<::device::mojom::GamepadVectorDataView>(
        pointer, output, context_);
  }
 private:
  internal::GamepadPose_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GamepadHapticActuatorDataView {
 public:
  GamepadHapticActuatorDataView() {}

  GamepadHapticActuatorDataView(
      internal::GamepadHapticActuator_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::device::mojom::GamepadHapticActuatorType>(
        data_value, output);
  }

  GamepadHapticActuatorType type() const {
    return static_cast<GamepadHapticActuatorType>(data_->type);
  }
 private:
  internal::GamepadHapticActuator_Data* data_ = nullptr;
};

class GamepadDataView {
 public:
  GamepadDataView() {}

  GamepadDataView(
      internal::Gamepad_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool connected() const {
    return data_->connected;
  }
  inline void GetIdDataView(
      mojo::ArrayDataView<uint16_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint16_t>>(
        pointer, output, context_);
  }
  uint64_t timestamp() const {
    return data_->timestamp;
  }
  inline void GetAxesDataView(
      mojo::ArrayDataView<double>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAxes(UserType* output) {
    auto* pointer = data_->axes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<double>>(
        pointer, output, context_);
  }
  inline void GetButtonsDataView(
      mojo::ArrayDataView<GamepadButtonDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadButtons(UserType* output) {
    auto* pointer = data_->buttons.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::GamepadButtonDataView>>(
        pointer, output, context_);
  }
  inline void GetVibrationActuatorDataView(
      GamepadHapticActuatorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVibrationActuator(UserType* output) {
    auto* pointer = data_->vibration_actuator.Get();
    return mojo::internal::Deserialize<::device::mojom::GamepadHapticActuatorDataView>(
        pointer, output, context_);
  }
  inline void GetMappingDataView(
      mojo::ArrayDataView<uint16_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMapping(UserType* output) {
    auto* pointer = data_->mapping.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint16_t>>(
        pointer, output, context_);
  }
  inline void GetPoseDataView(
      GamepadPoseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPose(UserType* output) {
    auto* pointer = data_->pose.Get();
    return mojo::internal::Deserialize<::device::mojom::GamepadPoseDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHand(UserType* output) const {
    auto data_value = data_->hand;
    return mojo::internal::Deserialize<::device::mojom::GamepadHand>(
        data_value, output);
  }

  GamepadHand hand() const {
    return static_cast<GamepadHand>(data_->hand);
  }
  uint32_t display_id() const {
    return data_->display_id;
  }
 private:
  internal::Gamepad_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GamepadEffectParametersDataView {
 public:
  GamepadEffectParametersDataView() {}

  GamepadEffectParametersDataView(
      internal::GamepadEffectParameters_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  double duration() const {
    return data_->duration;
  }
  double start_delay() const {
    return data_->start_delay;
  }
  double strong_magnitude() const {
    return data_->strong_magnitude;
  }
  double weak_magnitude() const {
    return data_->weak_magnitude;
  }
 private:
  internal::GamepadEffectParameters_Data* data_ = nullptr;
};

class GamepadObserver_GamepadConnected_ParamsDataView {
 public:
  GamepadObserver_GamepadConnected_ParamsDataView() {}

  GamepadObserver_GamepadConnected_ParamsDataView(
      internal::GamepadObserver_GamepadConnected_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t index() const {
    return data_->index;
  }
  inline void GetGamepadDataView(
      GamepadDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGamepad(UserType* output) {
    auto* pointer = data_->gamepad.Get();
    return mojo::internal::Deserialize<::device::mojom::GamepadDataView>(
        pointer, output, context_);
  }
 private:
  internal::GamepadObserver_GamepadConnected_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GamepadObserver_GamepadDisconnected_ParamsDataView {
 public:
  GamepadObserver_GamepadDisconnected_ParamsDataView() {}

  GamepadObserver_GamepadDisconnected_ParamsDataView(
      internal::GamepadObserver_GamepadDisconnected_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t index() const {
    return data_->index;
  }
  inline void GetGamepadDataView(
      GamepadDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGamepad(UserType* output) {
    auto* pointer = data_->gamepad.Get();
    return mojo::internal::Deserialize<::device::mojom::GamepadDataView>(
        pointer, output, context_);
  }
 private:
  internal::GamepadObserver_GamepadDisconnected_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GamepadMonitor_GamepadStartPolling_ParamsDataView {
 public:
  GamepadMonitor_GamepadStartPolling_ParamsDataView() {}

  GamepadMonitor_GamepadStartPolling_ParamsDataView(
      internal::GamepadMonitor_GamepadStartPolling_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::GamepadMonitor_GamepadStartPolling_Params_Data* data_ = nullptr;
};

class GamepadMonitor_GamepadStartPolling_ResponseParamsDataView {
 public:
  GamepadMonitor_GamepadStartPolling_ResponseParamsDataView() {}

  GamepadMonitor_GamepadStartPolling_ResponseParamsDataView(
      internal::GamepadMonitor_GamepadStartPolling_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedSharedBufferHandle TakeMemoryHandle() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->memory_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::GamepadMonitor_GamepadStartPolling_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GamepadMonitor_GamepadStopPolling_ParamsDataView {
 public:
  GamepadMonitor_GamepadStopPolling_ParamsDataView() {}

  GamepadMonitor_GamepadStopPolling_ParamsDataView(
      internal::GamepadMonitor_GamepadStopPolling_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::GamepadMonitor_GamepadStopPolling_Params_Data* data_ = nullptr;
};

class GamepadMonitor_GamepadStopPolling_ResponseParamsDataView {
 public:
  GamepadMonitor_GamepadStopPolling_ResponseParamsDataView() {}

  GamepadMonitor_GamepadStopPolling_ResponseParamsDataView(
      internal::GamepadMonitor_GamepadStopPolling_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::GamepadMonitor_GamepadStopPolling_ResponseParams_Data* data_ = nullptr;
};

class GamepadMonitor_SetObserver_ParamsDataView {
 public:
  GamepadMonitor_SetObserver_ParamsDataView() {}

  GamepadMonitor_SetObserver_ParamsDataView(
      internal::GamepadMonitor_SetObserver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeGamepadObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::GamepadObserverPtrDataView>(
            &data_->gamepad_observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::GamepadMonitor_SetObserver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GamepadHapticsManager_PlayVibrationEffectOnce_ParamsDataView {
 public:
  GamepadHapticsManager_PlayVibrationEffectOnce_ParamsDataView() {}

  GamepadHapticsManager_PlayVibrationEffectOnce_ParamsDataView(
      internal::GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t pad_index() const {
    return data_->pad_index;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::device::mojom::GamepadHapticEffectType>(
        data_value, output);
  }

  GamepadHapticEffectType type() const {
    return static_cast<GamepadHapticEffectType>(data_->type);
  }
  inline void GetParamsDataView(
      GamepadEffectParametersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::device::mojom::GamepadEffectParametersDataView>(
        pointer, output, context_);
  }
 private:
  internal::GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParamsDataView {
 public:
  GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParamsDataView() {}

  GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParamsDataView(
      internal::GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::device::mojom::GamepadHapticsResult>(
        data_value, output);
  }

  GamepadHapticsResult result() const {
    return static_cast<GamepadHapticsResult>(data_->result);
  }
 private:
  internal::GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data* data_ = nullptr;
};

class GamepadHapticsManager_ResetVibrationActuator_ParamsDataView {
 public:
  GamepadHapticsManager_ResetVibrationActuator_ParamsDataView() {}

  GamepadHapticsManager_ResetVibrationActuator_ParamsDataView(
      internal::GamepadHapticsManager_ResetVibrationActuator_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t pad_index() const {
    return data_->pad_index;
  }
 private:
  internal::GamepadHapticsManager_ResetVibrationActuator_Params_Data* data_ = nullptr;
};

class GamepadHapticsManager_ResetVibrationActuator_ResponseParamsDataView {
 public:
  GamepadHapticsManager_ResetVibrationActuator_ResponseParamsDataView() {}

  GamepadHapticsManager_ResetVibrationActuator_ResponseParamsDataView(
      internal::GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::device::mojom::GamepadHapticsResult>(
        data_value, output);
  }

  GamepadHapticsResult result() const {
    return static_cast<GamepadHapticsResult>(data_->result);
  }
 private:
  internal::GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

template <>
struct hash<::device::mojom::GamepadHand>
    : public mojo::internal::EnumHashImpl<::device::mojom::GamepadHand> {};

template <>
struct hash<::device::mojom::GamepadHapticActuatorType>
    : public mojo::internal::EnumHashImpl<::device::mojom::GamepadHapticActuatorType> {};

template <>
struct hash<::device::mojom::GamepadHapticEffectType>
    : public mojo::internal::EnumHashImpl<::device::mojom::GamepadHapticEffectType> {};

template <>
struct hash<::device::mojom::GamepadHapticsResult>
    : public mojo::internal::EnumHashImpl<::device::mojom::GamepadHapticsResult> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::device::mojom::GamepadHand, ::device::mojom::GamepadHand> {
  static ::device::mojom::GamepadHand ToMojom(::device::mojom::GamepadHand input) { return input; }
  static bool FromMojom(::device::mojom::GamepadHand input, ::device::mojom::GamepadHand* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::GamepadHand, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::GamepadHand, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::GamepadHand>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::GamepadHapticActuatorType, ::device::mojom::GamepadHapticActuatorType> {
  static ::device::mojom::GamepadHapticActuatorType ToMojom(::device::mojom::GamepadHapticActuatorType input) { return input; }
  static bool FromMojom(::device::mojom::GamepadHapticActuatorType input, ::device::mojom::GamepadHapticActuatorType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::GamepadHapticActuatorType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::GamepadHapticActuatorType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::GamepadHapticActuatorType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::GamepadHapticEffectType, ::device::mojom::GamepadHapticEffectType> {
  static ::device::mojom::GamepadHapticEffectType ToMojom(::device::mojom::GamepadHapticEffectType input) { return input; }
  static bool FromMojom(::device::mojom::GamepadHapticEffectType input, ::device::mojom::GamepadHapticEffectType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::GamepadHapticEffectType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::GamepadHapticEffectType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::GamepadHapticEffectType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::GamepadHapticsResult, ::device::mojom::GamepadHapticsResult> {
  static ::device::mojom::GamepadHapticsResult ToMojom(::device::mojom::GamepadHapticsResult input) { return input; }
  static bool FromMojom(::device::mojom::GamepadHapticsResult input, ::device::mojom::GamepadHapticsResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::GamepadHapticsResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::GamepadHapticsResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::GamepadHapticsResult>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::GamepadQuaternionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::GamepadQuaternionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::GamepadQuaternion_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->x = CallWithContext(Traits::x, input, custom_context);
    (*output)->y = CallWithContext(Traits::y, input, custom_context);
    (*output)->z = CallWithContext(Traits::z, input, custom_context);
    (*output)->w = CallWithContext(Traits::w, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::GamepadQuaternion_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::GamepadQuaternionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::GamepadVectorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::GamepadVectorDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::GamepadVector_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->x = CallWithContext(Traits::x, input, custom_context);
    (*output)->y = CallWithContext(Traits::y, input, custom_context);
    (*output)->z = CallWithContext(Traits::z, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::GamepadVector_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::GamepadVectorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::GamepadButtonDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::GamepadButtonDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::GamepadButton_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->pressed = CallWithContext(Traits::pressed, input, custom_context);
    (*output)->touched = CallWithContext(Traits::touched, input, custom_context);
    (*output)->value = CallWithContext(Traits::value, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::GamepadButton_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::GamepadButtonDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::GamepadPoseDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::GamepadPoseDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::GamepadPose_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::orientation, input, custom_context)) in_orientation = CallWithContext(Traits::orientation, input, custom_context);
    typename decltype((*output)->orientation)::BaseType::BufferWriter
        orientation_writer;
    mojo::internal::Serialize<::device::mojom::GamepadQuaternionDataView>(
        in_orientation, buffer, &orientation_writer, context);
    (*output)->orientation.Set(
        orientation_writer.is_null() ? nullptr : orientation_writer.data());
    decltype(CallWithContext(Traits::position, input, custom_context)) in_position = CallWithContext(Traits::position, input, custom_context);
    typename decltype((*output)->position)::BaseType::BufferWriter
        position_writer;
    mojo::internal::Serialize<::device::mojom::GamepadVectorDataView>(
        in_position, buffer, &position_writer, context);
    (*output)->position.Set(
        position_writer.is_null() ? nullptr : position_writer.data());
    decltype(CallWithContext(Traits::angular_velocity, input, custom_context)) in_angular_velocity = CallWithContext(Traits::angular_velocity, input, custom_context);
    typename decltype((*output)->angular_velocity)::BaseType::BufferWriter
        angular_velocity_writer;
    mojo::internal::Serialize<::device::mojom::GamepadVectorDataView>(
        in_angular_velocity, buffer, &angular_velocity_writer, context);
    (*output)->angular_velocity.Set(
        angular_velocity_writer.is_null() ? nullptr : angular_velocity_writer.data());
    decltype(CallWithContext(Traits::linear_velocity, input, custom_context)) in_linear_velocity = CallWithContext(Traits::linear_velocity, input, custom_context);
    typename decltype((*output)->linear_velocity)::BaseType::BufferWriter
        linear_velocity_writer;
    mojo::internal::Serialize<::device::mojom::GamepadVectorDataView>(
        in_linear_velocity, buffer, &linear_velocity_writer, context);
    (*output)->linear_velocity.Set(
        linear_velocity_writer.is_null() ? nullptr : linear_velocity_writer.data());
    decltype(CallWithContext(Traits::angular_acceleration, input, custom_context)) in_angular_acceleration = CallWithContext(Traits::angular_acceleration, input, custom_context);
    typename decltype((*output)->angular_acceleration)::BaseType::BufferWriter
        angular_acceleration_writer;
    mojo::internal::Serialize<::device::mojom::GamepadVectorDataView>(
        in_angular_acceleration, buffer, &angular_acceleration_writer, context);
    (*output)->angular_acceleration.Set(
        angular_acceleration_writer.is_null() ? nullptr : angular_acceleration_writer.data());
    decltype(CallWithContext(Traits::linear_acceleration, input, custom_context)) in_linear_acceleration = CallWithContext(Traits::linear_acceleration, input, custom_context);
    typename decltype((*output)->linear_acceleration)::BaseType::BufferWriter
        linear_acceleration_writer;
    mojo::internal::Serialize<::device::mojom::GamepadVectorDataView>(
        in_linear_acceleration, buffer, &linear_acceleration_writer, context);
    (*output)->linear_acceleration.Set(
        linear_acceleration_writer.is_null() ? nullptr : linear_acceleration_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::GamepadPose_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::GamepadPoseDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::GamepadHapticActuatorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::GamepadHapticActuatorDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::GamepadHapticActuator_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::device::mojom::GamepadHapticActuatorType>(
        CallWithContext(Traits::type, input, custom_context), &(*output)->type);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::GamepadHapticActuator_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::GamepadHapticActuatorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::GamepadDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::GamepadDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::Gamepad_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->connected = CallWithContext(Traits::connected, input, custom_context);
    decltype(CallWithContext(Traits::id, input, custom_context)) in_id = CallWithContext(Traits::id, input, custom_context);
    typename decltype((*output)->id)::BaseType::BufferWriter
        id_writer;
    const mojo::internal::ContainerValidateParams id_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint16_t>>(
        in_id, buffer, &id_writer, &id_validate_params,
        context);
    (*output)->id.Set(
        id_writer.is_null() ? nullptr : id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in Gamepad struct");
    (*output)->timestamp = CallWithContext(Traits::timestamp, input, custom_context);
    decltype(CallWithContext(Traits::axes, input, custom_context)) in_axes = CallWithContext(Traits::axes, input, custom_context);
    typename decltype((*output)->axes)::BaseType::BufferWriter
        axes_writer;
    const mojo::internal::ContainerValidateParams axes_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<double>>(
        in_axes, buffer, &axes_writer, &axes_validate_params,
        context);
    (*output)->axes.Set(
        axes_writer.is_null() ? nullptr : axes_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->axes.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null axes in Gamepad struct");
    decltype(CallWithContext(Traits::buttons, input, custom_context)) in_buttons = CallWithContext(Traits::buttons, input, custom_context);
    typename decltype((*output)->buttons)::BaseType::BufferWriter
        buttons_writer;
    const mojo::internal::ContainerValidateParams buttons_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::GamepadButtonDataView>>(
        in_buttons, buffer, &buttons_writer, &buttons_validate_params,
        context);
    (*output)->buttons.Set(
        buttons_writer.is_null() ? nullptr : buttons_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->buttons.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null buttons in Gamepad struct");
    decltype(CallWithContext(Traits::vibration_actuator, input, custom_context)) in_vibration_actuator = CallWithContext(Traits::vibration_actuator, input, custom_context);
    typename decltype((*output)->vibration_actuator)::BaseType::BufferWriter
        vibration_actuator_writer;
    mojo::internal::Serialize<::device::mojom::GamepadHapticActuatorDataView>(
        in_vibration_actuator, buffer, &vibration_actuator_writer, context);
    (*output)->vibration_actuator.Set(
        vibration_actuator_writer.is_null() ? nullptr : vibration_actuator_writer.data());
    decltype(CallWithContext(Traits::mapping, input, custom_context)) in_mapping = CallWithContext(Traits::mapping, input, custom_context);
    typename decltype((*output)->mapping)::BaseType::BufferWriter
        mapping_writer;
    const mojo::internal::ContainerValidateParams mapping_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint16_t>>(
        in_mapping, buffer, &mapping_writer, &mapping_validate_params,
        context);
    (*output)->mapping.Set(
        mapping_writer.is_null() ? nullptr : mapping_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->mapping.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null mapping in Gamepad struct");
    decltype(CallWithContext(Traits::pose, input, custom_context)) in_pose = CallWithContext(Traits::pose, input, custom_context);
    typename decltype((*output)->pose)::BaseType::BufferWriter
        pose_writer;
    mojo::internal::Serialize<::device::mojom::GamepadPoseDataView>(
        in_pose, buffer, &pose_writer, context);
    (*output)->pose.Set(
        pose_writer.is_null() ? nullptr : pose_writer.data());
    mojo::internal::Serialize<::device::mojom::GamepadHand>(
        CallWithContext(Traits::hand, input, custom_context), &(*output)->hand);
    (*output)->display_id = CallWithContext(Traits::display_id, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::Gamepad_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::GamepadDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::GamepadEffectParametersDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::GamepadEffectParametersDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::GamepadEffectParameters_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->duration = CallWithContext(Traits::duration, input, custom_context);
    (*output)->start_delay = CallWithContext(Traits::start_delay, input, custom_context);
    (*output)->strong_magnitude = CallWithContext(Traits::strong_magnitude, input, custom_context);
    (*output)->weak_magnitude = CallWithContext(Traits::weak_magnitude, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::GamepadEffectParameters_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::GamepadEffectParametersDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace device {
namespace mojom {







inline void GamepadPoseDataView::GetOrientationDataView(
    GamepadQuaternionDataView* output) {
  auto pointer = data_->orientation.Get();
  *output = GamepadQuaternionDataView(pointer, context_);
}
inline void GamepadPoseDataView::GetPositionDataView(
    GamepadVectorDataView* output) {
  auto pointer = data_->position.Get();
  *output = GamepadVectorDataView(pointer, context_);
}
inline void GamepadPoseDataView::GetAngularVelocityDataView(
    GamepadVectorDataView* output) {
  auto pointer = data_->angular_velocity.Get();
  *output = GamepadVectorDataView(pointer, context_);
}
inline void GamepadPoseDataView::GetLinearVelocityDataView(
    GamepadVectorDataView* output) {
  auto pointer = data_->linear_velocity.Get();
  *output = GamepadVectorDataView(pointer, context_);
}
inline void GamepadPoseDataView::GetAngularAccelerationDataView(
    GamepadVectorDataView* output) {
  auto pointer = data_->angular_acceleration.Get();
  *output = GamepadVectorDataView(pointer, context_);
}
inline void GamepadPoseDataView::GetLinearAccelerationDataView(
    GamepadVectorDataView* output) {
  auto pointer = data_->linear_acceleration.Get();
  *output = GamepadVectorDataView(pointer, context_);
}




inline void GamepadDataView::GetIdDataView(
    mojo::ArrayDataView<uint16_t>* output) {
  auto pointer = data_->id.Get();
  *output = mojo::ArrayDataView<uint16_t>(pointer, context_);
}
inline void GamepadDataView::GetAxesDataView(
    mojo::ArrayDataView<double>* output) {
  auto pointer = data_->axes.Get();
  *output = mojo::ArrayDataView<double>(pointer, context_);
}
inline void GamepadDataView::GetButtonsDataView(
    mojo::ArrayDataView<GamepadButtonDataView>* output) {
  auto pointer = data_->buttons.Get();
  *output = mojo::ArrayDataView<GamepadButtonDataView>(pointer, context_);
}
inline void GamepadDataView::GetVibrationActuatorDataView(
    GamepadHapticActuatorDataView* output) {
  auto pointer = data_->vibration_actuator.Get();
  *output = GamepadHapticActuatorDataView(pointer, context_);
}
inline void GamepadDataView::GetMappingDataView(
    mojo::ArrayDataView<uint16_t>* output) {
  auto pointer = data_->mapping.Get();
  *output = mojo::ArrayDataView<uint16_t>(pointer, context_);
}
inline void GamepadDataView::GetPoseDataView(
    GamepadPoseDataView* output) {
  auto pointer = data_->pose.Get();
  *output = GamepadPoseDataView(pointer, context_);
}




inline void GamepadObserver_GamepadConnected_ParamsDataView::GetGamepadDataView(
    GamepadDataView* output) {
  auto pointer = data_->gamepad.Get();
  *output = GamepadDataView(pointer, context_);
}


inline void GamepadObserver_GamepadDisconnected_ParamsDataView::GetGamepadDataView(
    GamepadDataView* output) {
  auto pointer = data_->gamepad.Get();
  *output = GamepadDataView(pointer, context_);
}












inline void GamepadHapticsManager_PlayVibrationEffectOnce_ParamsDataView::GetParamsDataView(
    GamepadEffectParametersDataView* output) {
  auto pointer = data_->params.Get();
  *output = GamepadEffectParametersDataView(pointer, context_);
}









}  // namespace mojom
}  // namespace device

#endif  // DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_SHARED_H_
