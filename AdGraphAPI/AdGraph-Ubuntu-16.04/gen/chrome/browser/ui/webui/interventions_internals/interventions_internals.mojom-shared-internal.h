// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_INTERVENTIONS_INTERNALS_INTERVENTIONS_INTERNALS_MOJOM_SHARED_INTERNAL_H_
#define CHROME_BROWSER_UI_WEBUI_INTERVENTIONS_INTERNALS_INTERVENTIONS_INTERNALS_MOJOM_SHARED_INTERNAL_H_

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
class PreviewsStatus_Data;
class PreviewsFlag_Data;
class MessageLog_Data;

#pragma pack(push, 1)
class  PreviewsStatus_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PreviewsStatus_Data));
      new (data()) PreviewsStatus_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PreviewsStatus_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PreviewsStatus_Data>(index_);
    }
    PreviewsStatus_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> description;
  uint8_t enabled : 1;
  uint8_t pad1_[7];
  mojo::internal::Pointer<mojo::internal::String_Data> htmlId;

 private:
  PreviewsStatus_Data();
  ~PreviewsStatus_Data() = delete;
};
static_assert(sizeof(PreviewsStatus_Data) == 32,
              "Bad sizeof(PreviewsStatus_Data)");
// Used by PreviewsStatus::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PreviewsStatus_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PreviewsStatus_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PreviewsStatus_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PreviewsStatus_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PreviewsStatus_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PreviewsFlag_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PreviewsFlag_Data));
      new (data()) PreviewsFlag_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PreviewsFlag_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PreviewsFlag_Data>(index_);
    }
    PreviewsFlag_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> description;
  mojo::internal::Pointer<mojo::internal::String_Data> link;
  mojo::internal::Pointer<mojo::internal::String_Data> value;
  mojo::internal::Pointer<mojo::internal::String_Data> htmlId;

 private:
  PreviewsFlag_Data();
  ~PreviewsFlag_Data() = delete;
};
static_assert(sizeof(PreviewsFlag_Data) == 40,
              "Bad sizeof(PreviewsFlag_Data)");
// Used by PreviewsFlag::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PreviewsFlag_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PreviewsFlag_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PreviewsFlag_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PreviewsFlag_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PreviewsFlag_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  MessageLog_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MessageLog_Data));
      new (data()) MessageLog_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MessageLog_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MessageLog_Data>(index_);
    }
    MessageLog_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> type;
  mojo::internal::Pointer<mojo::internal::String_Data> description;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  int64_t time;
  uint64_t page_id;

 private:
  MessageLog_Data();
  ~MessageLog_Data() = delete;
};
static_assert(sizeof(MessageLog_Data) == 48,
              "Bad sizeof(MessageLog_Data)");
// Used by MessageLog::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MessageLog_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MessageLog_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MessageLog_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MessageLog_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MessageLog_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  InterventionsInternalsPageHandler_GetPreviewsEnabled_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterventionsInternalsPageHandler_GetPreviewsEnabled_Params_Data));
      new (data()) InterventionsInternalsPageHandler_GetPreviewsEnabled_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterventionsInternalsPageHandler_GetPreviewsEnabled_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterventionsInternalsPageHandler_GetPreviewsEnabled_Params_Data>(index_);
    }
    InterventionsInternalsPageHandler_GetPreviewsEnabled_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InterventionsInternalsPageHandler_GetPreviewsEnabled_Params_Data();
  ~InterventionsInternalsPageHandler_GetPreviewsEnabled_Params_Data() = delete;
};
static_assert(sizeof(InterventionsInternalsPageHandler_GetPreviewsEnabled_Params_Data) == 8,
              "Bad sizeof(InterventionsInternalsPageHandler_GetPreviewsEnabled_Params_Data)");
class  InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams_Data));
      new (data()) InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams_Data>(index_);
    }
    InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PreviewsStatus_Data>>> statuses;

 private:
  InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams_Data();
  ~InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams_Data() = delete;
};
static_assert(sizeof(InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams_Data) == 16,
              "Bad sizeof(InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams_Data)");
class  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params_Data));
      new (data()) InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params_Data>(index_);
    }
    InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params_Data();
  ~InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params_Data() = delete;
};
static_assert(sizeof(InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params_Data) == 8,
              "Bad sizeof(InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params_Data)");
class  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams_Data));
      new (data()) InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams_Data>(index_);
    }
    InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PreviewsFlag_Data>>> flags;

 private:
  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams_Data();
  ~InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams_Data() = delete;
};
static_assert(sizeof(InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams_Data) == 16,
              "Bad sizeof(InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams_Data)");
