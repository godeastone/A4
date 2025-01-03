// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_CONTEXTUAL_SEARCH_COMMON_CONTEXTUAL_SEARCH_JS_API_SERVICE_MOJOM_SHARED_H_
#define COMPONENTS_CONTEXTUAL_SEARCH_COMMON_CONTEXTUAL_SEARCH_JS_API_SERVICE_MOJOM_SHARED_H_

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
#include "components/contextual_search/common/contextual_search_js_api_service.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace contextual_search {
namespace mojom {


}  // namespace mojom
}  // namespace contextual_search

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace contextual_search {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ContextualSearchJsApiServiceInterfaceBase {};

using ContextualSearchJsApiServicePtrDataView =
    mojo::InterfacePtrDataView<ContextualSearchJsApiServiceInterfaceBase>;
using ContextualSearchJsApiServiceRequestDataView =
    mojo::InterfaceRequestDataView<ContextualSearchJsApiServiceInterfaceBase>;
using ContextualSearchJsApiServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ContextualSearchJsApiServiceInterfaceBase>;
using ContextualSearchJsApiServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ContextualSearchJsApiServiceInterfaceBase>;
class ContextualSearchJsApiService_ShouldEnableJsApi_ParamsDataView {
 public:
  ContextualSearchJsApiService_ShouldEnableJsApi_ParamsDataView() {}

  ContextualSearchJsApiService_ShouldEnableJsApi_ParamsDataView(
      internal::ContextualSearchJsApiService_ShouldEnableJsApi_Params_Data* data,
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
 private:
  internal::ContextualSearchJsApiService_ShouldEnableJsApi_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParamsDataView {
 public:
  ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParamsDataView() {}

  ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParamsDataView(
      internal::ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool should_enable() const {
    return data_->should_enable;
  }
 private:
  internal::ContextualSearchJsApiService_ShouldEnableJsApi_ResponseParams_Data* data_ = nullptr;
};

class ContextualSearchJsApiService_HandleSetCaption_ParamsDataView {
 public:
  ContextualSearchJsApiService_HandleSetCaption_ParamsDataView() {}

  ContextualSearchJsApiService_HandleSetCaption_ParamsDataView(
      internal::ContextualSearchJsApiService_HandleSetCaption_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool does_answer() const {
    return data_->does_answer;
  }
 private:
  internal::ContextualSearchJsApiService_HandleSetCaption_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace contextual_search

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace contextual_search {
namespace mojom {

inline void ContextualSearchJsApiService_ShouldEnableJsApi_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}




inline void ContextualSearchJsApiService_HandleSetCaption_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace contextual_search

#endif  // COMPONENTS_CONTEXTUAL_SEARCH_COMMON_CONTEXTUAL_SEARCH_JS_API_SERVICE_MOJOM_SHARED_H_
