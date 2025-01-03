// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_DATA_PIPE_MOJOM_BLINK_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_DATA_PIPE_MOJOM_BLINK_H_

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
#include "media/mojo/interfaces/audio_data_pipe.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace media {
namespace mojom {
namespace blink {
class AudioDataPipe;
using AudioDataPipePtr = mojo::StructPtr<AudioDataPipe>;






class  AudioDataPipe {
 public:
  using DataView = AudioDataPipeDataView;
  using Data_ = internal::AudioDataPipe_Data;

  template <typename... Args>
  static AudioDataPipePtr New(Args&&... args) {
    return AudioDataPipePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AudioDataPipePtr From(const U& u) {
    return mojo::TypeConverter<AudioDataPipePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AudioDataPipe>::Convert(*this);
  }


  AudioDataPipe();

  AudioDataPipe(
      mojo::ScopedSharedBufferHandle shared_memory,
      mojo::ScopedHandle socket);

  ~AudioDataPipe();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AudioDataPipePtr>
  AudioDataPipePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AudioDataPipe>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AudioDataPipe::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AudioDataPipe::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AudioDataPipe_UnserializedMessageContext<
            UserType, AudioDataPipe::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AudioDataPipe::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return AudioDataPipe::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AudioDataPipe_UnserializedMessageContext<
            UserType, AudioDataPipe::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AudioDataPipe::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  mojo::ScopedSharedBufferHandle shared_memory;
  mojo::ScopedHandle socket;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(AudioDataPipe);
};

template <typename StructPtrType>
AudioDataPipePtr AudioDataPipe::Clone() const {
  return New(
      mojo::Clone(shared_memory),
      mojo::Clone(socket)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AudioDataPipe>::value>::type*>
bool AudioDataPipe::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->shared_memory, other_struct.shared_memory))
    return false;
  if (!mojo::Equals(this->socket, other_struct.socket))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {


template <>
struct  StructTraits<::media::mojom::blink::AudioDataPipe::DataView,
                                         ::media::mojom::blink::AudioDataPipePtr> {
  static bool IsNull(const ::media::mojom::blink::AudioDataPipePtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::AudioDataPipePtr* output) { output->reset(); }

  static  decltype(::media::mojom::blink::AudioDataPipe::shared_memory)& shared_memory(
       ::media::mojom::blink::AudioDataPipePtr& input) {
    return input->shared_memory;
  }

  static  decltype(::media::mojom::blink::AudioDataPipe::socket)& socket(
       ::media::mojom::blink::AudioDataPipePtr& input) {
    return input->socket;
  }

  static bool Read(::media::mojom::blink::AudioDataPipe::DataView input, ::media::mojom::blink::AudioDataPipePtr* output);
};

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_DATA_PIPE_MOJOM_BLINK_H_