class  InterventionsInternalsPageHandler_SetClientPage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterventionsInternalsPageHandler_SetClientPage_Params_Data));
      new (data()) InterventionsInternalsPageHandler_SetClientPage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterventionsInternalsPageHandler_SetClientPage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterventionsInternalsPageHandler_SetClientPage_Params_Data>(index_);
    }
    InterventionsInternalsPageHandler_SetClientPage_Params_Data* operator->() { return data(); }

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
  InterventionsInternalsPageHandler_SetClientPage_Params_Data();
  ~InterventionsInternalsPageHandler_SetClientPage_Params_Data() = delete;
};
static_assert(sizeof(InterventionsInternalsPageHandler_SetClientPage_Params_Data) == 16,
              "Bad sizeof(InterventionsInternalsPageHandler_SetClientPage_Params_Data)");
class  InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params_Data));
      new (data()) InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params_Data>(index_);
    }
    InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t ignored : 1;
  uint8_t padfinal_[7];

 private:
  InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params_Data();
  ~InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params_Data() = delete;
};
static_assert(sizeof(InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params_Data) == 16,
              "Bad sizeof(InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params_Data)");
class  InterventionsInternalsPage_LogNewMessage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterventionsInternalsPage_LogNewMessage_Params_Data));
      new (data()) InterventionsInternalsPage_LogNewMessage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterventionsInternalsPage_LogNewMessage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterventionsInternalsPage_LogNewMessage_Params_Data>(index_);
    }
    InterventionsInternalsPage_LogNewMessage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::MessageLog_Data> log;

 private:
  InterventionsInternalsPage_LogNewMessage_Params_Data();
  ~InterventionsInternalsPage_LogNewMessage_Params_Data() = delete;
};
static_assert(sizeof(InterventionsInternalsPage_LogNewMessage_Params_Data) == 16,
              "Bad sizeof(InterventionsInternalsPage_LogNewMessage_Params_Data)");
class  InterventionsInternalsPage_OnBlacklistedHost_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterventionsInternalsPage_OnBlacklistedHost_Params_Data));
      new (data()) InterventionsInternalsPage_OnBlacklistedHost_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterventionsInternalsPage_OnBlacklistedHost_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterventionsInternalsPage_OnBlacklistedHost_Params_Data>(index_);
    }
    InterventionsInternalsPage_OnBlacklistedHost_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> host;
  int64_t time;

 private:
  InterventionsInternalsPage_OnBlacklistedHost_Params_Data();
  ~InterventionsInternalsPage_OnBlacklistedHost_Params_Data() = delete;
};
static_assert(sizeof(InterventionsInternalsPage_OnBlacklistedHost_Params_Data) == 24,
              "Bad sizeof(InterventionsInternalsPage_OnBlacklistedHost_Params_Data)");
class  InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params_Data));
      new (data()) InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params_Data>(index_);
    }
    InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t blacklisted : 1;
  uint8_t padfinal_[7];

 private:
  InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params_Data();
  ~InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params_Data() = delete;
};
static_assert(sizeof(InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params_Data) == 16,
              "Bad sizeof(InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params_Data)");
class  InterventionsInternalsPage_OnBlacklistCleared_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterventionsInternalsPage_OnBlacklistCleared_Params_Data));
      new (data()) InterventionsInternalsPage_OnBlacklistCleared_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterventionsInternalsPage_OnBlacklistCleared_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterventionsInternalsPage_OnBlacklistCleared_Params_Data>(index_);
    }
    InterventionsInternalsPage_OnBlacklistCleared_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t time;

 private:
  InterventionsInternalsPage_OnBlacklistCleared_Params_Data();
  ~InterventionsInternalsPage_OnBlacklistCleared_Params_Data() = delete;
};
static_assert(sizeof(InterventionsInternalsPage_OnBlacklistCleared_Params_Data) == 16,
              "Bad sizeof(InterventionsInternalsPage_OnBlacklistCleared_Params_Data)");
class  InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params_Data));
      new (data()) InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params_Data>(index_);
    }
    InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> type;

 private:
  InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params_Data();
  ~InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params_Data() = delete;
};
static_assert(sizeof(InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params_Data) == 16,
              "Bad sizeof(InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params_Data)");
class  InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params_Data));
      new (data()) InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params_Data>(index_);
    }
    InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t ignored : 1;
  uint8_t padfinal_[7];

 private:
  InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params_Data();
  ~InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params_Data() = delete;
};
static_assert(sizeof(InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params_Data) == 16,
              "Bad sizeof(InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom

#endif  // CHROME_BROWSER_UI_WEBUI_INTERVENTIONS_INTERNALS_INTERVENTIONS_INTERNALS_MOJOM_SHARED_INTERNAL_H_