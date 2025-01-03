// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_ENGAGEMENT_SITE_ENGAGEMENT_DETAILS_MOJOM_SHARED_INTERNAL_H_
#define CHROME_BROWSER_ENGAGEMENT_SITE_ENGAGEMENT_DETAILS_MOJOM_SHARED_INTERNAL_H_

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
namespace mojom {
namespace internal {
class SiteEngagementDetails_Data;

#pragma pack(push, 1)
class  SiteEngagementDetails_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SiteEngagementDetails_Data));
      new (data()) SiteEngagementDetails_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SiteEngagementDetails_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SiteEngagementDetails_Data>(index_);
    }
    SiteEngagementDetails_Data* operator->() { return data(); }

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
  double base_score;
  double installed_bonus;

 private:
  SiteEngagementDetails_Data();
  ~SiteEngagementDetails_Data() = delete;
};
static_assert(sizeof(SiteEngagementDetails_Data) == 40,
              "Bad sizeof(SiteEngagementDetails_Data)");
// Used by SiteEngagementDetails::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SiteEngagementDetails_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SiteEngagementDetails_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SiteEngagementDetails_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SiteEngagementDetails_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SiteEngagementDetails_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SiteEngagementDetailsProvider_GetSiteEngagementDetails_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SiteEngagementDetailsProvider_GetSiteEngagementDetails_Params_Data));
      new (data()) SiteEngagementDetailsProvider_GetSiteEngagementDetails_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SiteEngagementDetailsProvider_GetSiteEngagementDetails_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SiteEngagementDetailsProvider_GetSiteEngagementDetails_Params_Data>(index_);
    }
    SiteEngagementDetailsProvider_GetSiteEngagementDetails_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SiteEngagementDetailsProvider_GetSiteEngagementDetails_Params_Data();
  ~SiteEngagementDetailsProvider_GetSiteEngagementDetails_Params_Data() = delete;
};
static_assert(sizeof(SiteEngagementDetailsProvider_GetSiteEngagementDetails_Params_Data) == 8,
              "Bad sizeof(SiteEngagementDetailsProvider_GetSiteEngagementDetails_Params_Data)");
class  SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParams_Data));
      new (data()) SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParams_Data>(index_);
    }
    SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::SiteEngagementDetails_Data>>> info;

 private:
  SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParams_Data();
  ~SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParams_Data() = delete;
};
static_assert(sizeof(SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParams_Data) == 16,
              "Bad sizeof(SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParams_Data)");
class  SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_Params_Data));
      new (data()) SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_Params_Data>(index_);
    }
    SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  double score;

 private:
  SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_Params_Data();
  ~SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_Params_Data() = delete;
};
static_assert(sizeof(SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_Params_Data) == 24,
              "Bad sizeof(SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom

#endif  // CHROME_BROWSER_ENGAGEMENT_SITE_ENGAGEMENT_DETAILS_MOJOM_SHARED_INTERNAL_H_