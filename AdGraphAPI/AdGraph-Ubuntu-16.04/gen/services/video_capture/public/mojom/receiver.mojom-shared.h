// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_RECEIVER_MOJOM_SHARED_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_RECEIVER_MOJOM_SHARED_H_

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
#include "services/video_capture/public/mojom/receiver.mojom-shared-internal.h"
#include "media/capture/mojom/video_capture_types.mojom-shared.h"
#include "services/video_capture/public/mojom/scoped_access_permission.mojom-shared.h"

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
class ReceiverInterfaceBase {};

using ReceiverPtrDataView =
    mojo::InterfacePtrDataView<ReceiverInterfaceBase>;
using ReceiverRequestDataView =
    mojo::InterfaceRequestDataView<ReceiverInterfaceBase>;
using ReceiverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ReceiverInterfaceBase>;
using ReceiverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ReceiverInterfaceBase>;
class Receiver_OnNewBuffer_ParamsDataView {
 public:
  Receiver_OnNewBuffer_ParamsDataView() {}

  Receiver_OnNewBuffer_ParamsDataView(
      internal::Receiver_OnNewBuffer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t buffer_id() const {
    return data_->buffer_id;
  }
  inline void GetBufferHandleDataView(
      ::media::mojom::VideoBufferHandleDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBufferHandle(UserType* output) {
    auto* pointer = !data_->buffer_handle.is_null() ? &data_->buffer_handle : nullptr;
    return mojo::internal::Deserialize<::media::mojom::VideoBufferHandleDataView>(
        pointer, output, context_);
  }
 private:
  internal::Receiver_OnNewBuffer_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Receiver_OnFrameReadyInBuffer_ParamsDataView {
 public:
  Receiver_OnFrameReadyInBuffer_ParamsDataView() {}

  Receiver_OnFrameReadyInBuffer_ParamsDataView(
      internal::Receiver_OnFrameReadyInBuffer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t buffer_id() const {
    return data_->buffer_id;
  }
  int32_t frame_feedback_id() const {
    return data_->frame_feedback_id;
  }
  template <typename UserType>
  UserType TakeAccessPermission() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::video_capture::mojom::ScopedAccessPermissionPtrDataView>(
            &data_->access_permission, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetFrameInfoDataView(
      ::media::mojom::VideoFrameInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameInfo(UserType* output) {
    auto* pointer = data_->frame_info.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoFrameInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::Receiver_OnFrameReadyInBuffer_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Receiver_OnBufferRetired_ParamsDataView {
 public:
  Receiver_OnBufferRetired_ParamsDataView() {}

  Receiver_OnBufferRetired_ParamsDataView(
      internal::Receiver_OnBufferRetired_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t buffer_id() const {
    return data_->buffer_id;
  }
 private:
  internal::Receiver_OnBufferRetired_Params_Data* data_ = nullptr;
};

class Receiver_OnError_ParamsDataView {
 public:
  Receiver_OnError_ParamsDataView() {}

  Receiver_OnError_ParamsDataView(
      internal::Receiver_OnError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Receiver_OnError_Params_Data* data_ = nullptr;
};

class Receiver_OnLog_ParamsDataView {
 public:
  Receiver_OnLog_ParamsDataView() {}

  Receiver_OnLog_ParamsDataView(
      internal::Receiver_OnLog_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Receiver_OnLog_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Receiver_OnStarted_ParamsDataView {
 public:
  Receiver_OnStarted_ParamsDataView() {}

  Receiver_OnStarted_ParamsDataView(
      internal::Receiver_OnStarted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Receiver_OnStarted_Params_Data* data_ = nullptr;
};

class Receiver_OnStartedUsingGpuDecode_ParamsDataView {
 public:
  Receiver_OnStartedUsingGpuDecode_ParamsDataView() {}

  Receiver_OnStartedUsingGpuDecode_ParamsDataView(
      internal::Receiver_OnStartedUsingGpuDecode_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Receiver_OnStartedUsingGpuDecode_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace video_capture

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace video_capture {
namespace mojom {

inline void Receiver_OnNewBuffer_ParamsDataView::GetBufferHandleDataView(
    ::media::mojom::VideoBufferHandleDataView* output) {
  auto pointer = &data_->buffer_handle;
  *output = ::media::mojom::VideoBufferHandleDataView(pointer, context_);
}


inline void Receiver_OnFrameReadyInBuffer_ParamsDataView::GetFrameInfoDataView(
    ::media::mojom::VideoFrameInfoDataView* output) {
  auto pointer = data_->frame_info.Get();
  *output = ::media::mojom::VideoFrameInfoDataView(pointer, context_);
}






inline void Receiver_OnLog_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}







}  // namespace mojom
}  // namespace video_capture

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_RECEIVER_MOJOM_SHARED_H_
