// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/remoting.mojom-shared-internal.h"
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
class RemoterFactoryInterfaceBase {};

using RemoterFactoryPtrDataView =
    mojo::InterfacePtrDataView<RemoterFactoryInterfaceBase>;
using RemoterFactoryRequestDataView =
    mojo::InterfaceRequestDataView<RemoterFactoryInterfaceBase>;
using RemoterFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RemoterFactoryInterfaceBase>;
using RemoterFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RemoterFactoryInterfaceBase>;
class RemotingDataStreamSenderInterfaceBase {};

using RemotingDataStreamSenderPtrDataView =
    mojo::InterfacePtrDataView<RemotingDataStreamSenderInterfaceBase>;
using RemotingDataStreamSenderRequestDataView =
    mojo::InterfaceRequestDataView<RemotingDataStreamSenderInterfaceBase>;
using RemotingDataStreamSenderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RemotingDataStreamSenderInterfaceBase>;
using RemotingDataStreamSenderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RemotingDataStreamSenderInterfaceBase>;
class RemoterInterfaceBase {};

using RemoterPtrDataView =
    mojo::InterfacePtrDataView<RemoterInterfaceBase>;
using RemoterRequestDataView =
    mojo::InterfaceRequestDataView<RemoterInterfaceBase>;
using RemoterAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RemoterInterfaceBase>;
using RemoterAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RemoterInterfaceBase>;
class RemotingSourceInterfaceBase {};

using RemotingSourcePtrDataView =
    mojo::InterfacePtrDataView<RemotingSourceInterfaceBase>;
using RemotingSourceRequestDataView =
    mojo::InterfaceRequestDataView<RemotingSourceInterfaceBase>;
using RemotingSourceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RemotingSourceInterfaceBase>;
using RemotingSourceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RemotingSourceInterfaceBase>;
class RemoterFactory_Create_ParamsDataView {
 public:
  RemoterFactory_Create_ParamsDataView() {}

