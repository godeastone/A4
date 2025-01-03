// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_APPCACHE_INFO_MOJOM_SHARED_H_
#define CONTENT_PUBLIC_COMMON_APPCACHE_INFO_MOJOM_SHARED_H_

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
#include "content/public/common/appcache_info.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {
class AppCacheInfoDataView;



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::content::mojom::AppCacheInfoDataView> {
  using Data = ::content::mojom::internal::AppCacheInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {

enum class AppCacheStatus : int32_t {
  APPCACHE_STATUS_UNCACHED,
  APPCACHE_STATUS_IDLE,
  APPCACHE_STATUS_CHECKING,
  APPCACHE_STATUS_DOWNLOADING,
  APPCACHE_STATUS_UPDATE_READY,
  APPCACHE_STATUS_OBSOLETE,
  kMinValue = 0,
  kMaxValue = 5,
};

inline std::ostream& operator<<(std::ostream& os, AppCacheStatus value) {
  switch(value) {
    case AppCacheStatus::APPCACHE_STATUS_UNCACHED:
      return os << "AppCacheStatus::APPCACHE_STATUS_UNCACHED";
    case AppCacheStatus::APPCACHE_STATUS_IDLE:
      return os << "AppCacheStatus::APPCACHE_STATUS_IDLE";
    case AppCacheStatus::APPCACHE_STATUS_CHECKING:
      return os << "AppCacheStatus::APPCACHE_STATUS_CHECKING";
    case AppCacheStatus::APPCACHE_STATUS_DOWNLOADING:
      return os << "AppCacheStatus::APPCACHE_STATUS_DOWNLOADING";
    case AppCacheStatus::APPCACHE_STATUS_UPDATE_READY:
      return os << "AppCacheStatus::APPCACHE_STATUS_UPDATE_READY";
    case AppCacheStatus::APPCACHE_STATUS_OBSOLETE:
      return os << "AppCacheStatus::APPCACHE_STATUS_OBSOLETE";
    default:
      return os << "Unknown AppCacheStatus value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(AppCacheStatus value) {
  return internal::AppCacheStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class AppCacheInfoDataView {
 public:
  AppCacheInfoDataView() {}

  AppCacheInfoDataView(
      internal::AppCacheInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetManifestUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadManifestUrl(UserType* output) {
    auto* pointer = data_->manifest_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetCreationTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCreationTime(UserType* output) {
    auto* pointer = data_->creation_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetLastUpdateTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLastUpdateTime(UserType* output) {
    auto* pointer = data_->last_update_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetLastAccessTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLastAccessTime(UserType* output) {
    auto* pointer = data_->last_access_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  int64_t cache_id() const {
    return data_->cache_id;
  }
  int64_t group_id() const {
    return data_->group_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::content::mojom::AppCacheStatus>(
        data_value, output);
  }

  AppCacheStatus status() const {
    return static_cast<AppCacheStatus>(data_->status);
  }
  int64_t size() const {
    return data_->size;
  }
  bool is_complete() const {
    return data_->is_complete;
  }
 private:
  internal::AppCacheInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

template <>
struct hash<::content::mojom::AppCacheStatus>
    : public mojo::internal::EnumHashImpl<::content::mojom::AppCacheStatus> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::content::mojom::AppCacheStatus, ::content::mojom::AppCacheStatus> {
  static ::content::mojom::AppCacheStatus ToMojom(::content::mojom::AppCacheStatus input) { return input; }
  static bool FromMojom(::content::mojom::AppCacheStatus input, ::content::mojom::AppCacheStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::AppCacheStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::content::mojom::AppCacheStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::content::mojom::AppCacheStatus>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::AppCacheInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::AppCacheInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::AppCacheInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::manifest_url, input, custom_context)) in_manifest_url = CallWithContext(Traits::manifest_url, input, custom_context);
    typename decltype((*output)->manifest_url)::BaseType::BufferWriter
        manifest_url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_manifest_url, buffer, &manifest_url_writer, context);
    (*output)->manifest_url.Set(
        manifest_url_writer.is_null() ? nullptr : manifest_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->manifest_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null manifest_url in AppCacheInfo struct");
    decltype(CallWithContext(Traits::creation_time, input, custom_context)) in_creation_time = CallWithContext(Traits::creation_time, input, custom_context);
    typename decltype((*output)->creation_time)::BaseType::BufferWriter
        creation_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_creation_time, buffer, &creation_time_writer, context);
    (*output)->creation_time.Set(
        creation_time_writer.is_null() ? nullptr : creation_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->creation_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null creation_time in AppCacheInfo struct");
    decltype(CallWithContext(Traits::last_update_time, input, custom_context)) in_last_update_time = CallWithContext(Traits::last_update_time, input, custom_context);
    typename decltype((*output)->last_update_time)::BaseType::BufferWriter
        last_update_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_last_update_time, buffer, &last_update_time_writer, context);
    (*output)->last_update_time.Set(
        last_update_time_writer.is_null() ? nullptr : last_update_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->last_update_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null last_update_time in AppCacheInfo struct");
    decltype(CallWithContext(Traits::last_access_time, input, custom_context)) in_last_access_time = CallWithContext(Traits::last_access_time, input, custom_context);
    typename decltype((*output)->last_access_time)::BaseType::BufferWriter
        last_access_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_last_access_time, buffer, &last_access_time_writer, context);
    (*output)->last_access_time.Set(
        last_access_time_writer.is_null() ? nullptr : last_access_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->last_access_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null last_access_time in AppCacheInfo struct");
    (*output)->cache_id = CallWithContext(Traits::cache_id, input, custom_context);
    (*output)->group_id = CallWithContext(Traits::group_id, input, custom_context);
    mojo::internal::Serialize<::content::mojom::AppCacheStatus>(
        CallWithContext(Traits::status, input, custom_context), &(*output)->status);
    (*output)->size = CallWithContext(Traits::size, input, custom_context);
    (*output)->is_complete = CallWithContext(Traits::is_complete, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::AppCacheInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::AppCacheInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content {
namespace mojom {

inline void AppCacheInfoDataView::GetManifestUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->manifest_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void AppCacheInfoDataView::GetCreationTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->creation_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void AppCacheInfoDataView::GetLastUpdateTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->last_update_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void AppCacheInfoDataView::GetLastAccessTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->last_access_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace content

#endif  // CONTENT_PUBLIC_COMMON_APPCACHE_INFO_MOJOM_SHARED_H_
