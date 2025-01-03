// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "components/services/filesystem/public/interfaces/directory.mojom-shared-internal.h"
#include "mojo/public/mojom/base/memory_allocator_dump_cross_process_uid.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace leveldb {
namespace mojom {
namespace internal {
class BatchedOperation_Data;
class KeyValue_Data;
class OpenOptions_Data;

struct DatabaseError_Data {
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

struct BatchOperationType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
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

struct SharedReadCache_Data {
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
class  BatchedOperation_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BatchedOperation_Data));
      new (data()) BatchedOperation_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BatchedOperation_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BatchedOperation_Data>(index_);
    }
    BatchedOperation_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  BatchedOperation_Data();
  ~BatchedOperation_Data() = delete;
};
static_assert(sizeof(BatchedOperation_Data) == 32,
              "Bad sizeof(BatchedOperation_Data)");
// Used by BatchedOperation::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct BatchedOperation_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  BatchedOperation_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~BatchedOperation_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    BatchedOperation_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    BatchedOperation_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  KeyValue_Data {
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
class  OpenOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(OpenOptions_Data));
      new (data()) OpenOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    OpenOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<OpenOptions_Data>(index_);
    }
    OpenOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t create_if_missing : 1;
  uint8_t error_if_exists : 1;
  uint8_t paranoid_checks : 1;
  uint8_t pad2_[3];
  int32_t max_open_files;
  uint64_t write_buffer_size;
  int32_t shared_block_read_cache;
  uint8_t padfinal_[4];

 private:
  OpenOptions_Data();
  ~OpenOptions_Data() = delete;
};
static_assert(sizeof(OpenOptions_Data) == 32,
              "Bad sizeof(OpenOptions_Data)");
// Used by OpenOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct OpenOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  OpenOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~OpenOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    OpenOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    OpenOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  LevelDBService_Open_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBService_Open_Params_Data));
      new (data()) LevelDBService_Open_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBService_Open_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBService_Open_Params_Data>(index_);
    }
    LevelDBService_Open_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data directory;
  mojo::internal::Pointer<mojo::internal::String_Data> dbname;
  mojo::internal::Pointer<::mojo_base::mojom::internal::MemoryAllocatorDumpCrossProcessUid_Data> memory_dump_id;
  mojo::internal::AssociatedEndpointHandle_Data database;
  uint8_t padfinal_[4];

 private:
  LevelDBService_Open_Params_Data();
  ~LevelDBService_Open_Params_Data() = delete;
};
static_assert(sizeof(LevelDBService_Open_Params_Data) == 40,
              "Bad sizeof(LevelDBService_Open_Params_Data)");
class  LevelDBService_Open_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBService_Open_ResponseParams_Data));
      new (data()) LevelDBService_Open_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBService_Open_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBService_Open_ResponseParams_Data>(index_);
    }
    LevelDBService_Open_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  LevelDBService_Open_ResponseParams_Data();
  ~LevelDBService_Open_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBService_Open_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBService_Open_ResponseParams_Data)");
class  LevelDBService_OpenWithOptions_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBService_OpenWithOptions_Params_Data));
      new (data()) LevelDBService_OpenWithOptions_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBService_OpenWithOptions_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBService_OpenWithOptions_Params_Data>(index_);
    }
    LevelDBService_OpenWithOptions_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::OpenOptions_Data> options;
  mojo::internal::Interface_Data directory;
  mojo::internal::Pointer<mojo::internal::String_Data> dbname;
  mojo::internal::Pointer<::mojo_base::mojom::internal::MemoryAllocatorDumpCrossProcessUid_Data> memory_dump_id;
  mojo::internal::AssociatedEndpointHandle_Data database;
  uint8_t padfinal_[4];

 private:
  LevelDBService_OpenWithOptions_Params_Data();
  ~LevelDBService_OpenWithOptions_Params_Data() = delete;
};
static_assert(sizeof(LevelDBService_OpenWithOptions_Params_Data) == 48,
              "Bad sizeof(LevelDBService_OpenWithOptions_Params_Data)");
