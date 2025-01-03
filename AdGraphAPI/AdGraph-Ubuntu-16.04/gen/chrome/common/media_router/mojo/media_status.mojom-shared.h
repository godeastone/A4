// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_STATUS_MOJOM_SHARED_H_
#define CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_STATUS_MOJOM_SHARED_H_

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
#include "chrome/common/media_router/mojo/media_status.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace media_router {
namespace mojom {
class MediaStatusDataView;

class HangoutsMediaStatusExtraDataDataView;



}  // namespace mojom
}  // namespace media_router

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::media_router::mojom::MediaStatusDataView> {
  using Data = ::media_router::mojom::internal::MediaStatus_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media_router::mojom::HangoutsMediaStatusExtraDataDataView> {
  using Data = ::media_router::mojom::internal::HangoutsMediaStatusExtraData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace media_router {
namespace mojom {

enum class MediaStatus_PlayState : int32_t {
  PLAYING,
  PAUSED,
  BUFFERING,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, MediaStatus_PlayState value) {
  switch(value) {
    case MediaStatus_PlayState::PLAYING:
      return os << "MediaStatus_PlayState::PLAYING";
    case MediaStatus_PlayState::PAUSED:
      return os << "MediaStatus_PlayState::PAUSED";
    case MediaStatus_PlayState::BUFFERING:
      return os << "MediaStatus_PlayState::BUFFERING";
    default:
      return os << "Unknown MediaStatus_PlayState value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(MediaStatus_PlayState value) {
  return internal::MediaStatus_PlayState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class MediaStatusObserverInterfaceBase {};

using MediaStatusObserverPtrDataView =
    mojo::InterfacePtrDataView<MediaStatusObserverInterfaceBase>;
using MediaStatusObserverRequestDataView =
    mojo::InterfaceRequestDataView<MediaStatusObserverInterfaceBase>;
using MediaStatusObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaStatusObserverInterfaceBase>;
using MediaStatusObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaStatusObserverInterfaceBase>;
class MediaStatusDataView {
 public:
  MediaStatusDataView() {}

  MediaStatusDataView(
      internal::MediaStatus_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTitleDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTitle(UserType* output) {
    auto* pointer = data_->title.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool can_play_pause() const {
    return data_->can_play_pause;
  }
  bool can_mute() const {
    return data_->can_mute;
  }
  bool can_set_volume() const {
    return data_->can_set_volume;
  }
  bool can_seek() const {
    return data_->can_seek;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPlayState(UserType* output) const {
    auto data_value = data_->play_state;
    return mojo::internal::Deserialize<::media_router::mojom::MediaStatus_PlayState>(
        data_value, output);
  }

  MediaStatus_PlayState play_state() const {
    return static_cast<MediaStatus_PlayState>(data_->play_state);
  }
  bool is_muted() const {
    return data_->is_muted;
  }
  float volume() const {
    return data_->volume;
  }
  inline void GetDurationDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDuration(UserType* output) {
    auto* pointer = data_->duration.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetCurrentTimeDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCurrentTime(UserType* output) {
    auto* pointer = data_->current_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetHangoutsExtraDataDataView(
      HangoutsMediaStatusExtraDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHangoutsExtraData(UserType* output) {
    auto* pointer = data_->hangouts_extra_data.Get();
    return mojo::internal::Deserialize<::media_router::mojom::HangoutsMediaStatusExtraDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaStatus_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HangoutsMediaStatusExtraDataDataView {
 public:
  HangoutsMediaStatusExtraDataDataView() {}

  HangoutsMediaStatusExtraDataDataView(
      internal::HangoutsMediaStatusExtraData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool local_present() const {
    return data_->local_present;
  }
 private:
  internal::HangoutsMediaStatusExtraData_Data* data_ = nullptr;
};

class MediaStatusObserver_OnMediaStatusUpdated_ParamsDataView {
 public:
  MediaStatusObserver_OnMediaStatusUpdated_ParamsDataView() {}

  MediaStatusObserver_OnMediaStatusUpdated_ParamsDataView(
      internal::MediaStatusObserver_OnMediaStatusUpdated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStatusDataView(
      MediaStatusDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) {
    auto* pointer = data_->status.Get();
    return mojo::internal::Deserialize<::media_router::mojom::MediaStatusDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaStatusObserver_OnMediaStatusUpdated_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media_router

namespace std {

template <>
struct hash<::media_router::mojom::MediaStatus_PlayState>
    : public mojo::internal::EnumHashImpl<::media_router::mojom::MediaStatus_PlayState> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media_router::mojom::MediaStatus_PlayState, ::media_router::mojom::MediaStatus_PlayState> {
  static ::media_router::mojom::MediaStatus_PlayState ToMojom(::media_router::mojom::MediaStatus_PlayState input) { return input; }
  static bool FromMojom(::media_router::mojom::MediaStatus_PlayState input, ::media_router::mojom::MediaStatus_PlayState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_router::mojom::MediaStatus_PlayState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media_router::mojom::MediaStatus_PlayState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media_router::mojom::MediaStatus_PlayState>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_router::mojom::MediaStatusDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media_router::mojom::MediaStatusDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media_router::mojom::internal::MediaStatus_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::title, input, custom_context)) in_title = CallWithContext(Traits::title, input, custom_context);
    typename decltype((*output)->title)::BaseType::BufferWriter
        title_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_title, buffer, &title_writer, context);
    (*output)->title.Set(
        title_writer.is_null() ? nullptr : title_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->title.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null title in MediaStatus struct");
    (*output)->can_play_pause = CallWithContext(Traits::can_play_pause, input, custom_context);
    (*output)->can_mute = CallWithContext(Traits::can_mute, input, custom_context);
    (*output)->can_set_volume = CallWithContext(Traits::can_set_volume, input, custom_context);
    (*output)->can_seek = CallWithContext(Traits::can_seek, input, custom_context);
    mojo::internal::Serialize<::media_router::mojom::MediaStatus_PlayState>(
        CallWithContext(Traits::play_state, input, custom_context), &(*output)->play_state);
    (*output)->is_muted = CallWithContext(Traits::is_muted, input, custom_context);
    (*output)->volume = CallWithContext(Traits::volume, input, custom_context);
    decltype(CallWithContext(Traits::duration, input, custom_context)) in_duration = CallWithContext(Traits::duration, input, custom_context);
    typename decltype((*output)->duration)::BaseType::BufferWriter
        duration_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_duration, buffer, &duration_writer, context);
    (*output)->duration.Set(
        duration_writer.is_null() ? nullptr : duration_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->duration.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null duration in MediaStatus struct");
    decltype(CallWithContext(Traits::current_time, input, custom_context)) in_current_time = CallWithContext(Traits::current_time, input, custom_context);
    typename decltype((*output)->current_time)::BaseType::BufferWriter
        current_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_current_time, buffer, &current_time_writer, context);
    (*output)->current_time.Set(
        current_time_writer.is_null() ? nullptr : current_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->current_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null current_time in MediaStatus struct");
    decltype(CallWithContext(Traits::hangouts_extra_data, input, custom_context)) in_hangouts_extra_data = CallWithContext(Traits::hangouts_extra_data, input, custom_context);
    typename decltype((*output)->hangouts_extra_data)::BaseType::BufferWriter
        hangouts_extra_data_writer;
    mojo::internal::Serialize<::media_router::mojom::HangoutsMediaStatusExtraDataDataView>(
        in_hangouts_extra_data, buffer, &hangouts_extra_data_writer, context);
    (*output)->hangouts_extra_data.Set(
        hangouts_extra_data_writer.is_null() ? nullptr : hangouts_extra_data_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media_router::mojom::internal::MediaStatus_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media_router::mojom::MediaStatusDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_router::mojom::HangoutsMediaStatusExtraDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media_router::mojom::HangoutsMediaStatusExtraDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media_router::mojom::internal::HangoutsMediaStatusExtraData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->local_present = CallWithContext(Traits::local_present, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media_router::mojom::internal::HangoutsMediaStatusExtraData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media_router::mojom::HangoutsMediaStatusExtraDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media_router {
namespace mojom {

inline void MediaStatusDataView::GetTitleDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->title.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void MediaStatusDataView::GetDurationDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->duration.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void MediaStatusDataView::GetCurrentTimeDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->current_time.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void MediaStatusDataView::GetHangoutsExtraDataDataView(
    HangoutsMediaStatusExtraDataDataView* output) {
  auto pointer = data_->hangouts_extra_data.Get();
  *output = HangoutsMediaStatusExtraDataDataView(pointer, context_);
}




inline void MediaStatusObserver_OnMediaStatusUpdated_ParamsDataView::GetStatusDataView(
    MediaStatusDataView* output) {
  auto pointer = data_->status.Get();
  *output = MediaStatusDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace media_router

#endif  // CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_STATUS_MOJOM_SHARED_H_
