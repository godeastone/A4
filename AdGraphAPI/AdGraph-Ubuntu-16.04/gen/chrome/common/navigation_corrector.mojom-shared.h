// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_NAVIGATION_CORRECTOR_MOJOM_SHARED_H_
#define CHROME_COMMON_NAVIGATION_CORRECTOR_MOJOM_SHARED_H_

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
#include "chrome/common/navigation_corrector.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace chrome {
namespace mojom {


}  // namespace mojom
}  // namespace chrome

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace chrome {
namespace mojom {
// Interface base classes. They are used for type safety check.
class NavigationCorrectorInterfaceBase {};

using NavigationCorrectorPtrDataView =
    mojo::InterfacePtrDataView<NavigationCorrectorInterfaceBase>;
using NavigationCorrectorRequestDataView =
    mojo::InterfaceRequestDataView<NavigationCorrectorInterfaceBase>;
using NavigationCorrectorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NavigationCorrectorInterfaceBase>;
using NavigationCorrectorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NavigationCorrectorInterfaceBase>;
class NavigationCorrector_SetNavigationCorrectionInfo_ParamsDataView {
 public:
  NavigationCorrector_SetNavigationCorrectionInfo_ParamsDataView() {}

  NavigationCorrector_SetNavigationCorrectionInfo_ParamsDataView(
      internal::NavigationCorrector_SetNavigationCorrectionInfo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNavigationCorrectionUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNavigationCorrectionUrl(UserType* output) {
    auto* pointer = data_->navigation_correction_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetLanguageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLanguage(UserType* output) {
    auto* pointer = data_->language.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetCountryCodeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCountryCode(UserType* output) {
    auto* pointer = data_->country_code.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetApiKeyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadApiKey(UserType* output) {
    auto* pointer = data_->api_key.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSearchUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSearchUrl(UserType* output) {
    auto* pointer = data_->search_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::NavigationCorrector_SetNavigationCorrectionInfo_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace chrome

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace chrome {
namespace mojom {

inline void NavigationCorrector_SetNavigationCorrectionInfo_ParamsDataView::GetNavigationCorrectionUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->navigation_correction_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void NavigationCorrector_SetNavigationCorrectionInfo_ParamsDataView::GetLanguageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->language.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NavigationCorrector_SetNavigationCorrectionInfo_ParamsDataView::GetCountryCodeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->country_code.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NavigationCorrector_SetNavigationCorrectionInfo_ParamsDataView::GetApiKeyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->api_key.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NavigationCorrector_SetNavigationCorrectionInfo_ParamsDataView::GetSearchUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->search_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_NAVIGATION_CORRECTOR_MOJOM_SHARED_H_