class  LevelDBService_OpenWithOptions_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBService_OpenWithOptions_ResponseParams_Data));
      new (data()) LevelDBService_OpenWithOptions_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBService_OpenWithOptions_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBService_OpenWithOptions_ResponseParams_Data>(index_);
    }
    LevelDBService_OpenWithOptions_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  LevelDBService_OpenWithOptions_ResponseParams_Data();
  ~LevelDBService_OpenWithOptions_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBService_OpenWithOptions_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBService_OpenWithOptions_ResponseParams_Data)");
class  LevelDBService_OpenInMemory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBService_OpenInMemory_Params_Data));
      new (data()) LevelDBService_OpenInMemory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBService_OpenInMemory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBService_OpenInMemory_Params_Data>(index_);
    }
    LevelDBService_OpenInMemory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::MemoryAllocatorDumpCrossProcessUid_Data> memory_dump_id;
  mojo::internal::Pointer<mojo::internal::String_Data> tracking_name;
  mojo::internal::AssociatedEndpointHandle_Data database;
  uint8_t padfinal_[4];

 private:
  LevelDBService_OpenInMemory_Params_Data();
  ~LevelDBService_OpenInMemory_Params_Data() = delete;
};
static_assert(sizeof(LevelDBService_OpenInMemory_Params_Data) == 32,
              "Bad sizeof(LevelDBService_OpenInMemory_Params_Data)");
class  LevelDBService_OpenInMemory_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBService_OpenInMemory_ResponseParams_Data));
      new (data()) LevelDBService_OpenInMemory_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBService_OpenInMemory_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBService_OpenInMemory_ResponseParams_Data>(index_);
    }
    LevelDBService_OpenInMemory_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  LevelDBService_OpenInMemory_ResponseParams_Data();
  ~LevelDBService_OpenInMemory_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBService_OpenInMemory_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBService_OpenInMemory_ResponseParams_Data)");
class  LevelDBService_Destroy_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBService_Destroy_Params_Data));
      new (data()) LevelDBService_Destroy_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBService_Destroy_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBService_Destroy_Params_Data>(index_);
    }
    LevelDBService_Destroy_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data directory;
  mojo::internal::Pointer<mojo::internal::String_Data> dbname;

 private:
  LevelDBService_Destroy_Params_Data();
  ~LevelDBService_Destroy_Params_Data() = delete;
};
static_assert(sizeof(LevelDBService_Destroy_Params_Data) == 24,
              "Bad sizeof(LevelDBService_Destroy_Params_Data)");
class  LevelDBService_Destroy_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBService_Destroy_ResponseParams_Data));
      new (data()) LevelDBService_Destroy_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBService_Destroy_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBService_Destroy_ResponseParams_Data>(index_);
    }
    LevelDBService_Destroy_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  LevelDBService_Destroy_ResponseParams_Data();
  ~LevelDBService_Destroy_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBService_Destroy_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBService_Destroy_ResponseParams_Data)");
class  LevelDBDatabase_Put_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_Put_Params_Data));
      new (data()) LevelDBDatabase_Put_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_Put_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_Put_Params_Data>(index_);
    }
    LevelDBDatabase_Put_Params_Data* operator->() { return data(); }

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
  LevelDBDatabase_Put_Params_Data();
  ~LevelDBDatabase_Put_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_Put_Params_Data) == 24,
              "Bad sizeof(LevelDBDatabase_Put_Params_Data)");
class  LevelDBDatabase_Put_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_Put_ResponseParams_Data));
      new (data()) LevelDBDatabase_Put_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_Put_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_Put_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_Put_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  LevelDBDatabase_Put_ResponseParams_Data();
  ~LevelDBDatabase_Put_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_Put_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBDatabase_Put_ResponseParams_Data)");
class  LevelDBDatabase_Delete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_Delete_Params_Data));
      new (data()) LevelDBDatabase_Delete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_Delete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_Delete_Params_Data>(index_);
    }
    LevelDBDatabase_Delete_Params_Data* operator->() { return data(); }

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
  LevelDBDatabase_Delete_Params_Data();
  ~LevelDBDatabase_Delete_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_Delete_Params_Data) == 16,
              "Bad sizeof(LevelDBDatabase_Delete_Params_Data)");
