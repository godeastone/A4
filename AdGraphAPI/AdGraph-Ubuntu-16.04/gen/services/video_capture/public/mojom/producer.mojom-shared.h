// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_PRODUCER_MOJOM_SHARED_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_PRODUCER_MOJOM_SHARED_H_

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
#include "services/video_capture/public/mojom/producer.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace video_capture {
namespace mojom {


}  // namespace mojom
}  // namespace video_capture

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace video_capture {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ProducerInterfaceBase {};

using ProducerPtrDataView =
    mojo::InterfacePtrDataView<ProducerInterfaceBase>;
using ProducerRequestDataView =
    mojo::InterfaceRequestDataView<ProducerInterfaceBase>;
using ProducerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ProducerInterfaceBase>;
using ProducerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ProducerInterfaceBase>;
class Producer_OnNewBufferHandle_ParamsDataView {
 public:
  Producer_OnNewBufferHandle_ParamsDataView() {}

  Producer_OnNewBufferHandle_ParamsDataView(
      internal::Producer_OnNewBufferHandle_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t buffer_id() const {
    return data_->buffer_id;
  }
  mojo::ScopedSharedBufferHandle TakeBufferHandle() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->buffer_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Producer_OnNewBufferHandle_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Producer_OnNewBufferHandle_ResponseParamsDataView {
 public:
  Producer_OnNewBufferHandle_ResponseParamsDataView() {}

  Producer_OnNewBufferHandle_ResponseParamsDataView(
      internal::Producer_OnNewBufferHandle_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Producer_OnNewBufferHandle_ResponseParams_Data* data_ = nullptr;
};

class Producer_OnBufferRetired_ParamsDataView {
 public:
  Producer_OnBufferRetired_ParamsDataView() {}

  Producer_OnBufferRetired_ParamsDataView(
      internal::Producer_OnBufferRetired_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t buffer_id() const {
    return data_->buffer_id;
  }
 private:
  internal::Producer_OnBufferRetired_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace video_capture

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace video_capture {
namespace mojom {








}  // namespace mojom
}  // namespace video_capture

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_PRODUCER_MOJOM_SHARED_H_
