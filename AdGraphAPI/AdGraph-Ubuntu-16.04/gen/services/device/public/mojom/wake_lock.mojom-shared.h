// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_SHARED_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_SHARED_H_

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
#include "services/device/public/mojom/wake_lock.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace device {
namespace mojom {


}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {

enum class WakeLockType : int32_t {
  kPreventAppSuspension = 0,
  kPreventDisplaySleep = 1,
  kPreventDisplaySleepAllowDimming = 2,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, WakeLockType value) {
  switch(value) {
    case WakeLockType::kPreventAppSuspension:
      return os << "WakeLockType::kPreventAppSuspension";
    case WakeLockType::kPreventDisplaySleep:
      return os << "WakeLockType::kPreventDisplaySleep";
    case WakeLockType::kPreventDisplaySleepAllowDimming:
      return os << "WakeLockType::kPreventDisplaySleepAllowDimming";
    default:
      return os << "Unknown WakeLockType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(WakeLockType value) {
  return internal::WakeLockType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class WakeLockReason : int32_t {
  kAudioPlayback = 0,
  kVideoPlayback = 1,
  kOther = 2,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, WakeLockReason value) {
  switch(value) {
    case WakeLockReason::kAudioPlayback:
      return os << "WakeLockReason::kAudioPlayback";
    case WakeLockReason::kVideoPlayback:
      return os << "WakeLockReason::kVideoPlayback";
    case WakeLockReason::kOther:
      return os << "WakeLockReason::kOther";
    default:
      return os << "Unknown WakeLockReason value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(WakeLockReason value) {
  return internal::WakeLockReason_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class WakeLockInterfaceBase {};

using WakeLockPtrDataView =
    mojo::InterfacePtrDataView<WakeLockInterfaceBase>;
using WakeLockRequestDataView =
    mojo::InterfaceRequestDataView<WakeLockInterfaceBase>;
using WakeLockAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WakeLockInterfaceBase>;
using WakeLockAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WakeLockInterfaceBase>;
class WakeLock_RequestWakeLock_ParamsDataView {
 public:
  WakeLock_RequestWakeLock_ParamsDataView() {}

  WakeLock_RequestWakeLock_ParamsDataView(
      internal::WakeLock_RequestWakeLock_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WakeLock_RequestWakeLock_Params_Data* data_ = nullptr;
};

class WakeLock_CancelWakeLock_ParamsDataView {
 public:
  WakeLock_CancelWakeLock_ParamsDataView() {}

  WakeLock_CancelWakeLock_ParamsDataView(
      internal::WakeLock_CancelWakeLock_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WakeLock_CancelWakeLock_Params_Data* data_ = nullptr;
};

class WakeLock_AddClient_ParamsDataView {
 public:
  WakeLock_AddClient_ParamsDataView() {}

  WakeLock_AddClient_ParamsDataView(
      internal::WakeLock_AddClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeWakeLock() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::WakeLockRequestDataView>(
            &data_->wake_lock, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WakeLock_AddClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WakeLock_ChangeType_ParamsDataView {
 public:
  WakeLock_ChangeType_ParamsDataView() {}

  WakeLock_ChangeType_ParamsDataView(
      internal::WakeLock_ChangeType_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::device::mojom::WakeLockType>(
        data_value, output);
  }

  WakeLockType type() const {
    return static_cast<WakeLockType>(data_->type);
  }
 private:
  internal::WakeLock_ChangeType_Params_Data* data_ = nullptr;
};

class WakeLock_ChangeType_ResponseParamsDataView {
 public:
  WakeLock_ChangeType_ResponseParamsDataView() {}

  WakeLock_ChangeType_ResponseParamsDataView(
      internal::WakeLock_ChangeType_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool result() const {
    return data_->result;
  }
 private:
  internal::WakeLock_ChangeType_ResponseParams_Data* data_ = nullptr;
};

class WakeLock_HasWakeLockForTests_ParamsDataView {
 public:
  WakeLock_HasWakeLockForTests_ParamsDataView() {}

  WakeLock_HasWakeLockForTests_ParamsDataView(
      internal::WakeLock_HasWakeLockForTests_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WakeLock_HasWakeLockForTests_Params_Data* data_ = nullptr;
};

class WakeLock_HasWakeLockForTests_ResponseParamsDataView {
 public:
  WakeLock_HasWakeLockForTests_ResponseParamsDataView() {}

  WakeLock_HasWakeLockForTests_ResponseParamsDataView(
      internal::WakeLock_HasWakeLockForTests_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool result() const {
    return data_->result;
  }
 private:
  internal::WakeLock_HasWakeLockForTests_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

template <>
struct hash<::device::mojom::WakeLockType>
    : public mojo::internal::EnumHashImpl<::device::mojom::WakeLockType> {};

template <>
struct hash<::device::mojom::WakeLockReason>
    : public mojo::internal::EnumHashImpl<::device::mojom::WakeLockReason> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::device::mojom::WakeLockType, ::device::mojom::WakeLockType> {
  static ::device::mojom::WakeLockType ToMojom(::device::mojom::WakeLockType input) { return input; }
  static bool FromMojom(::device::mojom::WakeLockType input, ::device::mojom::WakeLockType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::WakeLockType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::WakeLockType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::WakeLockType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::WakeLockReason, ::device::mojom::WakeLockReason> {
  static ::device::mojom::WakeLockReason ToMojom(::device::mojom::WakeLockReason input) { return input; }
  static bool FromMojom(::device::mojom::WakeLockReason input, ::device::mojom::WakeLockReason* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::WakeLockReason, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::WakeLockReason, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::WakeLockReason>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace device {
namespace mojom {
















}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_SHARED_H_