class  LevelDBDatabase_Delete_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_Delete_ResponseParams_Data));
      new (data()) LevelDBDatabase_Delete_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_Delete_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_Delete_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_Delete_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  LevelDBDatabase_Delete_ResponseParams_Data();
  ~LevelDBDatabase_Delete_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_Delete_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBDatabase_Delete_ResponseParams_Data)");
class  LevelDBDatabase_DeletePrefixed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_DeletePrefixed_Params_Data));
      new (data()) LevelDBDatabase_DeletePrefixed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_DeletePrefixed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_DeletePrefixed_Params_Data>(index_);
    }
    LevelDBDatabase_DeletePrefixed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key_prefix;

 private:
  LevelDBDatabase_DeletePrefixed_Params_Data();
  ~LevelDBDatabase_DeletePrefixed_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_DeletePrefixed_Params_Data) == 16,
              "Bad sizeof(LevelDBDatabase_DeletePrefixed_Params_Data)");
class  LevelDBDatabase_DeletePrefixed_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_DeletePrefixed_ResponseParams_Data));
      new (data()) LevelDBDatabase_DeletePrefixed_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_DeletePrefixed_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_DeletePrefixed_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_DeletePrefixed_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  LevelDBDatabase_DeletePrefixed_ResponseParams_Data();
  ~LevelDBDatabase_DeletePrefixed_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_DeletePrefixed_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBDatabase_DeletePrefixed_ResponseParams_Data)");
class  LevelDBDatabase_Write_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_Write_Params_Data));
      new (data()) LevelDBDatabase_Write_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_Write_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_Write_Params_Data>(index_);
    }
    LevelDBDatabase_Write_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::BatchedOperation_Data>>> operations;

 private:
  LevelDBDatabase_Write_Params_Data();
  ~LevelDBDatabase_Write_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_Write_Params_Data) == 16,
              "Bad sizeof(LevelDBDatabase_Write_Params_Data)");
class  LevelDBDatabase_Write_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_Write_ResponseParams_Data));
      new (data()) LevelDBDatabase_Write_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_Write_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_Write_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_Write_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  LevelDBDatabase_Write_ResponseParams_Data();
  ~LevelDBDatabase_Write_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_Write_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBDatabase_Write_ResponseParams_Data)");
class  LevelDBDatabase_Get_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_Get_Params_Data));
      new (data()) LevelDBDatabase_Get_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_Get_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_Get_Params_Data>(index_);
    }
    LevelDBDatabase_Get_Params_Data* operator->() { return data(); }

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
  LevelDBDatabase_Get_Params_Data();
  ~LevelDBDatabase_Get_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_Get_Params_Data) == 16,
              "Bad sizeof(LevelDBDatabase_Get_Params_Data)");
class  LevelDBDatabase_Get_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_Get_ResponseParams_Data));
      new (data()) LevelDBDatabase_Get_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_Get_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_Get_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_Get_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  LevelDBDatabase_Get_ResponseParams_Data();
  ~LevelDBDatabase_Get_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_Get_ResponseParams_Data) == 24,
              "Bad sizeof(LevelDBDatabase_Get_ResponseParams_Data)");
class  LevelDBDatabase_GetPrefixed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_GetPrefixed_Params_Data));
      new (data()) LevelDBDatabase_GetPrefixed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_GetPrefixed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_GetPrefixed_Params_Data>(index_);
    }
    LevelDBDatabase_GetPrefixed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key_prefix;

 private:
  LevelDBDatabase_GetPrefixed_Params_Data();
  ~LevelDBDatabase_GetPrefixed_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_GetPrefixed_Params_Data) == 16,
              "Bad sizeof(LevelDBDatabase_GetPrefixed_Params_Data)");
class  LevelDBDatabase_GetPrefixed_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_GetPrefixed_ResponseParams_Data));
      new (data()) LevelDBDatabase_GetPrefixed_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_GetPrefixed_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_GetPrefixed_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_GetPrefixed_ResponseParams_Data* operator->() { return data(); }

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
  LevelDBDatabase_GetPrefixed_ResponseParams_Data();
  ~LevelDBDatabase_GetPrefixed_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_GetPrefixed_ResponseParams_Data) == 24,
              "Bad sizeof(LevelDBDatabase_GetPrefixed_ResponseParams_Data)");
