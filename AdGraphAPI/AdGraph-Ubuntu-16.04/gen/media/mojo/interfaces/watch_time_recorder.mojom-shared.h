// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/watch_time_recorder.mojom-shared-internal.h"
#include "media/mojo/interfaces/media_types.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace media {
namespace mojom {
class PlaybackPropertiesDataView;



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::media::mojom::PlaybackPropertiesDataView> {
  using Data = ::media::mojom::internal::PlaybackProperties_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {
// Interface base classes. They are used for type safety check.
class WatchTimeRecorderInterfaceBase {};

using WatchTimeRecorderPtrDataView =
    mojo::InterfacePtrDataView<WatchTimeRecorderInterfaceBase>;
using WatchTimeRecorderRequestDataView =
    mojo::InterfaceRequestDataView<WatchTimeRecorderInterfaceBase>;
using WatchTimeRecorderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WatchTimeRecorderInterfaceBase>;
using WatchTimeRecorderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WatchTimeRecorderInterfaceBase>;
class PlaybackPropertiesDataView {
 public:
  PlaybackPropertiesDataView() {}

  PlaybackPropertiesDataView(
      internal::PlaybackProperties_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAudioCodec(UserType* output) const {
    auto data_value = data_->audio_codec;
    return mojo::internal::Deserialize<::media::mojom::AudioCodec>(
        data_value, output);
  }

  ::media::mojom::AudioCodec audio_codec() const {
    return static_cast<::media::mojom::AudioCodec>(data_->audio_codec);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVideoCodec(UserType* output) const {
    auto data_value = data_->video_codec;
    return mojo::internal::Deserialize<::media::mojom::VideoCodec>(
        data_value, output);
  }

  ::media::mojom::VideoCodec video_codec() const {
    return static_cast<::media::mojom::VideoCodec>(data_->video_codec);
  }
  bool has_audio() const {
    return data_->has_audio;
  }
  bool has_video() const {
    return data_->has_video;
  }
  bool is_background() const {
    return data_->is_background;
  }
  bool is_muted() const {
    return data_->is_muted;
  }
  bool is_mse() const {
    return data_->is_mse;
  }
  bool is_eme() const {
    return data_->is_eme;
  }
  bool is_embedded_media_experience() const {
    return data_->is_embedded_media_experience;
  }
  inline void GetNaturalSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNaturalSize(UserType* output) {
    auto* pointer = data_->natural_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
 private:
  internal::PlaybackProperties_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WatchTimeRecorder_RecordWatchTime_ParamsDataView {
 public:
  WatchTimeRecorder_RecordWatchTime_ParamsDataView() {}

  WatchTimeRecorder_RecordWatchTime_ParamsDataView(
      internal::WatchTimeRecorder_RecordWatchTime_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) const {
    auto data_value = data_->key;
    return mojo::internal::Deserialize<::media::mojom::WatchTimeKey>(
        data_value, output);
  }

  ::media::mojom::WatchTimeKey key() const {
    return static_cast<::media::mojom::WatchTimeKey>(data_->key);
  }
  inline void GetWatchTimeDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWatchTime(UserType* output) {
    auto* pointer = data_->watch_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::WatchTimeRecorder_RecordWatchTime_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WatchTimeRecorder_FinalizeWatchTime_ParamsDataView {
 public:
  WatchTimeRecorder_FinalizeWatchTime_ParamsDataView() {}

  WatchTimeRecorder_FinalizeWatchTime_ParamsDataView(
      internal::WatchTimeRecorder_FinalizeWatchTime_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetWatchTimeKeysDataView(
      mojo::ArrayDataView<::media::mojom::WatchTimeKey>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWatchTimeKeys(UserType* output) {
    auto* pointer = data_->watch_time_keys.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::WatchTimeKey>>(
        pointer, output, context_);
  }
 private:
  internal::WatchTimeRecorder_FinalizeWatchTime_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WatchTimeRecorder_OnError_ParamsDataView {
 public:
  WatchTimeRecorder_OnError_ParamsDataView() {}

  WatchTimeRecorder_OnError_ParamsDataView(
      internal::WatchTimeRecorder_OnError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::PipelineStatus>(
        data_value, output);
  }

  ::media::mojom::PipelineStatus status() const {
    return static_cast<::media::mojom::PipelineStatus>(data_->status);
  }
 private:
  internal::WatchTimeRecorder_OnError_Params_Data* data_ = nullptr;
};

class WatchTimeRecorder_SetAudioDecoderName_ParamsDataView {
 public:
  WatchTimeRecorder_SetAudioDecoderName_ParamsDataView() {}

  WatchTimeRecorder_SetAudioDecoderName_ParamsDataView(
      internal::WatchTimeRecorder_SetAudioDecoderName_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::WatchTimeRecorder_SetAudioDecoderName_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WatchTimeRecorder_SetVideoDecoderName_ParamsDataView {
 public:
  WatchTimeRecorder_SetVideoDecoderName_ParamsDataView() {}

  WatchTimeRecorder_SetVideoDecoderName_ParamsDataView(
      internal::WatchTimeRecorder_SetVideoDecoderName_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::WatchTimeRecorder_SetVideoDecoderName_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WatchTimeRecorder_SetAutoplayInitiated_ParamsDataView {
 public:
  WatchTimeRecorder_SetAutoplayInitiated_ParamsDataView() {}

  WatchTimeRecorder_SetAutoplayInitiated_ParamsDataView(
      internal::WatchTimeRecorder_SetAutoplayInitiated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool value() const {
    return data_->value;
  }
 private:
  internal::WatchTimeRecorder_SetAutoplayInitiated_Params_Data* data_ = nullptr;
};

class WatchTimeRecorder_UpdateUnderflowCount_ParamsDataView {
 public:
  WatchTimeRecorder_UpdateUnderflowCount_ParamsDataView() {}

  WatchTimeRecorder_UpdateUnderflowCount_ParamsDataView(
      internal::WatchTimeRecorder_UpdateUnderflowCount_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t count() const {
    return data_->count;
  }
 private:
  internal::WatchTimeRecorder_UpdateUnderflowCount_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::PlaybackPropertiesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::PlaybackPropertiesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::PlaybackProperties_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::media::mojom::AudioCodec>(
        CallWithContext(Traits::audio_codec, input, custom_context), &(*output)->audio_codec);
    mojo::internal::Serialize<::media::mojom::VideoCodec>(
        CallWithContext(Traits::video_codec, input, custom_context), &(*output)->video_codec);
    (*output)->has_audio = CallWithContext(Traits::has_audio, input, custom_context);
    (*output)->has_video = CallWithContext(Traits::has_video, input, custom_context);
    (*output)->is_background = CallWithContext(Traits::is_background, input, custom_context);
    (*output)->is_muted = CallWithContext(Traits::is_muted, input, custom_context);
    (*output)->is_mse = CallWithContext(Traits::is_mse, input, custom_context);
    (*output)->is_eme = CallWithContext(Traits::is_eme, input, custom_context);
    (*output)->is_embedded_media_experience = CallWithContext(Traits::is_embedded_media_experience, input, custom_context);
    decltype(CallWithContext(Traits::natural_size, input, custom_context)) in_natural_size = CallWithContext(Traits::natural_size, input, custom_context);
    typename decltype((*output)->natural_size)::BaseType::BufferWriter
        natural_size_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_natural_size, buffer, &natural_size_writer, context);
    (*output)->natural_size.Set(
        natural_size_writer.is_null() ? nullptr : natural_size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->natural_size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null natural_size in PlaybackProperties struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::PlaybackProperties_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::PlaybackPropertiesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {

inline void PlaybackPropertiesDataView::GetNaturalSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->natural_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}


inline void WatchTimeRecorder_RecordWatchTime_ParamsDataView::GetWatchTimeDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->watch_time.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void WatchTimeRecorder_FinalizeWatchTime_ParamsDataView::GetWatchTimeKeysDataView(
    mojo::ArrayDataView<::media::mojom::WatchTimeKey>* output) {
  auto pointer = data_->watch_time_keys.Get();
  *output = mojo::ArrayDataView<::media::mojom::WatchTimeKey>(pointer, context_);
}




inline void WatchTimeRecorder_SetAudioDecoderName_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void WatchTimeRecorder_SetVideoDecoderName_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}







}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_SHARED_H_
