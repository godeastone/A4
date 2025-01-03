// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_INSTALLEDAPP_INSTALLED_APP_PROVIDER_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_INSTALLEDAPP_INSTALLED_APP_PROVIDER_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/modules/installedapp/installed_app_provider.mojom-shared-internal.h"
#include "third_party/blink/public/platform/modules/installedapp/related_application.mojom-shared.h"

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
class InstalledAppProviderInterfaceBase {};

using InstalledAppProviderPtrDataView =
    mojo::InterfacePtrDataView<InstalledAppProviderInterfaceBase>;
using InstalledAppProviderRequestDataView =
    mojo::InterfaceRequestDataView<InstalledAppProviderInterfaceBase>;
using InstalledAppProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<InstalledAppProviderInterfaceBase>;
using InstalledAppProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<InstalledAppProviderInterfaceBase>;
class InstalledAppProvider_FilterInstalledApps_ParamsDataView {
 public:
  InstalledAppProvider_FilterInstalledApps_ParamsDataView() {}

  InstalledAppProvider_FilterInstalledApps_ParamsDataView(
      internal::InstalledAppProvider_FilterInstalledApps_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRelatedAppsDataView(
      mojo::ArrayDataView<::blink::mojom::RelatedApplicationDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRelatedApps(UserType* output) {
    auto* pointer = data_->related_apps.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::RelatedApplicationDataView>>(
        pointer, output, context_);
  }
 private:
  internal::InstalledAppProvider_FilterInstalledApps_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InstalledAppProvider_FilterInstalledApps_ResponseParamsDataView {
 public:
  InstalledAppProvider_FilterInstalledApps_ResponseParamsDataView() {}

  InstalledAppProvider_FilterInstalledApps_ResponseParamsDataView(
      internal::InstalledAppProvider_FilterInstalledApps_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInstalledAppsDataView(
      mojo::ArrayDataView<::blink::mojom::RelatedApplicationDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstalledApps(UserType* output) {
    auto* pointer = data_->installedApps.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::RelatedApplicationDataView>>(
        pointer, output, context_);
  }
 private:
  internal::InstalledAppProvider_FilterInstalledApps_ResponseParams_Data* data_ = nullptr;
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

inline void InstalledAppProvider_FilterInstalledApps_ParamsDataView::GetRelatedAppsDataView(
    mojo::ArrayDataView<::blink::mojom::RelatedApplicationDataView>* output) {
  auto pointer = data_->related_apps.Get();
  *output = mojo::ArrayDataView<::blink::mojom::RelatedApplicationDataView>(pointer, context_);
}


inline void InstalledAppProvider_FilterInstalledApps_ResponseParamsDataView::GetInstalledAppsDataView(
    mojo::ArrayDataView<::blink::mojom::RelatedApplicationDataView>* output) {
  auto pointer = data_->installedApps.Get();
  *output = mojo::ArrayDataView<::blink::mojom::RelatedApplicationDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_INSTALLEDAPP_INSTALLED_APP_PROVIDER_MOJOM_SHARED_H_
