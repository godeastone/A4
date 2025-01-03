// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_SERVICES_MEDIA_GALLERY_UTIL_PUBLIC_MOJOM_MEDIA_PARSER_MOJOM_SHARED_INTERNAL_H_
#define CHROME_SERVICES_MEDIA_GALLERY_UTIL_PUBLIC_MOJOM_MEDIA_PARSER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/file.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "mojo/public/mojom/base/values.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace chrome {
namespace mojom {
namespace internal {
class MediaStreamInfo_Data;
class MediaMetadata_Data;
class AttachedImage_Data;

#pragma pack(push, 1)
class  MediaStreamInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaStreamInfo_Data));
      new (data()) MediaStreamInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaStreamInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaStreamInfo_Data>(index_);
    }
    MediaStreamInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> type;
  mojo::internal::Pointer<::mojo_base::mojom::internal::DictionaryValue_Data> additional_properties;

 private:
  MediaStreamInfo_Data();
  ~MediaStreamInfo_Data() = delete;
};
static_assert(sizeof(MediaStreamInfo_Data) == 24,
              "Bad sizeof(MediaStreamInfo_Data)");
// Used by MediaStreamInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MediaStreamInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MediaStreamInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MediaStreamInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MediaStreamInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MediaStreamInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  MediaMetadata_Data {
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
  mojo::internal::Pointer<mojo::internal::String_Data> mime_type;
  int32_t height;
  int32_t width;
  double duration;
  int32_t rotation;
  int32_t disc;
  mojo::internal::Pointer<mojo::internal::String_Data> album;
  mojo::internal::Pointer<mojo::internal::String_Data> artist;
  mojo::internal::Pointer<mojo::internal::String_Data> comment;
  mojo::internal::Pointer<mojo::internal::String_Data> copyright;
  mojo::internal::Pointer<mojo::internal::String_Data> genre;
  mojo::internal::Pointer<mojo::internal::String_Data> language;
  mojo::internal::Pointer<mojo::internal::String_Data> title;
  int32_t track;
  uint8_t pad13_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::MediaStreamInfo_Data>>> raw_tags;

 private:
  MediaMetadata_Data();
  ~MediaMetadata_Data() = delete;
};
static_assert(sizeof(MediaMetadata_Data) == 112,
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
class  AttachedImage_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AttachedImage_Data));
      new (data()) AttachedImage_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AttachedImage_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AttachedImage_Data>(index_);
    }
    AttachedImage_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> type;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  AttachedImage_Data();
  ~AttachedImage_Data() = delete;
};
static_assert(sizeof(AttachedImage_Data) == 24,
              "Bad sizeof(AttachedImage_Data)");
// Used by AttachedImage::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct AttachedImage_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  AttachedImage_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~AttachedImage_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    AttachedImage_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    AttachedImage_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  MediaParser_ParseMediaMetadata_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaParser_ParseMediaMetadata_Params_Data));
      new (data()) MediaParser_ParseMediaMetadata_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaParser_ParseMediaMetadata_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaParser_ParseMediaMetadata_Params_Data>(index_);
    }
    MediaParser_ParseMediaMetadata_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> mime_type;
  int64_t total_size;
  uint8_t get_attached_images : 1;
  uint8_t pad2_[3];
  mojo::internal::Interface_Data media_data_source;
  uint8_t padfinal_[4];

 private:
  MediaParser_ParseMediaMetadata_Params_Data();
  ~MediaParser_ParseMediaMetadata_Params_Data() = delete;
};
static_assert(sizeof(MediaParser_ParseMediaMetadata_Params_Data) == 40,
              "Bad sizeof(MediaParser_ParseMediaMetadata_Params_Data)");
class  MediaParser_ParseMediaMetadata_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaParser_ParseMediaMetadata_ResponseParams_Data));
      new (data()) MediaParser_ParseMediaMetadata_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaParser_ParseMediaMetadata_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaParser_ParseMediaMetadata_ResponseParams_Data>(index_);
    }
    MediaParser_ParseMediaMetadata_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t parse_success : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<internal::MediaMetadata_Data> metadata;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::AttachedImage_Data>>> attached_images;

 private:
  MediaParser_ParseMediaMetadata_ResponseParams_Data();
  ~MediaParser_ParseMediaMetadata_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaParser_ParseMediaMetadata_ResponseParams_Data) == 32,
              "Bad sizeof(MediaParser_ParseMediaMetadata_ResponseParams_Data)");
class  MediaParser_CheckMediaFile_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaParser_CheckMediaFile_Params_Data));
      new (data()) MediaParser_CheckMediaFile_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaParser_CheckMediaFile_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaParser_CheckMediaFile_Params_Data>(index_);
    }
    MediaParser_CheckMediaFile_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> decode_time;
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> file;

 private:
  MediaParser_CheckMediaFile_Params_Data();
  ~MediaParser_CheckMediaFile_Params_Data() = delete;
};
static_assert(sizeof(MediaParser_CheckMediaFile_Params_Data) == 24,
              "Bad sizeof(MediaParser_CheckMediaFile_Params_Data)");
