// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SPELLCHECK_COMMON_SPELLCHECK_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_SPELLCHECK_COMMON_SPELLCHECK_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/file.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace spellcheck {
namespace mojom {
namespace internal {
class SpellCheckBDictLanguage_Data;
class SpellCheckResult_Data;

struct Decoration_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
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
class  SpellCheckBDictLanguage_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpellCheckBDictLanguage_Data));
      new (data()) SpellCheckBDictLanguage_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpellCheckBDictLanguage_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpellCheckBDictLanguage_Data>(index_);
    }
    SpellCheckBDictLanguage_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> file;
  mojo::internal::Pointer<mojo::internal::String_Data> language;

 private:
  SpellCheckBDictLanguage_Data();
  ~SpellCheckBDictLanguage_Data() = delete;
};
static_assert(sizeof(SpellCheckBDictLanguage_Data) == 24,
              "Bad sizeof(SpellCheckBDictLanguage_Data)");
// Used by SpellCheckBDictLanguage::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SpellCheckBDictLanguage_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SpellCheckBDictLanguage_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SpellCheckBDictLanguage_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SpellCheckBDictLanguage_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SpellCheckBDictLanguage_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SpellCheckResult_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpellCheckResult_Data));
      new (data()) SpellCheckResult_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpellCheckResult_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpellCheckResult_Data>(index_);
    }
    SpellCheckResult_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t decoration;
  int32_t location;
  int32_t length;
  uint8_t pad2_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data>>> replacements;

 private:
  SpellCheckResult_Data();
  ~SpellCheckResult_Data() = delete;
};
static_assert(sizeof(SpellCheckResult_Data) == 32,
              "Bad sizeof(SpellCheckResult_Data)");
// Used by SpellCheckResult::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SpellCheckResult_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SpellCheckResult_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SpellCheckResult_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SpellCheckResult_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SpellCheckResult_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SpellChecker_Initialize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpellChecker_Initialize_Params_Data));
      new (data()) SpellChecker_Initialize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpellChecker_Initialize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpellChecker_Initialize_Params_Data>(index_);
    }
    SpellChecker_Initialize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::SpellCheckBDictLanguage_Data>>> dictionaries;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> custom_words;
  uint8_t enable : 1;
  uint8_t padfinal_[7];

 private:
  SpellChecker_Initialize_Params_Data();
  ~SpellChecker_Initialize_Params_Data() = delete;
};
static_assert(sizeof(SpellChecker_Initialize_Params_Data) == 32,
              "Bad sizeof(SpellChecker_Initialize_Params_Data)");
class  SpellChecker_CustomDictionaryChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpellChecker_CustomDictionaryChanged_Params_Data));
      new (data()) SpellChecker_CustomDictionaryChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpellChecker_CustomDictionaryChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpellChecker_CustomDictionaryChanged_Params_Data>(index_);
    }
    SpellChecker_CustomDictionaryChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> words_added;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> words_removed;

 private:
  SpellChecker_CustomDictionaryChanged_Params_Data();
  ~SpellChecker_CustomDictionaryChanged_Params_Data() = delete;
};
static_assert(sizeof(SpellChecker_CustomDictionaryChanged_Params_Data) == 24,
              "Bad sizeof(SpellChecker_CustomDictionaryChanged_Params_Data)");
class  SpellCheckHost_RequestDictionary_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpellCheckHost_RequestDictionary_Params_Data));
      new (data()) SpellCheckHost_RequestDictionary_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpellCheckHost_RequestDictionary_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpellCheckHost_RequestDictionary_Params_Data>(index_);
    }
    SpellCheckHost_RequestDictionary_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SpellCheckHost_RequestDictionary_Params_Data();
  ~SpellCheckHost_RequestDictionary_Params_Data() = delete;
};
static_assert(sizeof(SpellCheckHost_RequestDictionary_Params_Data) == 8,
              "Bad sizeof(SpellCheckHost_RequestDictionary_Params_Data)");
class  SpellCheckHost_NotifyChecked_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpellCheckHost_NotifyChecked_Params_Data));
      new (data()) SpellCheckHost_NotifyChecked_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpellCheckHost_NotifyChecked_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpellCheckHost_NotifyChecked_Params_Data>(index_);
    }
    SpellCheckHost_NotifyChecked_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> word;
  uint8_t misspelled : 1;
  uint8_t padfinal_[7];

 private:
  SpellCheckHost_NotifyChecked_Params_Data();
  ~SpellCheckHost_NotifyChecked_Params_Data() = delete;
};
static_assert(sizeof(SpellCheckHost_NotifyChecked_Params_Data) == 24,
              "Bad sizeof(SpellCheckHost_NotifyChecked_Params_Data)");
class  SpellCheckHost_CallSpellingService_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpellCheckHost_CallSpellingService_Params_Data));
      new (data()) SpellCheckHost_CallSpellingService_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpellCheckHost_CallSpellingService_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpellCheckHost_CallSpellingService_Params_Data>(index_);
    }
    SpellCheckHost_CallSpellingService_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> text;

 private:
  SpellCheckHost_CallSpellingService_Params_Data();
  ~SpellCheckHost_CallSpellingService_Params_Data() = delete;
};
static_assert(sizeof(SpellCheckHost_CallSpellingService_Params_Data) == 16,
              "Bad sizeof(SpellCheckHost_CallSpellingService_Params_Data)");
class  SpellCheckHost_CallSpellingService_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpellCheckHost_CallSpellingService_ResponseParams_Data));
      new (data()) SpellCheckHost_CallSpellingService_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpellCheckHost_CallSpellingService_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpellCheckHost_CallSpellingService_ResponseParams_Data>(index_);
    }
    SpellCheckHost_CallSpellingService_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::SpellCheckResult_Data>>> results;

 private:
  SpellCheckHost_CallSpellingService_ResponseParams_Data();
  ~SpellCheckHost_CallSpellingService_ResponseParams_Data() = delete;
};
static_assert(sizeof(SpellCheckHost_CallSpellingService_ResponseParams_Data) == 24,
              "Bad sizeof(SpellCheckHost_CallSpellingService_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace spellcheck

#endif  // COMPONENTS_SPELLCHECK_COMMON_SPELLCHECK_MOJOM_SHARED_INTERNAL_H_