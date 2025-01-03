// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_CHROME_CLEANER_PUBLIC_INTERFACES_CHROME_PROMPT_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_CHROME_CLEANER_PUBLIC_INTERFACES_CHROME_PROMPT_MOJOM_SHARED_INTERNAL_H_

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
namespace chrome_cleaner {
namespace mojom {
namespace internal {
class FilePath_Data;
class RegistryKey_Data;

struct PromptAcceptance_Data {
 public:
  static bool constexpr kIsExtensible = true;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
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
class  FilePath_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FilePath_Data));
      new (data()) FilePath_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FilePath_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FilePath_Data>(index_);
    }
    FilePath_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint16_t>> value;

 private:
  FilePath_Data();
  ~FilePath_Data() = delete;
};
static_assert(sizeof(FilePath_Data) == 16,
              "Bad sizeof(FilePath_Data)");
// Used by FilePath::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct FilePath_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  FilePath_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~FilePath_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    FilePath_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    FilePath_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  RegistryKey_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RegistryKey_Data));
      new (data()) RegistryKey_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RegistryKey_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RegistryKey_Data>(index_);
    }
    RegistryKey_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint16_t>> value;

 private:
  RegistryKey_Data();
  ~RegistryKey_Data() = delete;
};
static_assert(sizeof(RegistryKey_Data) == 16,
              "Bad sizeof(RegistryKey_Data)");
// Used by RegistryKey::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct RegistryKey_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  RegistryKey_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~RegistryKey_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    RegistryKey_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    RegistryKey_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ChromePrompt_PromptUser_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ChromePrompt_PromptUser_Params_Data));
      new (data()) ChromePrompt_PromptUser_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ChromePrompt_PromptUser_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ChromePrompt_PromptUser_Params_Data>(index_);
    }
    ChromePrompt_PromptUser_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::FilePath_Data>>> files_to_delete;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::RegistryKey_Data>>> registry_keys;

 private:
  ChromePrompt_PromptUser_Params_Data();
  ~ChromePrompt_PromptUser_Params_Data() = delete;
};
static_assert(sizeof(ChromePrompt_PromptUser_Params_Data) == 24,
              "Bad sizeof(ChromePrompt_PromptUser_Params_Data)");
class  ChromePrompt_PromptUser_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ChromePrompt_PromptUser_ResponseParams_Data));
      new (data()) ChromePrompt_PromptUser_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ChromePrompt_PromptUser_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ChromePrompt_PromptUser_ResponseParams_Data>(index_);
    }
    ChromePrompt_PromptUser_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t prompt_acceptance;
  uint8_t padfinal_[4];

 private:
  ChromePrompt_PromptUser_ResponseParams_Data();
  ~ChromePrompt_PromptUser_ResponseParams_Data() = delete;
};
static_assert(sizeof(ChromePrompt_PromptUser_ResponseParams_Data) == 16,
              "Bad sizeof(ChromePrompt_PromptUser_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace chrome_cleaner

#endif  // COMPONENTS_CHROME_CLEANER_PUBLIC_INTERFACES_CHROME_PROMPT_MOJOM_SHARED_INTERNAL_H_