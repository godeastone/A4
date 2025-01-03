// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MEDIA_DOWNLOAD_IN_PRODUCT_HELP_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MEDIA_DOWNLOAD_IN_PRODUCT_HELP_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/media_download_in_product_help.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class MediaDownloadInProductHelpInterfaceBase {};

using MediaDownloadInProductHelpPtrDataView =
    mojo::InterfacePtrDataView<MediaDownloadInProductHelpInterfaceBase>;
using MediaDownloadInProductHelpRequestDataView =
    mojo::InterfaceRequestDataView<MediaDownloadInProductHelpInterfaceBase>;
using MediaDownloadInProductHelpAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaDownloadInProductHelpInterfaceBase>;
using MediaDownloadInProductHelpAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaDownloadInProductHelpInterfaceBase>;
class MediaDownloadInProductHelp_ShowInProductHelpWidget_ParamsDataView {
 public:
  MediaDownloadInProductHelp_ShowInProductHelpWidget_ParamsDataView() {}

  MediaDownloadInProductHelp_ShowInProductHelpWidget_ParamsDataView(
      internal::MediaDownloadInProductHelp_ShowInProductHelpWidget_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetButtonRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadButtonRect(UserType* output) {
    auto* pointer = data_->button_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaDownloadInProductHelp_ShowInProductHelpWidget_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace blink {
namespace mojom {

inline void MediaDownloadInProductHelp_ShowInProductHelpWidget_ParamsDataView::GetButtonRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->button_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MEDIA_DOWNLOAD_IN_PRODUCT_HELP_MOJOM_SHARED_H_
