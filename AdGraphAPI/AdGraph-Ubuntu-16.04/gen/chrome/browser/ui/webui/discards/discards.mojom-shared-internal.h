// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_DISCARDS_DISCARDS_MOJOM_SHARED_INTERNAL_H_
#define CHROME_BROWSER_UI_WEBUI_DISCARDS_DISCARDS_MOJOM_SHARED_INTERNAL_H_

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
class TabDiscardsInfo_Data;

struct LifecycleUnitVisibility_Data {
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
class  TabDiscardsInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TabDiscardsInfo_Data));
      new (data()) TabDiscardsInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TabDiscardsInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TabDiscardsInfo_Data>(index_);
    }
    TabDiscardsInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> tab_url;
  mojo::internal::Pointer<mojo::internal::String_Data> title;
  int32_t visibility;
  uint8_t is_media : 1;
  uint8_t is_discarded : 1;
  uint8_t is_frozen : 1;
  uint8_t is_auto_discardable : 1;
  uint8_t has_reactivation_score : 1;
  uint8_t pad7_[3];
  int32_t discard_count;
  int32_t utility_rank;
  int32_t last_active_seconds;
  int32_t id;
  double reactivation_score;

 private:
  TabDiscardsInfo_Data();
  ~TabDiscardsInfo_Data() = delete;
};
static_assert(sizeof(TabDiscardsInfo_Data) == 56,
              "Bad sizeof(TabDiscardsInfo_Data)");
// Used by TabDiscardsInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TabDiscardsInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TabDiscardsInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TabDiscardsInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    TabDiscardsInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TabDiscardsInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  DiscardsDetailsProvider_GetTabDiscardsInfo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DiscardsDetailsProvider_GetTabDiscardsInfo_Params_Data));
      new (data()) DiscardsDetailsProvider_GetTabDiscardsInfo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DiscardsDetailsProvider_GetTabDiscardsInfo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DiscardsDetailsProvider_GetTabDiscardsInfo_Params_Data>(index_);
    }
    DiscardsDetailsProvider_GetTabDiscardsInfo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DiscardsDetailsProvider_GetTabDiscardsInfo_Params_Data();
  ~DiscardsDetailsProvider_GetTabDiscardsInfo_Params_Data() = delete;
};
static_assert(sizeof(DiscardsDetailsProvider_GetTabDiscardsInfo_Params_Data) == 8,
              "Bad sizeof(DiscardsDetailsProvider_GetTabDiscardsInfo_Params_Data)");
class  DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams_Data));
      new (data()) DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams_Data>(index_);
    }
    DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::TabDiscardsInfo_Data>>> infos;

 private:
  DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams_Data();
  ~DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams_Data() = delete;
};
static_assert(sizeof(DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams_Data) == 16,
              "Bad sizeof(DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams_Data)");
class  DiscardsDetailsProvider_SetAutoDiscardable_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DiscardsDetailsProvider_SetAutoDiscardable_Params_Data));
      new (data()) DiscardsDetailsProvider_SetAutoDiscardable_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DiscardsDetailsProvider_SetAutoDiscardable_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DiscardsDetailsProvider_SetAutoDiscardable_Params_Data>(index_);
    }
    DiscardsDetailsProvider_SetAutoDiscardable_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t tab_id;
  uint8_t is_auto_discardable : 1;
  uint8_t padfinal_[3];

 private:
  DiscardsDetailsProvider_SetAutoDiscardable_Params_Data();
  ~DiscardsDetailsProvider_SetAutoDiscardable_Params_Data() = delete;
};
static_assert(sizeof(DiscardsDetailsProvider_SetAutoDiscardable_Params_Data) == 16,
              "Bad sizeof(DiscardsDetailsProvider_SetAutoDiscardable_Params_Data)");
class  DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams_Data));
      new (data()) DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams_Data>(index_);
    }
    DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams_Data();
  ~DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams_Data() = delete;
};
static_assert(sizeof(DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams_Data) == 8,
              "Bad sizeof(DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams_Data)");
