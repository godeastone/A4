// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/video_decoder.mojom-shared-internal.h"
#include "gpu/ipc/common/sync_token.mojom-shared.h"
#include "media/mojo/interfaces/media_log.mojom-shared.h"
#include "media/mojo/interfaces/media_types.mojom-shared.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"
#include "ui/gfx/mojo/color_space.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace media {
namespace mojom {
class CommandBufferIdDataView;

using OverlayInfoDataView = mojo::native::NativeStructDataView;



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::media::mojom::CommandBufferIdDataView> {
  using Data = ::media::mojom::internal::CommandBufferId_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {
// Interface base classes. They are used for type safety check.
class VideoFrameHandleReleaserInterfaceBase {};

using VideoFrameHandleReleaserPtrDataView =
    mojo::InterfacePtrDataView<VideoFrameHandleReleaserInterfaceBase>;
using VideoFrameHandleReleaserRequestDataView =
    mojo::InterfaceRequestDataView<VideoFrameHandleReleaserInterfaceBase>;
using VideoFrameHandleReleaserAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VideoFrameHandleReleaserInterfaceBase>;
using VideoFrameHandleReleaserAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VideoFrameHandleReleaserInterfaceBase>;
class VideoDecoderInterfaceBase {};

using VideoDecoderPtrDataView =
    mojo::InterfacePtrDataView<VideoDecoderInterfaceBase>;
using VideoDecoderRequestDataView =
    mojo::InterfaceRequestDataView<VideoDecoderInterfaceBase>;
using VideoDecoderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VideoDecoderInterfaceBase>;
using VideoDecoderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VideoDecoderInterfaceBase>;
class VideoDecoderClientInterfaceBase {};

using VideoDecoderClientPtrDataView =
    mojo::InterfacePtrDataView<VideoDecoderClientInterfaceBase>;
using VideoDecoderClientRequestDataView =
    mojo::InterfaceRequestDataView<VideoDecoderClientInterfaceBase>;
using VideoDecoderClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VideoDecoderClientInterfaceBase>;
using VideoDecoderClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VideoDecoderClientInterfaceBase>;
class CommandBufferIdDataView {
 public:
  CommandBufferIdDataView() {}

  CommandBufferIdDataView(
      internal::CommandBufferId_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetChannelTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChannelToken(UserType* output) {
    auto* pointer = data_->channel_token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  int32_t route_id() const {
    return data_->route_id;
  }
 private:
  internal::CommandBufferId_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoFrameHandleReleaser_ReleaseVideoFrame_ParamsDataView {
 public:
  VideoFrameHandleReleaser_ReleaseVideoFrame_ParamsDataView() {}

  VideoFrameHandleReleaser_ReleaseVideoFrame_ParamsDataView(
      internal::VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetReleaseTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReleaseToken(UserType* output) {
    auto* pointer = data_->release_token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  inline void GetReleaseSyncTokenDataView(
      ::gpu::mojom::SyncTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReleaseSyncToken(UserType* output) {
    auto* pointer = data_->release_sync_token.Get();
    return mojo::internal::Deserialize<::gpu::mojom::SyncTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoFrameHandleReleaser_ReleaseVideoFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoDecoder_Construct_ParamsDataView {
 public:
  VideoDecoder_Construct_ParamsDataView() {}

  VideoDecoder_Construct_ParamsDataView(
      internal::VideoDecoder_Construct_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::VideoDecoderClientAssociatedPtrInfoDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeMediaLog() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::MediaLogAssociatedPtrInfoDataView>(
            &data_->media_log, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeVideoFrameHandleReleaser() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::VideoFrameHandleReleaserRequestDataView>(
            &data_->video_frame_handle_releaser, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedDataPipeConsumerHandle TakeDecoderBufferPipe() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->decoder_buffer_pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetCommandBufferIdDataView(
      CommandBufferIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCommandBufferId(UserType* output) {
    auto* pointer = data_->command_buffer_id.Get();
    return mojo::internal::Deserialize<::media::mojom::CommandBufferIdDataView>(
        pointer, output, context_);
  }
  inline void GetTargetColorSpaceDataView(
      ::gfx::mojom::ColorSpaceDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTargetColorSpace(UserType* output) {
    auto* pointer = data_->target_color_space.Get();
    return mojo::internal::Deserialize<::gfx::mojom::ColorSpaceDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoDecoder_Construct_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoDecoder_Initialize_ParamsDataView {
 public:
  VideoDecoder_Initialize_ParamsDataView() {}

  VideoDecoder_Initialize_ParamsDataView(
      internal::VideoDecoder_Initialize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetConfigDataView(
      ::media::mojom::VideoDecoderConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConfig(UserType* output) {
    auto* pointer = data_->config.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoDecoderConfigDataView>(
        pointer, output, context_);
  }
  bool low_delay() const {
    return data_->low_delay;
  }
  int32_t cdm_id() const {
    return data_->cdm_id;
  }
 private:
  internal::VideoDecoder_Initialize_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoDecoder_Initialize_ResponseParamsDataView {
 public:
  VideoDecoder_Initialize_ResponseParamsDataView() {}

  VideoDecoder_Initialize_ResponseParamsDataView(
      internal::VideoDecoder_Initialize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  bool needs_bitstream_conversion() const {
    return data_->needs_bitstream_conversion;
  }
  int32_t max_decode_requests() const {
    return data_->max_decode_requests;
  }
 private:
  internal::VideoDecoder_Initialize_ResponseParams_Data* data_ = nullptr;
};

class VideoDecoder_Decode_ParamsDataView {
 public:
  VideoDecoder_Decode_ParamsDataView() {}

  VideoDecoder_Decode_ParamsDataView(
      internal::VideoDecoder_Decode_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBufferDataView(
      ::media::mojom::DecoderBufferDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) {
    auto* pointer = data_->buffer.Get();
    return mojo::internal::Deserialize<::media::mojom::DecoderBufferDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoDecoder_Decode_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoDecoder_Decode_ResponseParamsDataView {
 public:
  VideoDecoder_Decode_ResponseParamsDataView() {}

  VideoDecoder_Decode_ResponseParamsDataView(
      internal::VideoDecoder_Decode_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::DecodeStatus>(
        data_value, output);
  }

  ::media::mojom::DecodeStatus status() const {
    return static_cast<::media::mojom::DecodeStatus>(data_->status);
  }
 private:
  internal::VideoDecoder_Decode_ResponseParams_Data* data_ = nullptr;
};

class VideoDecoder_Reset_ParamsDataView {
 public:
  VideoDecoder_Reset_ParamsDataView() {}

  VideoDecoder_Reset_ParamsDataView(
      internal::VideoDecoder_Reset_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VideoDecoder_Reset_Params_Data* data_ = nullptr;
};

class VideoDecoder_Reset_ResponseParamsDataView {
 public:
  VideoDecoder_Reset_ResponseParamsDataView() {}

  VideoDecoder_Reset_ResponseParamsDataView(
      internal::VideoDecoder_Reset_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VideoDecoder_Reset_ResponseParams_Data* data_ = nullptr;
};

class VideoDecoder_OnOverlayInfoChanged_ParamsDataView {
 public:
  VideoDecoder_OnOverlayInfoChanged_ParamsDataView() {}

  VideoDecoder_OnOverlayInfoChanged_ParamsDataView(
      internal::VideoDecoder_OnOverlayInfoChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOverlayInfoDataView(
      OverlayInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOverlayInfo(UserType* output) {
    auto* pointer = data_->overlay_info.Get();
    return mojo::internal::Deserialize<::media::mojom::OverlayInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoDecoder_OnOverlayInfoChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoDecoderClient_OnVideoFrameDecoded_ParamsDataView {
 public:
  VideoDecoderClient_OnVideoFrameDecoded_ParamsDataView() {}

  VideoDecoderClient_OnVideoFrameDecoded_ParamsDataView(
      internal::VideoDecoderClient_OnVideoFrameDecoded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameDataView(
      ::media::mojom::VideoFrameDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrame(UserType* output) {
    auto* pointer = data_->frame.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoFrameDataView>(
        pointer, output, context_);
  }
  bool can_read_without_stalling() const {
    return data_->can_read_without_stalling;
  }
  inline void GetReleaseTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReleaseToken(UserType* output) {
    auto* pointer = data_->release_token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoDecoderClient_OnVideoFrameDecoded_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoDecoderClient_RequestOverlayInfo_ParamsDataView {
 public:
  VideoDecoderClient_RequestOverlayInfo_ParamsDataView() {}

  VideoDecoderClient_RequestOverlayInfo_ParamsDataView(
      internal::VideoDecoderClient_RequestOverlayInfo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool restart_for_transitions() const {
    return data_->restart_for_transitions;
  }
 private:
  internal::VideoDecoderClient_RequestOverlayInfo_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::CommandBufferIdDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::CommandBufferIdDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::CommandBufferId_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::channel_token, input, custom_context)) in_channel_token = CallWithContext(Traits::channel_token, input, custom_context);
    typename decltype((*output)->channel_token)::BaseType::BufferWriter
        channel_token_writer;
    mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
        in_channel_token, buffer, &channel_token_writer, context);
    (*output)->channel_token.Set(
        channel_token_writer.is_null() ? nullptr : channel_token_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->channel_token.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null channel_token in CommandBufferId struct");
    (*output)->route_id = CallWithContext(Traits::route_id, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::CommandBufferId_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::CommandBufferIdDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {

inline void CommandBufferIdDataView::GetChannelTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->channel_token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}


inline void VideoFrameHandleReleaser_ReleaseVideoFrame_ParamsDataView::GetReleaseTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->release_token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}
inline void VideoFrameHandleReleaser_ReleaseVideoFrame_ParamsDataView::GetReleaseSyncTokenDataView(
    ::gpu::mojom::SyncTokenDataView* output) {
  auto pointer = data_->release_sync_token.Get();
  *output = ::gpu::mojom::SyncTokenDataView(pointer, context_);
}


inline void VideoDecoder_Construct_ParamsDataView::GetCommandBufferIdDataView(
    CommandBufferIdDataView* output) {
  auto pointer = data_->command_buffer_id.Get();
  *output = CommandBufferIdDataView(pointer, context_);
}
inline void VideoDecoder_Construct_ParamsDataView::GetTargetColorSpaceDataView(
    ::gfx::mojom::ColorSpaceDataView* output) {
  auto pointer = data_->target_color_space.Get();
  *output = ::gfx::mojom::ColorSpaceDataView(pointer, context_);
}


inline void VideoDecoder_Initialize_ParamsDataView::GetConfigDataView(
    ::media::mojom::VideoDecoderConfigDataView* output) {
  auto pointer = data_->config.Get();
  *output = ::media::mojom::VideoDecoderConfigDataView(pointer, context_);
}




inline void VideoDecoder_Decode_ParamsDataView::GetBufferDataView(
    ::media::mojom::DecoderBufferDataView* output) {
  auto pointer = data_->buffer.Get();
  *output = ::media::mojom::DecoderBufferDataView(pointer, context_);
}








inline void VideoDecoder_OnOverlayInfoChanged_ParamsDataView::GetOverlayInfoDataView(
    OverlayInfoDataView* output) {
  auto pointer = data_->overlay_info.Get();
  *output = OverlayInfoDataView(pointer, context_);
}


inline void VideoDecoderClient_OnVideoFrameDecoded_ParamsDataView::GetFrameDataView(
    ::media::mojom::VideoFrameDataView* output) {
  auto pointer = data_->frame.Get();
  *output = ::media::mojom::VideoFrameDataView(pointer, context_);
}
inline void VideoDecoderClient_OnVideoFrameDecoded_ParamsDataView::GetReleaseTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->release_token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_SHARED_H_