class  LevelDBDatabase_CopyPrefixed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_CopyPrefixed_Params_Data));
      new (data()) LevelDBDatabase_CopyPrefixed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_CopyPrefixed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_CopyPrefixed_Params_Data>(index_);
    }
    LevelDBDatabase_CopyPrefixed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> source_key_prefix;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> destination_key_prefix;

 private:
  LevelDBDatabase_CopyPrefixed_Params_Data();
  ~LevelDBDatabase_CopyPrefixed_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_CopyPrefixed_Params_Data) == 24,
              "Bad sizeof(LevelDBDatabase_CopyPrefixed_Params_Data)");
class  LevelDBDatabase_CopyPrefixed_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_CopyPrefixed_ResponseParams_Data));
      new (data()) LevelDBDatabase_CopyPrefixed_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_CopyPrefixed_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_CopyPrefixed_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_CopyPrefixed_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  LevelDBDatabase_CopyPrefixed_ResponseParams_Data();
  ~LevelDBDatabase_CopyPrefixed_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_CopyPrefixed_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBDatabase_CopyPrefixed_ResponseParams_Data)");
class  LevelDBDatabase_GetSnapshot_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_GetSnapshot_Params_Data));
      new (data()) LevelDBDatabase_GetSnapshot_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_GetSnapshot_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_GetSnapshot_Params_Data>(index_);
    }
    LevelDBDatabase_GetSnapshot_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  LevelDBDatabase_GetSnapshot_Params_Data();
  ~LevelDBDatabase_GetSnapshot_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_GetSnapshot_Params_Data) == 8,
              "Bad sizeof(LevelDBDatabase_GetSnapshot_Params_Data)");
class  LevelDBDatabase_GetSnapshot_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_GetSnapshot_ResponseParams_Data));
      new (data()) LevelDBDatabase_GetSnapshot_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_GetSnapshot_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_GetSnapshot_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_GetSnapshot_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> snapshot;

 private:
  LevelDBDatabase_GetSnapshot_ResponseParams_Data();
  ~LevelDBDatabase_GetSnapshot_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_GetSnapshot_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBDatabase_GetSnapshot_ResponseParams_Data)");
class  LevelDBDatabase_ReleaseSnapshot_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_ReleaseSnapshot_Params_Data));
      new (data()) LevelDBDatabase_ReleaseSnapshot_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_ReleaseSnapshot_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_ReleaseSnapshot_Params_Data>(index_);
    }
    LevelDBDatabase_ReleaseSnapshot_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> snapshot;

 private:
  LevelDBDatabase_ReleaseSnapshot_Params_Data();
  ~LevelDBDatabase_ReleaseSnapshot_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_ReleaseSnapshot_Params_Data) == 16,
              "Bad sizeof(LevelDBDatabase_ReleaseSnapshot_Params_Data)");
class  LevelDBDatabase_GetFromSnapshot_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_GetFromSnapshot_Params_Data));
      new (data()) LevelDBDatabase_GetFromSnapshot_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_GetFromSnapshot_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_GetFromSnapshot_Params_Data>(index_);
    }
    LevelDBDatabase_GetFromSnapshot_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> snapshot;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key;

 private:
  LevelDBDatabase_GetFromSnapshot_Params_Data();
  ~LevelDBDatabase_GetFromSnapshot_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_GetFromSnapshot_Params_Data) == 24,
              "Bad sizeof(LevelDBDatabase_GetFromSnapshot_Params_Data)");
class  LevelDBDatabase_GetFromSnapshot_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_GetFromSnapshot_ResponseParams_Data));
      new (data()) LevelDBDatabase_GetFromSnapshot_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_GetFromSnapshot_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_GetFromSnapshot_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_GetFromSnapshot_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  LevelDBDatabase_GetFromSnapshot_ResponseParams_Data();
  ~LevelDBDatabase_GetFromSnapshot_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_GetFromSnapshot_ResponseParams_Data) == 24,
              "Bad sizeof(LevelDBDatabase_GetFromSnapshot_ResponseParams_Data)");
