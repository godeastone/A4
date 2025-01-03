// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/modules/background_fetch/background_fetch.mojom-shared-internal.h"
#include "skia/public/interfaces/bitmap.mojom-shared.h"
#include "third_party/blink/public/platform/modules/fetch/fetch_api_request.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {
class IconDefinitionDataView;

class BackgroundFetchOptionsDataView;

class BackgroundFetchRegistrationDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::IconDefinitionDataView> {
  using Data = ::blink::mojom::internal::IconDefinition_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::BackgroundFetchOptionsDataView> {
  using Data = ::blink::mojom::internal::BackgroundFetchOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::BackgroundFetchRegistrationDataView> {
  using Data = ::blink::mojom::internal::BackgroundFetchRegistration_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {

enum class BackgroundFetchError : int32_t {
  NONE,
  DUPLICATED_DEVELOPER_ID,
  INVALID_ARGUMENT,
  INVALID_ID,
  STORAGE_ERROR,
  kMinValue = 0,
  kMaxValue = 4,
};

inline std::ostream& operator<<(std::ostream& os, BackgroundFetchError value) {
  switch(value) {
    case BackgroundFetchError::NONE:
      return os << "BackgroundFetchError::NONE";
    case BackgroundFetchError::DUPLICATED_DEVELOPER_ID:
      return os << "BackgroundFetchError::DUPLICATED_DEVELOPER_ID";
    case BackgroundFetchError::INVALID_ARGUMENT:
      return os << "BackgroundFetchError::INVALID_ARGUMENT";
    case BackgroundFetchError::INVALID_ID:
      return os << "BackgroundFetchError::INVALID_ID";
    case BackgroundFetchError::STORAGE_ERROR:
      return os << "BackgroundFetchError::STORAGE_ERROR";
    default:
      return os << "Unknown BackgroundFetchError value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(BackgroundFetchError value) {
  return internal::BackgroundFetchError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class BackgroundFetchRegistrationObserverInterfaceBase {};

using BackgroundFetchRegistrationObserverPtrDataView =
    mojo::InterfacePtrDataView<BackgroundFetchRegistrationObserverInterfaceBase>;
using BackgroundFetchRegistrationObserverRequestDataView =
    mojo::InterfaceRequestDataView<BackgroundFetchRegistrationObserverInterfaceBase>;
using BackgroundFetchRegistrationObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<BackgroundFetchRegistrationObserverInterfaceBase>;
using BackgroundFetchRegistrationObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<BackgroundFetchRegistrationObserverInterfaceBase>;
class BackgroundFetchServiceInterfaceBase {};

using BackgroundFetchServicePtrDataView =
    mojo::InterfacePtrDataView<BackgroundFetchServiceInterfaceBase>;
using BackgroundFetchServiceRequestDataView =
    mojo::InterfaceRequestDataView<BackgroundFetchServiceInterfaceBase>;
using BackgroundFetchServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<BackgroundFetchServiceInterfaceBase>;
using BackgroundFetchServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<BackgroundFetchServiceInterfaceBase>;
class IconDefinitionDataView {
 public:
  IconDefinitionDataView() {}

  IconDefinitionDataView(
      internal::IconDefinition_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSrcDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSrc(UserType* output) {
    auto* pointer = data_->src.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSizesDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSizes(UserType* output) {
    auto* pointer = data_->sizes.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) {
    auto* pointer = data_->type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::IconDefinition_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundFetchOptionsDataView {
 public:
  BackgroundFetchOptionsDataView() {}

  BackgroundFetchOptionsDataView(
      internal::BackgroundFetchOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIconsDataView(
      mojo::ArrayDataView<IconDefinitionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIcons(UserType* output) {
    auto* pointer = data_->icons.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::IconDefinitionDataView>>(
        pointer, output, context_);
  }
  uint64_t download_total() const {
    return data_->download_total;
  }
  inline void GetTitleDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTitle(UserType* output) {
    auto* pointer = data_->title.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::BackgroundFetchOptions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundFetchRegistrationDataView {
 public:
  BackgroundFetchRegistrationDataView() {}

  BackgroundFetchRegistrationDataView(
      internal::BackgroundFetchRegistration_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeveloperIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeveloperId(UserType* output) {
    auto* pointer = data_->developer_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUniqueIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUniqueId(UserType* output) {
    auto* pointer = data_->unique_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint64_t upload_total() const {
    return data_->upload_total;
  }
  uint64_t uploaded() const {
    return data_->uploaded;
  }
  uint64_t download_total() const {
    return data_->download_total;
  }
  uint64_t downloaded() const {
    return data_->downloaded;
  }
 private:
  internal::BackgroundFetchRegistration_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundFetchRegistrationObserver_OnProgress_ParamsDataView {
 public:
  BackgroundFetchRegistrationObserver_OnProgress_ParamsDataView() {}

  BackgroundFetchRegistrationObserver_OnProgress_ParamsDataView(
      internal::BackgroundFetchRegistrationObserver_OnProgress_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t upload_total() const {
    return data_->upload_total;
  }
  uint64_t uploaded() const {
    return data_->uploaded;
  }
  uint64_t download_total() const {
    return data_->download_total;
  }
  uint64_t downloaded() const {
    return data_->downloaded;
  }
 private:
  internal::BackgroundFetchRegistrationObserver_OnProgress_Params_Data* data_ = nullptr;
};

class BackgroundFetchService_Fetch_ParamsDataView {
 public:
  BackgroundFetchService_Fetch_ParamsDataView() {}

  BackgroundFetchService_Fetch_ParamsDataView(
      internal::BackgroundFetchService_Fetch_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t service_worker_registration_id() const {
    return data_->service_worker_registration_id;
  }
  inline void GetDeveloperIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeveloperId(UserType* output) {
    auto* pointer = data_->developer_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetRequestsDataView(
      mojo::ArrayDataView<::blink::mojom::FetchAPIRequestDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequests(UserType* output) {
    auto* pointer = data_->requests.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::FetchAPIRequestDataView>>(
        pointer, output, context_);
  }
  inline void GetOptionsDataView(
      BackgroundFetchOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::blink::mojom::BackgroundFetchOptionsDataView>(
        pointer, output, context_);
  }
  inline void GetIconDataView(
      ::skia::mojom::BitmapDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIcon(UserType* output) {
    auto* pointer = data_->icon.Get();
    return mojo::internal::Deserialize<::skia::mojom::BitmapDataView>(
        pointer, output, context_);
  }
 private:
  internal::BackgroundFetchService_Fetch_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundFetchService_Fetch_ResponseParamsDataView {
 public:
  BackgroundFetchService_Fetch_ResponseParamsDataView() {}

  BackgroundFetchService_Fetch_ResponseParamsDataView(
      internal::BackgroundFetchService_Fetch_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::BackgroundFetchError>(
        data_value, output);
  }

  BackgroundFetchError error() const {
    return static_cast<BackgroundFetchError>(data_->error);
  }
  inline void GetRegistrationDataView(
      BackgroundFetchRegistrationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegistration(UserType* output) {
    auto* pointer = data_->registration.Get();
    return mojo::internal::Deserialize<::blink::mojom::BackgroundFetchRegistrationDataView>(
        pointer, output, context_);
  }
 private:
  internal::BackgroundFetchService_Fetch_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundFetchService_UpdateUI_ParamsDataView {
 public:
  BackgroundFetchService_UpdateUI_ParamsDataView() {}

  BackgroundFetchService_UpdateUI_ParamsDataView(
      internal::BackgroundFetchService_UpdateUI_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t service_worker_registration_id() const {
    return data_->service_worker_registration_id;
  }
  inline void GetDeveloperIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeveloperId(UserType* output) {
    auto* pointer = data_->developer_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUniqueIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUniqueId(UserType* output) {
    auto* pointer = data_->unique_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetTitleDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTitle(UserType* output) {
    auto* pointer = data_->title.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::BackgroundFetchService_UpdateUI_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundFetchService_UpdateUI_ResponseParamsDataView {
 public:
  BackgroundFetchService_UpdateUI_ResponseParamsDataView() {}

  BackgroundFetchService_UpdateUI_ResponseParamsDataView(
      internal::BackgroundFetchService_UpdateUI_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::BackgroundFetchError>(
        data_value, output);
  }

  BackgroundFetchError error() const {
    return static_cast<BackgroundFetchError>(data_->error);
  }
 private:
  internal::BackgroundFetchService_UpdateUI_ResponseParams_Data* data_ = nullptr;
};

class BackgroundFetchService_Abort_ParamsDataView {
 public:
  BackgroundFetchService_Abort_ParamsDataView() {}

  BackgroundFetchService_Abort_ParamsDataView(
      internal::BackgroundFetchService_Abort_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t service_worker_registration_id() const {
    return data_->service_worker_registration_id;
  }
  inline void GetDeveloperIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeveloperId(UserType* output) {
    auto* pointer = data_->developer_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUniqueIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUniqueId(UserType* output) {
    auto* pointer = data_->unique_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::BackgroundFetchService_Abort_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundFetchService_Abort_ResponseParamsDataView {
 public:
  BackgroundFetchService_Abort_ResponseParamsDataView() {}

  BackgroundFetchService_Abort_ResponseParamsDataView(
      internal::BackgroundFetchService_Abort_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::BackgroundFetchError>(
        data_value, output);
  }

  BackgroundFetchError error() const {
    return static_cast<BackgroundFetchError>(data_->error);
  }
 private:
  internal::BackgroundFetchService_Abort_ResponseParams_Data* data_ = nullptr;
};

class BackgroundFetchService_GetRegistration_ParamsDataView {
 public:
  BackgroundFetchService_GetRegistration_ParamsDataView() {}

  BackgroundFetchService_GetRegistration_ParamsDataView(
      internal::BackgroundFetchService_GetRegistration_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t service_worker_registration_id() const {
    return data_->service_worker_registration_id;
  }
  inline void GetDeveloperIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeveloperId(UserType* output) {
    auto* pointer = data_->developer_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::BackgroundFetchService_GetRegistration_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundFetchService_GetRegistration_ResponseParamsDataView {
 public:
  BackgroundFetchService_GetRegistration_ResponseParamsDataView() {}

  BackgroundFetchService_GetRegistration_ResponseParamsDataView(
      internal::BackgroundFetchService_GetRegistration_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::BackgroundFetchError>(
        data_value, output);
  }

  BackgroundFetchError error() const {
    return static_cast<BackgroundFetchError>(data_->error);
  }
  inline void GetRegistrationDataView(
      BackgroundFetchRegistrationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegistration(UserType* output) {
    auto* pointer = data_->registration.Get();
    return mojo::internal::Deserialize<::blink::mojom::BackgroundFetchRegistrationDataView>(
        pointer, output, context_);
  }
 private:
  internal::BackgroundFetchService_GetRegistration_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundFetchService_GetDeveloperIds_ParamsDataView {
 public:
  BackgroundFetchService_GetDeveloperIds_ParamsDataView() {}

  BackgroundFetchService_GetDeveloperIds_ParamsDataView(
      internal::BackgroundFetchService_GetDeveloperIds_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t service_worker_registration_id() const {
    return data_->service_worker_registration_id;
  }
 private:
  internal::BackgroundFetchService_GetDeveloperIds_Params_Data* data_ = nullptr;
};

class BackgroundFetchService_GetDeveloperIds_ResponseParamsDataView {
 public:
  BackgroundFetchService_GetDeveloperIds_ResponseParamsDataView() {}

  BackgroundFetchService_GetDeveloperIds_ResponseParamsDataView(
      internal::BackgroundFetchService_GetDeveloperIds_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::BackgroundFetchError>(
        data_value, output);
  }

  BackgroundFetchError error() const {
    return static_cast<BackgroundFetchError>(data_->error);
  }
  inline void GetDeveloperIdsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeveloperIds(UserType* output) {
    auto* pointer = data_->developer_ids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::BackgroundFetchService_GetDeveloperIds_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundFetchService_GetIconDisplaySize_ParamsDataView {
 public:
  BackgroundFetchService_GetIconDisplaySize_ParamsDataView() {}

  BackgroundFetchService_GetIconDisplaySize_ParamsDataView(
      internal::BackgroundFetchService_GetIconDisplaySize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::BackgroundFetchService_GetIconDisplaySize_Params_Data* data_ = nullptr;
};

class BackgroundFetchService_GetIconDisplaySize_ResponseParamsDataView {
 public:
  BackgroundFetchService_GetIconDisplaySize_ResponseParamsDataView() {}

  BackgroundFetchService_GetIconDisplaySize_ResponseParamsDataView(
      internal::BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIconSizePixelsDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIconSizePixels(UserType* output) {
    auto* pointer = data_->icon_size_pixels.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
 private:
  internal::BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundFetchService_AddRegistrationObserver_ParamsDataView {
 public:
  BackgroundFetchService_AddRegistrationObserver_ParamsDataView() {}

  BackgroundFetchService_AddRegistrationObserver_ParamsDataView(
      internal::BackgroundFetchService_AddRegistrationObserver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUniqueIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUniqueId(UserType* output) {
    auto* pointer = data_->unique_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BackgroundFetchRegistrationObserverPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::BackgroundFetchService_AddRegistrationObserver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::BackgroundFetchError>
    : public mojo::internal::EnumHashImpl<::blink::mojom::BackgroundFetchError> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::BackgroundFetchError, ::blink::mojom::BackgroundFetchError> {
  static ::blink::mojom::BackgroundFetchError ToMojom(::blink::mojom::BackgroundFetchError input) { return input; }
  static bool FromMojom(::blink::mojom::BackgroundFetchError input, ::blink::mojom::BackgroundFetchError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::BackgroundFetchError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::BackgroundFetchError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::BackgroundFetchError>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IconDefinitionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::IconDefinitionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::IconDefinition_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::src, input, custom_context)) in_src = CallWithContext(Traits::src, input, custom_context);
    typename decltype((*output)->src)::BaseType::BufferWriter
        src_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_src, buffer, &src_writer, context);
    (*output)->src.Set(
        src_writer.is_null() ? nullptr : src_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->src.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null src in IconDefinition struct");
    decltype(CallWithContext(Traits::sizes, input, custom_context)) in_sizes = CallWithContext(Traits::sizes, input, custom_context);
    typename decltype((*output)->sizes)::BaseType::BufferWriter
        sizes_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_sizes, buffer, &sizes_writer, context);
    (*output)->sizes.Set(
        sizes_writer.is_null() ? nullptr : sizes_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->sizes.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null sizes in IconDefinition struct");
    decltype(CallWithContext(Traits::type, input, custom_context)) in_type = CallWithContext(Traits::type, input, custom_context);
    typename decltype((*output)->type)::BaseType::BufferWriter
        type_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_type, buffer, &type_writer, context);
    (*output)->type.Set(
        type_writer.is_null() ? nullptr : type_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->type.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null type in IconDefinition struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::IconDefinition_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::IconDefinitionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::BackgroundFetchOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::BackgroundFetchOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::BackgroundFetchOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::icons, input, custom_context)) in_icons = CallWithContext(Traits::icons, input, custom_context);
    typename decltype((*output)->icons)::BaseType::BufferWriter
        icons_writer;
    const mojo::internal::ContainerValidateParams icons_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::IconDefinitionDataView>>(
        in_icons, buffer, &icons_writer, &icons_validate_params,
        context);
    (*output)->icons.Set(
        icons_writer.is_null() ? nullptr : icons_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->icons.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null icons in BackgroundFetchOptions struct");
    (*output)->download_total = CallWithContext(Traits::download_total, input, custom_context);
    decltype(CallWithContext(Traits::title, input, custom_context)) in_title = CallWithContext(Traits::title, input, custom_context);
    typename decltype((*output)->title)::BaseType::BufferWriter
        title_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_title, buffer, &title_writer, context);
    (*output)->title.Set(
        title_writer.is_null() ? nullptr : title_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->title.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null title in BackgroundFetchOptions struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::BackgroundFetchOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::BackgroundFetchOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::BackgroundFetchRegistrationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::BackgroundFetchRegistrationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::BackgroundFetchRegistration_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::developer_id, input, custom_context)) in_developer_id = CallWithContext(Traits::developer_id, input, custom_context);
    typename decltype((*output)->developer_id)::BaseType::BufferWriter
        developer_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_developer_id, buffer, &developer_id_writer, context);
    (*output)->developer_id.Set(
        developer_id_writer.is_null() ? nullptr : developer_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->developer_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null developer_id in BackgroundFetchRegistration struct");
    decltype(CallWithContext(Traits::unique_id, input, custom_context)) in_unique_id = CallWithContext(Traits::unique_id, input, custom_context);
    typename decltype((*output)->unique_id)::BaseType::BufferWriter
        unique_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_unique_id, buffer, &unique_id_writer, context);
    (*output)->unique_id.Set(
        unique_id_writer.is_null() ? nullptr : unique_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->unique_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null unique_id in BackgroundFetchRegistration struct");
    (*output)->upload_total = CallWithContext(Traits::upload_total, input, custom_context);
    (*output)->uploaded = CallWithContext(Traits::uploaded, input, custom_context);
    (*output)->download_total = CallWithContext(Traits::download_total, input, custom_context);
    (*output)->downloaded = CallWithContext(Traits::downloaded, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::BackgroundFetchRegistration_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::BackgroundFetchRegistrationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void IconDefinitionDataView::GetSrcDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->src.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void IconDefinitionDataView::GetSizesDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->sizes.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void IconDefinitionDataView::GetTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->type.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void BackgroundFetchOptionsDataView::GetIconsDataView(
    mojo::ArrayDataView<IconDefinitionDataView>* output) {
  auto pointer = data_->icons.Get();
  *output = mojo::ArrayDataView<IconDefinitionDataView>(pointer, context_);
}
inline void BackgroundFetchOptionsDataView::GetTitleDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->title.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void BackgroundFetchRegistrationDataView::GetDeveloperIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->developer_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void BackgroundFetchRegistrationDataView::GetUniqueIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->unique_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void BackgroundFetchService_Fetch_ParamsDataView::GetDeveloperIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->developer_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void BackgroundFetchService_Fetch_ParamsDataView::GetRequestsDataView(
    mojo::ArrayDataView<::blink::mojom::FetchAPIRequestDataView>* output) {
  auto pointer = data_->requests.Get();
  *output = mojo::ArrayDataView<::blink::mojom::FetchAPIRequestDataView>(pointer, context_);
}
inline void BackgroundFetchService_Fetch_ParamsDataView::GetOptionsDataView(
    BackgroundFetchOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = BackgroundFetchOptionsDataView(pointer, context_);
}
inline void BackgroundFetchService_Fetch_ParamsDataView::GetIconDataView(
    ::skia::mojom::BitmapDataView* output) {
  auto pointer = data_->icon.Get();
  *output = ::skia::mojom::BitmapDataView(pointer, context_);
}


inline void BackgroundFetchService_Fetch_ResponseParamsDataView::GetRegistrationDataView(
    BackgroundFetchRegistrationDataView* output) {
  auto pointer = data_->registration.Get();
  *output = BackgroundFetchRegistrationDataView(pointer, context_);
}


inline void BackgroundFetchService_UpdateUI_ParamsDataView::GetDeveloperIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->developer_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void BackgroundFetchService_UpdateUI_ParamsDataView::GetUniqueIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->unique_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void BackgroundFetchService_UpdateUI_ParamsDataView::GetTitleDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->title.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void BackgroundFetchService_Abort_ParamsDataView::GetDeveloperIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->developer_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void BackgroundFetchService_Abort_ParamsDataView::GetUniqueIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->unique_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void BackgroundFetchService_GetRegistration_ParamsDataView::GetDeveloperIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->developer_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void BackgroundFetchService_GetRegistration_ResponseParamsDataView::GetRegistrationDataView(
    BackgroundFetchRegistrationDataView* output) {
  auto pointer = data_->registration.Get();
  *output = BackgroundFetchRegistrationDataView(pointer, context_);
}




inline void BackgroundFetchService_GetDeveloperIds_ResponseParamsDataView::GetDeveloperIdsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->developer_ids.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}




inline void BackgroundFetchService_GetIconDisplaySize_ResponseParamsDataView::GetIconSizePixelsDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->icon_size_pixels.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}


inline void BackgroundFetchService_AddRegistrationObserver_ParamsDataView::GetUniqueIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->unique_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_SHARED_H_
