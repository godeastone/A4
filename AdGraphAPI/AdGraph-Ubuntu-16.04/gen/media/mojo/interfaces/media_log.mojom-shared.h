// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_LOG_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_LOG_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/media_log.mojom-shared-internal.h"
#include "media/mojo/interfaces/media_types.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace media {
namespace mojom {


}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {
// Interface base classes. They are used for type safety check.
class MediaLogInterfaceBase {};

using MediaLogPtrDataView =
    mojo::InterfacePtrDataView<MediaLogInterfaceBase>;
using MediaLogRequestDataView =
    mojo::InterfaceRequestDataView<MediaLogInterfaceBase>;
using MediaLogAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaLogInterfaceBase>;
using MediaLogAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaLogInterfaceBase>;
class MediaLog_AddEvent_ParamsDataView {
 public:
  MediaLog_AddEvent_ParamsDataView() {}

  MediaLog_AddEvent_ParamsDataView(
      internal::MediaLog_AddEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEventDataView(
      ::media::mojom::MediaLogEventDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEvent(UserType* output) {
    auto* pointer = data_->event.Get();
    return mojo::internal::Deserialize<::media::mojom::MediaLogEventDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaLog_AddEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace media {
namespace mojom {

inline void MediaLog_AddEvent_ParamsDataView::GetEventDataView(
    ::media::mojom::MediaLogEventDataView* output) {
  auto pointer = data_->event.Get();
  *output = ::media::mojom::MediaLogEventDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_LOG_MOJOM_SHARED_H_
