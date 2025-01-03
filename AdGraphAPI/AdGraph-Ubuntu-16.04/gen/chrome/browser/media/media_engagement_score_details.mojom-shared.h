// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_MEDIA_MEDIA_ENGAGEMENT_SCORE_DETAILS_MOJOM_SHARED_H_
#define CHROME_BROWSER_MEDIA_MEDIA_ENGAGEMENT_SCORE_DETAILS_MOJOM_SHARED_H_

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
#include "chrome/browser/media/media_engagement_score_details.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace media {
namespace mojom {
class MediaEngagementScoreDetailsDataView;

class MediaEngagementConfigDataView;



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::media::mojom::MediaEngagementScoreDetailsDataView> {
  using Data = ::media::mojom::internal::MediaEngagementScoreDetails_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::MediaEngagementConfigDataView> {
  using Data = ::media::mojom::internal::MediaEngagementConfig_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {
// Interface base classes. They are used for type safety check.
class MediaEngagementScoreDetailsProviderInterfaceBase {};

using MediaEngagementScoreDetailsProviderPtrDataView =
    mojo::InterfacePtrDataView<MediaEngagementScoreDetailsProviderInterfaceBase>;
using MediaEngagementScoreDetailsProviderRequestDataView =
    mojo::InterfaceRequestDataView<MediaEngagementScoreDetailsProviderInterfaceBase>;
using MediaEngagementScoreDetailsProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaEngagementScoreDetailsProviderInterfaceBase>;
using MediaEngagementScoreDetailsProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaEngagementScoreDetailsProviderInterfaceBase>;
class MediaEngagementScoreDetailsDataView {
 public:
  MediaEngagementScoreDetailsDataView() {}

  MediaEngagementScoreDetailsDataView(
      internal::MediaEngagementScoreDetails_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  double total_score() const {
    return data_->total_score;
  }
  int32_t visits() const {
    return data_->visits;
  }
  int32_t media_playbacks() const {
    return data_->media_playbacks;
  }
  double last_media_playback_time() const {
    return data_->last_media_playback_time;
  }
  bool is_high() const {
    return data_->is_high;
  }
  int32_t audible_playbacks() const {
    return data_->audible_playbacks;
  }
  int32_t significant_playbacks() const {
    return data_->significant_playbacks;
  }
  int32_t high_score_changes() const {
    return data_->high_score_changes;
  }
 private:
  internal::MediaEngagementScoreDetails_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaEngagementConfigDataView {
 public:
  MediaEngagementConfigDataView() {}

  MediaEngagementConfigDataView(
      internal::MediaEngagementConfig_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t score_min_visits() const {
    return data_->score_min_visits;
  }
  double high_score_lower_threshold() const {
    return data_->high_score_lower_threshold;
  }
  double high_score_upper_threshold() const {
    return data_->high_score_upper_threshold;
  }
  bool feature_record_data() const {
    return data_->feature_record_data;
  }
  bool feature_bypass_autoplay() const {
    return data_->feature_bypass_autoplay;
  }
  bool feature_preload_data() const {
    return data_->feature_preload_data;
  }
  inline void GetAutoplayPolicyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAutoplayPolicy(UserType* output) {
    auto* pointer = data_->autoplay_policy.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetPreloadVersionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPreloadVersion(UserType* output) {
    auto* pointer = data_->preload_version.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaEngagementConfig_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ParamsDataView {
 public:
  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ParamsDataView() {}

  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ParamsDataView(
      internal::MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params_Data* data_ = nullptr;
};

class MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParamsDataView {
 public:
  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParamsDataView() {}

  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParamsDataView(
      internal::MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      mojo::ArrayDataView<MediaEngagementScoreDetailsDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::MediaEngagementScoreDetailsDataView>>(
        pointer, output, context_);
  }
 private:
  internal::MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ParamsDataView {
 public:
  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ParamsDataView() {}

  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ParamsDataView(
      internal::MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params_Data* data_ = nullptr;
};

class MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParamsDataView {
 public:
  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParamsDataView() {}

  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParamsDataView(
      internal::MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetConfigDataView(
      MediaEngagementConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConfig(UserType* output) {
    auto* pointer = data_->config.Get();
    return mojo::internal::Deserialize<::media::mojom::MediaEngagementConfigDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::MediaEngagementScoreDetailsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::MediaEngagementScoreDetailsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::MediaEngagementScoreDetails_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::origin, input, custom_context)) in_origin = CallWithContext(Traits::origin, input, custom_context);
    typename decltype((*output)->origin)::BaseType::BufferWriter
        origin_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_origin, buffer, &origin_writer, context);
    (*output)->origin.Set(
        origin_writer.is_null() ? nullptr : origin_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->origin.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null origin in MediaEngagementScoreDetails struct");
    (*output)->total_score = CallWithContext(Traits::total_score, input, custom_context);
    (*output)->visits = CallWithContext(Traits::visits, input, custom_context);
    (*output)->media_playbacks = CallWithContext(Traits::media_playbacks, input, custom_context);
    (*output)->last_media_playback_time = CallWithContext(Traits::last_media_playback_time, input, custom_context);
    (*output)->is_high = CallWithContext(Traits::is_high, input, custom_context);
    (*output)->audible_playbacks = CallWithContext(Traits::audible_playbacks, input, custom_context);
    (*output)->significant_playbacks = CallWithContext(Traits::significant_playbacks, input, custom_context);
    (*output)->high_score_changes = CallWithContext(Traits::high_score_changes, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::MediaEngagementScoreDetails_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::MediaEngagementScoreDetailsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::MediaEngagementConfigDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::MediaEngagementConfigDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::MediaEngagementConfig_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->score_min_visits = CallWithContext(Traits::score_min_visits, input, custom_context);
    (*output)->high_score_lower_threshold = CallWithContext(Traits::high_score_lower_threshold, input, custom_context);
    (*output)->high_score_upper_threshold = CallWithContext(Traits::high_score_upper_threshold, input, custom_context);
    (*output)->feature_record_data = CallWithContext(Traits::feature_record_data, input, custom_context);
    (*output)->feature_bypass_autoplay = CallWithContext(Traits::feature_bypass_autoplay, input, custom_context);
    (*output)->feature_preload_data = CallWithContext(Traits::feature_preload_data, input, custom_context);
    decltype(CallWithContext(Traits::autoplay_policy, input, custom_context)) in_autoplay_policy = CallWithContext(Traits::autoplay_policy, input, custom_context);
    typename decltype((*output)->autoplay_policy)::BaseType::BufferWriter
        autoplay_policy_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_autoplay_policy, buffer, &autoplay_policy_writer, context);
    (*output)->autoplay_policy.Set(
        autoplay_policy_writer.is_null() ? nullptr : autoplay_policy_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->autoplay_policy.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null autoplay_policy in MediaEngagementConfig struct");
    decltype(CallWithContext(Traits::preload_version, input, custom_context)) in_preload_version = CallWithContext(Traits::preload_version, input, custom_context);
    typename decltype((*output)->preload_version)::BaseType::BufferWriter
        preload_version_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_preload_version, buffer, &preload_version_writer, context);
    (*output)->preload_version.Set(
        preload_version_writer.is_null() ? nullptr : preload_version_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->preload_version.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null preload_version in MediaEngagementConfig struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::MediaEngagementConfig_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::MediaEngagementConfigDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {

inline void MediaEngagementScoreDetailsDataView::GetOriginDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void MediaEngagementConfigDataView::GetAutoplayPolicyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->autoplay_policy.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaEngagementConfigDataView::GetPreloadVersionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->preload_version.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParamsDataView::GetInfoDataView(
    mojo::ArrayDataView<MediaEngagementScoreDetailsDataView>* output) {
  auto pointer = data_->info.Get();
  *output = mojo::ArrayDataView<MediaEngagementScoreDetailsDataView>(pointer, context_);
}




inline void MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParamsDataView::GetConfigDataView(
    MediaEngagementConfigDataView* output) {
  auto pointer = data_->config.Get();
  *output = MediaEngagementConfigDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#endif  // CHROME_BROWSER_MEDIA_MEDIA_ENGAGEMENT_SCORE_DETAILS_MOJOM_SHARED_H_
