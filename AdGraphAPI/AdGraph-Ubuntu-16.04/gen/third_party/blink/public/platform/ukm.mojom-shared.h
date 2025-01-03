// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_UKM_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_UKM_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/ukm.mojom-shared-internal.h"

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
class UkmSourceIdFrameHostInterfaceBase {};

using UkmSourceIdFrameHostPtrDataView =
    mojo::InterfacePtrDataView<UkmSourceIdFrameHostInterfaceBase>;
using UkmSourceIdFrameHostRequestDataView =
    mojo::InterfaceRequestDataView<UkmSourceIdFrameHostInterfaceBase>;
using UkmSourceIdFrameHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<UkmSourceIdFrameHostInterfaceBase>;
using UkmSourceIdFrameHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<UkmSourceIdFrameHostInterfaceBase>;
class UkmSourceIdFrameHost_SetDocumentSourceId_ParamsDataView {
 public:
  UkmSourceIdFrameHost_SetDocumentSourceId_ParamsDataView() {}

  UkmSourceIdFrameHost_SetDocumentSourceId_ParamsDataView(
      internal::UkmSourceIdFrameHost_SetDocumentSourceId_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t source_id() const {
    return data_->source_id;
  }
 private:
  internal::UkmSourceIdFrameHost_SetDocumentSourceId_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace blink {
namespace mojom {




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_UKM_MOJOM_SHARED_H_
