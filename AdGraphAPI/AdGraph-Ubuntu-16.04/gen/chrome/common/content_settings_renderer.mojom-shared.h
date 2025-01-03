// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_CONTENT_SETTINGS_RENDERER_MOJOM_SHARED_H_
#define CHROME_COMMON_CONTENT_SETTINGS_RENDERER_MOJOM_SHARED_H_

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
#include "chrome/common/content_settings_renderer.mojom-shared-internal.h"

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
class ContentSettingsRendererInterfaceBase {};

using ContentSettingsRendererPtrDataView =
    mojo::InterfacePtrDataView<ContentSettingsRendererInterfaceBase>;
using ContentSettingsRendererRequestDataView =
    mojo::InterfaceRequestDataView<ContentSettingsRendererInterfaceBase>;
using ContentSettingsRendererAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ContentSettingsRendererInterfaceBase>;
using ContentSettingsRendererAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ContentSettingsRendererInterfaceBase>;
class ContentSettingsRenderer_SetAllowRunningInsecureContent_ParamsDataView {
 public:
  ContentSettingsRenderer_SetAllowRunningInsecureContent_ParamsDataView() {}

  ContentSettingsRenderer_SetAllowRunningInsecureContent_ParamsDataView(
      internal::ContentSettingsRenderer_SetAllowRunningInsecureContent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ContentSettingsRenderer_SetAllowRunningInsecureContent_Params_Data* data_ = nullptr;
};

class ContentSettingsRenderer_SetAsInterstitial_ParamsDataView {
 public:
  ContentSettingsRenderer_SetAsInterstitial_ParamsDataView() {}

  ContentSettingsRenderer_SetAsInterstitial_ParamsDataView(
      internal::ContentSettingsRenderer_SetAsInterstitial_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ContentSettingsRenderer_SetAsInterstitial_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace chrome

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace chrome {
namespace mojom {






}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_CONTENT_SETTINGS_RENDERER_MOJOM_SHARED_H_
