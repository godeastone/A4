// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_OMNIBOX_OMNIBOX_MOJOM_SHARED_INTERNAL_H_
#define CHROME_BROWSER_UI_WEBUI_OMNIBOX_OMNIBOX_MOJOM_SHARED_INTERNAL_H_

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
namespace mojom {
namespace internal {
class AutocompleteAdditionalInfo_Data;
class AutocompleteMatch_Data;
class AutocompleteResultsForProvider_Data;
class OmniboxResult_Data;

#pragma pack(push, 1)
class  AutocompleteAdditionalInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutocompleteAdditionalInfo_Data));
      new (data()) AutocompleteAdditionalInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutocompleteAdditionalInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutocompleteAdditionalInfo_Data>(index_);
    }
    AutocompleteAdditionalInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> key;
  mojo::internal::Pointer<mojo::internal::String_Data> value;

 private:
  AutocompleteAdditionalInfo_Data();
  ~AutocompleteAdditionalInfo_Data() = delete;
};
static_assert(sizeof(AutocompleteAdditionalInfo_Data) == 24,
              "Bad sizeof(AutocompleteAdditionalInfo_Data)");
// Used by AutocompleteAdditionalInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct AutocompleteAdditionalInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  AutocompleteAdditionalInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~AutocompleteAdditionalInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    AutocompleteAdditionalInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    AutocompleteAdditionalInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  AutocompleteMatch_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutocompleteMatch_Data));
      new (data()) AutocompleteMatch_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutocompleteMatch_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutocompleteMatch_Data>(index_);
    }
    AutocompleteMatch_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> provider_name;
  uint8_t provider_done : 1;
  uint8_t deletable : 1;
  uint8_t allowed_to_be_default_match : 1;
  uint8_t has_tab_match : 1;
  uint8_t starred : 1;
  uint8_t from_previous : 1;
  uint8_t pad6_[3];
  int32_t relevance;
  mojo::internal::Pointer<mojo::internal::String_Data> fill_into_edit;
  mojo::internal::Pointer<mojo::internal::String_Data> inline_autocompletion;
  mojo::internal::Pointer<mojo::internal::String_Data> destination_url;
  mojo::internal::Pointer<mojo::internal::String_Data> contents;
  mojo::internal::Pointer<mojo::internal::String_Data> description;
  int32_t transition;
  int32_t duplicates;
  mojo::internal::Pointer<mojo::internal::String_Data> type;
  mojo::internal::Pointer<mojo::internal::String_Data> associated_keyword;
  mojo::internal::Pointer<mojo::internal::String_Data> keyword;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::AutocompleteAdditionalInfo_Data>>> additional_info;

 private:
  AutocompleteMatch_Data();
  ~AutocompleteMatch_Data() = delete;
};
static_assert(sizeof(AutocompleteMatch_Data) == 104,
              "Bad sizeof(AutocompleteMatch_Data)");
// Used by AutocompleteMatch::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct AutocompleteMatch_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  AutocompleteMatch_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~AutocompleteMatch_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    AutocompleteMatch_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    AutocompleteMatch_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  AutocompleteResultsForProvider_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AutocompleteResultsForProvider_Data));
      new (data()) AutocompleteResultsForProvider_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AutocompleteResultsForProvider_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AutocompleteResultsForProvider_Data>(index_);
    }
    AutocompleteResultsForProvider_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> provider_name;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::AutocompleteMatch_Data>>> results;

 private:
  AutocompleteResultsForProvider_Data();
  ~AutocompleteResultsForProvider_Data() = delete;
};
static_assert(sizeof(AutocompleteResultsForProvider_Data) == 24,
              "Bad sizeof(AutocompleteResultsForProvider_Data)");
// Used by AutocompleteResultsForProvider::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct AutocompleteResultsForProvider_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  AutocompleteResultsForProvider_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~AutocompleteResultsForProvider_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    AutocompleteResultsForProvider_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    AutocompleteResultsForProvider_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  OmniboxResult_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(OmniboxResult_Data));
      new (data()) OmniboxResult_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    OmniboxResult_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<OmniboxResult_Data>(index_);
    }
    OmniboxResult_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t done : 1;
  uint8_t is_typed_host : 1;
  uint8_t pad1_[3];
  int32_t time_since_omnibox_started_ms;
  mojo::internal::Pointer<mojo::internal::String_Data> host;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::AutocompleteMatch_Data>>> combined_results;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::AutocompleteResultsForProvider_Data>>> results_by_provider;

 private:
  OmniboxResult_Data();
  ~OmniboxResult_Data() = delete;
};
static_assert(sizeof(OmniboxResult_Data) == 40,
              "Bad sizeof(OmniboxResult_Data)");
// Used by OmniboxResult::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct OmniboxResult_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  OmniboxResult_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~OmniboxResult_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    OmniboxResult_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    OmniboxResult_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  OmniboxPageHandler_SetClientPage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(OmniboxPageHandler_SetClientPage_Params_Data));
      new (data()) OmniboxPageHandler_SetClientPage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    OmniboxPageHandler_SetClientPage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<OmniboxPageHandler_SetClientPage_Params_Data>(index_);
    }
    OmniboxPageHandler_SetClientPage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data page;

 private:
  OmniboxPageHandler_SetClientPage_Params_Data();
  ~OmniboxPageHandler_SetClientPage_Params_Data() = delete;
};
static_assert(sizeof(OmniboxPageHandler_SetClientPage_Params_Data) == 16,
              "Bad sizeof(OmniboxPageHandler_SetClientPage_Params_Data)");
class  OmniboxPageHandler_StartOmniboxQuery_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(OmniboxPageHandler_StartOmniboxQuery_Params_Data));
      new (data()) OmniboxPageHandler_StartOmniboxQuery_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    OmniboxPageHandler_StartOmniboxQuery_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<OmniboxPageHandler_StartOmniboxQuery_Params_Data>(index_);
    }
    OmniboxPageHandler_StartOmniboxQuery_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> input_string;
  int32_t cursor_position;
  uint8_t prevent_inline_autocomplete : 1;
  uint8_t prefer_keyword : 1;
  uint8_t pad3_[3];
  int32_t page_classification;
  uint8_t padfinal_[4];

 private:
  OmniboxPageHandler_StartOmniboxQuery_Params_Data();
  ~OmniboxPageHandler_StartOmniboxQuery_Params_Data() = delete;
};
static_assert(sizeof(OmniboxPageHandler_StartOmniboxQuery_Params_Data) == 32,
              "Bad sizeof(OmniboxPageHandler_StartOmniboxQuery_Params_Data)");
class  OmniboxPage_HandleNewAutocompleteResult_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(OmniboxPage_HandleNewAutocompleteResult_Params_Data));
      new (data()) OmniboxPage_HandleNewAutocompleteResult_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    OmniboxPage_HandleNewAutocompleteResult_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<OmniboxPage_HandleNewAutocompleteResult_Params_Data>(index_);
    }
    OmniboxPage_HandleNewAutocompleteResult_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::OmniboxResult_Data> result;

 private:
  OmniboxPage_HandleNewAutocompleteResult_Params_Data();
  ~OmniboxPage_HandleNewAutocompleteResult_Params_Data() = delete;
};
static_assert(sizeof(OmniboxPage_HandleNewAutocompleteResult_Params_Data) == 16,
              "Bad sizeof(OmniboxPage_HandleNewAutocompleteResult_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom

#endif  // CHROME_BROWSER_UI_WEBUI_OMNIBOX_OMNIBOX_MOJOM_SHARED_INTERNAL_H_