  RemoterFactory_Create_ParamsDataView(
      internal::RemoterFactory_Create_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeSource() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::RemotingSourcePtrDataView>(
            &data_->source, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeRemoter() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::RemoterRequestDataView>(
            &data_->remoter, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::RemoterFactory_Create_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RemotingDataStreamSender_SendFrame_ParamsDataView {
 public:
  RemotingDataStreamSender_SendFrame_ParamsDataView() {}

  RemotingDataStreamSender_SendFrame_ParamsDataView(
      internal::RemotingDataStreamSender_SendFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t frame_size() const {
    return data_->frame_size;
  }
 private:
  internal::RemotingDataStreamSender_SendFrame_Params_Data* data_ = nullptr;
};

class RemotingDataStreamSender_CancelInFlightData_ParamsDataView {
 public:
  RemotingDataStreamSender_CancelInFlightData_ParamsDataView() {}

  RemotingDataStreamSender_CancelInFlightData_ParamsDataView(
      internal::RemotingDataStreamSender_CancelInFlightData_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::RemotingDataStreamSender_CancelInFlightData_Params_Data* data_ = nullptr;
};

class Remoter_Start_ParamsDataView {
 public:
  Remoter_Start_ParamsDataView() {}

  Remoter_Start_ParamsDataView(
      internal::Remoter_Start_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Remoter_Start_Params_Data* data_ = nullptr;
};

class Remoter_StartDataStreams_ParamsDataView {
 public:
  Remoter_StartDataStreams_ParamsDataView() {}

  Remoter_StartDataStreams_ParamsDataView(
      internal::Remoter_StartDataStreams_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedDataPipeConsumerHandle TakeAudioPipe() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->audio_pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedDataPipeConsumerHandle TakeVideoPipe() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->video_pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeAudioSender() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::RemotingDataStreamSenderRequestDataView>(
            &data_->audio_sender, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeVideoSender() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::RemotingDataStreamSenderRequestDataView>(
            &data_->video_sender, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Remoter_StartDataStreams_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Remoter_Stop_ParamsDataView {
 public:
  Remoter_Stop_ParamsDataView() {}

  Remoter_Stop_ParamsDataView(
      internal::Remoter_Stop_Params_Data* data,
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
  internal::Remoter_Stop_Params_Data* data_ = nullptr;
};

class Remoter_SendMessageToSink_ParamsDataView {
 public:
  Remoter_SendMessageToSink_ParamsDataView() {}

  Remoter_SendMessageToSink_ParamsDataView(
      internal::Remoter_SendMessageToSink_Params_Data* data,
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
  internal::Remoter_SendMessageToSink_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Remoter_EstimateTransmissionCapacity_ParamsDataView {
 public:
  Remoter_EstimateTransmissionCapacity_ParamsDataView() {}

  Remoter_EstimateTransmissionCapacity_ParamsDataView(
      internal::Remoter_EstimateTransmissionCapacity_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Remoter_EstimateTransmissionCapacity_Params_Data* data_ = nullptr;
};

class Remoter_EstimateTransmissionCapacity_ResponseParamsDataView {
 public:
  Remoter_EstimateTransmissionCapacity_ResponseParamsDataView() {}

  Remoter_EstimateTransmissionCapacity_ResponseParamsDataView(
      internal::Remoter_EstimateTransmissionCapacity_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  double rate() const {
    return data_->rate;
  }
 private:
  internal::Remoter_EstimateTransmissionCapacity_ResponseParams_Data* data_ = nullptr;
};

class RemotingSource_OnSinkAvailable_ParamsDataView {
 public:
  RemotingSource_OnSinkAvailable_ParamsDataView() {}

  RemotingSource_OnSinkAvailable_ParamsDataView(
      internal::RemotingSource_OnSinkAvailable_Params_Data* data,
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
  internal::RemotingSource_OnSinkAvailable_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RemotingSource_OnSinkGone_ParamsDataView {
 public:
  RemotingSource_OnSinkGone_ParamsDataView() {}

  RemotingSource_OnSinkGone_ParamsDataView(
      internal::RemotingSource_OnSinkGone_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::RemotingSource_OnSinkGone_Params_Data* data_ = nullptr;
};

class RemotingSource_OnStarted_ParamsDataView {
 public:
  RemotingSource_OnStarted_ParamsDataView() {}

  RemotingSource_OnStarted_ParamsDataView(
      internal::RemotingSource_OnStarted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::RemotingSource_OnStarted_Params_Data* data_ = nullptr;
};

class RemotingSource_OnStartFailed_ParamsDataView {
 public:
  RemotingSource_OnStartFailed_ParamsDataView() {}

  RemotingSource_OnStartFailed_ParamsDataView(
      internal::RemotingSource_OnStartFailed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::media::mojom::RemotingStartFailReason>(
        data_value, output);
  }

  ::media::mojom::RemotingStartFailReason reason() const {
    return static_cast<::media::mojom::RemotingStartFailReason>(data_->reason);
  }
 private:
  internal::RemotingSource_OnStartFailed_Params_Data* data_ = nullptr;
};

class RemotingSource_OnMessageFromSink_ParamsDataView {
 public:
  RemotingSource_OnMessageFromSink_ParamsDataView() {}

  RemotingSource_OnMessageFromSink_ParamsDataView(
      internal::RemotingSource_OnMessageFromSink_Params_Data* data,
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
  internal::RemotingSource_OnMessageFromSink_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RemotingSource_OnStopped_ParamsDataView {
 public:
  RemotingSource_OnStopped_ParamsDataView() {}

  RemotingSource_OnStopped_ParamsDataView(
      internal::RemotingSource_OnStopped_Params_Data* data,
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
  internal::RemotingSource_OnStopped_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace media {
namespace mojom {













inline void Remoter_SendMessageToSink_ParamsDataView::GetMessageDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->message.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}






inline void RemotingSource_OnSinkAvailable_ParamsDataView::GetMetadataDataView(
    ::media::mojom::RemotingSinkMetadataDataView* output) {
  auto pointer = data_->metadata.Get();
  *output = ::media::mojom::RemotingSinkMetadataDataView(pointer, context_);
}








inline void RemotingSource_OnMessageFromSink_ParamsDataView::GetMessageDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->message.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}





}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_SHARED_H_