class  MediaParser_CheckMediaFile_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaParser_CheckMediaFile_ResponseParams_Data));
      new (data()) MediaParser_CheckMediaFile_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaParser_CheckMediaFile_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaParser_CheckMediaFile_ResponseParams_Data>(index_);
    }
    MediaParser_CheckMediaFile_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  MediaParser_CheckMediaFile_ResponseParams_Data();
  ~MediaParser_CheckMediaFile_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaParser_CheckMediaFile_ResponseParams_Data) == 16,
              "Bad sizeof(MediaParser_CheckMediaFile_ResponseParams_Data)");
class  MediaParser_GetCpuInfo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaParser_GetCpuInfo_Params_Data));
      new (data()) MediaParser_GetCpuInfo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaParser_GetCpuInfo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaParser_GetCpuInfo_Params_Data>(index_);
    }
    MediaParser_GetCpuInfo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaParser_GetCpuInfo_Params_Data();
  ~MediaParser_GetCpuInfo_Params_Data() = delete;
};
static_assert(sizeof(MediaParser_GetCpuInfo_Params_Data) == 8,
              "Bad sizeof(MediaParser_GetCpuInfo_Params_Data)");
class  MediaParser_GetCpuInfo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaParser_GetCpuInfo_ResponseParams_Data));
      new (data()) MediaParser_GetCpuInfo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaParser_GetCpuInfo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaParser_GetCpuInfo_ResponseParams_Data>(index_);
    }
    MediaParser_GetCpuInfo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t libyuv_cpu_flags;
  int64_t ffmpeg_cpu_flags;

 private:
  MediaParser_GetCpuInfo_ResponseParams_Data();
  ~MediaParser_GetCpuInfo_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaParser_GetCpuInfo_ResponseParams_Data) == 24,
              "Bad sizeof(MediaParser_GetCpuInfo_ResponseParams_Data)");
class  MediaParserFactory_CreateMediaParser_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaParserFactory_CreateMediaParser_Params_Data));
      new (data()) MediaParserFactory_CreateMediaParser_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaParserFactory_CreateMediaParser_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaParserFactory_CreateMediaParser_Params_Data>(index_);
    }
    MediaParserFactory_CreateMediaParser_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t libyuv_cpu_flags;
  int64_t libavutil_cpu_flags;

 private:
  MediaParserFactory_CreateMediaParser_Params_Data();
  ~MediaParserFactory_CreateMediaParser_Params_Data() = delete;
};
static_assert(sizeof(MediaParserFactory_CreateMediaParser_Params_Data) == 24,
              "Bad sizeof(MediaParserFactory_CreateMediaParser_Params_Data)");
class  MediaParserFactory_CreateMediaParser_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaParserFactory_CreateMediaParser_ResponseParams_Data));
      new (data()) MediaParserFactory_CreateMediaParser_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaParserFactory_CreateMediaParser_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaParserFactory_CreateMediaParser_ResponseParams_Data>(index_);
    }
    MediaParserFactory_CreateMediaParser_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data media_parser;

 private:
  MediaParserFactory_CreateMediaParser_ResponseParams_Data();
  ~MediaParserFactory_CreateMediaParser_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaParserFactory_CreateMediaParser_ResponseParams_Data) == 16,
              "Bad sizeof(MediaParserFactory_CreateMediaParser_ResponseParams_Data)");
class  MediaDataSource_Read_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaDataSource_Read_Params_Data));
      new (data()) MediaDataSource_Read_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaDataSource_Read_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaDataSource_Read_Params_Data>(index_);
    }
    MediaDataSource_Read_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t position;
  int64_t length;

 private:
  MediaDataSource_Read_Params_Data();
  ~MediaDataSource_Read_Params_Data() = delete;
};
static_assert(sizeof(MediaDataSource_Read_Params_Data) == 24,
              "Bad sizeof(MediaDataSource_Read_Params_Data)");
class  MediaDataSource_Read_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaDataSource_Read_ResponseParams_Data));
      new (data()) MediaDataSource_Read_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaDataSource_Read_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaDataSource_Read_ResponseParams_Data>(index_);
    }
    MediaDataSource_Read_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  MediaDataSource_Read_ResponseParams_Data();
  ~MediaDataSource_Read_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaDataSource_Read_ResponseParams_Data) == 16,
              "Bad sizeof(MediaDataSource_Read_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_SERVICES_MEDIA_GALLERY_UTIL_PUBLIC_MOJOM_MEDIA_PARSER_MOJOM_SHARED_INTERNAL_H_