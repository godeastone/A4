// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_ENGAGEMENT_SITE_ENGAGEMENT_DETAILS_MOJOM_SHARED_H_
#define CHROME_BROWSER_ENGAGEMENT_SITE_ENGAGEMENT_DETAILS_MOJOM_SHARED_H_

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
#include "chrome/browser/engagement/site_engagement_details.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace mojom {
class SiteEngagementDetailsDataView;



}  // namespace mojom

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::mojom::SiteEngagementDetailsDataView> {
  using Data = ::mojom::internal::SiteEngagementDetails_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace mojom {
// Interface base classes. They are used for type safety check.
class SiteEngagementDetailsProviderInterfaceBase {};

using SiteEngagementDetailsProviderPtrDataView =
    mojo::InterfacePtrDataView<SiteEngagementDetailsProviderInterfaceBase>;
using SiteEngagementDetailsProviderRequestDataView =
    mojo::InterfaceRequestDataView<SiteEngagementDetailsProviderInterfaceBase>;
using SiteEngagementDetailsProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SiteEngagementDetailsProviderInterfaceBase>;
using SiteEngagementDetailsProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SiteEngagementDetailsProviderInterfaceBase>;
class SiteEngagementDetailsDataView {
 public:
  SiteEngagementDetailsDataView() {}

  SiteEngagementDetailsDataView(
      internal::SiteEngagementDetails_Data* data,
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
  double base_score() const {
    return data_->base_score;
  }
  double installed_bonus() const {
    return data_->installed_bonus;
  }
 private:
  internal::SiteEngagementDetails_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SiteEngagementDetailsProvider_GetSiteEngagementDetails_ParamsDataView {
 public:
  SiteEngagementDetailsProvider_GetSiteEngagementDetails_ParamsDataView() {}

  SiteEngagementDetailsProvider_GetSiteEngagementDetails_ParamsDataView(
      internal::SiteEngagementDetailsProvider_GetSiteEngagementDetails_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SiteEngagementDetailsProvider_GetSiteEngagementDetails_Params_Data* data_ = nullptr;
};

class SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParamsDataView {
 public:
  SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParamsDataView() {}

  SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParamsDataView(
      internal::SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      mojo::ArrayDataView<SiteEngagementDetailsDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojom::SiteEngagementDetailsDataView>>(
        pointer, output, context_);
  }
 private:
  internal::SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_ParamsDataView {
 public:
  SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_ParamsDataView() {}

  SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_ParamsDataView(
      internal::SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  double score() const {
    return data_->score;
  }
 private:
  internal::SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojom::SiteEngagementDetailsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojom::SiteEngagementDetailsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojom::internal::SiteEngagementDetails_Data::BufferWriter* output,
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
        "null origin in SiteEngagementDetails struct");
    (*output)->total_score = CallWithContext(Traits::total_score, input, custom_context);
    (*output)->base_score = CallWithContext(Traits::base_score, input, custom_context);
    (*output)->installed_bonus = CallWithContext(Traits::installed_bonus, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojom::internal::SiteEngagementDetails_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojom::SiteEngagementDetailsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace mojom {

inline void SiteEngagementDetailsDataView::GetOriginDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}




inline void SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParamsDataView::GetInfoDataView(
    mojo::ArrayDataView<SiteEngagementDetailsDataView>* output) {
  auto pointer = data_->info.Get();
  *output = mojo::ArrayDataView<SiteEngagementDetailsDataView>(pointer, context_);
}


inline void SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}



}  // namespace mojom

#endif  // CHROME_BROWSER_ENGAGEMENT_SITE_ENGAGEMENT_DETAILS_MOJOM_SHARED_H_
