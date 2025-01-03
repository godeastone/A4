// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_LEVELDB_WRAPPER_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_LEVELDB_WRAPPER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "components/services/leveldb/public/interfaces/leveldb.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace content {
namespace mojom {
namespace internal {
class KeyValue_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) KeyValue_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(KeyValue_Data));
      new (data()) KeyValue_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    KeyValue_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<KeyValue_Data>(index_);
    }
    KeyValue_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  KeyValue_Data();
  ~KeyValue_Data() = delete;
};
static_assert(sizeof(KeyValue_Data) == 24,
              "Bad sizeof(KeyValue_Data)");
// Used by KeyValue::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct KeyValue_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  KeyValue_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~KeyValue_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    KeyValue_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    KeyValue_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) LevelDBObserver_KeyAdded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBObserver_KeyAdded_Params_Data));
      new (data()) LevelDBObserver_KeyAdded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBObserver_KeyAdded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBObserver_KeyAdded_Params_Data>(index_);
    }
    LevelDBObserver_KeyAdded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;
  mojo::internal::Pointer<mojo::internal::String_Data> source;

 private:
  LevelDBObserver_KeyAdded_Params_Data();
  ~LevelDBObserver_KeyAdded_Params_Data() = delete;
};
static_assert(sizeof(LevelDBObserver_KeyAdded_Params_Data) == 32,
              "Bad sizeof(LevelDBObserver_KeyAdded_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) LevelDBObserver_KeyChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBObserver_KeyChanged_Params_Data));
      new (data()) LevelDBObserver_KeyChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBObserver_KeyChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBObserver_KeyChanged_Params_Data>(index_);
    }
    LevelDBObserver_KeyChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> new_value;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> old_value;
  mojo::internal::Pointer<mojo::internal::String_Data> source;

 private:
  LevelDBObserver_KeyChanged_Params_Data();
  ~LevelDBObserver_KeyChanged_Params_Data() = delete;
};
static_assert(sizeof(LevelDBObserver_KeyChanged_Params_Data) == 40,
              "Bad sizeof(LevelDBObserver_KeyChanged_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) LevelDBObserver_KeyDeleted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBObserver_KeyDeleted_Params_Data));
      new (data()) LevelDBObserver_KeyDeleted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBObserver_KeyDeleted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBObserver_KeyDeleted_Params_Data>(index_);
    }
    LevelDBObserver_KeyDeleted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> old_value;
  mojo::internal::Pointer<mojo::internal::String_Data> source;

 private:
  LevelDBObserver_KeyDeleted_Params_Data();
  ~LevelDBObserver_KeyDeleted_Params_Data() = delete;
};
static_assert(sizeof(LevelDBObserver_KeyDeleted_Params_Data) == 32,
              "Bad sizeof(LevelDBObserver_KeyDeleted_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) LevelDBObserver_AllDeleted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBObserver_AllDeleted_Params_Data));
      new (data()) LevelDBObserver_AllDeleted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBObserver_AllDeleted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBObserver_AllDeleted_Params_Data>(index_);
    }
    LevelDBObserver_AllDeleted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> source;

 private:
  LevelDBObserver_AllDeleted_Params_Data();
  ~LevelDBObserver_AllDeleted_Params_Data() = delete;
};
static_assert(sizeof(LevelDBObserver_AllDeleted_Params_Data) == 16,
              "Bad sizeof(LevelDBObserver_AllDeleted_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) LevelDBObserver_ShouldSendOldValueOnMutations_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBObserver_ShouldSendOldValueOnMutations_Params_Data));
      new (data()) LevelDBObserver_ShouldSendOldValueOnMutations_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBObserver_ShouldSendOldValueOnMutations_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBObserver_ShouldSendOldValueOnMutations_Params_Data>(index_);
    }
    LevelDBObserver_ShouldSendOldValueOnMutations_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t value : 1;
  uint8_t padfinal_[7];

 private:
  LevelDBObserver_ShouldSendOldValueOnMutations_Params_Data();
  ~LevelDBObserver_ShouldSendOldValueOnMutations_Params_Data() = delete;
};
static_assert(sizeof(LevelDBObserver_ShouldSendOldValueOnMutations_Params_Data) == 16,
              "Bad sizeof(LevelDBObserver_ShouldSendOldValueOnMutations_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) LevelDBWrapperGetAllCallback_Complete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBWrapperGetAllCallback_Complete_Params_Data));
      new (data()) LevelDBWrapperGetAllCallback_Complete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBWrapperGetAllCallback_Complete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBWrapperGetAllCallback_Complete_Params_Data>(index_);
    }
    LevelDBWrapperGetAllCallback_Complete_Params_Data* operator->() { return data(); }

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
  LevelDBWrapperGetAllCallback_Complete_Params_Data();
  ~LevelDBWrapperGetAllCallback_Complete_Params_Data() = delete;
};
static_assert(sizeof(LevelDBWrapperGetAllCallback_Complete_Params_Data) == 16,
              "Bad sizeof(LevelDBWrapperGetAllCallback_Complete_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) LevelDBWrapper_AddObserver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBWrapper_AddObserver_Params_Data));
      new (data()) LevelDBWrapper_AddObserver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBWrapper_AddObserver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBWrapper_AddObserver_Params_Data>(index_);
    }
    LevelDBWrapper_AddObserver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data observer;

 private:
  LevelDBWrapper_AddObserver_Params_Data();
  ~LevelDBWrapper_AddObserver_Params_Data() = delete;
};
static_assert(sizeof(LevelDBWrapper_AddObserver_Params_Data) == 16,
              "Bad sizeof(LevelDBWrapper_AddObserver_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) LevelDBWrapper_Put_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBWrapper_Put_Params_Data));
      new (data()) LevelDBWrapper_Put_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBWrapper_Put_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBWrapper_Put_Params_Data>(index_);
    }
    LevelDBWrapper_Put_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> client_old_value;
  mojo::internal::Pointer<mojo::internal::String_Data> source;

 private:
  LevelDBWrapper_Put_Params_Data();
  ~LevelDBWrapper_Put_Params_Data() = delete;
};
static_assert(sizeof(LevelDBWrapper_Put_Params_Data) == 40,
              "Bad sizeof(LevelDBWrapper_Put_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) LevelDBWrapper_Put_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBWrapper_Put_ResponseParams_Data));
      new (data()) LevelDBWrapper_Put_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBWrapper_Put_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBWrapper_Put_ResponseParams_Data>(index_);
    }
    LevelDBWrapper_Put_ResponseParams_Data* operator->() { return data(); }

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
  LevelDBWrapper_Put_ResponseParams_Data();
  ~LevelDBWrapper_Put_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBWrapper_Put_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBWrapper_Put_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) LevelDBWrapper_Delete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBWrapper_Delete_Params_Data));
      new (data()) LevelDBWrapper_Delete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBWrapper_Delete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBWrapper_Delete_Params_Data>(index_);
    }
    LevelDBWrapper_Delete_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> client_old_value;
  mojo::internal::Pointer<mojo::internal::String_Data> source;

 private:
  LevelDBWrapper_Delete_Params_Data();
  ~LevelDBWrapper_Delete_Params_Data() = delete;
};
static_assert(sizeof(LevelDBWrapper_Delete_Params_Data) == 32,
              "Bad sizeof(LevelDBWrapper_Delete_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) LevelDBWrapper_Delete_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBWrapper_Delete_ResponseParams_Data));
      new (data()) LevelDBWrapper_Delete_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBWrapper_Delete_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBWrapper_Delete_ResponseParams_Data>(index_);
    }
    LevelDBWrapper_Delete_ResponseParams_Data* operator->() { return data(); }

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
  LevelDBWrapper_Delete_ResponseParams_Data();
  ~LevelDBWrapper_Delete_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBWrapper_Delete_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBWrapper_Delete_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) LevelDBWrapper_DeleteAll_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBWrapper_DeleteAll_Params_Data));
      new (data()) LevelDBWrapper_DeleteAll_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBWrapper_DeleteAll_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBWrapper_DeleteAll_Params_Data>(index_);
    }
    LevelDBWrapper_DeleteAll_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> source;

 private:
  LevelDBWrapper_DeleteAll_Params_Data();
  ~LevelDBWrapper_DeleteAll_Params_Data() = delete;
};
static_assert(sizeof(LevelDBWrapper_DeleteAll_Params_Data) == 16,
              "Bad sizeof(LevelDBWrapper_DeleteAll_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) LevelDBWrapper_DeleteAll_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBWrapper_DeleteAll_ResponseParams_Data));
      new (data()) LevelDBWrapper_DeleteAll_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBWrapper_DeleteAll_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBWrapper_DeleteAll_ResponseParams_Data>(index_);
    }
    LevelDBWrapper_DeleteAll_ResponseParams_Data* operator->() { return data(); }

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
  LevelDBWrapper_DeleteAll_ResponseParams_Data();
  ~LevelDBWrapper_DeleteAll_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBWrapper_DeleteAll_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBWrapper_DeleteAll_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) LevelDBWrapper_Get_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBWrapper_Get_Params_Data));
      new (data()) LevelDBWrapper_Get_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBWrapper_Get_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBWrapper_Get_Params_Data>(index_);
    }
    LevelDBWrapper_Get_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key;

 private:
  LevelDBWrapper_Get_Params_Data();
  ~LevelDBWrapper_Get_Params_Data() = delete;
};
static_assert(sizeof(LevelDBWrapper_Get_Params_Data) == 16,
              "Bad sizeof(LevelDBWrapper_Get_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) LevelDBWrapper_Get_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBWrapper_Get_ResponseParams_Data));
      new (data()) LevelDBWrapper_Get_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBWrapper_Get_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBWrapper_Get_ResponseParams_Data>(index_);
    }
    LevelDBWrapper_Get_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  LevelDBWrapper_Get_ResponseParams_Data();
  ~LevelDBWrapper_Get_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBWrapper_Get_ResponseParams_Data) == 24,
              "Bad sizeof(LevelDBWrapper_Get_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) LevelDBWrapper_GetAll_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBWrapper_GetAll_Params_Data));
      new (data()) LevelDBWrapper_GetAll_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBWrapper_GetAll_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBWrapper_GetAll_Params_Data>(index_);
    }
    LevelDBWrapper_GetAll_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data complete_callback;

 private:
  LevelDBWrapper_GetAll_Params_Data();
  ~LevelDBWrapper_GetAll_Params_Data() = delete;
};
static_assert(sizeof(LevelDBWrapper_GetAll_Params_Data) == 16,
              "Bad sizeof(LevelDBWrapper_GetAll_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) LevelDBWrapper_GetAll_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBWrapper_GetAll_ResponseParams_Data));
      new (data()) LevelDBWrapper_GetAll_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBWrapper_GetAll_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBWrapper_GetAll_ResponseParams_Data>(index_);
    }
    LevelDBWrapper_GetAll_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::KeyValue_Data>>> data;

 private:
  LevelDBWrapper_GetAll_ResponseParams_Data();
  ~LevelDBWrapper_GetAll_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBWrapper_GetAll_ResponseParams_Data) == 24,
              "Bad sizeof(LevelDBWrapper_GetAll_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_LEVELDB_WRAPPER_MOJOM_SHARED_INTERNAL_H_