class  DiscardsDetailsProvider_DiscardById_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DiscardsDetailsProvider_DiscardById_Params_Data));
      new (data()) DiscardsDetailsProvider_DiscardById_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DiscardsDetailsProvider_DiscardById_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DiscardsDetailsProvider_DiscardById_Params_Data>(index_);
    }
    DiscardsDetailsProvider_DiscardById_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t tab_id;
  uint8_t urgent : 1;
  uint8_t padfinal_[3];

 private:
  DiscardsDetailsProvider_DiscardById_Params_Data();
  ~DiscardsDetailsProvider_DiscardById_Params_Data() = delete;
};
static_assert(sizeof(DiscardsDetailsProvider_DiscardById_Params_Data) == 16,
              "Bad sizeof(DiscardsDetailsProvider_DiscardById_Params_Data)");
class  DiscardsDetailsProvider_DiscardById_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DiscardsDetailsProvider_DiscardById_ResponseParams_Data));
      new (data()) DiscardsDetailsProvider_DiscardById_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DiscardsDetailsProvider_DiscardById_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DiscardsDetailsProvider_DiscardById_ResponseParams_Data>(index_);
    }
    DiscardsDetailsProvider_DiscardById_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DiscardsDetailsProvider_DiscardById_ResponseParams_Data();
  ~DiscardsDetailsProvider_DiscardById_ResponseParams_Data() = delete;
};
static_assert(sizeof(DiscardsDetailsProvider_DiscardById_ResponseParams_Data) == 8,
              "Bad sizeof(DiscardsDetailsProvider_DiscardById_ResponseParams_Data)");
class  DiscardsDetailsProvider_FreezeById_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DiscardsDetailsProvider_FreezeById_Params_Data));
      new (data()) DiscardsDetailsProvider_FreezeById_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DiscardsDetailsProvider_FreezeById_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DiscardsDetailsProvider_FreezeById_Params_Data>(index_);
    }
    DiscardsDetailsProvider_FreezeById_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t tab_id;
  uint8_t padfinal_[4];

 private:
  DiscardsDetailsProvider_FreezeById_Params_Data();
  ~DiscardsDetailsProvider_FreezeById_Params_Data() = delete;
};
static_assert(sizeof(DiscardsDetailsProvider_FreezeById_Params_Data) == 16,
              "Bad sizeof(DiscardsDetailsProvider_FreezeById_Params_Data)");
class  DiscardsDetailsProvider_Discard_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DiscardsDetailsProvider_Discard_Params_Data));
      new (data()) DiscardsDetailsProvider_Discard_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DiscardsDetailsProvider_Discard_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DiscardsDetailsProvider_Discard_Params_Data>(index_);
    }
    DiscardsDetailsProvider_Discard_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t urgent : 1;
  uint8_t padfinal_[7];

 private:
  DiscardsDetailsProvider_Discard_Params_Data();
  ~DiscardsDetailsProvider_Discard_Params_Data() = delete;
};
static_assert(sizeof(DiscardsDetailsProvider_Discard_Params_Data) == 16,
              "Bad sizeof(DiscardsDetailsProvider_Discard_Params_Data)");
class  DiscardsDetailsProvider_Discard_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DiscardsDetailsProvider_Discard_ResponseParams_Data));
      new (data()) DiscardsDetailsProvider_Discard_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DiscardsDetailsProvider_Discard_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DiscardsDetailsProvider_Discard_ResponseParams_Data>(index_);
    }
    DiscardsDetailsProvider_Discard_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DiscardsDetailsProvider_Discard_ResponseParams_Data();
  ~DiscardsDetailsProvider_Discard_ResponseParams_Data() = delete;
};
static_assert(sizeof(DiscardsDetailsProvider_Discard_ResponseParams_Data) == 8,
              "Bad sizeof(DiscardsDetailsProvider_Discard_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom

#endif  // CHROME_BROWSER_UI_WEBUI_DISCARDS_DISCARDS_MOJOM_SHARED_INTERNAL_H_