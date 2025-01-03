// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_MEDIA_MEDIA_STREAM_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_MEDIA_MEDIA_STREAM_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace content {
namespace mojom {
namespace internal {
using MediaStreamDevice_Data = mojo::native::internal::NativeStruct_Data;
class TrackControls_Data;
class StreamControls_Data;

struct MediaStreamType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
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

struct MediaStreamRequestResult_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) TrackControls_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TrackControls_Data));
      new (data()) TrackControls_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TrackControls_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TrackControls_Data>(index_);
    }
    TrackControls_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t requested : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::String_Data> stream_source;
  mojo::internal::Pointer<mojo::internal::String_Data> device_id;

 private:
  TrackControls_Data();
  ~TrackControls_Data() = delete;
};
static_assert(sizeof(TrackControls_Data) == 32,
              "Bad sizeof(TrackControls_Data)");
// Used by TrackControls::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TrackControls_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TrackControls_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TrackControls_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    TrackControls_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TrackControls_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) StreamControls_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StreamControls_Data));
      new (data()) StreamControls_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StreamControls_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StreamControls_Data>(index_);
    }
    StreamControls_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::TrackControls_Data> audio;
  mojo::internal::Pointer<internal::TrackControls_Data> video;
  uint8_t hotword_enabled : 1;
  uint8_t disable_local_echo : 1;
  uint8_t padfinal_[7];

 private:
  StreamControls_Data();
  ~StreamControls_Data() = delete;
};
static_assert(sizeof(StreamControls_Data) == 32,
              "Bad sizeof(StreamControls_Data)");
