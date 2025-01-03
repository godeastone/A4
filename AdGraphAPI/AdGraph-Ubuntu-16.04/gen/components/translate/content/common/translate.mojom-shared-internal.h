// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_TRANSLATE_CONTENT_COMMON_TRANSLATE_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_TRANSLATE_CONTENT_COMMON_TRANSLATE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace translate {
namespace mojom {
namespace internal {
class LanguageDetectionDetails_Data;

struct TranslateError_Data {
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
class  LanguageDetectionDetails_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LanguageDetectionDetails_Data));
      new (data()) LanguageDetectionDetails_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LanguageDetectionDetails_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LanguageDetectionDetails_Data>(index_);
    }
    LanguageDetectionDetails_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> time;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::String_Data> content_language;
  mojo::internal::Pointer<mojo::internal::String_Data> cld_language;
  uint8_t is_cld_reliable : 1;
  uint8_t has_notranslate : 1;
  uint8_t pad5_[7];
  mojo::internal::Pointer<mojo::internal::String_Data> html_root_language;
  mojo::internal::Pointer<mojo::internal::String_Data> adopted_language;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> contents;

 private:
  LanguageDetectionDetails_Data();
  ~LanguageDetectionDetails_Data() = delete;
};
static_assert(sizeof(LanguageDetectionDetails_Data) == 72,
              "Bad sizeof(LanguageDetectionDetails_Data)");
// Used by LanguageDetectionDetails::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct LanguageDetectionDetails_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  LanguageDetectionDetails_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~LanguageDetectionDetails_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    LanguageDetectionDetails_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    LanguageDetectionDetails_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Page_Translate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Page_Translate_Params_Data));
      new (data()) Page_Translate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Page_Translate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Page_Translate_Params_Data>(index_);
    }
    Page_Translate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> translate_script;
  mojo::internal::Pointer<mojo::internal::String_Data> source_lang;
  mojo::internal::Pointer<mojo::internal::String_Data> target_lang;

 private:
  Page_Translate_Params_Data();
  ~Page_Translate_Params_Data() = delete;
};
static_assert(sizeof(Page_Translate_Params_Data) == 32,
              "Bad sizeof(Page_Translate_Params_Data)");
class  Page_Translate_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Page_Translate_ResponseParams_Data));
      new (data()) Page_Translate_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Page_Translate_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Page_Translate_ResponseParams_Data>(index_);
    }
    Page_Translate_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t cancelled : 1;
  uint8_t pad0_[3];
  int32_t error;
  mojo::internal::Pointer<mojo::internal::String_Data> original_lang;
  mojo::internal::Pointer<mojo::internal::String_Data> translated_lang;

 private:
  Page_Translate_ResponseParams_Data();
  ~Page_Translate_ResponseParams_Data() = delete;
};
static_assert(sizeof(Page_Translate_ResponseParams_Data) == 32,
              "Bad sizeof(Page_Translate_ResponseParams_Data)");
class  Page_RevertTranslation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Page_RevertTranslation_Params_Data));
      new (data()) Page_RevertTranslation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Page_RevertTranslation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Page_RevertTranslation_Params_Data>(index_);
    }
    Page_RevertTranslation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Page_RevertTranslation_Params_Data();
  ~Page_RevertTranslation_Params_Data() = delete;
};
static_assert(sizeof(Page_RevertTranslation_Params_Data) == 8,
              "Bad sizeof(Page_RevertTranslation_Params_Data)");
class  ContentTranslateDriver_RegisterPage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentTranslateDriver_RegisterPage_Params_Data));
      new (data()) ContentTranslateDriver_RegisterPage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentTranslateDriver_RegisterPage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentTranslateDriver_RegisterPage_Params_Data>(index_);
    }
    ContentTranslateDriver_RegisterPage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data page;
  mojo::internal::Pointer<internal::LanguageDetectionDetails_Data> details;
  uint8_t page_needs_translation : 1;
  uint8_t padfinal_[7];

 private:
  ContentTranslateDriver_RegisterPage_Params_Data();
  ~ContentTranslateDriver_RegisterPage_Params_Data() = delete;
};
static_assert(sizeof(ContentTranslateDriver_RegisterPage_Params_Data) == 32,
              "Bad sizeof(ContentTranslateDriver_RegisterPage_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace translate

#endif  // COMPONENTS_TRANSLATE_CONTENT_COMMON_TRANSLATE_MOJOM_SHARED_INTERNAL_H_