class  LevelDBDatabase_NewIterator_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_NewIterator_Params_Data));
      new (data()) LevelDBDatabase_NewIterator_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_NewIterator_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_NewIterator_Params_Data>(index_);
    }
    LevelDBDatabase_NewIterator_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  LevelDBDatabase_NewIterator_Params_Data();
  ~LevelDBDatabase_NewIterator_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_NewIterator_Params_Data) == 8,
              "Bad sizeof(LevelDBDatabase_NewIterator_Params_Data)");
class  LevelDBDatabase_NewIterator_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_NewIterator_ResponseParams_Data));
      new (data()) LevelDBDatabase_NewIterator_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_NewIterator_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_NewIterator_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_NewIterator_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> iterator;

 private:
  LevelDBDatabase_NewIterator_ResponseParams_Data();
  ~LevelDBDatabase_NewIterator_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_NewIterator_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBDatabase_NewIterator_ResponseParams_Data)");
class  LevelDBDatabase_NewIteratorFromSnapshot_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_NewIteratorFromSnapshot_Params_Data));
      new (data()) LevelDBDatabase_NewIteratorFromSnapshot_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_NewIteratorFromSnapshot_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_NewIteratorFromSnapshot_Params_Data>(index_);
    }
    LevelDBDatabase_NewIteratorFromSnapshot_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> snapshot;

 private:
  LevelDBDatabase_NewIteratorFromSnapshot_Params_Data();
  ~LevelDBDatabase_NewIteratorFromSnapshot_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_NewIteratorFromSnapshot_Params_Data) == 16,
              "Bad sizeof(LevelDBDatabase_NewIteratorFromSnapshot_Params_Data)");
class  LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams_Data));
      new (data()) LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> iterator;

 private:
  LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams_Data();
  ~LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams_Data) == 16,
              "Bad sizeof(LevelDBDatabase_NewIteratorFromSnapshot_ResponseParams_Data)");
class  LevelDBDatabase_ReleaseIterator_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_ReleaseIterator_Params_Data));
      new (data()) LevelDBDatabase_ReleaseIterator_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_ReleaseIterator_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_ReleaseIterator_Params_Data>(index_);
    }
    LevelDBDatabase_ReleaseIterator_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> iterator;

 private:
  LevelDBDatabase_ReleaseIterator_Params_Data();
  ~LevelDBDatabase_ReleaseIterator_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_ReleaseIterator_Params_Data) == 16,
              "Bad sizeof(LevelDBDatabase_ReleaseIterator_Params_Data)");
class  LevelDBDatabase_IteratorSeekToFirst_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_IteratorSeekToFirst_Params_Data));
      new (data()) LevelDBDatabase_IteratorSeekToFirst_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_IteratorSeekToFirst_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_IteratorSeekToFirst_Params_Data>(index_);
    }
    LevelDBDatabase_IteratorSeekToFirst_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> iterator;

 private:
  LevelDBDatabase_IteratorSeekToFirst_Params_Data();
  ~LevelDBDatabase_IteratorSeekToFirst_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_IteratorSeekToFirst_Params_Data) == 16,
              "Bad sizeof(LevelDBDatabase_IteratorSeekToFirst_Params_Data)");
class  LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data));
      new (data()) LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t valid : 1;
  uint8_t pad0_[3];
  int32_t status;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data();
  ~LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data) == 32,
              "Bad sizeof(LevelDBDatabase_IteratorSeekToFirst_ResponseParams_Data)");
class  LevelDBDatabase_IteratorSeekToLast_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_IteratorSeekToLast_Params_Data));
      new (data()) LevelDBDatabase_IteratorSeekToLast_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_IteratorSeekToLast_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_IteratorSeekToLast_Params_Data>(index_);
    }
    LevelDBDatabase_IteratorSeekToLast_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> iterator;

 private:
  LevelDBDatabase_IteratorSeekToLast_Params_Data();
  ~LevelDBDatabase_IteratorSeekToLast_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_IteratorSeekToLast_Params_Data) == 16,
              "Bad sizeof(LevelDBDatabase_IteratorSeekToLast_Params_Data)");
