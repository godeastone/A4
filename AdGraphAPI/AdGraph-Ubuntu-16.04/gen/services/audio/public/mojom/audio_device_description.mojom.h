// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_AUDIO_PUBLIC_MOJOM_AUDIO_DEVICE_DESCRIPTION_MOJOM_H_
#define SERVICES_AUDIO_PUBLIC_MOJOM_AUDIO_DEVICE_DESCRIPTION_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "services/audio/public/mojom/audio_device_description.mojom-shared.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "media/audio/audio_device_description.h"


namespace audio {
namespace mojom {
class AudioDeviceDescription;
using AudioDeviceDescriptionPtr = mojo::InlinedStructPtr<AudioDeviceDescription>;



class  AudioDeviceDescription {
 public:
  using DataView = AudioDeviceDescriptionDataView;
  using Data_ = internal::AudioDeviceDescription_Data;

  template <typename... Args>
  static AudioDeviceDescriptionPtr New(Args&&... args) {
    return AudioDeviceDescriptionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AudioDeviceDescriptionPtr From(const U& u) {
    return mojo::TypeConverter<AudioDeviceDescriptionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AudioDeviceDescription>::Convert(*this);
  }


  AudioDeviceDescription();

  AudioDeviceDescription(
      const std::string& device_name,
      const std::string& unique_id,
      const std::string& group_id);

  ~AudioDeviceDescription();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AudioDeviceDescriptionPtr>
  AudioDeviceDescriptionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AudioDeviceDescription>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AudioDeviceDescription::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AudioDeviceDescription::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AudioDeviceDescription_UnserializedMessageContext<
            UserType, AudioDeviceDescription::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AudioDeviceDescription::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return AudioDeviceDescription::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AudioDeviceDescription_UnserializedMessageContext<
            UserType, AudioDeviceDescription::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AudioDeviceDescription::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string device_name;
  std::string unique_id;
  std::string group_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
AudioDeviceDescriptionPtr AudioDeviceDescription::Clone() const {
  return New(
      mojo::Clone(device_name),
      mojo::Clone(unique_id),
      mojo::Clone(group_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AudioDeviceDescription>::value>::type*>
bool AudioDeviceDescription::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->device_name, other_struct.device_name))
    return false;
  if (!mojo::Equals(this->unique_id, other_struct.unique_id))
    return false;
  if (!mojo::Equals(this->group_id, other_struct.group_id))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace audio

namespace mojo {


template <>
struct  StructTraits<::audio::mojom::AudioDeviceDescription::DataView,
                                         ::audio::mojom::AudioDeviceDescriptionPtr> {
  static bool IsNull(const ::audio::mojom::AudioDeviceDescriptionPtr& input) { return !input; }
  static void SetToNull(::audio::mojom::AudioDeviceDescriptionPtr* output) { output->reset(); }

  static const decltype(::audio::mojom::AudioDeviceDescription::device_name)& device_name(
      const ::audio::mojom::AudioDeviceDescriptionPtr& input) {
    return input->device_name;
  }

  static const decltype(::audio::mojom::AudioDeviceDescription::unique_id)& unique_id(
      const ::audio::mojom::AudioDeviceDescriptionPtr& input) {
    return input->unique_id;
  }

  static const decltype(::audio::mojom::AudioDeviceDescription::group_id)& group_id(
      const ::audio::mojom::AudioDeviceDescriptionPtr& input) {
    return input->group_id;
  }

  static bool Read(::audio::mojom::AudioDeviceDescription::DataView input, ::audio::mojom::AudioDeviceDescriptionPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_AUDIO_PUBLIC_MOJOM_AUDIO_DEVICE_DESCRIPTION_MOJOM_H_