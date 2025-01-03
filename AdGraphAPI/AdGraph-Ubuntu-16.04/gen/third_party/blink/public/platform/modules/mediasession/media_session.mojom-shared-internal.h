// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_MEDIASESSION_MEDIA_SESSION_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_MEDIASESSION_MEDIA_SESSION_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace blink {
namespace mojom {
namespace internal {
class MediaImage_Data;
class MediaMetadata_Data;

struct MediaSessionAction_Data {
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

struct MediaSessionPlaybackState_Data {
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) MediaImage_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaImage_Data));
      new (data()) MediaImage_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaImage_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaImage_Data>(index_);
    }
    MediaImage_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> src;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> type;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::gfx::mojom::internal::Size_Data>>> sizes;

 private:
  MediaImage_Data();
  ~MediaImage_Data() = delete;
};
static_assert(sizeof(MediaImage_Data) == 32,
              "Bad sizeof(MediaImage_Data)");
// Used by MediaImage::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MediaImage_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MediaImage_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MediaImage_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MediaImage_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MediaImage_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) MediaMetadata_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaMetadata_Data));
      new (data()) MediaMetadata_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaMetadata_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaMetadata_Data>(index_);
    }
    MediaMetadata_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> title;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> artist;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> album;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::MediaImage_Data>>> artwork;

 private:
  MediaMetadata_Data();
  ~MediaMetadata_Data() = delete;
};
static_assert(sizeof(MediaMetadata_Data) == 40,
              "Bad sizeof(MediaMetadata_Data)");
// Used by MediaMetadata::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MediaMetadata_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MediaMetadata_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MediaMetadata_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MediaMetadata_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MediaMetadata_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) MediaSessionClient_DidReceiveAction_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSessionClient_DidReceiveAction_Params_Data));
      new (data()) MediaSessionClient_DidReceiveAction_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSessionClient_DidReceiveAction_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSessionClient_DidReceiveAction_Params_Data>(index_);
    }
    MediaSessionClient_DidReceiveAction_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t action;
  uint8_t padfinal_[4];

 private:
  MediaSessionClient_DidReceiveAction_Params_Data();
  ~MediaSessionClient_DidReceiveAction_Params_Data() = delete;
};
static_assert(sizeof(MediaSessionClient_DidReceiveAction_Params_Data) == 16,
              "Bad sizeof(MediaSessionClient_DidReceiveAction_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) MediaSessionService_SetClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSessionService_SetClient_Params_Data));
      new (data()) MediaSessionService_SetClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSessionService_SetClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSessionService_SetClient_Params_Data>(index_);
    }
    MediaSessionService_SetClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;

 private:
  MediaSessionService_SetClient_Params_Data();
  ~MediaSessionService_SetClient_Params_Data() = delete;
};
static_assert(sizeof(MediaSessionService_SetClient_Params_Data) == 16,
              "Bad sizeof(MediaSessionService_SetClient_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) MediaSessionService_SetPlaybackState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSessionService_SetPlaybackState_Params_Data));
      new (data()) MediaSessionService_SetPlaybackState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSessionService_SetPlaybackState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSessionService_SetPlaybackState_Params_Data>(index_);
    }
    MediaSessionService_SetPlaybackState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t state;
  uint8_t padfinal_[4];

 private:
  MediaSessionService_SetPlaybackState_Params_Data();
  ~MediaSessionService_SetPlaybackState_Params_Data() = delete;
};
static_assert(sizeof(MediaSessionService_SetPlaybackState_Params_Data) == 16,
              "Bad sizeof(MediaSessionService_SetPlaybackState_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) MediaSessionService_SetMetadata_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSessionService_SetMetadata_Params_Data));
      new (data()) MediaSessionService_SetMetadata_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSessionService_SetMetadata_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSessionService_SetMetadata_Params_Data>(index_);
    }
    MediaSessionService_SetMetadata_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::MediaMetadata_Data> metadata;

 private:
  MediaSessionService_SetMetadata_Params_Data();
  ~MediaSessionService_SetMetadata_Params_Data() = delete;
};
static_assert(sizeof(MediaSessionService_SetMetadata_Params_Data) == 16,
              "Bad sizeof(MediaSessionService_SetMetadata_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) MediaSessionService_EnableAction_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSessionService_EnableAction_Params_Data));
      new (data()) MediaSessionService_EnableAction_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSessionService_EnableAction_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSessionService_EnableAction_Params_Data>(index_);
    }
    MediaSessionService_EnableAction_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t action;
  uint8_t padfinal_[4];

 private:
  MediaSessionService_EnableAction_Params_Data();
  ~MediaSessionService_EnableAction_Params_Data() = delete;
};
static_assert(sizeof(MediaSessionService_EnableAction_Params_Data) == 16,
              "Bad sizeof(MediaSessionService_EnableAction_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) MediaSessionService_DisableAction_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSessionService_DisableAction_Params_Data));
      new (data()) MediaSessionService_DisableAction_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSessionService_DisableAction_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSessionService_DisableAction_Params_Data>(index_);
    }
    MediaSessionService_DisableAction_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t action;
  uint8_t padfinal_[4];

 private:
  MediaSessionService_DisableAction_Params_Data();
  ~MediaSessionService_DisableAction_Params_Data() = delete;
};
static_assert(sizeof(MediaSessionService_DisableAction_Params_Data) == 16,
              "Bad sizeof(MediaSessionService_DisableAction_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_MEDIASESSION_MEDIA_SESSION_MOJOM_SHARED_INTERNAL_H_