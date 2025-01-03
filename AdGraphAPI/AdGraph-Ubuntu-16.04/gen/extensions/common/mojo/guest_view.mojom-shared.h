// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef EXTENSIONS_COMMON_MOJO_GUEST_VIEW_MOJOM_SHARED_H_
#define EXTENSIONS_COMMON_MOJO_GUEST_VIEW_MOJOM_SHARED_H_

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
#include "extensions/common/mojo/guest_view.mojom-shared-internal.h"
#include "content/public/common/transferrable_url_loader.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace extensions {
namespace mojom {


}  // namespace mojom
}  // namespace extensions

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace extensions {
namespace mojom {
// Interface base classes. They are used for type safety check.
class GuestViewInterfaceBase {};

using GuestViewPtrDataView =
    mojo::InterfacePtrDataView<GuestViewInterfaceBase>;
using GuestViewRequestDataView =
    mojo::InterfaceRequestDataView<GuestViewInterfaceBase>;
using GuestViewAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<GuestViewInterfaceBase>;
using GuestViewAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<GuestViewInterfaceBase>;
class GuestView_CreateEmbeddedMimeHandlerViewGuest_ParamsDataView {
 public:
  GuestView_CreateEmbeddedMimeHandlerViewGuest_ParamsDataView() {}

  GuestView_CreateEmbeddedMimeHandlerViewGuest_ParamsDataView(
      internal::GuestView_CreateEmbeddedMimeHandlerViewGuest_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t render_frame_id() const {
    return data_->render_frame_id;
  }
  int32_t tab_id() const {
    return data_->tab_id;
  }
  inline void GetOriginalUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOriginalUrl(UserType* output) {
    auto* pointer = data_->original_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  int32_t element_instance_id() const {
    return data_->element_instance_id;
  }
  inline void GetElementSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadElementSize(UserType* output) {
    auto* pointer = data_->element_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  inline void GetTransferrableUrlLoaderDataView(
      ::content::mojom::TransferrableURLLoaderDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTransferrableUrlLoader(UserType* output) {
    auto* pointer = data_->transferrable_url_loader.Get();
    return mojo::internal::Deserialize<::content::mojom::TransferrableURLLoaderDataView>(
        pointer, output, context_);
  }
 private:
  internal::GuestView_CreateEmbeddedMimeHandlerViewGuest_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace extensions

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace extensions {
namespace mojom {

inline void GuestView_CreateEmbeddedMimeHandlerViewGuest_ParamsDataView::GetOriginalUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->original_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void GuestView_CreateEmbeddedMimeHandlerViewGuest_ParamsDataView::GetElementSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->element_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void GuestView_CreateEmbeddedMimeHandlerViewGuest_ParamsDataView::GetTransferrableUrlLoaderDataView(
    ::content::mojom::TransferrableURLLoaderDataView* output) {
  auto pointer = data_->transferrable_url_loader.Get();
  *output = ::content::mojom::TransferrableURLLoaderDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace extensions

#endif  // EXTENSIONS_COMMON_MOJO_GUEST_VIEW_MOJOM_SHARED_H_
