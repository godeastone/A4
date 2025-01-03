// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MIRROR_SERVICE_REMOTING_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_MIRROR_SERVICE_REMOTING_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/mirror_service_remoting.mojom-shared-internal.h"
#include "media/mojo/interfaces/remoting_common.mojom-shared.h"

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
class MirrorServiceRemoterInterfaceBase {};

using MirrorServiceRemoterPtrDataView =
    mojo::InterfacePtrDataView<MirrorServiceRemoterInterfaceBase>;
using MirrorServiceRemoterRequestDataView =
    mojo::InterfaceRequestDataView<MirrorServiceRemoterInterfaceBase>;
using MirrorServiceRemoterAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MirrorServiceRemoterInterfaceBase>;
using MirrorServiceRemoterAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MirrorServiceRemoterInterfaceBase>;
class MirrorServiceRemotingSourceInterfaceBase {};

using MirrorServiceRemotingSourcePtrDataView =
    mojo::InterfacePtrDataView<MirrorServiceRemotingSourceInterfaceBase>;
using MirrorServiceRemotingSourceRequestDataView =
    mojo::InterfaceRequestDataView<MirrorServiceRemotingSourceInterfaceBase>;
using MirrorServiceRemotingSourceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MirrorServiceRemotingSourceInterfaceBase>;
using MirrorServiceRemotingSourceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MirrorServiceRemotingSourceInterfaceBase>;
class MirrorServiceRemoter_Start_ParamsDataView {
 public:
  MirrorServiceRemoter_Start_ParamsDataView() {}

  MirrorServiceRemoter_Start_ParamsDataView(
      internal::MirrorServiceRemoter_Start_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MirrorServiceRemoter_Start_Params_Data* data_ = nullptr;
};

class MirrorServiceRemoter_StartDataStreams_ParamsDataView {
 public:
  MirrorServiceRemoter_StartDataStreams_ParamsDataView() {}

  MirrorServiceRemoter_StartDataStreams_ParamsDataView(
      internal::MirrorServiceRemoter_StartDataStreams_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool has_audio() const {
    return data_->has_audio;
  }
  bool has_video() const {
    return data_->has_video;
  }
 private:
  internal::MirrorServiceRemoter_StartDataStreams_Params_Data* data_ = nullptr;
};

class MirrorServiceRemoter_StartDataStreams_ResponseParamsDataView {
 public:
  MirrorServiceRemoter_StartDataStreams_ResponseParamsDataView() {}

  MirrorServiceRemoter_StartDataStreams_ResponseParamsDataView(
      internal::MirrorServiceRemoter_StartDataStreams_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t audio_stream_id() const {
    return data_->audio_stream_id;
  }
  int32_t video_stream_id() const {
    return data_->video_stream_id;
  }
 private:
  internal::MirrorServiceRemoter_StartDataStreams_ResponseParams_Data* data_ = nullptr;
};

class MirrorServiceRemoter_Stop_ParamsDataView {
 public:
  MirrorServiceRemoter_Stop_ParamsDataView() {}

  MirrorServiceRemoter_Stop_ParamsDataView(
      internal::MirrorServiceRemoter_Stop_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::media::mojom::RemotingStopReason>(
        data_value, output);
  }

  ::media::mojom::RemotingStopReason reason() const {
    return static_cast<::media::mojom::RemotingStopReason>(data_->reason);
  }
 private:
  internal::MirrorServiceRemoter_Stop_Params_Data* data_ = nullptr;
};

class MirrorServiceRemoter_SendMessageToSink_ParamsDataView {
 public:
  MirrorServiceRemoter_SendMessageToSink_ParamsDataView() {}

  MirrorServiceRemoter_SendMessageToSink_ParamsDataView(
      internal::MirrorServiceRemoter_SendMessageToSink_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::MirrorServiceRemoter_SendMessageToSink_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MirrorServiceRemoter_EstimateTransmissionCapacity_ParamsDataView {
 public:
  MirrorServiceRemoter_EstimateTransmissionCapacity_ParamsDataView() {}

  MirrorServiceRemoter_EstimateTransmissionCapacity_ParamsDataView(
      internal::MirrorServiceRemoter_EstimateTransmissionCapacity_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MirrorServiceRemoter_EstimateTransmissionCapacity_Params_Data* data_ = nullptr;
};

class MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParamsDataView {
 public:
  MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParamsDataView() {}

  MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParamsDataView(
      internal::MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  double rate() const {
    return data_->rate;
  }
 private:
  internal::MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams_Data* data_ = nullptr;
};

class MirrorServiceRemotingSource_OnSinkAvailable_ParamsDataView {
 public:
  MirrorServiceRemotingSource_OnSinkAvailable_ParamsDataView() {}

  MirrorServiceRemotingSource_OnSinkAvailable_ParamsDataView(
      internal::MirrorServiceRemotingSource_OnSinkAvailable_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMetadataDataView(
      ::media::mojom::RemotingSinkMetadataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMetadata(UserType* output) {
    auto* pointer = data_->metadata.Get();
    return mojo::internal::Deserialize<::media::mojom::RemotingSinkMetadataDataView>(
        pointer, output, context_);
  }
 private:
  internal::MirrorServiceRemotingSource_OnSinkAvailable_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MirrorServiceRemotingSource_OnMessageFromSink_ParamsDataView {
 public:
  MirrorServiceRemotingSource_OnMessageFromSink_ParamsDataView() {}

  MirrorServiceRemotingSource_OnMessageFromSink_ParamsDataView(
      internal::MirrorServiceRemotingSource_OnMessageFromSink_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::MirrorServiceRemotingSource_OnMessageFromSink_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MirrorServiceRemotingSource_OnStopped_ParamsDataView {
 public:
  MirrorServiceRemotingSource_OnStopped_ParamsDataView() {}

  MirrorServiceRemotingSource_OnStopped_ParamsDataView(
      internal::MirrorServiceRemotingSource_OnStopped_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::media::mojom::RemotingStopReason>(
        data_value, output);
  }

  ::media::mojom::RemotingStopReason reason() const {
    return static_cast<::media::mojom::RemotingStopReason>(data_->reason);
  }
 private:
  internal::MirrorServiceRemotingSource_OnStopped_Params_Data* data_ = nullptr;
};

class MirrorServiceRemotingSource_OnError_ParamsDataView {
 public:
  MirrorServiceRemotingSource_OnError_ParamsDataView() {}

  MirrorServiceRemotingSource_OnError_ParamsDataView(
      internal::MirrorServiceRemotingSource_OnError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MirrorServiceRemotingSource_OnError_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace media {
namespace mojom {









inline void MirrorServiceRemoter_SendMessageToSink_ParamsDataView::GetMessageDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->message.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}






inline void MirrorServiceRemotingSource_OnSinkAvailable_ParamsDataView::GetMetadataDataView(
    ::media::mojom::RemotingSinkMetadataDataView* output) {
  auto pointer = data_->metadata.Get();
  *output = ::media::mojom::RemotingSinkMetadataDataView(pointer, context_);
}


inline void MirrorServiceRemotingSource_OnMessageFromSink_ParamsDataView::GetMessageDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->message.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}







}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_MIRROR_SERVICE_REMOTING_MOJOM_SHARED_H_
