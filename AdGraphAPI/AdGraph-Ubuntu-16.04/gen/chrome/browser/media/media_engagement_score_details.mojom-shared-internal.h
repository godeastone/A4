// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_MEDIA_MEDIA_ENGAGEMENT_SCORE_DETAILS_MOJOM_SHARED_INTERNAL_H_
#define CHROME_BROWSER_MEDIA_MEDIA_ENGAGEMENT_SCORE_DETAILS_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace media {
namespace mojom {
namespace internal {
class MediaEngagementScoreDetails_Data;
class MediaEngagementConfig_Data;

#pragma pack(push, 1)
class  MediaEngagementScoreDetails_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaEngagementScoreDetails_Data));
      new (data()) MediaEngagementScoreDetails_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaEngagementScoreDetails_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaEngagementScoreDetails_Data>(index_);
    }
    MediaEngagementScoreDetails_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> origin;
  double total_score;
  int32_t visits;
  int32_t media_playbacks;
  double last_media_playback_time;
  uint8_t is_high : 1;
  uint8_t pad5_[3];
  int32_t audible_playbacks;
  int32_t significant_playbacks;
  int32_t high_score_changes;

 private:
  MediaEngagementScoreDetails_Data();
  ~MediaEngagementScoreDetails_Data() = delete;
};
static_assert(sizeof(MediaEngagementScoreDetails_Data) == 56,
              "Bad sizeof(MediaEngagementScoreDetails_Data)");
// Used by MediaEngagementScoreDetails::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MediaEngagementScoreDetails_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MediaEngagementScoreDetails_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MediaEngagementScoreDetails_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MediaEngagementScoreDetails_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MediaEngagementScoreDetails_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  MediaEngagementConfig_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaEngagementConfig_Data));
      new (data()) MediaEngagementConfig_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaEngagementConfig_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaEngagementConfig_Data>(index_);
    }
    MediaEngagementConfig_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t score_min_visits;
  uint8_t feature_record_data : 1;
  uint8_t feature_bypass_autoplay : 1;
  uint8_t feature_preload_data : 1;
  uint8_t pad3_[3];
  double high_score_lower_threshold;
  double high_score_upper_threshold;
  mojo::internal::Pointer<mojo::internal::String_Data> autoplay_policy;
  mojo::internal::Pointer<mojo::internal::String_Data> preload_version;

 private:
  MediaEngagementConfig_Data();
  ~MediaEngagementConfig_Data() = delete;
};
static_assert(sizeof(MediaEngagementConfig_Data) == 48,
              "Bad sizeof(MediaEngagementConfig_Data)");
// Used by MediaEngagementConfig::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MediaEngagementConfig_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MediaEngagementConfig_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MediaEngagementConfig_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MediaEngagementConfig_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MediaEngagementConfig_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params_Data));
      new (data()) MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params_Data>(index_);
    }
    MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params_Data();
  ~MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params_Data() = delete;
};
static_assert(sizeof(MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params_Data) == 8,
              "Bad sizeof(MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params_Data)");
class  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams_Data));
      new (data()) MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams_Data>(index_);
    }
    MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::MediaEngagementScoreDetails_Data>>> info;

 private:
  MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams_Data();
  ~MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams_Data) == 16,
              "Bad sizeof(MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams_Data)");
class  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params_Data));
      new (data()) MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params_Data>(index_);
    }
    MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params_Data();
  ~MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params_Data() = delete;
};
static_assert(sizeof(MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params_Data) == 8,
              "Bad sizeof(MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params_Data)");
class  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams_Data));
      new (data()) MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams_Data>(index_);
    }
    MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::MediaEngagementConfig_Data> config;

 private:
  MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams_Data();
  ~MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams_Data) == 16,
              "Bad sizeof(MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // CHROME_BROWSER_MEDIA_MEDIA_ENGAGEMENT_SCORE_DETAILS_MOJOM_SHARED_INTERNAL_H_