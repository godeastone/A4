// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_MEDIASTREAM_MEDIA_DEVICES_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_MEDIASTREAM_MEDIA_DEVICES_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/modules/mediastream/media_devices.mojom-shared-internal.h"
#include "media/capture/mojom/video_capture_types.mojom-shared.h"
#include "media/mojo/interfaces/audio_parameters.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {
class MediaDeviceInfoDataView;

class VideoInputDeviceCapabilitiesDataView;

class AudioInputDeviceCapabilitiesDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::MediaDeviceInfoDataView> {
  using Data = ::blink::mojom::internal::MediaDeviceInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::VideoInputDeviceCapabilitiesDataView> {
  using Data = ::blink::mojom::internal::VideoInputDeviceCapabilities_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::AudioInputDeviceCapabilitiesDataView> {
  using Data = ::blink::mojom::internal::AudioInputDeviceCapabilities_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {

enum class MediaDeviceType : int32_t {
  MEDIA_AUDIO_INPUT,
  MEDIA_VIDEO_INPUT,
  MEDIA_AUDIO_OUTPUT,
  NUM_MEDIA_DEVICE_TYPES,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, MediaDeviceType value) {
  switch(value) {
    case MediaDeviceType::MEDIA_AUDIO_INPUT:
      return os << "MediaDeviceType::MEDIA_AUDIO_INPUT";
    case MediaDeviceType::MEDIA_VIDEO_INPUT:
      return os << "MediaDeviceType::MEDIA_VIDEO_INPUT";
    case MediaDeviceType::MEDIA_AUDIO_OUTPUT:
      return os << "MediaDeviceType::MEDIA_AUDIO_OUTPUT";
    case MediaDeviceType::NUM_MEDIA_DEVICE_TYPES:
      return os << "MediaDeviceType::NUM_MEDIA_DEVICE_TYPES";
    default:
      return os << "Unknown MediaDeviceType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(MediaDeviceType value) {
  return internal::MediaDeviceType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class FacingMode : int32_t {
  NONE,
  USER,
  ENVIRONMENT,
  LEFT,
  RIGHT,
  kMinValue = 0,
  kMaxValue = 4,
};

inline std::ostream& operator<<(std::ostream& os, FacingMode value) {
  switch(value) {
    case FacingMode::NONE:
      return os << "FacingMode::NONE";
    case FacingMode::USER:
      return os << "FacingMode::USER";
    case FacingMode::ENVIRONMENT:
      return os << "FacingMode::ENVIRONMENT";
    case FacingMode::LEFT:
      return os << "FacingMode::LEFT";
    case FacingMode::RIGHT:
      return os << "FacingMode::RIGHT";
    default:
      return os << "Unknown FacingMode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(FacingMode value) {
  return internal::FacingMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class MediaDevicesDispatcherHostInterfaceBase {};

using MediaDevicesDispatcherHostPtrDataView =
    mojo::InterfacePtrDataView<MediaDevicesDispatcherHostInterfaceBase>;
using MediaDevicesDispatcherHostRequestDataView =
    mojo::InterfaceRequestDataView<MediaDevicesDispatcherHostInterfaceBase>;
using MediaDevicesDispatcherHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaDevicesDispatcherHostInterfaceBase>;
using MediaDevicesDispatcherHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaDevicesDispatcherHostInterfaceBase>;
class MediaDevicesListenerInterfaceBase {};

using MediaDevicesListenerPtrDataView =
    mojo::InterfacePtrDataView<MediaDevicesListenerInterfaceBase>;
using MediaDevicesListenerRequestDataView =
    mojo::InterfaceRequestDataView<MediaDevicesListenerInterfaceBase>;
using MediaDevicesListenerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaDevicesListenerInterfaceBase>;
using MediaDevicesListenerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaDevicesListenerInterfaceBase>;
class MediaDeviceInfoDataView {
 public:
  MediaDeviceInfoDataView() {}

  MediaDeviceInfoDataView(
      internal::MediaDeviceInfo_Data* data,
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
  inline void GetLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLabel(UserType* output) {
    auto* pointer = data_->label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetGroupIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGroupId(UserType* output) {
    auto* pointer = data_->group_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaDeviceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoInputDeviceCapabilitiesDataView {
 public:
  VideoInputDeviceCapabilitiesDataView() {}

  VideoInputDeviceCapabilitiesDataView(
      internal::VideoInputDeviceCapabilities_Data* data,
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
  inline void GetGroupIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGroupId(UserType* output) {
    auto* pointer = data_->group_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetFormatsDataView(
      mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFormats(UserType* output) {
    auto* pointer = data_->formats.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFacingMode(UserType* output) const {
    auto data_value = data_->facing_mode;
    return mojo::internal::Deserialize<::blink::mojom::FacingMode>(
        data_value, output);
  }

  FacingMode facing_mode() const {
    return static_cast<FacingMode>(data_->facing_mode);
  }
 private:
  internal::VideoInputDeviceCapabilities_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AudioInputDeviceCapabilitiesDataView {
 public:
  AudioInputDeviceCapabilitiesDataView() {}

  AudioInputDeviceCapabilitiesDataView(
      internal::AudioInputDeviceCapabilities_Data* data,
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
  inline void GetParametersDataView(
      ::media::mojom::AudioParametersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParameters(UserType* output) {
    auto* pointer = data_->parameters.Get();
    return mojo::internal::Deserialize<::media::mojom::AudioParametersDataView>(
        pointer, output, context_);
  }
 private:
  internal::AudioInputDeviceCapabilities_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaDevicesDispatcherHost_EnumerateDevices_ParamsDataView {
 public:
  MediaDevicesDispatcherHost_EnumerateDevices_ParamsDataView() {}

  MediaDevicesDispatcherHost_EnumerateDevices_ParamsDataView(
      internal::MediaDevicesDispatcherHost_EnumerateDevices_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool request_audio_input() const {
    return data_->request_audio_input;
  }
  bool request_video_input() const {
    return data_->request_video_input;
  }
  bool request_audio_output() const {
    return data_->request_audio_output;
  }
  bool request_video_input_capabilities() const {
    return data_->request_video_input_capabilities;
  }
 private:
  internal::MediaDevicesDispatcherHost_EnumerateDevices_Params_Data* data_ = nullptr;
};

class MediaDevicesDispatcherHost_EnumerateDevices_ResponseParamsDataView {
 public:
  MediaDevicesDispatcherHost_EnumerateDevices_ResponseParamsDataView() {}

  MediaDevicesDispatcherHost_EnumerateDevices_ResponseParamsDataView(
      internal::MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEnumerationDataView(
      mojo::ArrayDataView<mojo::ArrayDataView<MediaDeviceInfoDataView>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEnumeration(UserType* output) {
    auto* pointer = data_->enumeration.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::ArrayDataView<::blink::mojom::MediaDeviceInfoDataView>>>(
        pointer, output, context_);
  }
  inline void GetVideoInputDeviceCapabilitiesDataView(
      mojo::ArrayDataView<VideoInputDeviceCapabilitiesDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVideoInputDeviceCapabilities(UserType* output) {
    auto* pointer = data_->video_input_device_capabilities.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::VideoInputDeviceCapabilitiesDataView>>(
        pointer, output, context_);
  }
 private:
  internal::MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaDevicesDispatcherHost_GetVideoInputCapabilities_ParamsDataView {
 public:
  MediaDevicesDispatcherHost_GetVideoInputCapabilities_ParamsDataView() {}

  MediaDevicesDispatcherHost_GetVideoInputCapabilities_ParamsDataView(
      internal::MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data* data_ = nullptr;
};

class MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParamsDataView {
 public:
  MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParamsDataView() {}

  MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParamsDataView(
      internal::MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetVideoInputDeviceCapabilitiesDataView(
      mojo::ArrayDataView<VideoInputDeviceCapabilitiesDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVideoInputDeviceCapabilities(UserType* output) {
    auto* pointer = data_->video_input_device_capabilities.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::VideoInputDeviceCapabilitiesDataView>>(
        pointer, output, context_);
  }
 private:
  internal::MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ParamsDataView {
 public:
  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ParamsDataView() {}

  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ParamsDataView(
      internal::MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data* data,
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
 private:
  internal::MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParamsDataView {
 public:
  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParamsDataView() {}

  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParamsDataView(
      internal::MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFormatsDataView(
      mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFormats(UserType* output) {
    auto* pointer = data_->formats.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>>(
        pointer, output, context_);
  }
 private:
  internal::MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ParamsDataView {
 public:
  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ParamsDataView() {}

  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ParamsDataView(
      internal::MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data* data,
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
 private:
  internal::MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParamsDataView {
 public:
  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParamsDataView() {}

  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParamsDataView(
      internal::MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFormatsDataView(
      mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFormats(UserType* output) {
    auto* pointer = data_->formats.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>>(
        pointer, output, context_);
  }
 private:
  internal::MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaDevicesDispatcherHost_GetAudioInputCapabilities_ParamsDataView {
 public:
  MediaDevicesDispatcherHost_GetAudioInputCapabilities_ParamsDataView() {}

  MediaDevicesDispatcherHost_GetAudioInputCapabilities_ParamsDataView(
      internal::MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data* data_ = nullptr;
};

class MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParamsDataView {
 public:
  MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParamsDataView() {}

  MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParamsDataView(
      internal::MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAudioInputDeviceCapabilitiesDataView(
      mojo::ArrayDataView<AudioInputDeviceCapabilitiesDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAudioInputDeviceCapabilities(UserType* output) {
    auto* pointer = data_->audio_input_device_capabilities.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::AudioInputDeviceCapabilitiesDataView>>(
        pointer, output, context_);
  }
 private:
  internal::MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaDevicesDispatcherHost_AddMediaDevicesListener_ParamsDataView {
 public:
  MediaDevicesDispatcherHost_AddMediaDevicesListener_ParamsDataView() {}

  MediaDevicesDispatcherHost_AddMediaDevicesListener_ParamsDataView(
      internal::MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool subscribe_audio_input() const {
    return data_->subscribe_audio_input;
  }
  bool subscribe_video_input() const {
    return data_->subscribe_video_input;
  }
  bool subscribe_audio_output() const {
    return data_->subscribe_audio_output;
  }
  template <typename UserType>
  UserType TakeListener() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::MediaDevicesListenerPtrDataView>(
            &data_->listener, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaDevicesListener_OnDevicesChanged_ParamsDataView {
 public:
  MediaDevicesListener_OnDevicesChanged_ParamsDataView() {}

  MediaDevicesListener_OnDevicesChanged_ParamsDataView(
      internal::MediaDevicesListener_OnDevicesChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::blink::mojom::MediaDeviceType>(
        data_value, output);
  }

  MediaDeviceType type() const {
    return static_cast<MediaDeviceType>(data_->type);
  }
  inline void GetDeviceInfosDataView(
      mojo::ArrayDataView<MediaDeviceInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceInfos(UserType* output) {
    auto* pointer = data_->device_infos.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::MediaDeviceInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::MediaDevicesListener_OnDevicesChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::MediaDeviceType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::MediaDeviceType> {};

template <>
struct hash<::blink::mojom::FacingMode>
    : public mojo::internal::EnumHashImpl<::blink::mojom::FacingMode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::MediaDeviceType, ::blink::mojom::MediaDeviceType> {
  static ::blink::mojom::MediaDeviceType ToMojom(::blink::mojom::MediaDeviceType input) { return input; }
  static bool FromMojom(::blink::mojom::MediaDeviceType input, ::blink::mojom::MediaDeviceType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::MediaDeviceType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::MediaDeviceType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::MediaDeviceType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::FacingMode, ::blink::mojom::FacingMode> {
  static ::blink::mojom::FacingMode ToMojom(::blink::mojom::FacingMode input) { return input; }
  static bool FromMojom(::blink::mojom::FacingMode input, ::blink::mojom::FacingMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::FacingMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::FacingMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::FacingMode>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::MediaDeviceInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::MediaDeviceInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::MediaDeviceInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
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
        "null device_id in MediaDeviceInfo struct");
    decltype(CallWithContext(Traits::label, input, custom_context)) in_label = CallWithContext(Traits::label, input, custom_context);
    typename decltype((*output)->label)::BaseType::BufferWriter
        label_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_label, buffer, &label_writer, context);
    (*output)->label.Set(
        label_writer.is_null() ? nullptr : label_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->label.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null label in MediaDeviceInfo struct");
    decltype(CallWithContext(Traits::group_id, input, custom_context)) in_group_id = CallWithContext(Traits::group_id, input, custom_context);
    typename decltype((*output)->group_id)::BaseType::BufferWriter
        group_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_group_id, buffer, &group_id_writer, context);
    (*output)->group_id.Set(
        group_id_writer.is_null() ? nullptr : group_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->group_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null group_id in MediaDeviceInfo struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::MediaDeviceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::MediaDeviceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::VideoInputDeviceCapabilitiesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::VideoInputDeviceCapabilitiesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::VideoInputDeviceCapabilities_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
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
        "null device_id in VideoInputDeviceCapabilities struct");
    decltype(CallWithContext(Traits::group_id, input, custom_context)) in_group_id = CallWithContext(Traits::group_id, input, custom_context);
    typename decltype((*output)->group_id)::BaseType::BufferWriter
        group_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_group_id, buffer, &group_id_writer, context);
    (*output)->group_id.Set(
        group_id_writer.is_null() ? nullptr : group_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->group_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null group_id in VideoInputDeviceCapabilities struct");
    decltype(CallWithContext(Traits::formats, input, custom_context)) in_formats = CallWithContext(Traits::formats, input, custom_context);
    typename decltype((*output)->formats)::BaseType::BufferWriter
        formats_writer;
    const mojo::internal::ContainerValidateParams formats_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>>(
        in_formats, buffer, &formats_writer, &formats_validate_params,
        context);
    (*output)->formats.Set(
        formats_writer.is_null() ? nullptr : formats_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->formats.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null formats in VideoInputDeviceCapabilities struct");
    mojo::internal::Serialize<::blink::mojom::FacingMode>(
        CallWithContext(Traits::facing_mode, input, custom_context), &(*output)->facing_mode);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::VideoInputDeviceCapabilities_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::VideoInputDeviceCapabilitiesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::AudioInputDeviceCapabilitiesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::AudioInputDeviceCapabilitiesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::AudioInputDeviceCapabilities_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
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
        "null device_id in AudioInputDeviceCapabilities struct");
    decltype(CallWithContext(Traits::parameters, input, custom_context)) in_parameters = CallWithContext(Traits::parameters, input, custom_context);
    typename decltype((*output)->parameters)::BaseType::BufferWriter
        parameters_writer;
    mojo::internal::Serialize<::media::mojom::AudioParametersDataView>(
        in_parameters, buffer, &parameters_writer, context);
    (*output)->parameters.Set(
        parameters_writer.is_null() ? nullptr : parameters_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->parameters.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null parameters in AudioInputDeviceCapabilities struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::AudioInputDeviceCapabilities_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::AudioInputDeviceCapabilitiesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void MediaDeviceInfoDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaDeviceInfoDataView::GetLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->label.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaDeviceInfoDataView::GetGroupIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->group_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void VideoInputDeviceCapabilitiesDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void VideoInputDeviceCapabilitiesDataView::GetGroupIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->group_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void VideoInputDeviceCapabilitiesDataView::GetFormatsDataView(
    mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>* output) {
  auto pointer = data_->formats.Get();
  *output = mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>(pointer, context_);
}


inline void AudioInputDeviceCapabilitiesDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AudioInputDeviceCapabilitiesDataView::GetParametersDataView(
    ::media::mojom::AudioParametersDataView* output) {
  auto pointer = data_->parameters.Get();
  *output = ::media::mojom::AudioParametersDataView(pointer, context_);
}




inline void MediaDevicesDispatcherHost_EnumerateDevices_ResponseParamsDataView::GetEnumerationDataView(
    mojo::ArrayDataView<mojo::ArrayDataView<MediaDeviceInfoDataView>>* output) {
  auto pointer = data_->enumeration.Get();
  *output = mojo::ArrayDataView<mojo::ArrayDataView<MediaDeviceInfoDataView>>(pointer, context_);
}
inline void MediaDevicesDispatcherHost_EnumerateDevices_ResponseParamsDataView::GetVideoInputDeviceCapabilitiesDataView(
    mojo::ArrayDataView<VideoInputDeviceCapabilitiesDataView>* output) {
  auto pointer = data_->video_input_device_capabilities.Get();
  *output = mojo::ArrayDataView<VideoInputDeviceCapabilitiesDataView>(pointer, context_);
}




inline void MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParamsDataView::GetVideoInputDeviceCapabilitiesDataView(
    mojo::ArrayDataView<VideoInputDeviceCapabilitiesDataView>* output) {
  auto pointer = data_->video_input_device_capabilities.Get();
  *output = mojo::ArrayDataView<VideoInputDeviceCapabilitiesDataView>(pointer, context_);
}


inline void MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ParamsDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParamsDataView::GetFormatsDataView(
    mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>* output) {
  auto pointer = data_->formats.Get();
  *output = mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>(pointer, context_);
}


inline void MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ParamsDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParamsDataView::GetFormatsDataView(
    mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>* output) {
  auto pointer = data_->formats.Get();
  *output = mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>(pointer, context_);
}




inline void MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParamsDataView::GetAudioInputDeviceCapabilitiesDataView(
    mojo::ArrayDataView<AudioInputDeviceCapabilitiesDataView>* output) {
  auto pointer = data_->audio_input_device_capabilities.Get();
  *output = mojo::ArrayDataView<AudioInputDeviceCapabilitiesDataView>(pointer, context_);
}




inline void MediaDevicesListener_OnDevicesChanged_ParamsDataView::GetDeviceInfosDataView(
    mojo::ArrayDataView<MediaDeviceInfoDataView>* output) {
  auto pointer = data_->device_infos.Get();
  *output = mojo::ArrayDataView<MediaDeviceInfoDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_MEDIASTREAM_MEDIA_DEVICES_MOJOM_SHARED_H_
