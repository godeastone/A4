// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEB_PACKAGE_WEB_PACKAGE_INTERNALS_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEB_PACKAGE_WEB_PACKAGE_INTERNALS_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/web_package/web_package_internals.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace test {
namespace mojom {


}  // namespace mojom
}  // namespace test
}  // namespace blink

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace test {
namespace mojom {
// Interface base classes. They are used for type safety check.
class WebPackageInternalsInterfaceBase {};

using WebPackageInternalsPtrDataView =
    mojo::InterfacePtrDataView<WebPackageInternalsInterfaceBase>;
using WebPackageInternalsRequestDataView =
    mojo::InterfaceRequestDataView<WebPackageInternalsInterfaceBase>;
using WebPackageInternalsAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WebPackageInternalsInterfaceBase>;
using WebPackageInternalsAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WebPackageInternalsInterfaceBase>;
class WebPackageInternals_SetSignedExchangeVerificationTime_ParamsDataView {
 public:
  WebPackageInternals_SetSignedExchangeVerificationTime_ParamsDataView() {}

  WebPackageInternals_SetSignedExchangeVerificationTime_ParamsDataView(
      internal::WebPackageInternals_SetSignedExchangeVerificationTime_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTime(UserType* output) {
    auto* pointer = data_->time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebPackageInternals_SetSignedExchangeVerificationTime_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParamsDataView {
 public:
  WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParamsDataView() {}

  WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParamsDataView(
      internal::WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace test
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace blink {
namespace test {
namespace mojom {

inline void WebPackageInternals_SetSignedExchangeVerificationTime_ParamsDataView::GetTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace test
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEB_PACKAGE_WEB_PACKAGE_INTERNALS_MOJOM_SHARED_H_
