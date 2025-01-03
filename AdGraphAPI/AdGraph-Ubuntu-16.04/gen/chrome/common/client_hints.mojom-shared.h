// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_CLIENT_HINTS_MOJOM_SHARED_H_
#define CHROME_COMMON_CLIENT_HINTS_MOJOM_SHARED_H_

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
#include "chrome/common/client_hints.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "third_party/blink/public/platform/web_client_hints_types.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace client_hints {
namespace mojom {


}  // namespace mojom
}  // namespace client_hints

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace client_hints {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ClientHintsInterfaceBase {};

using ClientHintsPtrDataView =
    mojo::InterfacePtrDataView<ClientHintsInterfaceBase>;
using ClientHintsRequestDataView =
    mojo::InterfaceRequestDataView<ClientHintsInterfaceBase>;
using ClientHintsAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ClientHintsInterfaceBase>;
using ClientHintsAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ClientHintsInterfaceBase>;
class ClientHints_PersistClientHints_ParamsDataView {
 public:
  ClientHints_PersistClientHints_ParamsDataView() {}

  ClientHints_PersistClientHints_ParamsDataView(
      internal::ClientHints_PersistClientHints_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPrimaryOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrimaryOrigin(UserType* output) {
    auto* pointer = data_->primary_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  inline void GetClientHintsDataView(
      mojo::ArrayDataView<::blink::mojom::WebClientHintsType>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientHints(UserType* output) {
    auto* pointer = data_->client_hints.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::WebClientHintsType>>(
        pointer, output, context_);
  }
  inline void GetExpirationDurationDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExpirationDuration(UserType* output) {
    auto* pointer = data_->expiration_duration.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::ClientHints_PersistClientHints_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace client_hints

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace client_hints {
namespace mojom {

inline void ClientHints_PersistClientHints_ParamsDataView::GetPrimaryOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->primary_origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void ClientHints_PersistClientHints_ParamsDataView::GetClientHintsDataView(
    mojo::ArrayDataView<::blink::mojom::WebClientHintsType>* output) {
  auto pointer = data_->client_hints.Get();
  *output = mojo::ArrayDataView<::blink::mojom::WebClientHintsType>(pointer, context_);
}
inline void ClientHints_PersistClientHints_ParamsDataView::GetExpirationDurationDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->expiration_duration.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace client_hints

#endif  // CHROME_COMMON_CLIENT_HINTS_MOJOM_SHARED_H_
