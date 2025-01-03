// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/modules/keyboard_lock/keyboard_lock.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {
class GetKeyboardLayoutMapResultDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::GetKeyboardLayoutMapResultDataView> {
  using Data = ::blink::mojom::internal::GetKeyboardLayoutMapResult_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {

enum class KeyboardLockRequestResult : int32_t {
  kSuccess = 0,
  kFrameDetachedError = 1,
  kNoValidKeyCodesError = 2,
  kChildFrameError = 3,
  kRequestFailedError = 4,
  kMinValue = 0,
  kMaxValue = 4,
};

inline std::ostream& operator<<(std::ostream& os, KeyboardLockRequestResult value) {
  switch(value) {
    case KeyboardLockRequestResult::kSuccess:
      return os << "KeyboardLockRequestResult::kSuccess";
    case KeyboardLockRequestResult::kFrameDetachedError:
      return os << "KeyboardLockRequestResult::kFrameDetachedError";
    case KeyboardLockRequestResult::kNoValidKeyCodesError:
      return os << "KeyboardLockRequestResult::kNoValidKeyCodesError";
    case KeyboardLockRequestResult::kChildFrameError:
      return os << "KeyboardLockRequestResult::kChildFrameError";
    case KeyboardLockRequestResult::kRequestFailedError:
      return os << "KeyboardLockRequestResult::kRequestFailedError";
    default:
      return os << "Unknown KeyboardLockRequestResult value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(KeyboardLockRequestResult value) {
  return internal::KeyboardLockRequestResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class GetKeyboardLayoutMapStatus : int32_t {
  kSuccess = 0,
  kFail = 1,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, GetKeyboardLayoutMapStatus value) {
  switch(value) {
    case GetKeyboardLayoutMapStatus::kSuccess:
      return os << "GetKeyboardLayoutMapStatus::kSuccess";
    case GetKeyboardLayoutMapStatus::kFail:
      return os << "GetKeyboardLayoutMapStatus::kFail";
    default:
      return os << "Unknown GetKeyboardLayoutMapStatus value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(GetKeyboardLayoutMapStatus value) {
  return internal::GetKeyboardLayoutMapStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class KeyboardLockServiceInterfaceBase {};

using KeyboardLockServicePtrDataView =
    mojo::InterfacePtrDataView<KeyboardLockServiceInterfaceBase>;
using KeyboardLockServiceRequestDataView =
    mojo::InterfaceRequestDataView<KeyboardLockServiceInterfaceBase>;
using KeyboardLockServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<KeyboardLockServiceInterfaceBase>;
using KeyboardLockServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<KeyboardLockServiceInterfaceBase>;
class GetKeyboardLayoutMapResultDataView {
 public:
  GetKeyboardLayoutMapResultDataView() {}

  GetKeyboardLayoutMapResultDataView(
      internal::GetKeyboardLayoutMapResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::GetKeyboardLayoutMapStatus>(
        data_value, output);
  }

  GetKeyboardLayoutMapStatus status() const {
    return static_cast<GetKeyboardLayoutMapStatus>(data_->status);
  }
  inline void GetLayoutMapDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLayoutMap(UserType* output) {
    auto* pointer = data_->layout_map.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::GetKeyboardLayoutMapResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class KeyboardLockService_RequestKeyboardLock_ParamsDataView {
 public:
  KeyboardLockService_RequestKeyboardLock_ParamsDataView() {}

  KeyboardLockService_RequestKeyboardLock_ParamsDataView(
      internal::KeyboardLockService_RequestKeyboardLock_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyCodesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyCodes(UserType* output) {
    auto* pointer = data_->key_codes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::KeyboardLockService_RequestKeyboardLock_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class KeyboardLockService_RequestKeyboardLock_ResponseParamsDataView {
 public:
  KeyboardLockService_RequestKeyboardLock_ResponseParamsDataView() {}

  KeyboardLockService_RequestKeyboardLock_ResponseParamsDataView(
      internal::KeyboardLockService_RequestKeyboardLock_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::KeyboardLockRequestResult>(
        data_value, output);
  }

  KeyboardLockRequestResult result() const {
    return static_cast<KeyboardLockRequestResult>(data_->result);
  }
 private:
  internal::KeyboardLockService_RequestKeyboardLock_ResponseParams_Data* data_ = nullptr;
};

class KeyboardLockService_CancelKeyboardLock_ParamsDataView {
 public:
  KeyboardLockService_CancelKeyboardLock_ParamsDataView() {}

  KeyboardLockService_CancelKeyboardLock_ParamsDataView(
      internal::KeyboardLockService_CancelKeyboardLock_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::KeyboardLockService_CancelKeyboardLock_Params_Data* data_ = nullptr;
};

class KeyboardLockService_GetKeyboardLayoutMap_ParamsDataView {
 public:
  KeyboardLockService_GetKeyboardLayoutMap_ParamsDataView() {}

  KeyboardLockService_GetKeyboardLayoutMap_ParamsDataView(
      internal::KeyboardLockService_GetKeyboardLayoutMap_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::KeyboardLockService_GetKeyboardLayoutMap_Params_Data* data_ = nullptr;
};

class KeyboardLockService_GetKeyboardLayoutMap_ResponseParamsDataView {
 public:
  KeyboardLockService_GetKeyboardLayoutMap_ResponseParamsDataView() {}

  KeyboardLockService_GetKeyboardLayoutMap_ResponseParamsDataView(
      internal::KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      GetKeyboardLayoutMapResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::GetKeyboardLayoutMapResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::KeyboardLockRequestResult>
    : public mojo::internal::EnumHashImpl<::blink::mojom::KeyboardLockRequestResult> {};

template <>
struct hash<::blink::mojom::GetKeyboardLayoutMapStatus>
    : public mojo::internal::EnumHashImpl<::blink::mojom::GetKeyboardLayoutMapStatus> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::KeyboardLockRequestResult, ::blink::mojom::KeyboardLockRequestResult> {
  static ::blink::mojom::KeyboardLockRequestResult ToMojom(::blink::mojom::KeyboardLockRequestResult input) { return input; }
  static bool FromMojom(::blink::mojom::KeyboardLockRequestResult input, ::blink::mojom::KeyboardLockRequestResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::KeyboardLockRequestResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::KeyboardLockRequestResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::KeyboardLockRequestResult>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::GetKeyboardLayoutMapStatus, ::blink::mojom::GetKeyboardLayoutMapStatus> {
  static ::blink::mojom::GetKeyboardLayoutMapStatus ToMojom(::blink::mojom::GetKeyboardLayoutMapStatus input) { return input; }
  static bool FromMojom(::blink::mojom::GetKeyboardLayoutMapStatus input, ::blink::mojom::GetKeyboardLayoutMapStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::GetKeyboardLayoutMapStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::GetKeyboardLayoutMapStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::GetKeyboardLayoutMapStatus>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::GetKeyboardLayoutMapResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::GetKeyboardLayoutMapResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::GetKeyboardLayoutMapResult_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::blink::mojom::GetKeyboardLayoutMapStatus>(
        CallWithContext(Traits::status, input, custom_context), &(*output)->status);
    decltype(CallWithContext(Traits::layout_map, input, custom_context)) in_layout_map = CallWithContext(Traits::layout_map, input, custom_context);
    typename decltype((*output)->layout_map)::BaseType::BufferWriter
        layout_map_writer;
    const mojo::internal::ContainerValidateParams layout_map_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
        in_layout_map, buffer, &layout_map_writer, &layout_map_validate_params,
        context);
    (*output)->layout_map.Set(
        layout_map_writer.is_null() ? nullptr : layout_map_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->layout_map.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null layout_map in GetKeyboardLayoutMapResult struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::GetKeyboardLayoutMapResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::GetKeyboardLayoutMapResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void GetKeyboardLayoutMapResultDataView::GetLayoutMapDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output) {
  auto pointer = data_->layout_map.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>(pointer, context_);
}


inline void KeyboardLockService_RequestKeyboardLock_ParamsDataView::GetKeyCodesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->key_codes.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}








inline void KeyboardLockService_GetKeyboardLayoutMap_ResponseParamsDataView::GetResultDataView(
    GetKeyboardLayoutMapResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = GetKeyboardLayoutMapResultDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_SHARED_H_
