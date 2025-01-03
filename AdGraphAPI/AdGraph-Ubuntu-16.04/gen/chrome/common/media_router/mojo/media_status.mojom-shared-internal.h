// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_STATUS_MOJOM_SHARED_INTERNAL_H_
#define CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_STATUS_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace media_router {
namespace mojom {
namespace internal {
class MediaStatus_Data;
class HangoutsMediaStatusExtraData_Data;

struct MediaStatus_PlayState_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)
class  MediaStatus_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStatus_Data));
      new (data()) MediaStatus_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStatus_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStatus_Data>(index_);
    }
    MediaStatus_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> title;
  uint8_t can_play_pause : 1;
  uint8_t can_mute : 1;
  uint8_t can_set_volume : 1;
  uint8_t can_seek : 1;
  uint8_t is_muted : 1;
  uint8_t pad5_[3];
  int32_t play_state;
  float volume;
  uint8_t pad7_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> duration;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> current_time;
  mojo::internal::Pointer<internal::HangoutsMediaStatusExtraData_Data> hangouts_extra_data;

 private:
  MediaStatus_Data();
  ~MediaStatus_Data() = delete;
};
static_assert(sizeof(MediaStatus_Data) == 56,
              "Bad sizeof(MediaStatus_Data)");
// Used by MediaStatus::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MediaStatus_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MediaStatus_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MediaStatus_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MediaStatus_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MediaStatus_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  HangoutsMediaStatusExtraData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HangoutsMediaStatusExtraData_Data));
      new (data()) HangoutsMediaStatusExtraData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HangoutsMediaStatusExtraData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HangoutsMediaStatusExtraData_Data>(index_);
    }
    HangoutsMediaStatusExtraData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t local_present : 1;
  uint8_t padfinal_[7];

 private:
  HangoutsMediaStatusExtraData_Data();
  ~HangoutsMediaStatusExtraData_Data() = delete;
};
static_assert(sizeof(HangoutsMediaStatusExtraData_Data) == 16,
              "Bad sizeof(HangoutsMediaStatusExtraData_Data)");
// Used by HangoutsMediaStatusExtraData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct HangoutsMediaStatusExtraData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  HangoutsMediaStatusExtraData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~HangoutsMediaStatusExtraData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    HangoutsMediaStatusExtraData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    HangoutsMediaStatusExtraData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  MediaStatusObserver_OnMediaStatusUpdated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStatusObserver_OnMediaStatusUpdated_Params_Data));
      new (data()) MediaStatusObserver_OnMediaStatusUpdated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStatusObserver_OnMediaStatusUpdated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStatusObserver_OnMediaStatusUpdated_Params_Data>(index_);
    }
    MediaStatusObserver_OnMediaStatusUpdated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::MediaStatus_Data> status;

 private:
  MediaStatusObserver_OnMediaStatusUpdated_Params_Data();
  ~MediaStatusObserver_OnMediaStatusUpdated_Params_Data() = delete;
};
static_assert(sizeof(MediaStatusObserver_OnMediaStatusUpdated_Params_Data) == 16,
              "Bad sizeof(MediaStatusObserver_OnMediaStatusUpdated_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media_router

#endif  // CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_STATUS_MOJOM_SHARED_INTERNAL_H_