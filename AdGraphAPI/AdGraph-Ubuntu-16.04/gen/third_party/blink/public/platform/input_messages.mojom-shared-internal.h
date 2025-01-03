// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_INPUT_MESSAGES_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_INPUT_MESSAGES_MOJOM_SHARED_INTERNAL_H_

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
namespace blink {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data));
      new (data()) TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data>(index_);
    }
    TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> suggestion;

 private:
  TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data();
  ~TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data() = delete;
};
static_assert(sizeof(TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data) == 16,
              "Bad sizeof(TextSuggestionBackend_ApplySpellCheckSuggestion_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) TextSuggestionBackend_ApplyTextSuggestion_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextSuggestionBackend_ApplyTextSuggestion_Params_Data));
      new (data()) TextSuggestionBackend_ApplyTextSuggestion_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextSuggestionBackend_ApplyTextSuggestion_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextSuggestionBackend_ApplyTextSuggestion_Params_Data>(index_);
    }
    TextSuggestionBackend_ApplyTextSuggestion_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t marker_tag;
  int32_t suggestion_index;

 private:
  TextSuggestionBackend_ApplyTextSuggestion_Params_Data();
  ~TextSuggestionBackend_ApplyTextSuggestion_Params_Data() = delete;
};
static_assert(sizeof(TextSuggestionBackend_ApplyTextSuggestion_Params_Data) == 16,
              "Bad sizeof(TextSuggestionBackend_ApplyTextSuggestion_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data));
      new (data()) TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data>(index_);
    }
    TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data();
  ~TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data() = delete;
};
static_assert(sizeof(TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data) == 8,
              "Bad sizeof(TextSuggestionBackend_DeleteActiveSuggestionRange_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data));
      new (data()) TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data>(index_);
    }
    TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> suggestion;

 private:
  TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data();
  ~TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data() = delete;
};
static_assert(sizeof(TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data) == 16,
              "Bad sizeof(TextSuggestionBackend_OnNewWordAddedToDictionary_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data));
      new (data()) TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data>(index_);
    }
    TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data();
  ~TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data() = delete;
};
static_assert(sizeof(TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data) == 8,
              "Bad sizeof(TextSuggestionBackend_OnSuggestionMenuClosed_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data));
      new (data()) TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data>(index_);
    }
    TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t max_number_of_suggestions;
  uint8_t padfinal_[4];

 private:
  TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data();
  ~TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data() = delete;
};
static_assert(sizeof(TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data) == 16,
              "Bad sizeof(TextSuggestionBackend_SuggestionMenuTimeoutCallback_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_INPUT_MESSAGES_MOJOM_SHARED_INTERNAL_H_