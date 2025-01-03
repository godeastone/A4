// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_LOCKS_LOCK_MANAGER_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_LOCKS_LOCK_MANAGER_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/modules/locks/lock_manager.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {
class LockInfoDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::LockInfoDataView> {
  using Data = ::blink::mojom::internal::LockInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {

enum class LockMode : int32_t {
  SHARED,
  EXCLUSIVE,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, LockMode value) {
  switch(value) {
    case LockMode::SHARED:
      return os << "LockMode::SHARED";
    case LockMode::EXCLUSIVE:
      return os << "LockMode::EXCLUSIVE";
    default:
      return os << "Unknown LockMode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(LockMode value) {
  return internal::LockMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class LockManager_WaitMode : int32_t {
  WAIT,
  NO_WAIT,
  PREEMPT,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, LockManager_WaitMode value) {
  switch(value) {
    case LockManager_WaitMode::WAIT:
      return os << "LockManager_WaitMode::WAIT";
    case LockManager_WaitMode::NO_WAIT:
      return os << "LockManager_WaitMode::NO_WAIT";
    case LockManager_WaitMode::PREEMPT:
      return os << "LockManager_WaitMode::PREEMPT";
    default:
      return os << "Unknown LockManager_WaitMode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(LockManager_WaitMode value) {
  return internal::LockManager_WaitMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class LockHandleInterfaceBase {};

using LockHandlePtrDataView =
    mojo::InterfacePtrDataView<LockHandleInterfaceBase>;
using LockHandleRequestDataView =
    mojo::InterfaceRequestDataView<LockHandleInterfaceBase>;
using LockHandleAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<LockHandleInterfaceBase>;
using LockHandleAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<LockHandleInterfaceBase>;
class LockRequestInterfaceBase {};

using LockRequestPtrDataView =
    mojo::InterfacePtrDataView<LockRequestInterfaceBase>;
using LockRequestRequestDataView =
    mojo::InterfaceRequestDataView<LockRequestInterfaceBase>;
using LockRequestAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<LockRequestInterfaceBase>;
using LockRequestAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<LockRequestInterfaceBase>;
class LockManagerInterfaceBase {};

using LockManagerPtrDataView =
    mojo::InterfacePtrDataView<LockManagerInterfaceBase>;
using LockManagerRequestDataView =
    mojo::InterfaceRequestDataView<LockManagerInterfaceBase>;
using LockManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<LockManagerInterfaceBase>;
using LockManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<LockManagerInterfaceBase>;
class LockInfoDataView {
 public:
  LockInfoDataView() {}

  LockInfoDataView(
      internal::LockInfo_Data* data,
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
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMode(UserType* output) const {
    auto data_value = data_->mode;
    return mojo::internal::Deserialize<::blink::mojom::LockMode>(
        data_value, output);
  }

  LockMode mode() const {
    return static_cast<LockMode>(data_->mode);
  }
  inline void GetClientIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientId(UserType* output) {
    auto* pointer = data_->client_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::LockInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LockRequest_Granted_ParamsDataView {
 public:
  LockRequest_Granted_ParamsDataView() {}

  LockRequest_Granted_ParamsDataView(
      internal::LockRequest_Granted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeLockHandle() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::LockHandlePtrDataView>(
            &data_->lock_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::LockRequest_Granted_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LockRequest_Failed_ParamsDataView {
 public:
  LockRequest_Failed_ParamsDataView() {}

  LockRequest_Failed_ParamsDataView(
      internal::LockRequest_Failed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::LockRequest_Failed_Params_Data* data_ = nullptr;
};

class LockRequest_Abort_ParamsDataView {
 public:
  LockRequest_Abort_ParamsDataView() {}

  LockRequest_Abort_ParamsDataView(
      internal::LockRequest_Abort_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetReasonDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) {
    auto* pointer = data_->reason.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::LockRequest_Abort_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LockManager_RequestLock_ParamsDataView {
 public:
  LockManager_RequestLock_ParamsDataView() {}

  LockManager_RequestLock_ParamsDataView(
      internal::LockManager_RequestLock_Params_Data* data,
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
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMode(UserType* output) const {
    auto data_value = data_->mode;
    return mojo::internal::Deserialize<::blink::mojom::LockMode>(
        data_value, output);
  }

  LockMode mode() const {
    return static_cast<LockMode>(data_->mode);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWait(UserType* output) const {
    auto data_value = data_->wait;
    return mojo::internal::Deserialize<::blink::mojom::LockManager_WaitMode>(
        data_value, output);
  }

  LockManager_WaitMode wait() const {
    return static_cast<LockManager_WaitMode>(data_->wait);
  }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::LockRequestPtrDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::LockManager_RequestLock_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LockManager_QueryState_ParamsDataView {
 public:
  LockManager_QueryState_ParamsDataView() {}

  LockManager_QueryState_ParamsDataView(
      internal::LockManager_QueryState_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::LockManager_QueryState_Params_Data* data_ = nullptr;
};

class LockManager_QueryState_ResponseParamsDataView {
 public:
  LockManager_QueryState_ResponseParamsDataView() {}

  LockManager_QueryState_ResponseParamsDataView(
      internal::LockManager_QueryState_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequestedDataView(
      mojo::ArrayDataView<LockInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequested(UserType* output) {
    auto* pointer = data_->requested.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::LockInfoDataView>>(
        pointer, output, context_);
  }
  inline void GetHeldDataView(
      mojo::ArrayDataView<LockInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHeld(UserType* output) {
    auto* pointer = data_->held.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::LockInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::LockManager_QueryState_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::LockMode>
    : public mojo::internal::EnumHashImpl<::blink::mojom::LockMode> {};

template <>
struct hash<::blink::mojom::LockManager_WaitMode>
    : public mojo::internal::EnumHashImpl<::blink::mojom::LockManager_WaitMode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::LockMode, ::blink::mojom::LockMode> {
  static ::blink::mojom::LockMode ToMojom(::blink::mojom::LockMode input) { return input; }
  static bool FromMojom(::blink::mojom::LockMode input, ::blink::mojom::LockMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::LockMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::LockMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::LockMode>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::LockManager_WaitMode, ::blink::mojom::LockManager_WaitMode> {
  static ::blink::mojom::LockManager_WaitMode ToMojom(::blink::mojom::LockManager_WaitMode input) { return input; }
  static bool FromMojom(::blink::mojom::LockManager_WaitMode input, ::blink::mojom::LockManager_WaitMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::LockManager_WaitMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::LockManager_WaitMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::LockManager_WaitMode>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::LockInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::LockInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::LockInfo_Data::BufferWriter* output,
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
        "null name in LockInfo struct");
    mojo::internal::Serialize<::blink::mojom::LockMode>(
        CallWithContext(Traits::mode, input, custom_context), &(*output)->mode);
    decltype(CallWithContext(Traits::client_id, input, custom_context)) in_client_id = CallWithContext(Traits::client_id, input, custom_context);
    typename decltype((*output)->client_id)::BaseType::BufferWriter
        client_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_client_id, buffer, &client_id_writer, context);
    (*output)->client_id.Set(
        client_id_writer.is_null() ? nullptr : client_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->client_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null client_id in LockInfo struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::LockInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::LockInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void LockInfoDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void LockInfoDataView::GetClientIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->client_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}






inline void LockRequest_Abort_ParamsDataView::GetReasonDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->reason.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void LockManager_RequestLock_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void LockManager_QueryState_ResponseParamsDataView::GetRequestedDataView(
    mojo::ArrayDataView<LockInfoDataView>* output) {
  auto pointer = data_->requested.Get();
  *output = mojo::ArrayDataView<LockInfoDataView>(pointer, context_);
}
inline void LockManager_QueryState_ResponseParamsDataView::GetHeldDataView(
    mojo::ArrayDataView<LockInfoDataView>* output) {
  auto pointer = data_->held.Get();
  *output = mojo::ArrayDataView<LockInfoDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_LOCKS_LOCK_MANAGER_MOJOM_SHARED_H_
