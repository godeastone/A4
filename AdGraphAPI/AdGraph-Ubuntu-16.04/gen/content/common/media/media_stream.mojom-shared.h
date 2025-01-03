// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_MEDIA_MEDIA_STREAM_MOJOM_SHARED_H_
#define CONTENT_COMMON_MEDIA_MEDIA_STREAM_MOJOM_SHARED_H_

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
#include "content/common/media/media_stream.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {
using MediaStreamDeviceDataView = mojo::native::NativeStructDataView;

class TrackControlsDataView;

class StreamControlsDataView;



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::content::mojom::TrackControlsDataView> {
  using Data = ::content::mojom::internal::TrackControls_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::StreamControlsDataView> {
  using Data = ::content::mojom::internal::StreamControls_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {

enum class MediaStreamType : int32_t {
  MEDIA_NO_SERVICE,
  MEDIA_DEVICE_AUDIO_CAPTURE,
  MEDIA_DEVICE_VIDEO_CAPTURE,
  MEDIA_TAB_AUDIO_CAPTURE,
  MEDIA_TAB_VIDEO_CAPTURE,
  MEDIA_DESKTOP_VIDEO_CAPTURE,
  MEDIA_DESKTOP_AUDIO_CAPTURE,
  NUM_MEDIA_TYPES,
  kMinValue = 0,
  kMaxValue = 7,
};

inline std::ostream& operator<<(std::ostream& os, MediaStreamType value) {
  switch(value) {
    case MediaStreamType::MEDIA_NO_SERVICE:
      return os << "MediaStreamType::MEDIA_NO_SERVICE";
    case MediaStreamType::MEDIA_DEVICE_AUDIO_CAPTURE:
      return os << "MediaStreamType::MEDIA_DEVICE_AUDIO_CAPTURE";
    case MediaStreamType::MEDIA_DEVICE_VIDEO_CAPTURE:
      return os << "MediaStreamType::MEDIA_DEVICE_VIDEO_CAPTURE";
    case MediaStreamType::MEDIA_TAB_AUDIO_CAPTURE:
      return os << "MediaStreamType::MEDIA_TAB_AUDIO_CAPTURE";
    case MediaStreamType::MEDIA_TAB_VIDEO_CAPTURE:
      return os << "MediaStreamType::MEDIA_TAB_VIDEO_CAPTURE";
    case MediaStreamType::MEDIA_DESKTOP_VIDEO_CAPTURE:
      return os << "MediaStreamType::MEDIA_DESKTOP_VIDEO_CAPTURE";
    case MediaStreamType::MEDIA_DESKTOP_AUDIO_CAPTURE:
      return os << "MediaStreamType::MEDIA_DESKTOP_AUDIO_CAPTURE";
    case MediaStreamType::NUM_MEDIA_TYPES:
      return os << "MediaStreamType::NUM_MEDIA_TYPES";
    default:
      return os << "Unknown MediaStreamType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(MediaStreamType value) {
  return internal::MediaStreamType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class MediaStreamRequestResult : int32_t {
  OK,
  PERMISSION_DENIED,
  PERMISSION_DISMISSED,
  INVALID_STATE,
  NO_HARDWARE,
  INVALID_SECURITY_ORIGIN,
  TAB_CAPTURE_FAILURE,
  SCREEN_CAPTURE_FAILURE,
  CAPTURE_FAILURE,
  CONSTRAINT_NOT_SATISFIED,
  TRACK_START_FAILURE_AUDIO,
  TRACK_START_FAILURE_VIDEO,
  NOT_SUPPORTED,
  FAILED_DUE_TO_SHUTDOWN,
  KILL_SWITCH_ON,
  kMinValue = 0,
  kMaxValue = 14,
};

inline std::ostream& operator<<(std::ostream& os, MediaStreamRequestResult value) {
  switch(value) {
    case MediaStreamRequestResult::OK:
      return os << "MediaStreamRequestResult::OK";
    case MediaStreamRequestResult::PERMISSION_DENIED:
      return os << "MediaStreamRequestResult::PERMISSION_DENIED";
    case MediaStreamRequestResult::PERMISSION_DISMISSED:
      return os << "MediaStreamRequestResult::PERMISSION_DISMISSED";
    case MediaStreamRequestResult::INVALID_STATE:
      return os << "MediaStreamRequestResult::INVALID_STATE";
    case MediaStreamRequestResult::NO_HARDWARE:
      return os << "MediaStreamRequestResult::NO_HARDWARE";
    case MediaStreamRequestResult::INVALID_SECURITY_ORIGIN:
      return os << "MediaStreamRequestResult::INVALID_SECURITY_ORIGIN";
    case MediaStreamRequestResult::TAB_CAPTURE_FAILURE:
      return os << "MediaStreamRequestResult::TAB_CAPTURE_FAILURE";
    case MediaStreamRequestResult::SCREEN_CAPTURE_FAILURE:
      return os << "MediaStreamRequestResult::SCREEN_CAPTURE_FAILURE";
    case MediaStreamRequestResult::CAPTURE_FAILURE:
      return os << "MediaStreamRequestResult::CAPTURE_FAILURE";
    case MediaStreamRequestResult::CONSTRAINT_NOT_SATISFIED:
      return os << "MediaStreamRequestResult::CONSTRAINT_NOT_SATISFIED";
    case MediaStreamRequestResult::TRACK_START_FAILURE_AUDIO:
      return os << "MediaStreamRequestResult::TRACK_START_FAILURE_AUDIO";
    case MediaStreamRequestResult::TRACK_START_FAILURE_VIDEO:
      return os << "MediaStreamRequestResult::TRACK_START_FAILURE_VIDEO";
    case MediaStreamRequestResult::NOT_SUPPORTED:
      return os << "MediaStreamRequestResult::NOT_SUPPORTED";
    case MediaStreamRequestResult::FAILED_DUE_TO_SHUTDOWN:
      return os << "MediaStreamRequestResult::FAILED_DUE_TO_SHUTDOWN";
    case MediaStreamRequestResult::KILL_SWITCH_ON:
      return os << "MediaStreamRequestResult::KILL_SWITCH_ON";
    default:
      return os << "Unknown MediaStreamRequestResult value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(MediaStreamRequestResult value) {
  return internal::MediaStreamRequestResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class MediaStreamDeviceObserverInterfaceBase {};

using MediaStreamDeviceObserverPtrDataView =
    mojo::InterfacePtrDataView<MediaStreamDeviceObserverInterfaceBase>;
using MediaStreamDeviceObserverRequestDataView =
    mojo::InterfaceRequestDataView<MediaStreamDeviceObserverInterfaceBase>;
using MediaStreamDeviceObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaStreamDeviceObserverInterfaceBase>;
using MediaStreamDeviceObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaStreamDeviceObserverInterfaceBase>;
class MediaStreamDispatcherHostInterfaceBase {};

using MediaStreamDispatcherHostPtrDataView =
    mojo::InterfacePtrDataView<MediaStreamDispatcherHostInterfaceBase>;
using MediaStreamDispatcherHostRequestDataView =
    mojo::InterfaceRequestDataView<MediaStreamDispatcherHostInterfaceBase>;
using MediaStreamDispatcherHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaStreamDispatcherHostInterfaceBase>;
using MediaStreamDispatcherHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaStreamDispatcherHostInterfaceBase>;
class MediaStreamTrackMetricsHostInterfaceBase {};

using MediaStreamTrackMetricsHostPtrDataView =
    mojo::InterfacePtrDataView<MediaStreamTrackMetricsHostInterfaceBase>;
using MediaStreamTrackMetricsHostRequestDataView =
    mojo::InterfaceRequestDataView<MediaStreamTrackMetricsHostInterfaceBase>;
using MediaStreamTrackMetricsHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaStreamTrackMetricsHostInterfaceBase>;
using MediaStreamTrackMetricsHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaStreamTrackMetricsHostInterfaceBase>;
class TrackControlsDataView {
 public:
  TrackControlsDataView() {}

  TrackControlsDataView(
      internal::TrackControls_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool requested() const {
    return data_->requested;
  }
  inline void GetStreamSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStreamSource(UserType* output) {
    auto* pointer = data_->stream_source.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceId(UserType* output) {
    auto* pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::TrackControls_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StreamControlsDataView {
 public:
  StreamControlsDataView() {}

  StreamControlsDataView(
      internal::StreamControls_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAudioDataView(
      TrackControlsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAudio(UserType* output) {
    auto* pointer = data_->audio.Get();
    return mojo::internal::Deserialize<::content::mojom::TrackControlsDataView>(
        pointer, output, context_);
  }
  inline void GetVideoDataView(
      TrackControlsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVideo(UserType* output) {
    auto* pointer = data_->video.Get();
    return mojo::internal::Deserialize<::content::mojom::TrackControlsDataView>(
        pointer, output, context_);
  }
  bool hotword_enabled() const {
    return data_->hotword_enabled;
  }
  bool disable_local_echo() const {
    return data_->disable_local_echo;
  }
 private:
  internal::StreamControls_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaStreamDeviceObserver_OnDeviceStopped_ParamsDataView {
 public:
  MediaStreamDeviceObserver_OnDeviceStopped_ParamsDataView() {}

  MediaStreamDeviceObserver_OnDeviceStopped_ParamsDataView(
      internal::MediaStreamDeviceObserver_OnDeviceStopped_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLabel(UserType* output) {
    auto* pointer = data_->label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDeviceDataView(
      MediaStreamDeviceDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevice(UserType* output) {
    auto* pointer = data_->device.Get();
    return mojo::internal::Deserialize<::content::mojom::MediaStreamDeviceDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaStreamDeviceObserver_OnDeviceStopped_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaStreamDispatcherHost_GenerateStream_ParamsDataView {
 public:
  MediaStreamDispatcherHost_GenerateStream_ParamsDataView() {}

  MediaStreamDispatcherHost_GenerateStream_ParamsDataView(
      internal::MediaStreamDispatcherHost_GenerateStream_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t request_id() const {
    return data_->request_id;
  }
  inline void GetControlsDataView(
      StreamControlsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadControls(UserType* output) {
    auto* pointer = data_->controls.Get();
    return mojo::internal::Deserialize<::content::mojom::StreamControlsDataView>(
        pointer, output, context_);
  }
  bool user_gesture() const {
    return data_->user_gesture;
  }
 private:
  internal::MediaStreamDispatcherHost_GenerateStream_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaStreamDispatcherHost_GenerateStream_ResponseParamsDataView {
 public:
  MediaStreamDispatcherHost_GenerateStream_ResponseParamsDataView() {}

  MediaStreamDispatcherHost_GenerateStream_ResponseParamsDataView(
      internal::MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::content::mojom::MediaStreamRequestResult>(
        data_value, output);
  }

  MediaStreamRequestResult result() const {
    return static_cast<MediaStreamRequestResult>(data_->result);
  }
  inline void GetLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLabel(UserType* output) {
    auto* pointer = data_->label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetAudioDevicesDataView(
      mojo::ArrayDataView<MediaStreamDeviceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAudioDevices(UserType* output) {
    auto* pointer = data_->audio_devices.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::content::mojom::MediaStreamDeviceDataView>>(
        pointer, output, context_);
  }
  inline void GetVideoDevicesDataView(
      mojo::ArrayDataView<MediaStreamDeviceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVideoDevices(UserType* output) {
    auto* pointer = data_->video_devices.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::content::mojom::MediaStreamDeviceDataView>>(
        pointer, output, context_);
  }
 private:
  internal::MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaStreamDispatcherHost_CancelRequest_ParamsDataView {
 public:
  MediaStreamDispatcherHost_CancelRequest_ParamsDataView() {}

  MediaStreamDispatcherHost_CancelRequest_ParamsDataView(
      internal::MediaStreamDispatcherHost_CancelRequest_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t request_id() const {
    return data_->request_id;
  }
 private:
  internal::MediaStreamDispatcherHost_CancelRequest_Params_Data* data_ = nullptr;
};

class MediaStreamDispatcherHost_StopStreamDevice_ParamsDataView {
 public:
  MediaStreamDispatcherHost_StopStreamDevice_ParamsDataView() {}

  MediaStreamDispatcherHost_StopStreamDevice_ParamsDataView(
      internal::MediaStreamDispatcherHost_StopStreamDevice_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceId(UserType* output) {
    auto* pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t session_id() const {
    return data_->session_id;
  }
 private:
  internal::MediaStreamDispatcherHost_StopStreamDevice_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaStreamDispatcherHost_OpenDevice_ParamsDataView {
 public:
  MediaStreamDispatcherHost_OpenDevice_ParamsDataView() {}

  MediaStreamDispatcherHost_OpenDevice_ParamsDataView(
      internal::MediaStreamDispatcherHost_OpenDevice_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t request_id() const {
    return data_->request_id;
  }
  inline void GetDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceId(UserType* output) {
    auto* pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::content::mojom::MediaStreamType>(
        data_value, output);
  }

  MediaStreamType type() const {
    return static_cast<MediaStreamType>(data_->type);
  }
 private:
  internal::MediaStreamDispatcherHost_OpenDevice_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaStreamDispatcherHost_OpenDevice_ResponseParamsDataView {
 public:
  MediaStreamDispatcherHost_OpenDevice_ResponseParamsDataView() {}

  MediaStreamDispatcherHost_OpenDevice_ResponseParamsDataView(
      internal::MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLabel(UserType* output) {
    auto* pointer = data_->label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDeviceDataView(
      MediaStreamDeviceDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevice(UserType* output) {
    auto* pointer = data_->device.Get();
    return mojo::internal::Deserialize<::content::mojom::MediaStreamDeviceDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaStreamDispatcherHost_CloseDevice_ParamsDataView {
 public:
  MediaStreamDispatcherHost_CloseDevice_ParamsDataView() {}

  MediaStreamDispatcherHost_CloseDevice_ParamsDataView(
      internal::MediaStreamDispatcherHost_CloseDevice_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLabel(UserType* output) {
    auto* pointer = data_->label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaStreamDispatcherHost_CloseDevice_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaStreamDispatcherHost_SetCapturingLinkSecured_ParamsDataView {
 public:
  MediaStreamDispatcherHost_SetCapturingLinkSecured_ParamsDataView() {}

  MediaStreamDispatcherHost_SetCapturingLinkSecured_ParamsDataView(
      internal::MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t session_id() const {
    return data_->session_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::content::mojom::MediaStreamType>(
        data_value, output);
  }

  MediaStreamType type() const {
    return static_cast<MediaStreamType>(data_->type);
  }
  bool is_secure() const {
    return data_->is_secure;
  }
 private:
  internal::MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data* data_ = nullptr;
};

class MediaStreamDispatcherHost_OnStreamStarted_ParamsDataView {
 public:
  MediaStreamDispatcherHost_OnStreamStarted_ParamsDataView() {}

  MediaStreamDispatcherHost_OnStreamStarted_ParamsDataView(
      internal::MediaStreamDispatcherHost_OnStreamStarted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLabel(UserType* output) {
    auto* pointer = data_->label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaStreamDispatcherHost_OnStreamStarted_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaStreamTrackMetricsHost_AddTrack_ParamsDataView {
 public:
  MediaStreamTrackMetricsHost_AddTrack_ParamsDataView() {}

  MediaStreamTrackMetricsHost_AddTrack_ParamsDataView(
      internal::MediaStreamTrackMetricsHost_AddTrack_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t id() const {
    return data_->id;
  }
  bool is_audio() const {
    return data_->is_audio;
  }
  bool is_remote() const {
    return data_->is_remote;
  }
 private:
  internal::MediaStreamTrackMetricsHost_AddTrack_Params_Data* data_ = nullptr;
};

class MediaStreamTrackMetricsHost_RemoveTrack_ParamsDataView {
 public:
  MediaStreamTrackMetricsHost_RemoveTrack_ParamsDataView() {}

  MediaStreamTrackMetricsHost_RemoveTrack_ParamsDataView(
      internal::MediaStreamTrackMetricsHost_RemoveTrack_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t id() const {
    return data_->id;
  }
 private:
  internal::MediaStreamTrackMetricsHost_RemoveTrack_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

template <>
struct hash<::content::mojom::MediaStreamType>
    : public mojo::internal::EnumHashImpl<::content::mojom::MediaStreamType> {};

template <>
struct hash<::content::mojom::MediaStreamRequestResult>
    : public mojo::internal::EnumHashImpl<::content::mojom::MediaStreamRequestResult> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::content::mojom::MediaStreamType, ::content::mojom::MediaStreamType> {
  static ::content::mojom::MediaStreamType ToMojom(::content::mojom::MediaStreamType input) { return input; }
  static bool FromMojom(::content::mojom::MediaStreamType input, ::content::mojom::MediaStreamType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::MediaStreamType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::content::mojom::MediaStreamType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::content::mojom::MediaStreamType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::content::mojom::MediaStreamRequestResult, ::content::mojom::MediaStreamRequestResult> {
  static ::content::mojom::MediaStreamRequestResult ToMojom(::content::mojom::MediaStreamRequestResult input) { return input; }
  static bool FromMojom(::content::mojom::MediaStreamRequestResult input, ::content::mojom::MediaStreamRequestResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::MediaStreamRequestResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::content::mojom::MediaStreamRequestResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::content::mojom::MediaStreamRequestResult>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::TrackControlsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::TrackControlsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::TrackControls_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->requested = CallWithContext(Traits::requested, input, custom_context);
    decltype(CallWithContext(Traits::stream_source, input, custom_context)) in_stream_source = CallWithContext(Traits::stream_source, input, custom_context);
    typename decltype((*output)->stream_source)::BaseType::BufferWriter
        stream_source_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_stream_source, buffer, &stream_source_writer, context);
    (*output)->stream_source.Set(
        stream_source_writer.is_null() ? nullptr : stream_source_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->stream_source.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null stream_source in TrackControls struct");
    decltype(CallWithContext(Traits::device_id, input, custom_context)) in_device_id = CallWithContext(Traits::device_id, input, custom_context);
    typename decltype((*output)->device_id)::BaseType::BufferWriter
        device_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_device_id, buffer, &device_id_writer, context);
    (*output)->device_id.Set(
        device_id_writer.is_null() ? nullptr : device_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->device_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null device_id in TrackControls struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::TrackControls_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::TrackControlsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::StreamControlsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::StreamControlsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::StreamControls_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::audio, input, custom_context)) in_audio = CallWithContext(Traits::audio, input, custom_context);
    typename decltype((*output)->audio)::BaseType::BufferWriter
        audio_writer;
    mojo::internal::Serialize<::content::mojom::TrackControlsDataView>(
        in_audio, buffer, &audio_writer, context);
    (*output)->audio.Set(
        audio_writer.is_null() ? nullptr : audio_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->audio.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null audio in StreamControls struct");
    decltype(CallWithContext(Traits::video, input, custom_context)) in_video = CallWithContext(Traits::video, input, custom_context);
    typename decltype((*output)->video)::BaseType::BufferWriter
        video_writer;
    mojo::internal::Serialize<::content::mojom::TrackControlsDataView>(
        in_video, buffer, &video_writer, context);
    (*output)->video.Set(
        video_writer.is_null() ? nullptr : video_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->video.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null video in StreamControls struct");
    (*output)->hotword_enabled = CallWithContext(Traits::hotword_enabled, input, custom_context);
    (*output)->disable_local_echo = CallWithContext(Traits::disable_local_echo, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::StreamControls_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::StreamControlsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content {
namespace mojom {

inline void TrackControlsDataView::GetStreamSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->stream_source.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void TrackControlsDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void StreamControlsDataView::GetAudioDataView(
    TrackControlsDataView* output) {
  auto pointer = data_->audio.Get();
  *output = TrackControlsDataView(pointer, context_);
}
inline void StreamControlsDataView::GetVideoDataView(
    TrackControlsDataView* output) {
  auto pointer = data_->video.Get();
  *output = TrackControlsDataView(pointer, context_);
}


inline void MediaStreamDeviceObserver_OnDeviceStopped_ParamsDataView::GetLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->label.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaStreamDeviceObserver_OnDeviceStopped_ParamsDataView::GetDeviceDataView(
    MediaStreamDeviceDataView* output) {
  auto pointer = data_->device.Get();
  *output = MediaStreamDeviceDataView(pointer, context_);
}


inline void MediaStreamDispatcherHost_GenerateStream_ParamsDataView::GetControlsDataView(
    StreamControlsDataView* output) {
  auto pointer = data_->controls.Get();
  *output = StreamControlsDataView(pointer, context_);
}


inline void MediaStreamDispatcherHost_GenerateStream_ResponseParamsDataView::GetLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->label.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaStreamDispatcherHost_GenerateStream_ResponseParamsDataView::GetAudioDevicesDataView(
    mojo::ArrayDataView<MediaStreamDeviceDataView>* output) {
  auto pointer = data_->audio_devices.Get();
  *output = mojo::ArrayDataView<MediaStreamDeviceDataView>(pointer, context_);
}
inline void MediaStreamDispatcherHost_GenerateStream_ResponseParamsDataView::GetVideoDevicesDataView(
    mojo::ArrayDataView<MediaStreamDeviceDataView>* output) {
  auto pointer = data_->video_devices.Get();
  *output = mojo::ArrayDataView<MediaStreamDeviceDataView>(pointer, context_);
}




inline void MediaStreamDispatcherHost_StopStreamDevice_ParamsDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MediaStreamDispatcherHost_OpenDevice_ParamsDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MediaStreamDispatcherHost_OpenDevice_ResponseParamsDataView::GetLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->label.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaStreamDispatcherHost_OpenDevice_ResponseParamsDataView::GetDeviceDataView(
    MediaStreamDeviceDataView* output) {
  auto pointer = data_->device.Get();
  *output = MediaStreamDeviceDataView(pointer, context_);
}


inline void MediaStreamDispatcherHost_CloseDevice_ParamsDataView::GetLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->label.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void MediaStreamDispatcherHost_OnStreamStarted_ParamsDataView::GetLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->label.Get();
  *output = mojo::StringDataView(pointer, context_);
}







}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_MEDIA_MEDIA_STREAM_MOJOM_SHARED_H_