class  LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data));
      new (data()) LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t valid : 1;
  uint8_t pad0_[3];
  int32_t status;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data();
  ~LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data) == 32,
              "Bad sizeof(LevelDBDatabase_IteratorSeekToLast_ResponseParams_Data)");
class  LevelDBDatabase_IteratorSeek_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_IteratorSeek_Params_Data));
      new (data()) LevelDBDatabase_IteratorSeek_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_IteratorSeek_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_IteratorSeek_Params_Data>(index_);
    }
    LevelDBDatabase_IteratorSeek_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> iterator;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> target;

 private:
  LevelDBDatabase_IteratorSeek_Params_Data();
  ~LevelDBDatabase_IteratorSeek_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_IteratorSeek_Params_Data) == 24,
              "Bad sizeof(LevelDBDatabase_IteratorSeek_Params_Data)");
class  LevelDBDatabase_IteratorSeek_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_IteratorSeek_ResponseParams_Data));
      new (data()) LevelDBDatabase_IteratorSeek_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_IteratorSeek_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_IteratorSeek_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_IteratorSeek_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t valid : 1;
  uint8_t pad0_[3];
  int32_t status;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  LevelDBDatabase_IteratorSeek_ResponseParams_Data();
  ~LevelDBDatabase_IteratorSeek_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_IteratorSeek_ResponseParams_Data) == 32,
              "Bad sizeof(LevelDBDatabase_IteratorSeek_ResponseParams_Data)");
class  LevelDBDatabase_IteratorNext_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_IteratorNext_Params_Data));
      new (data()) LevelDBDatabase_IteratorNext_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_IteratorNext_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_IteratorNext_Params_Data>(index_);
    }
    LevelDBDatabase_IteratorNext_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> iterator;

 private:
  LevelDBDatabase_IteratorNext_Params_Data();
  ~LevelDBDatabase_IteratorNext_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_IteratorNext_Params_Data) == 16,
              "Bad sizeof(LevelDBDatabase_IteratorNext_Params_Data)");
class  LevelDBDatabase_IteratorNext_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_IteratorNext_ResponseParams_Data));
      new (data()) LevelDBDatabase_IteratorNext_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_IteratorNext_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_IteratorNext_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_IteratorNext_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t valid : 1;
  uint8_t pad0_[3];
  int32_t status;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  LevelDBDatabase_IteratorNext_ResponseParams_Data();
  ~LevelDBDatabase_IteratorNext_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_IteratorNext_ResponseParams_Data) == 32,
              "Bad sizeof(LevelDBDatabase_IteratorNext_ResponseParams_Data)");
class  LevelDBDatabase_IteratorPrev_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_IteratorPrev_Params_Data));
      new (data()) LevelDBDatabase_IteratorPrev_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_IteratorPrev_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_IteratorPrev_Params_Data>(index_);
    }
    LevelDBDatabase_IteratorPrev_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> iterator;

 private:
  LevelDBDatabase_IteratorPrev_Params_Data();
  ~LevelDBDatabase_IteratorPrev_Params_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_IteratorPrev_Params_Data) == 16,
              "Bad sizeof(LevelDBDatabase_IteratorPrev_Params_Data)");
class  LevelDBDatabase_IteratorPrev_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LevelDBDatabase_IteratorPrev_ResponseParams_Data));
      new (data()) LevelDBDatabase_IteratorPrev_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LevelDBDatabase_IteratorPrev_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LevelDBDatabase_IteratorPrev_ResponseParams_Data>(index_);
    }
    LevelDBDatabase_IteratorPrev_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t valid : 1;
  uint8_t pad0_[3];
  int32_t status;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  LevelDBDatabase_IteratorPrev_ResponseParams_Data();
  ~LevelDBDatabase_IteratorPrev_ResponseParams_Data() = delete;
};
static_assert(sizeof(LevelDBDatabase_IteratorPrev_ResponseParams_Data) == 32,
              "Bad sizeof(LevelDBDatabase_IteratorPrev_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace leveldb

#endif  // COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_SHARED_INTERNAL_H_