// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_OPEN_SEARCH_DESCRIPTION_DOCUMENT_HANDLER_MOJOM_SHARED_H_
#define CHROME_COMMON_OPEN_SEARCH_DESCRIPTION_DOCUMENT_HANDLER_MOJOM_SHARED_H_

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
#include "chrome/common/open_search_description_document_handler.mojom-shared-internal.h"
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
class OpenSearchDescriptionDocumentHandlerInterfaceBase {};

using OpenSearchDescriptionDocumentHandlerPtrDataView =
    mojo::InterfacePtrDataView<OpenSearchDescriptionDocumentHandlerInterfaceBase>;
using OpenSearchDescriptionDocumentHandlerRequestDataView =
    mojo::InterfaceRequestDataView<OpenSearchDescriptionDocumentHandlerInterfaceBase>;
using OpenSearchDescriptionDocumentHandlerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<OpenSearchDescriptionDocumentHandlerInterfaceBase>;
using OpenSearchDescriptionDocumentHandlerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<OpenSearchDescriptionDocumentHandlerInterfaceBase>;
class OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_ParamsDataView {
 public:
  OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_ParamsDataView() {}

  OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_ParamsDataView(
      internal::OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPageUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPageUrl(UserType* output) {
    auto* pointer = data_->page_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetOsddUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOsddUrl(UserType* output) {
    auto* pointer = data_->osdd_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params_Data* data_ = nullptr;
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

inline void OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_ParamsDataView::GetPageUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->page_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_ParamsDataView::GetOsddUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->osdd_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_OPEN_SEARCH_DESCRIPTION_DOCUMENT_HANDLER_MOJOM_SHARED_H_
