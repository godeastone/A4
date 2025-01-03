// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/navigation_preload_state.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {
class ServiceWorkerRegistrationOptionsDataView;

class ServiceWorkerRegistrationObjectInfoDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::ServiceWorkerRegistrationOptionsDataView> {
  using Data = ::blink::mojom::internal::ServiceWorkerRegistrationOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView> {
  using Data = ::blink::mojom::internal::ServiceWorkerRegistrationObjectInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {

enum class ServiceWorkerUpdateViaCache : int32_t {
  kImports,
  kAll,
  kNone,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, ServiceWorkerUpdateViaCache value) {
  switch(value) {
    case ServiceWorkerUpdateViaCache::kImports:
      return os << "ServiceWorkerUpdateViaCache::kImports";
    case ServiceWorkerUpdateViaCache::kAll:
      return os << "ServiceWorkerUpdateViaCache::kAll";
    case ServiceWorkerUpdateViaCache::kNone:
      return os << "ServiceWorkerUpdateViaCache::kNone";
    default:
      return os << "Unknown ServiceWorkerUpdateViaCache value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ServiceWorkerUpdateViaCache value) {
  return internal::ServiceWorkerUpdateViaCache_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class ServiceWorkerRegistrationObjectHostInterfaceBase {};

using ServiceWorkerRegistrationObjectHostPtrDataView =
    mojo::InterfacePtrDataView<ServiceWorkerRegistrationObjectHostInterfaceBase>;
using ServiceWorkerRegistrationObjectHostRequestDataView =
    mojo::InterfaceRequestDataView<ServiceWorkerRegistrationObjectHostInterfaceBase>;
using ServiceWorkerRegistrationObjectHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceWorkerRegistrationObjectHostInterfaceBase>;
using ServiceWorkerRegistrationObjectHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceWorkerRegistrationObjectHostInterfaceBase>;
class ServiceWorkerRegistrationObjectInterfaceBase {};

using ServiceWorkerRegistrationObjectPtrDataView =
    mojo::InterfacePtrDataView<ServiceWorkerRegistrationObjectInterfaceBase>;
using ServiceWorkerRegistrationObjectRequestDataView =
    mojo::InterfaceRequestDataView<ServiceWorkerRegistrationObjectInterfaceBase>;
using ServiceWorkerRegistrationObjectAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceWorkerRegistrationObjectInterfaceBase>;
using ServiceWorkerRegistrationObjectAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceWorkerRegistrationObjectInterfaceBase>;
class ServiceWorkerRegistrationOptionsDataView {
 public:
  ServiceWorkerRegistrationOptionsDataView() {}

  ServiceWorkerRegistrationOptionsDataView(
      internal::ServiceWorkerRegistrationOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetScopeDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScope(UserType* output) {
    auto* pointer = data_->scope.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUpdateViaCache(UserType* output) const {
    auto data_value = data_->update_via_cache;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerUpdateViaCache>(
        data_value, output);
  }

  ServiceWorkerUpdateViaCache update_via_cache() const {
    return static_cast<ServiceWorkerUpdateViaCache>(data_->update_via_cache);
  }
 private:
  internal::ServiceWorkerRegistrationOptions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerRegistrationObjectInfoDataView {
 public:
  ServiceWorkerRegistrationObjectInfoDataView() {}

  ServiceWorkerRegistrationObjectInfoDataView(
      internal::ServiceWorkerRegistrationObjectInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t registration_id() const {
    return data_->registration_id;
  }
  inline void GetOptionsDataView(
      ServiceWorkerRegistrationOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerRegistrationOptionsDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeHostPtrInfo() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ServiceWorkerRegistrationObjectHostAssociatedPtrInfoDataView>(
            &data_->host_ptr_info, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ServiceWorkerRegistrationObjectAssociatedRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetInstallingDataView(
      ::blink::mojom::ServiceWorkerObjectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstalling(UserType* output) {
    auto* pointer = data_->installing.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
        pointer, output, context_);
  }
  inline void GetWaitingDataView(
      ::blink::mojom::ServiceWorkerObjectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWaiting(UserType* output) {
    auto* pointer = data_->waiting.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
        pointer, output, context_);
  }
  inline void GetActiveDataView(
      ::blink::mojom::ServiceWorkerObjectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadActive(UserType* output) {
    auto* pointer = data_->active.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerRegistrationObjectInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerRegistrationObjectHost_Update_ParamsDataView {
 public:
  ServiceWorkerRegistrationObjectHost_Update_ParamsDataView() {}

  ServiceWorkerRegistrationObjectHost_Update_ParamsDataView(
      internal::ServiceWorkerRegistrationObjectHost_Update_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerRegistrationObjectHost_Update_Params_Data* data_ = nullptr;
};

class ServiceWorkerRegistrationObjectHost_Update_ResponseParamsDataView {
 public:
  ServiceWorkerRegistrationObjectHost_Update_ResponseParamsDataView() {}

  ServiceWorkerRegistrationObjectHost_Update_ResponseParamsDataView(
      internal::ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerErrorType>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerErrorType error() const {
    return static_cast<::blink::mojom::ServiceWorkerErrorType>(data_->error);
  }
  inline void GetErrorMsgDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorMsg(UserType* output) {
    auto* pointer = data_->error_msg.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerRegistrationObjectHost_Unregister_ParamsDataView {
 public:
  ServiceWorkerRegistrationObjectHost_Unregister_ParamsDataView() {}

  ServiceWorkerRegistrationObjectHost_Unregister_ParamsDataView(
      internal::ServiceWorkerRegistrationObjectHost_Unregister_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerRegistrationObjectHost_Unregister_Params_Data* data_ = nullptr;
};

class ServiceWorkerRegistrationObjectHost_Unregister_ResponseParamsDataView {
 public:
  ServiceWorkerRegistrationObjectHost_Unregister_ResponseParamsDataView() {}

  ServiceWorkerRegistrationObjectHost_Unregister_ResponseParamsDataView(
      internal::ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerErrorType>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerErrorType error() const {
    return static_cast<::blink::mojom::ServiceWorkerErrorType>(data_->error);
  }
  inline void GetErrorMsgDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorMsg(UserType* output) {
    auto* pointer = data_->error_msg.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ParamsDataView {
 public:
  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ParamsDataView() {}

  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ParamsDataView(
      internal::ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool enable() const {
    return data_->enable;
  }
 private:
  internal::ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data* data_ = nullptr;
};

class ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParamsDataView {
 public:
  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParamsDataView() {}

  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParamsDataView(
      internal::ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerErrorType>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerErrorType error() const {
    return static_cast<::blink::mojom::ServiceWorkerErrorType>(data_->error);
  }
  inline void GetErrorMsgDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorMsg(UserType* output) {
    auto* pointer = data_->error_msg.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ParamsDataView {
 public:
  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ParamsDataView() {}

  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ParamsDataView(
      internal::ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data* data_ = nullptr;
};

class ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParamsDataView {
 public:
  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParamsDataView() {}

  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParamsDataView(
      internal::ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerErrorType>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerErrorType error() const {
    return static_cast<::blink::mojom::ServiceWorkerErrorType>(data_->error);
  }
  inline void GetErrorMsgDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorMsg(UserType* output) {
    auto* pointer = data_->error_msg.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetStateDataView(
      ::blink::mojom::NavigationPreloadStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) {
    auto* pointer = data_->state.Get();
    return mojo::internal::Deserialize<::blink::mojom::NavigationPreloadStateDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ParamsDataView {
 public:
  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ParamsDataView() {}

  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ParamsDataView(
      internal::ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetValueDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParamsDataView {
 public:
  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParamsDataView() {}

  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParamsDataView(
      internal::ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerErrorType>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerErrorType error() const {
    return static_cast<::blink::mojom::ServiceWorkerErrorType>(data_->error);
  }
  inline void GetErrorMsgDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorMsg(UserType* output) {
    auto* pointer = data_->error_msg.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerRegistrationObject_SetVersionAttributes_ParamsDataView {
 public:
  ServiceWorkerRegistrationObject_SetVersionAttributes_ParamsDataView() {}

  ServiceWorkerRegistrationObject_SetVersionAttributes_ParamsDataView(
      internal::ServiceWorkerRegistrationObject_SetVersionAttributes_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t changed_mask() const {
    return data_->changed_mask;
  }
  inline void GetInstallingDataView(
      ::blink::mojom::ServiceWorkerObjectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstalling(UserType* output) {
    auto* pointer = data_->installing.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
        pointer, output, context_);
  }
  inline void GetWaitingDataView(
      ::blink::mojom::ServiceWorkerObjectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWaiting(UserType* output) {
    auto* pointer = data_->waiting.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
        pointer, output, context_);
  }
  inline void GetActiveDataView(
      ::blink::mojom::ServiceWorkerObjectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadActive(UserType* output) {
    auto* pointer = data_->active.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerRegistrationObject_SetVersionAttributes_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerRegistrationObject_SetUpdateViaCache_ParamsDataView {
 public:
  ServiceWorkerRegistrationObject_SetUpdateViaCache_ParamsDataView() {}

  ServiceWorkerRegistrationObject_SetUpdateViaCache_ParamsDataView(
      internal::ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUpdateViaCache(UserType* output) const {
    auto data_value = data_->update_via_cache;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerUpdateViaCache>(
        data_value, output);
  }

  ServiceWorkerUpdateViaCache update_via_cache() const {
    return static_cast<ServiceWorkerUpdateViaCache>(data_->update_via_cache);
  }
 private:
  internal::ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data* data_ = nullptr;
};

class ServiceWorkerRegistrationObject_UpdateFound_ParamsDataView {
 public:
  ServiceWorkerRegistrationObject_UpdateFound_ParamsDataView() {}

  ServiceWorkerRegistrationObject_UpdateFound_ParamsDataView(
      internal::ServiceWorkerRegistrationObject_UpdateFound_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerRegistrationObject_UpdateFound_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::ServiceWorkerUpdateViaCache>
    : public mojo::internal::EnumHashImpl<::blink::mojom::ServiceWorkerUpdateViaCache> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::ServiceWorkerUpdateViaCache, ::blink::mojom::ServiceWorkerUpdateViaCache> {
  static ::blink::mojom::ServiceWorkerUpdateViaCache ToMojom(::blink::mojom::ServiceWorkerUpdateViaCache input) { return input; }
  static bool FromMojom(::blink::mojom::ServiceWorkerUpdateViaCache input, ::blink::mojom::ServiceWorkerUpdateViaCache* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ServiceWorkerUpdateViaCache, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::ServiceWorkerUpdateViaCache, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::ServiceWorkerUpdateViaCache>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ServiceWorkerRegistrationOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ServiceWorkerRegistrationOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ServiceWorkerRegistrationOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::scope, input, custom_context)) in_scope = CallWithContext(Traits::scope, input, custom_context);
    typename decltype((*output)->scope)::BaseType::BufferWriter
        scope_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_scope, buffer, &scope_writer, context);
    (*output)->scope.Set(
        scope_writer.is_null() ? nullptr : scope_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->scope.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null scope in ServiceWorkerRegistrationOptions struct");
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerUpdateViaCache>(
        CallWithContext(Traits::update_via_cache, input, custom_context), &(*output)->update_via_cache);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::ServiceWorkerRegistrationOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ServiceWorkerRegistrationOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ServiceWorkerRegistrationObjectInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->registration_id = CallWithContext(Traits::registration_id, input, custom_context);
    decltype(CallWithContext(Traits::options, input, custom_context)) in_options = CallWithContext(Traits::options, input, custom_context);
    typename decltype((*output)->options)::BaseType::BufferWriter
        options_writer;
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerRegistrationOptionsDataView>(
        in_options, buffer, &options_writer, context);
    (*output)->options.Set(
        options_writer.is_null() ? nullptr : options_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->options.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null options in ServiceWorkerRegistrationObjectInfo struct");
    decltype(CallWithContext(Traits::host_ptr_info, input, custom_context)) in_host_ptr_info = CallWithContext(Traits::host_ptr_info, input, custom_context);
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerRegistrationObjectHostAssociatedPtrInfoDataView>(
        in_host_ptr_info, &(*output)->host_ptr_info, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->host_ptr_info),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
        "invalid host_ptr_info in ServiceWorkerRegistrationObjectInfo struct");
    decltype(CallWithContext(Traits::request, input, custom_context)) in_request = CallWithContext(Traits::request, input, custom_context);
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerRegistrationObjectAssociatedRequestDataView>(
        in_request, &(*output)->request, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->request),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
        "invalid request in ServiceWorkerRegistrationObjectInfo struct");
    decltype(CallWithContext(Traits::installing, input, custom_context)) in_installing = CallWithContext(Traits::installing, input, custom_context);
    typename decltype((*output)->installing)::BaseType::BufferWriter
        installing_writer;
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
        in_installing, buffer, &installing_writer, context);
    (*output)->installing.Set(
        installing_writer.is_null() ? nullptr : installing_writer.data());
    decltype(CallWithContext(Traits::waiting, input, custom_context)) in_waiting = CallWithContext(Traits::waiting, input, custom_context);
    typename decltype((*output)->waiting)::BaseType::BufferWriter
        waiting_writer;
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
        in_waiting, buffer, &waiting_writer, context);
    (*output)->waiting.Set(
        waiting_writer.is_null() ? nullptr : waiting_writer.data());
    decltype(CallWithContext(Traits::active, input, custom_context)) in_active = CallWithContext(Traits::active, input, custom_context);
    typename decltype((*output)->active)::BaseType::BufferWriter
        active_writer;
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
        in_active, buffer, &active_writer, context);
    (*output)->active.Set(
        active_writer.is_null() ? nullptr : active_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::ServiceWorkerRegistrationObjectInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void ServiceWorkerRegistrationOptionsDataView::GetScopeDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->scope.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void ServiceWorkerRegistrationObjectInfoDataView::GetOptionsDataView(
    ServiceWorkerRegistrationOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = ServiceWorkerRegistrationOptionsDataView(pointer, context_);
}
inline void ServiceWorkerRegistrationObjectInfoDataView::GetInstallingDataView(
    ::blink::mojom::ServiceWorkerObjectInfoDataView* output) {
  auto pointer = data_->installing.Get();
  *output = ::blink::mojom::ServiceWorkerObjectInfoDataView(pointer, context_);
}
inline void ServiceWorkerRegistrationObjectInfoDataView::GetWaitingDataView(
    ::blink::mojom::ServiceWorkerObjectInfoDataView* output) {
  auto pointer = data_->waiting.Get();
  *output = ::blink::mojom::ServiceWorkerObjectInfoDataView(pointer, context_);
}
inline void ServiceWorkerRegistrationObjectInfoDataView::GetActiveDataView(
    ::blink::mojom::ServiceWorkerObjectInfoDataView* output) {
  auto pointer = data_->active.Get();
  *output = ::blink::mojom::ServiceWorkerObjectInfoDataView(pointer, context_);
}




inline void ServiceWorkerRegistrationObjectHost_Update_ResponseParamsDataView::GetErrorMsgDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_msg.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void ServiceWorkerRegistrationObjectHost_Unregister_ResponseParamsDataView::GetErrorMsgDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_msg.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParamsDataView::GetErrorMsgDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_msg.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParamsDataView::GetErrorMsgDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_msg.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParamsDataView::GetStateDataView(
    ::blink::mojom::NavigationPreloadStateDataView* output) {
  auto pointer = data_->state.Get();
  *output = ::blink::mojom::NavigationPreloadStateDataView(pointer, context_);
}


inline void ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ParamsDataView::GetValueDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->value.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParamsDataView::GetErrorMsgDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_msg.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ServiceWorkerRegistrationObject_SetVersionAttributes_ParamsDataView::GetInstallingDataView(
    ::blink::mojom::ServiceWorkerObjectInfoDataView* output) {
  auto pointer = data_->installing.Get();
  *output = ::blink::mojom::ServiceWorkerObjectInfoDataView(pointer, context_);
}
inline void ServiceWorkerRegistrationObject_SetVersionAttributes_ParamsDataView::GetWaitingDataView(
    ::blink::mojom::ServiceWorkerObjectInfoDataView* output) {
  auto pointer = data_->waiting.Get();
  *output = ::blink::mojom::ServiceWorkerObjectInfoDataView(pointer, context_);
}
inline void ServiceWorkerRegistrationObject_SetVersionAttributes_ParamsDataView::GetActiveDataView(
    ::blink::mojom::ServiceWorkerObjectInfoDataView* output) {
  auto pointer = data_->active.Get();
  *output = ::blink::mojom::ServiceWorkerObjectInfoDataView(pointer, context_);
}







}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_SHARED_H_
