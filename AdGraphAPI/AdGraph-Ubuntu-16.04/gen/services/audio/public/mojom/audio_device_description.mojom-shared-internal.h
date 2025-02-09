// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_AUDIO_PUBLIC_MOJOM_AUDIO_DEVICE_DESCRIPTION_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_AUDIO_PUBLIC_MOJOM_AUDIO_DEVICE_DESCRIPTION_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace audio {
namespace mojom {
namespace internal {
class AudioDeviceDescription_Data;

#pragma pack(push, 1)
class  AudioDeviceDescription_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioDeviceDescription_Data));
      new (data()) AudioDeviceDescription_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioDeviceDescription_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioDeviceDescription_Data>(index_);
    }
    AudioDeviceDescription_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> device_name;
  mojo::internal::Pointer<mojo::internal::String_Data> unique_id;
  mojo::internal::Pointer<mojo::internal::String_Data> group_id;

 private:
  AudioDeviceDescription_Data();
  ~AudioDeviceDescription_Data() = delete;
};
static_assert(sizeof(AudioDeviceDescription_Data) == 32,
              "Bad sizeof(AudioDeviceDescription_Data)");
// Used by AudioDeviceDescription::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct AudioDeviceDescription_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  AudioDeviceDescription_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~AudioDeviceDescription_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    AudioDeviceDescription_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    AudioDeviceDescription_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace audio

#endif  // SERVICES_AUDIO_PUBLIC_MOJOM_AUDIO_DEVICE_DESCRIPTION_MOJOM_SHARED_INTERNAL_H_