// Used by StreamControls::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct StreamControls_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  StreamControls_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~StreamControls_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    StreamControls_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    StreamControls_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) MediaStreamDeviceObserver_OnDeviceStopped_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStreamDeviceObserver_OnDeviceStopped_Params_Data));
      new (data()) MediaStreamDeviceObserver_OnDeviceStopped_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStreamDeviceObserver_OnDeviceStopped_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStreamDeviceObserver_OnDeviceStopped_Params_Data>(index_);
    }
    MediaStreamDeviceObserver_OnDeviceStopped_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> label;
  mojo::internal::Pointer<internal::MediaStreamDevice_Data> device;

 private:
  MediaStreamDeviceObserver_OnDeviceStopped_Params_Data();
  ~MediaStreamDeviceObserver_OnDeviceStopped_Params_Data() = delete;
};
static_assert(sizeof(MediaStreamDeviceObserver_OnDeviceStopped_Params_Data) == 24,
              "Bad sizeof(MediaStreamDeviceObserver_OnDeviceStopped_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) MediaStreamDispatcherHost_GenerateStream_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStreamDispatcherHost_GenerateStream_Params_Data));
      new (data()) MediaStreamDispatcherHost_GenerateStream_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStreamDispatcherHost_GenerateStream_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStreamDispatcherHost_GenerateStream_Params_Data>(index_);
    }
    MediaStreamDispatcherHost_GenerateStream_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t request_id;
  uint8_t user_gesture : 1;
  uint8_t pad1_[3];
  mojo::internal::Pointer<internal::StreamControls_Data> controls;

 private:
  MediaStreamDispatcherHost_GenerateStream_Params_Data();
  ~MediaStreamDispatcherHost_GenerateStream_Params_Data() = delete;
};
static_assert(sizeof(MediaStreamDispatcherHost_GenerateStream_Params_Data) == 24,
              "Bad sizeof(MediaStreamDispatcherHost_GenerateStream_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data));
      new (data()) MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data>(index_);
    }
    MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> label;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::MediaStreamDevice_Data>>> audio_devices;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::MediaStreamDevice_Data>>> video_devices;

 private:
  MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data();
  ~MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data) == 40,
              "Bad sizeof(MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) MediaStreamDispatcherHost_CancelRequest_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStreamDispatcherHost_CancelRequest_Params_Data));
      new (data()) MediaStreamDispatcherHost_CancelRequest_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStreamDispatcherHost_CancelRequest_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStreamDispatcherHost_CancelRequest_Params_Data>(index_);
    }
    MediaStreamDispatcherHost_CancelRequest_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t request_id;
  uint8_t padfinal_[4];

 private:
  MediaStreamDispatcherHost_CancelRequest_Params_Data();
  ~MediaStreamDispatcherHost_CancelRequest_Params_Data() = delete;
};
static_assert(sizeof(MediaStreamDispatcherHost_CancelRequest_Params_Data) == 16,
              "Bad sizeof(MediaStreamDispatcherHost_CancelRequest_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) MediaStreamDispatcherHost_StopStreamDevice_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStreamDispatcherHost_StopStreamDevice_Params_Data));
      new (data()) MediaStreamDispatcherHost_StopStreamDevice_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStreamDispatcherHost_StopStreamDevice_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStreamDispatcherHost_StopStreamDevice_Params_Data>(index_);
    }
    MediaStreamDispatcherHost_StopStreamDevice_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> device_id;
  int32_t session_id;
  uint8_t padfinal_[4];

 private:
  MediaStreamDispatcherHost_StopStreamDevice_Params_Data();
  ~MediaStreamDispatcherHost_StopStreamDevice_Params_Data() = delete;
};
static_assert(sizeof(MediaStreamDispatcherHost_StopStreamDevice_Params_Data) == 24,
              "Bad sizeof(MediaStreamDispatcherHost_StopStreamDevice_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) MediaStreamDispatcherHost_OpenDevice_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStreamDispatcherHost_OpenDevice_Params_Data));
      new (data()) MediaStreamDispatcherHost_OpenDevice_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStreamDispatcherHost_OpenDevice_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStreamDispatcherHost_OpenDevice_Params_Data>(index_);
    }
    MediaStreamDispatcherHost_OpenDevice_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t request_id;
  int32_t type;
  mojo::internal::Pointer<mojo::internal::String_Data> device_id;

 private:
  MediaStreamDispatcherHost_OpenDevice_Params_Data();
  ~MediaStreamDispatcherHost_OpenDevice_Params_Data() = delete;
};
static_assert(sizeof(MediaStreamDispatcherHost_OpenDevice_Params_Data) == 24,
              "Bad sizeof(MediaStreamDispatcherHost_OpenDevice_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data));
      new (data()) MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data>(index_);
    }
    MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::String_Data> label;
  mojo::internal::Pointer<internal::MediaStreamDevice_Data> device;

 private:
  MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data();
  ~MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data) == 32,
              "Bad sizeof(MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) MediaStreamDispatcherHost_CloseDevice_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStreamDispatcherHost_CloseDevice_Params_Data));
      new (data()) MediaStreamDispatcherHost_CloseDevice_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStreamDispatcherHost_CloseDevice_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStreamDispatcherHost_CloseDevice_Params_Data>(index_);
    }
    MediaStreamDispatcherHost_CloseDevice_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> label;

 private:
  MediaStreamDispatcherHost_CloseDevice_Params_Data();
  ~MediaStreamDispatcherHost_CloseDevice_Params_Data() = delete;
};
static_assert(sizeof(MediaStreamDispatcherHost_CloseDevice_Params_Data) == 16,
              "Bad sizeof(MediaStreamDispatcherHost_CloseDevice_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data));
      new (data()) MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data>(index_);
    }
    MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t session_id;
  int32_t type;
  uint8_t is_secure : 1;
  uint8_t padfinal_[7];

 private:
  MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data();
  ~MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data() = delete;
};
static_assert(sizeof(MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data) == 24,
              "Bad sizeof(MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) MediaStreamDispatcherHost_OnStreamStarted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStreamDispatcherHost_OnStreamStarted_Params_Data));
      new (data()) MediaStreamDispatcherHost_OnStreamStarted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStreamDispatcherHost_OnStreamStarted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStreamDispatcherHost_OnStreamStarted_Params_Data>(index_);
    }
    MediaStreamDispatcherHost_OnStreamStarted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> label;

 private:
  MediaStreamDispatcherHost_OnStreamStarted_Params_Data();
  ~MediaStreamDispatcherHost_OnStreamStarted_Params_Data() = delete;
};
static_assert(sizeof(MediaStreamDispatcherHost_OnStreamStarted_Params_Data) == 16,
              "Bad sizeof(MediaStreamDispatcherHost_OnStreamStarted_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) MediaStreamTrackMetricsHost_AddTrack_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStreamTrackMetricsHost_AddTrack_Params_Data));
      new (data()) MediaStreamTrackMetricsHost_AddTrack_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStreamTrackMetricsHost_AddTrack_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStreamTrackMetricsHost_AddTrack_Params_Data>(index_);
    }
    MediaStreamTrackMetricsHost_AddTrack_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t id;
  uint8_t is_audio : 1;
  uint8_t is_remote : 1;
  uint8_t padfinal_[7];

 private:
  MediaStreamTrackMetricsHost_AddTrack_Params_Data();
  ~MediaStreamTrackMetricsHost_AddTrack_Params_Data() = delete;
};
static_assert(sizeof(MediaStreamTrackMetricsHost_AddTrack_Params_Data) == 24,
              "Bad sizeof(MediaStreamTrackMetricsHost_AddTrack_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) MediaStreamTrackMetricsHost_RemoveTrack_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStreamTrackMetricsHost_RemoveTrack_Params_Data));
      new (data()) MediaStreamTrackMetricsHost_RemoveTrack_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStreamTrackMetricsHost_RemoveTrack_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStreamTrackMetricsHost_RemoveTrack_Params_Data>(index_);
    }
    MediaStreamTrackMetricsHost_RemoveTrack_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t id;

 private:
  MediaStreamTrackMetricsHost_RemoveTrack_Params_Data();
  ~MediaStreamTrackMetricsHost_RemoveTrack_Params_Data() = delete;
};
static_assert(sizeof(MediaStreamTrackMetricsHost_RemoveTrack_Params_Data) == 16,
              "Bad sizeof(MediaStreamTrackMetricsHost_RemoveTrack_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_MEDIA_MEDIA_STREAM_MOJOM_SHARED_INTERNAL_H_