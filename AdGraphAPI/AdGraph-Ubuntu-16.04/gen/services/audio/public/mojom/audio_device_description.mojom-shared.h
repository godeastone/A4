// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_AUDIO_PUBLIC_MOJOM_AUDIO_DEVICE_DESCRIPTION_MOJOM_SHARED_H_
#define SERVICES_AUDIO_PUBLIC_MOJOM_AUDIO_DEVICE_DESCRIPTION_MOJOM_SHARED_H_

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
#include "services/audio/public/mojom/audio_device_description.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace audio {
namespace mojom {
class AudioDeviceDescriptionDataView;



}  // namespace mojom
}  // namespace audio

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::audio::mojom::AudioDeviceDescriptionDataView> {
  using Data = ::audio::mojom::internal::AudioDeviceDescription_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace audio {
namespace mojom {
class AudioDeviceDescriptionDataView {
 public:
  AudioDeviceDescriptionDataView() {}

  AudioDeviceDescriptionDataView(
      internal::AudioDeviceDescription_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceName(UserType* output) {
    auto* pointer = data_->device_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUniqueIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUniqueId(UserType* output) {
    auto* pointer = data_->unique_id.Get();
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
  internal::AudioDeviceDescription_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace audio

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::audio::mojom::AudioDeviceDescriptionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::audio::mojom::AudioDeviceDescriptionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::audio::mojom::internal::AudioDeviceDescription_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::device_name, input, custom_context)) in_device_name = CallWithContext(Traits::device_name, input, custom_context);
    typename decltype((*output)->device_name)::BaseType::BufferWriter
        device_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_device_name, buffer, &device_name_writer, context);
    (*output)->device_name.Set(
        device_name_writer.is_null() ? nullptr : device_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->device_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null device_name in AudioDeviceDescription struct");
    decltype(CallWithContext(Traits::unique_id, input, custom_context)) in_unique_id = CallWithContext(Traits::unique_id, input, custom_context);
    typename decltype((*output)->unique_id)::BaseType::BufferWriter
        unique_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_unique_id, buffer, &unique_id_writer, context);
    (*output)->unique_id.Set(
        unique_id_writer.is_null() ? nullptr : unique_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->unique_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null unique_id in AudioDeviceDescription struct");
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
        "null group_id in AudioDeviceDescription struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::audio::mojom::internal::AudioDeviceDescription_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::audio::mojom::AudioDeviceDescriptionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace audio {
namespace mojom {

inline void AudioDeviceDescriptionDataView::GetDeviceNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AudioDeviceDescriptionDataView::GetUniqueIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->unique_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AudioDeviceDescriptionDataView::GetGroupIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->group_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace audio

#endif  // SERVICES_AUDIO_PUBLIC_MOJOM_AUDIO_DEVICE_DESCRIPTION_MOJOM_SHARED_H_
