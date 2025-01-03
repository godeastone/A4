// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_INDEXED_DB_INDEXED_DB_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_INDEXED_DB_INDEXED_DB_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/file_path.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/blob/blob.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace indexed_db {
namespace mojom {
namespace internal {
class Key_Data;
class KeyPath_Data;
class KeyRange_Data;
class IndexMetadata_Data;
class ObjectStoreMetadata_Data;
class DatabaseMetadata_Data;
class IndexKeys_Data;
class FileInfo_Data;
class BlobInfo_Data;
class Value_Data;
class ReturnValue_Data;
class Observation_Data;
class ObserverTransaction_Data;
class ObserverChanges_Data;
class KeyData_Data;
class KeyPathData_Data;

struct CursorDirection_Data {
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

struct DataLoss_Data {
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

struct DatalessKeyType_Data {
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

struct OperationType_Data {
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

struct PutMode_Data {
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

struct TaskType_Data {
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

struct TransactionMode_Data {
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

struct Status_Data {
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

#pragma pack(push, 1)


class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) KeyData_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  KeyData_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~KeyData_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(KeyData_Data));
      new (data()) KeyData_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) KeyData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    KeyData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<KeyData_Data>(index_);
    }
    KeyData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context,
                       bool inlined);

  bool is_null() const { return size == 0; }

  void set_null() {
    size = 0U;
    tag = static_cast<KeyData_Tag>(0);
    data.unknown = 0U;
  }

  enum class KeyData_Tag : uint32_t {

    KEY_ARRAY,
    BINARY,
    STRING,
    DATE,
    NUMBER,
    OTHER,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::Key_Data>>> f_key_array;
    mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> f_binary;
    mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> f_string;
    double f_date;
    double f_number;
    int32_t f_other;
    uint64_t unknown;
  };

  uint32_t size;
  KeyData_Tag tag;
  Union_ data;
};
static_assert(sizeof(KeyData_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(KeyData_Data)");


class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) KeyPathData_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  KeyPathData_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~KeyPathData_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(KeyPathData_Data));
      new (data()) KeyPathData_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) KeyPathData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    KeyPathData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<KeyPathData_Data>(index_);
    }
    KeyPathData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context,
                       bool inlined);

  bool is_null() const { return size == 0; }

  void set_null() {
    size = 0U;
    tag = static_cast<KeyPathData_Tag>(0);
    data.unknown = 0U;
  }

  enum class KeyPathData_Tag : uint32_t {

    STRING,
    STRING_ARRAY,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> f_string;
    mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data>>> f_string_array;
    uint64_t unknown;
  };

  uint32_t size;
  KeyPathData_Tag tag;
  Union_ data;
};
static_assert(sizeof(KeyPathData_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(KeyPathData_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Key_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Key_Data));
      new (data()) Key_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Key_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Key_Data>(index_);
    }
    Key_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::KeyData_Data data;

 private:
  Key_Data();
  ~Key_Data() = delete;
};
static_assert(sizeof(Key_Data) == 24,
              "Bad sizeof(Key_Data)");
// Used by Key::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Key_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Key_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Key_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Key_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Key_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) KeyPath_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(KeyPath_Data));
      new (data()) KeyPath_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    KeyPath_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<KeyPath_Data>(index_);
    }
    KeyPath_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::KeyPathData_Data data;

 private:
  KeyPath_Data();
  ~KeyPath_Data() = delete;
};
static_assert(sizeof(KeyPath_Data) == 24,
              "Bad sizeof(KeyPath_Data)");
// Used by KeyPath::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct KeyPath_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  KeyPath_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~KeyPath_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    KeyPath_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    KeyPath_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) KeyRange_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(KeyRange_Data));
      new (data()) KeyRange_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    KeyRange_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<KeyRange_Data>(index_);
    }
    KeyRange_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::Key_Data> lower;
  mojo::internal::Pointer<internal::Key_Data> upper;
  uint8_t lower_open : 1;
  uint8_t upper_open : 1;
  uint8_t padfinal_[7];

 private:
  KeyRange_Data();
  ~KeyRange_Data() = delete;
};
static_assert(sizeof(KeyRange_Data) == 32,
              "Bad sizeof(KeyRange_Data)");
// Used by KeyRange::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct KeyRange_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  KeyRange_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~KeyRange_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    KeyRange_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    KeyRange_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) IndexMetadata_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IndexMetadata_Data));
      new (data()) IndexMetadata_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IndexMetadata_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IndexMetadata_Data>(index_);
    }
    IndexMetadata_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t id;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;
  mojo::internal::Pointer<internal::KeyPath_Data> key_path;
  uint8_t unique : 1;
  uint8_t multi_entry : 1;
  uint8_t padfinal_[7];

 private:
  IndexMetadata_Data();
  ~IndexMetadata_Data() = delete;
};
static_assert(sizeof(IndexMetadata_Data) == 40,
              "Bad sizeof(IndexMetadata_Data)");
// Used by IndexMetadata::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct IndexMetadata_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  IndexMetadata_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~IndexMetadata_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    IndexMetadata_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    IndexMetadata_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ObjectStoreMetadata_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ObjectStoreMetadata_Data));
      new (data()) ObjectStoreMetadata_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ObjectStoreMetadata_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ObjectStoreMetadata_Data>(index_);
    }
    ObjectStoreMetadata_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t id;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;
  mojo::internal::Pointer<internal::KeyPath_Data> key_path;
  uint8_t auto_increment : 1;
  uint8_t pad3_[7];
  int64_t max_index_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::IndexMetadata_Data>>> indexes;

 private:
  ObjectStoreMetadata_Data();
  ~ObjectStoreMetadata_Data() = delete;
};
static_assert(sizeof(ObjectStoreMetadata_Data) == 56,
              "Bad sizeof(ObjectStoreMetadata_Data)");
// Used by ObjectStoreMetadata::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ObjectStoreMetadata_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ObjectStoreMetadata_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ObjectStoreMetadata_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ObjectStoreMetadata_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ObjectStoreMetadata_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) DatabaseMetadata_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DatabaseMetadata_Data));
      new (data()) DatabaseMetadata_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DatabaseMetadata_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DatabaseMetadata_Data>(index_);
    }
    DatabaseMetadata_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t id;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;
  int64_t version;
  int64_t max_object_store_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ObjectStoreMetadata_Data>>> object_stores;

 private:
  DatabaseMetadata_Data();
  ~DatabaseMetadata_Data() = delete;
};
static_assert(sizeof(DatabaseMetadata_Data) == 48,
              "Bad sizeof(DatabaseMetadata_Data)");
// Used by DatabaseMetadata::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DatabaseMetadata_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DatabaseMetadata_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DatabaseMetadata_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DatabaseMetadata_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DatabaseMetadata_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) IndexKeys_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IndexKeys_Data));
      new (data()) IndexKeys_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IndexKeys_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IndexKeys_Data>(index_);
    }
    IndexKeys_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t index_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::Key_Data>>> index_keys;

 private:
  IndexKeys_Data();
  ~IndexKeys_Data() = delete;
};
static_assert(sizeof(IndexKeys_Data) == 24,
              "Bad sizeof(IndexKeys_Data)");
// Used by IndexKeys::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct IndexKeys_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  IndexKeys_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~IndexKeys_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    IndexKeys_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    IndexKeys_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FileInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileInfo_Data));
      new (data()) FileInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileInfo_Data>(index_);
    }
    FileInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> path;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> last_modified;

 private:
  FileInfo_Data();
  ~FileInfo_Data() = delete;
};
static_assert(sizeof(FileInfo_Data) == 32,
              "Bad sizeof(FileInfo_Data)");
// Used by FileInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct FileInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  FileInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~FileInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    FileInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    FileInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BlobInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobInfo_Data));
      new (data()) BlobInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobInfo_Data>(index_);
    }
    BlobInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data blob;
  mojo::internal::Pointer<mojo::internal::String_Data> uuid;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> mime_type;
  int64_t size;
  mojo::internal::Pointer<internal::FileInfo_Data> file;

 private:
  BlobInfo_Data();
  ~BlobInfo_Data() = delete;
};
static_assert(sizeof(BlobInfo_Data) == 48,
              "Bad sizeof(BlobInfo_Data)");
// Used by BlobInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct BlobInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  BlobInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~BlobInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    BlobInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    BlobInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Value_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Value_Data));
      new (data()) Value_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Value_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Value_Data>(index_);
    }
    Value_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> bits;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::BlobInfo_Data>>> blob_or_file_info;

 private:
  Value_Data();
  ~Value_Data() = delete;
};
static_assert(sizeof(Value_Data) == 24,
              "Bad sizeof(Value_Data)");
// Used by Value::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Value_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Value_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Value_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Value_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Value_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ReturnValue_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ReturnValue_Data));
      new (data()) ReturnValue_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ReturnValue_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ReturnValue_Data>(index_);
    }
    ReturnValue_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::Value_Data> value;
  mojo::internal::Pointer<internal::Key_Data> primary_key;
  mojo::internal::Pointer<internal::KeyPath_Data> key_path;

 private:
  ReturnValue_Data();
  ~ReturnValue_Data() = delete;
};
static_assert(sizeof(ReturnValue_Data) == 32,
              "Bad sizeof(ReturnValue_Data)");
// Used by ReturnValue::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ReturnValue_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ReturnValue_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ReturnValue_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ReturnValue_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ReturnValue_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Observation_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Observation_Data));
      new (data()) Observation_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Observation_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Observation_Data>(index_);
    }
    Observation_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t object_store_id;
  int32_t type;
  uint8_t pad1_[4];
  mojo::internal::Pointer<internal::KeyRange_Data> key_range;
  mojo::internal::Pointer<internal::Value_Data> value;

 private:
  Observation_Data();
  ~Observation_Data() = delete;
};
static_assert(sizeof(Observation_Data) == 40,
              "Bad sizeof(Observation_Data)");
// Used by Observation::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Observation_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Observation_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Observation_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Observation_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Observation_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ObserverTransaction_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ObserverTransaction_Data));
      new (data()) ObserverTransaction_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ObserverTransaction_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ObserverTransaction_Data>(index_);
    }
    ObserverTransaction_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t id;
  mojo::internal::Pointer<mojo::internal::Array_Data<int64_t>> scope;

 private:
  ObserverTransaction_Data();
  ~ObserverTransaction_Data() = delete;
};
static_assert(sizeof(ObserverTransaction_Data) == 24,
              "Bad sizeof(ObserverTransaction_Data)");
// Used by ObserverTransaction::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ObserverTransaction_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ObserverTransaction_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ObserverTransaction_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ObserverTransaction_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ObserverTransaction_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ObserverChanges_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ObserverChanges_Data));
      new (data()) ObserverChanges_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ObserverChanges_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ObserverChanges_Data>(index_);
    }
    ObserverChanges_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Map_Data<int32_t, mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>>>> observation_index_map;
  mojo::internal::Pointer<mojo::internal::Map_Data<int32_t, mojo::internal::Pointer<internal::ObserverTransaction_Data>>> transaction_map;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::Observation_Data>>> observations;

 private:
  ObserverChanges_Data();
  ~ObserverChanges_Data() = delete;
};
static_assert(sizeof(ObserverChanges_Data) == 32,
              "Bad sizeof(ObserverChanges_Data)");
// Used by ObserverChanges::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ObserverChanges_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ObserverChanges_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ObserverChanges_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ObserverChanges_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ObserverChanges_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Callbacks_Error_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Callbacks_Error_Params_Data));
      new (data()) Callbacks_Error_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Callbacks_Error_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Callbacks_Error_Params_Data>(index_);
    }
    Callbacks_Error_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t code;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> message;

 private:
  Callbacks_Error_Params_Data();
  ~Callbacks_Error_Params_Data() = delete;
};
static_assert(sizeof(Callbacks_Error_Params_Data) == 24,
              "Bad sizeof(Callbacks_Error_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Callbacks_SuccessStringList_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Callbacks_SuccessStringList_Params_Data));
      new (data()) Callbacks_SuccessStringList_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Callbacks_SuccessStringList_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Callbacks_SuccessStringList_Params_Data>(index_);
    }
    Callbacks_SuccessStringList_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data>>> value;

 private:
  Callbacks_SuccessStringList_Params_Data();
  ~Callbacks_SuccessStringList_Params_Data() = delete;
};
static_assert(sizeof(Callbacks_SuccessStringList_Params_Data) == 16,
              "Bad sizeof(Callbacks_SuccessStringList_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Callbacks_Blocked_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Callbacks_Blocked_Params_Data));
      new (data()) Callbacks_Blocked_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Callbacks_Blocked_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Callbacks_Blocked_Params_Data>(index_);
    }
    Callbacks_Blocked_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t existing_version;

 private:
  Callbacks_Blocked_Params_Data();
  ~Callbacks_Blocked_Params_Data() = delete;
};
static_assert(sizeof(Callbacks_Blocked_Params_Data) == 16,
              "Bad sizeof(Callbacks_Blocked_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Callbacks_UpgradeNeeded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Callbacks_UpgradeNeeded_Params_Data));
      new (data()) Callbacks_UpgradeNeeded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Callbacks_UpgradeNeeded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Callbacks_UpgradeNeeded_Params_Data>(index_);
    }
    Callbacks_UpgradeNeeded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data database;
  int64_t old_version;
  int32_t data_loss;
  uint8_t pad2_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> data_loss_message;
  mojo::internal::Pointer<internal::DatabaseMetadata_Data> db_metadata;

 private:
  Callbacks_UpgradeNeeded_Params_Data();
  ~Callbacks_UpgradeNeeded_Params_Data() = delete;
};
static_assert(sizeof(Callbacks_UpgradeNeeded_Params_Data) == 48,
              "Bad sizeof(Callbacks_UpgradeNeeded_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Callbacks_SuccessDatabase_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Callbacks_SuccessDatabase_Params_Data));
      new (data()) Callbacks_SuccessDatabase_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Callbacks_SuccessDatabase_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Callbacks_SuccessDatabase_Params_Data>(index_);
    }
    Callbacks_SuccessDatabase_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data database;
  mojo::internal::Pointer<internal::DatabaseMetadata_Data> metadata;

 private:
  Callbacks_SuccessDatabase_Params_Data();
  ~Callbacks_SuccessDatabase_Params_Data() = delete;
};
static_assert(sizeof(Callbacks_SuccessDatabase_Params_Data) == 24,
              "Bad sizeof(Callbacks_SuccessDatabase_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Callbacks_SuccessCursor_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Callbacks_SuccessCursor_Params_Data));
      new (data()) Callbacks_SuccessCursor_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Callbacks_SuccessCursor_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Callbacks_SuccessCursor_Params_Data>(index_);
    }
    Callbacks_SuccessCursor_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data cursor;
  mojo::internal::Pointer<internal::Key_Data> key;
  mojo::internal::Pointer<internal::Key_Data> primary_key;
  mojo::internal::Pointer<internal::Value_Data> value;

 private:
  Callbacks_SuccessCursor_Params_Data();
  ~Callbacks_SuccessCursor_Params_Data() = delete;
};
static_assert(sizeof(Callbacks_SuccessCursor_Params_Data) == 40,
              "Bad sizeof(Callbacks_SuccessCursor_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Callbacks_SuccessValue_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Callbacks_SuccessValue_Params_Data));
      new (data()) Callbacks_SuccessValue_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Callbacks_SuccessValue_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Callbacks_SuccessValue_Params_Data>(index_);
    }
    Callbacks_SuccessValue_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ReturnValue_Data> value;

 private:
  Callbacks_SuccessValue_Params_Data();
  ~Callbacks_SuccessValue_Params_Data() = delete;
};
static_assert(sizeof(Callbacks_SuccessValue_Params_Data) == 16,
              "Bad sizeof(Callbacks_SuccessValue_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Callbacks_SuccessCursorContinue_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Callbacks_SuccessCursorContinue_Params_Data));
      new (data()) Callbacks_SuccessCursorContinue_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Callbacks_SuccessCursorContinue_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Callbacks_SuccessCursorContinue_Params_Data>(index_);
    }
    Callbacks_SuccessCursorContinue_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::Key_Data> key;
  mojo::internal::Pointer<internal::Key_Data> primary_key;
  mojo::internal::Pointer<internal::Value_Data> value;

 private:
  Callbacks_SuccessCursorContinue_Params_Data();
  ~Callbacks_SuccessCursorContinue_Params_Data() = delete;
};
static_assert(sizeof(Callbacks_SuccessCursorContinue_Params_Data) == 32,
              "Bad sizeof(Callbacks_SuccessCursorContinue_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Callbacks_SuccessCursorPrefetch_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Callbacks_SuccessCursorPrefetch_Params_Data));
      new (data()) Callbacks_SuccessCursorPrefetch_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Callbacks_SuccessCursorPrefetch_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Callbacks_SuccessCursorPrefetch_Params_Data>(index_);
    }
    Callbacks_SuccessCursorPrefetch_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::Key_Data>>> keys;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::Key_Data>>> primary_keys;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::Value_Data>>> values;

 private:
  Callbacks_SuccessCursorPrefetch_Params_Data();
  ~Callbacks_SuccessCursorPrefetch_Params_Data() = delete;
};
static_assert(sizeof(Callbacks_SuccessCursorPrefetch_Params_Data) == 32,
              "Bad sizeof(Callbacks_SuccessCursorPrefetch_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Callbacks_SuccessArray_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Callbacks_SuccessArray_Params_Data));
      new (data()) Callbacks_SuccessArray_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Callbacks_SuccessArray_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Callbacks_SuccessArray_Params_Data>(index_);
    }
    Callbacks_SuccessArray_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ReturnValue_Data>>> values;

 private:
  Callbacks_SuccessArray_Params_Data();
  ~Callbacks_SuccessArray_Params_Data() = delete;
};
static_assert(sizeof(Callbacks_SuccessArray_Params_Data) == 16,
              "Bad sizeof(Callbacks_SuccessArray_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Callbacks_SuccessKey_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Callbacks_SuccessKey_Params_Data));
      new (data()) Callbacks_SuccessKey_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Callbacks_SuccessKey_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Callbacks_SuccessKey_Params_Data>(index_);
    }
    Callbacks_SuccessKey_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::Key_Data> key;

 private:
  Callbacks_SuccessKey_Params_Data();
  ~Callbacks_SuccessKey_Params_Data() = delete;
};
static_assert(sizeof(Callbacks_SuccessKey_Params_Data) == 16,
              "Bad sizeof(Callbacks_SuccessKey_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Callbacks_SuccessInteger_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Callbacks_SuccessInteger_Params_Data));
      new (data()) Callbacks_SuccessInteger_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Callbacks_SuccessInteger_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Callbacks_SuccessInteger_Params_Data>(index_);
    }
    Callbacks_SuccessInteger_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t value;

 private:
  Callbacks_SuccessInteger_Params_Data();
  ~Callbacks_SuccessInteger_Params_Data() = delete;
};
static_assert(sizeof(Callbacks_SuccessInteger_Params_Data) == 16,
              "Bad sizeof(Callbacks_SuccessInteger_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Callbacks_Success_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Callbacks_Success_Params_Data));
      new (data()) Callbacks_Success_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Callbacks_Success_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Callbacks_Success_Params_Data>(index_);
    }
    Callbacks_Success_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Callbacks_Success_Params_Data();
  ~Callbacks_Success_Params_Data() = delete;
};
static_assert(sizeof(Callbacks_Success_Params_Data) == 8,
              "Bad sizeof(Callbacks_Success_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) DatabaseCallbacks_ForcedClose_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DatabaseCallbacks_ForcedClose_Params_Data));
      new (data()) DatabaseCallbacks_ForcedClose_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DatabaseCallbacks_ForcedClose_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DatabaseCallbacks_ForcedClose_Params_Data>(index_);
    }
    DatabaseCallbacks_ForcedClose_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DatabaseCallbacks_ForcedClose_Params_Data();
  ~DatabaseCallbacks_ForcedClose_Params_Data() = delete;
};
static_assert(sizeof(DatabaseCallbacks_ForcedClose_Params_Data) == 8,
              "Bad sizeof(DatabaseCallbacks_ForcedClose_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) DatabaseCallbacks_VersionChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DatabaseCallbacks_VersionChange_Params_Data));
      new (data()) DatabaseCallbacks_VersionChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DatabaseCallbacks_VersionChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DatabaseCallbacks_VersionChange_Params_Data>(index_);
    }
    DatabaseCallbacks_VersionChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t old_version;
  int64_t new_version;

 private:
  DatabaseCallbacks_VersionChange_Params_Data();
  ~DatabaseCallbacks_VersionChange_Params_Data() = delete;
};
static_assert(sizeof(DatabaseCallbacks_VersionChange_Params_Data) == 24,
              "Bad sizeof(DatabaseCallbacks_VersionChange_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) DatabaseCallbacks_Abort_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DatabaseCallbacks_Abort_Params_Data));
      new (data()) DatabaseCallbacks_Abort_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DatabaseCallbacks_Abort_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DatabaseCallbacks_Abort_Params_Data>(index_);
    }
    DatabaseCallbacks_Abort_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int32_t code;
  uint8_t pad1_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> message;

 private:
  DatabaseCallbacks_Abort_Params_Data();
  ~DatabaseCallbacks_Abort_Params_Data() = delete;
};
static_assert(sizeof(DatabaseCallbacks_Abort_Params_Data) == 32,
              "Bad sizeof(DatabaseCallbacks_Abort_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) DatabaseCallbacks_Complete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DatabaseCallbacks_Complete_Params_Data));
      new (data()) DatabaseCallbacks_Complete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DatabaseCallbacks_Complete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DatabaseCallbacks_Complete_Params_Data>(index_);
    }
    DatabaseCallbacks_Complete_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;

 private:
  DatabaseCallbacks_Complete_Params_Data();
  ~DatabaseCallbacks_Complete_Params_Data() = delete;
};
static_assert(sizeof(DatabaseCallbacks_Complete_Params_Data) == 16,
              "Bad sizeof(DatabaseCallbacks_Complete_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) DatabaseCallbacks_Changes_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DatabaseCallbacks_Changes_Params_Data));
      new (data()) DatabaseCallbacks_Changes_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DatabaseCallbacks_Changes_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DatabaseCallbacks_Changes_Params_Data>(index_);
    }
    DatabaseCallbacks_Changes_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ObserverChanges_Data> changes;

 private:
  DatabaseCallbacks_Changes_Params_Data();
  ~DatabaseCallbacks_Changes_Params_Data() = delete;
};
static_assert(sizeof(DatabaseCallbacks_Changes_Params_Data) == 16,
              "Bad sizeof(DatabaseCallbacks_Changes_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Cursor_Advance_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Cursor_Advance_Params_Data));
      new (data()) Cursor_Advance_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Cursor_Advance_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Cursor_Advance_Params_Data>(index_);
    }
    Cursor_Advance_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t count;
  mojo::internal::AssociatedInterface_Data callbacks;
  uint8_t padfinal_[4];

 private:
  Cursor_Advance_Params_Data();
  ~Cursor_Advance_Params_Data() = delete;
};
static_assert(sizeof(Cursor_Advance_Params_Data) == 24,
              "Bad sizeof(Cursor_Advance_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Cursor_Continue_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Cursor_Continue_Params_Data));
      new (data()) Cursor_Continue_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Cursor_Continue_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Cursor_Continue_Params_Data>(index_);
    }
    Cursor_Continue_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::Key_Data> key;
  mojo::internal::Pointer<internal::Key_Data> primary_key;
  mojo::internal::AssociatedInterface_Data callbacks;

 private:
  Cursor_Continue_Params_Data();
  ~Cursor_Continue_Params_Data() = delete;
};
static_assert(sizeof(Cursor_Continue_Params_Data) == 32,
              "Bad sizeof(Cursor_Continue_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Cursor_Prefetch_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Cursor_Prefetch_Params_Data));
      new (data()) Cursor_Prefetch_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Cursor_Prefetch_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Cursor_Prefetch_Params_Data>(index_);
    }
    Cursor_Prefetch_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t count;
  mojo::internal::AssociatedInterface_Data callbacks;
  uint8_t padfinal_[4];

 private:
  Cursor_Prefetch_Params_Data();
  ~Cursor_Prefetch_Params_Data() = delete;
};
static_assert(sizeof(Cursor_Prefetch_Params_Data) == 24,
              "Bad sizeof(Cursor_Prefetch_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Cursor_PrefetchReset_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Cursor_PrefetchReset_Params_Data));
      new (data()) Cursor_PrefetchReset_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Cursor_PrefetchReset_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Cursor_PrefetchReset_Params_Data>(index_);
    }
    Cursor_PrefetchReset_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t used_prefetches;
  int32_t unused_prefetches;

 private:
  Cursor_PrefetchReset_Params_Data();
  ~Cursor_PrefetchReset_Params_Data() = delete;
};
static_assert(sizeof(Cursor_PrefetchReset_Params_Data) == 16,
              "Bad sizeof(Cursor_PrefetchReset_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Database_CreateObjectStore_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Database_CreateObjectStore_Params_Data));
      new (data()) Database_CreateObjectStore_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Database_CreateObjectStore_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Database_CreateObjectStore_Params_Data>(index_);
    }
    Database_CreateObjectStore_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;
  mojo::internal::Pointer<internal::KeyPath_Data> key_path;
  uint8_t auto_increment : 1;
  uint8_t padfinal_[7];

 private:
  Database_CreateObjectStore_Params_Data();
  ~Database_CreateObjectStore_Params_Data() = delete;
};
static_assert(sizeof(Database_CreateObjectStore_Params_Data) == 48,
              "Bad sizeof(Database_CreateObjectStore_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Database_DeleteObjectStore_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Database_DeleteObjectStore_Params_Data));
      new (data()) Database_DeleteObjectStore_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Database_DeleteObjectStore_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Database_DeleteObjectStore_Params_Data>(index_);
    }
    Database_DeleteObjectStore_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;

 private:
  Database_DeleteObjectStore_Params_Data();
  ~Database_DeleteObjectStore_Params_Data() = delete;
};
static_assert(sizeof(Database_DeleteObjectStore_Params_Data) == 24,
              "Bad sizeof(Database_DeleteObjectStore_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Database_RenameObjectStore_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Database_RenameObjectStore_Params_Data));
      new (data()) Database_RenameObjectStore_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Database_RenameObjectStore_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Database_RenameObjectStore_Params_Data>(index_);
    }
    Database_RenameObjectStore_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> new_name;

 private:
  Database_RenameObjectStore_Params_Data();
  ~Database_RenameObjectStore_Params_Data() = delete;
};
static_assert(sizeof(Database_RenameObjectStore_Params_Data) == 32,
              "Bad sizeof(Database_RenameObjectStore_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Database_CreateTransaction_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Database_CreateTransaction_Params_Data));
      new (data()) Database_CreateTransaction_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Database_CreateTransaction_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Database_CreateTransaction_Params_Data>(index_);
    }
    Database_CreateTransaction_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<int64_t>> object_store_ids;
  int32_t mode;
  uint8_t padfinal_[4];

 private:
  Database_CreateTransaction_Params_Data();
  ~Database_CreateTransaction_Params_Data() = delete;
};
static_assert(sizeof(Database_CreateTransaction_Params_Data) == 32,
              "Bad sizeof(Database_CreateTransaction_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Database_Close_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Database_Close_Params_Data));
      new (data()) Database_Close_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Database_Close_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Database_Close_Params_Data>(index_);
    }
    Database_Close_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Database_Close_Params_Data();
  ~Database_Close_Params_Data() = delete;
};
static_assert(sizeof(Database_Close_Params_Data) == 8,
              "Bad sizeof(Database_Close_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Database_VersionChangeIgnored_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Database_VersionChangeIgnored_Params_Data));
      new (data()) Database_VersionChangeIgnored_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Database_VersionChangeIgnored_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Database_VersionChangeIgnored_Params_Data>(index_);
    }
    Database_VersionChangeIgnored_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Database_VersionChangeIgnored_Params_Data();
  ~Database_VersionChangeIgnored_Params_Data() = delete;
};
static_assert(sizeof(Database_VersionChangeIgnored_Params_Data) == 8,
              "Bad sizeof(Database_VersionChangeIgnored_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Database_AddObserver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Database_AddObserver_Params_Data));
      new (data()) Database_AddObserver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Database_AddObserver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Database_AddObserver_Params_Data>(index_);
    }
    Database_AddObserver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int32_t observer_id;
  uint8_t include_transaction : 1;
  uint8_t no_records : 1;
  uint8_t values : 1;
  uint8_t pad4_[1];
  uint16_t operation_types;

 private:
  Database_AddObserver_Params_Data();
  ~Database_AddObserver_Params_Data() = delete;
};
static_assert(sizeof(Database_AddObserver_Params_Data) == 24,
              "Bad sizeof(Database_AddObserver_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Database_RemoveObservers_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Database_RemoveObservers_Params_Data));
      new (data()) Database_RemoveObservers_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Database_RemoveObservers_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Database_RemoveObservers_Params_Data>(index_);
    }
    Database_RemoveObservers_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> observers;

 private:
  Database_RemoveObservers_Params_Data();
  ~Database_RemoveObservers_Params_Data() = delete;
};
static_assert(sizeof(Database_RemoveObservers_Params_Data) == 16,
              "Bad sizeof(Database_RemoveObservers_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Database_Get_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Database_Get_Params_Data));
      new (data()) Database_Get_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Database_Get_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Database_Get_Params_Data>(index_);
    }
    Database_Get_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;
  int64_t index_id;
  mojo::internal::Pointer<internal::KeyRange_Data> key_range;
  uint8_t key_only : 1;
  uint8_t pad4_[3];
  mojo::internal::AssociatedInterface_Data callbacks;
  uint8_t padfinal_[4];

 private:
  Database_Get_Params_Data();
  ~Database_Get_Params_Data() = delete;
};
static_assert(sizeof(Database_Get_Params_Data) == 56,
              "Bad sizeof(Database_Get_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Database_GetAll_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Database_GetAll_Params_Data));
      new (data()) Database_GetAll_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Database_GetAll_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Database_GetAll_Params_Data>(index_);
    }
    Database_GetAll_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;
  int64_t index_id;
  mojo::internal::Pointer<internal::KeyRange_Data> key_range;
  uint8_t key_only : 1;
  uint8_t pad4_[7];
  int64_t max_count;
  mojo::internal::AssociatedInterface_Data callbacks;

 private:
  Database_GetAll_Params_Data();
  ~Database_GetAll_Params_Data() = delete;
};
static_assert(sizeof(Database_GetAll_Params_Data) == 64,
              "Bad sizeof(Database_GetAll_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Database_Put_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Database_Put_Params_Data));
      new (data()) Database_Put_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Database_Put_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Database_Put_Params_Data>(index_);
    }
    Database_Put_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;
  mojo::internal::Pointer<internal::Value_Data> value;
  mojo::internal::Pointer<internal::Key_Data> key;
  int32_t mode;
  uint8_t pad4_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::IndexKeys_Data>>> index_keys;
  mojo::internal::AssociatedInterface_Data callbacks;

 private:
  Database_Put_Params_Data();
  ~Database_Put_Params_Data() = delete;
};
static_assert(sizeof(Database_Put_Params_Data) == 64,
              "Bad sizeof(Database_Put_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Database_SetIndexKeys_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Database_SetIndexKeys_Params_Data));
      new (data()) Database_SetIndexKeys_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Database_SetIndexKeys_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Database_SetIndexKeys_Params_Data>(index_);
    }
    Database_SetIndexKeys_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;
  mojo::internal::Pointer<internal::Key_Data> primary_key;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::IndexKeys_Data>>> index_keys;

 private:
  Database_SetIndexKeys_Params_Data();
  ~Database_SetIndexKeys_Params_Data() = delete;
};
static_assert(sizeof(Database_SetIndexKeys_Params_Data) == 40,
              "Bad sizeof(Database_SetIndexKeys_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Database_SetIndexesReady_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Database_SetIndexesReady_Params_Data));
      new (data()) Database_SetIndexesReady_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Database_SetIndexesReady_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Database_SetIndexesReady_Params_Data>(index_);
    }
    Database_SetIndexesReady_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<int64_t>> index_ids;

 private:
  Database_SetIndexesReady_Params_Data();
  ~Database_SetIndexesReady_Params_Data() = delete;
};
static_assert(sizeof(Database_SetIndexesReady_Params_Data) == 32,
              "Bad sizeof(Database_SetIndexesReady_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Database_OpenCursor_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Database_OpenCursor_Params_Data));
      new (data()) Database_OpenCursor_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Database_OpenCursor_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Database_OpenCursor_Params_Data>(index_);
    }
    Database_OpenCursor_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;
  int64_t index_id;
  mojo::internal::Pointer<internal::KeyRange_Data> key_range;
  int32_t direction;
  uint8_t key_only : 1;
  uint8_t pad5_[3];
  int32_t task_type;
  mojo::internal::AssociatedInterface_Data callbacks;
  uint8_t padfinal_[4];

 private:
  Database_OpenCursor_Params_Data();
  ~Database_OpenCursor_Params_Data() = delete;
};
static_assert(sizeof(Database_OpenCursor_Params_Data) == 64,
              "Bad sizeof(Database_OpenCursor_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Database_Count_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Database_Count_Params_Data));
      new (data()) Database_Count_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Database_Count_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Database_Count_Params_Data>(index_);
    }
    Database_Count_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;
  int64_t index_id;
  mojo::internal::Pointer<internal::KeyRange_Data> key_range;
  mojo::internal::AssociatedInterface_Data callbacks;

 private:
  Database_Count_Params_Data();
  ~Database_Count_Params_Data() = delete;
};
static_assert(sizeof(Database_Count_Params_Data) == 48,
              "Bad sizeof(Database_Count_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Database_DeleteRange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Database_DeleteRange_Params_Data));
      new (data()) Database_DeleteRange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Database_DeleteRange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Database_DeleteRange_Params_Data>(index_);
    }
    Database_DeleteRange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;
  mojo::internal::Pointer<internal::KeyRange_Data> key_range;
  mojo::internal::AssociatedInterface_Data callbacks;

 private:
  Database_DeleteRange_Params_Data();
  ~Database_DeleteRange_Params_Data() = delete;
};
static_assert(sizeof(Database_DeleteRange_Params_Data) == 40,
              "Bad sizeof(Database_DeleteRange_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Database_Clear_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Database_Clear_Params_Data));
      new (data()) Database_Clear_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Database_Clear_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Database_Clear_Params_Data>(index_);
    }
    Database_Clear_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;
  mojo::internal::AssociatedInterface_Data callbacks;

 private:
  Database_Clear_Params_Data();
  ~Database_Clear_Params_Data() = delete;
};
static_assert(sizeof(Database_Clear_Params_Data) == 32,
              "Bad sizeof(Database_Clear_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Database_CreateIndex_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Database_CreateIndex_Params_Data));
      new (data()) Database_CreateIndex_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Database_CreateIndex_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Database_CreateIndex_Params_Data>(index_);
    }
    Database_CreateIndex_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;
  int64_t index_id;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;
  mojo::internal::Pointer<internal::KeyPath_Data> key_path;
  uint8_t unique : 1;
  uint8_t multi_entry : 1;
  uint8_t padfinal_[7];

 private:
  Database_CreateIndex_Params_Data();
  ~Database_CreateIndex_Params_Data() = delete;
};
static_assert(sizeof(Database_CreateIndex_Params_Data) == 56,
              "Bad sizeof(Database_CreateIndex_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Database_DeleteIndex_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Database_DeleteIndex_Params_Data));
      new (data()) Database_DeleteIndex_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Database_DeleteIndex_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Database_DeleteIndex_Params_Data>(index_);
    }
    Database_DeleteIndex_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;
  int64_t index_id;

 private:
  Database_DeleteIndex_Params_Data();
  ~Database_DeleteIndex_Params_Data() = delete;
};
static_assert(sizeof(Database_DeleteIndex_Params_Data) == 32,
              "Bad sizeof(Database_DeleteIndex_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Database_RenameIndex_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Database_RenameIndex_Params_Data));
      new (data()) Database_RenameIndex_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Database_RenameIndex_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Database_RenameIndex_Params_Data>(index_);
    }
    Database_RenameIndex_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;
  int64_t object_store_id;
  int64_t index_id;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> new_name;

 private:
  Database_RenameIndex_Params_Data();
  ~Database_RenameIndex_Params_Data() = delete;
};
static_assert(sizeof(Database_RenameIndex_Params_Data) == 40,
              "Bad sizeof(Database_RenameIndex_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Database_Abort_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Database_Abort_Params_Data));
      new (data()) Database_Abort_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Database_Abort_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Database_Abort_Params_Data>(index_);
    }
    Database_Abort_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;

 private:
  Database_Abort_Params_Data();
  ~Database_Abort_Params_Data() = delete;
};
static_assert(sizeof(Database_Abort_Params_Data) == 16,
              "Bad sizeof(Database_Abort_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Database_Commit_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Database_Commit_Params_Data));
      new (data()) Database_Commit_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Database_Commit_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Database_Commit_Params_Data>(index_);
    }
    Database_Commit_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t transaction_id;

 private:
  Database_Commit_Params_Data();
  ~Database_Commit_Params_Data() = delete;
};
static_assert(sizeof(Database_Commit_Params_Data) == 16,
              "Bad sizeof(Database_Commit_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Factory_GetDatabaseNames_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Factory_GetDatabaseNames_Params_Data));
      new (data()) Factory_GetDatabaseNames_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Factory_GetDatabaseNames_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Factory_GetDatabaseNames_Params_Data>(index_);
    }
    Factory_GetDatabaseNames_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data callbacks;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;

 private:
  Factory_GetDatabaseNames_Params_Data();
  ~Factory_GetDatabaseNames_Params_Data() = delete;
};
static_assert(sizeof(Factory_GetDatabaseNames_Params_Data) == 24,
              "Bad sizeof(Factory_GetDatabaseNames_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Factory_Open_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Factory_Open_Params_Data));
      new (data()) Factory_Open_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Factory_Open_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Factory_Open_Params_Data>(index_);
    }
    Factory_Open_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data callbacks;
  mojo::internal::AssociatedInterface_Data database_callbacks;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;
  int64_t version;
  int64_t transaction_id;

 private:
  Factory_Open_Params_Data();
  ~Factory_Open_Params_Data() = delete;
};
static_assert(sizeof(Factory_Open_Params_Data) == 56,
              "Bad sizeof(Factory_Open_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Factory_DeleteDatabase_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Factory_DeleteDatabase_Params_Data));
      new (data()) Factory_DeleteDatabase_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Factory_DeleteDatabase_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Factory_DeleteDatabase_Params_Data>(index_);
    }
    Factory_DeleteDatabase_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data callbacks;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;
  uint8_t force_close : 1;
  uint8_t padfinal_[7];

 private:
  Factory_DeleteDatabase_Params_Data();
  ~Factory_DeleteDatabase_Params_Data() = delete;
};
static_assert(sizeof(Factory_DeleteDatabase_Params_Data) == 40,
              "Bad sizeof(Factory_DeleteDatabase_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Factory_AbortTransactionsAndCompactDatabase_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Factory_AbortTransactionsAndCompactDatabase_Params_Data));
      new (data()) Factory_AbortTransactionsAndCompactDatabase_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Factory_AbortTransactionsAndCompactDatabase_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Factory_AbortTransactionsAndCompactDatabase_Params_Data>(index_);
    }
    Factory_AbortTransactionsAndCompactDatabase_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;

 private:
  Factory_AbortTransactionsAndCompactDatabase_Params_Data();
  ~Factory_AbortTransactionsAndCompactDatabase_Params_Data() = delete;
};
static_assert(sizeof(Factory_AbortTransactionsAndCompactDatabase_Params_Data) == 16,
              "Bad sizeof(Factory_AbortTransactionsAndCompactDatabase_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Factory_AbortTransactionsAndCompactDatabase_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Factory_AbortTransactionsAndCompactDatabase_ResponseParams_Data));
      new (data()) Factory_AbortTransactionsAndCompactDatabase_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Factory_AbortTransactionsAndCompactDatabase_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Factory_AbortTransactionsAndCompactDatabase_ResponseParams_Data>(index_);
    }
    Factory_AbortTransactionsAndCompactDatabase_ResponseParams_Data* operator->() { return data(); }

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
  Factory_AbortTransactionsAndCompactDatabase_ResponseParams_Data();
  ~Factory_AbortTransactionsAndCompactDatabase_ResponseParams_Data() = delete;
};
static_assert(sizeof(Factory_AbortTransactionsAndCompactDatabase_ResponseParams_Data) == 16,
              "Bad sizeof(Factory_AbortTransactionsAndCompactDatabase_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Factory_AbortTransactionsForDatabase_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Factory_AbortTransactionsForDatabase_Params_Data));
      new (data()) Factory_AbortTransactionsForDatabase_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Factory_AbortTransactionsForDatabase_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Factory_AbortTransactionsForDatabase_Params_Data>(index_);
    }
    Factory_AbortTransactionsForDatabase_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;

 private:
  Factory_AbortTransactionsForDatabase_Params_Data();
  ~Factory_AbortTransactionsForDatabase_Params_Data() = delete;
};
static_assert(sizeof(Factory_AbortTransactionsForDatabase_Params_Data) == 16,
              "Bad sizeof(Factory_AbortTransactionsForDatabase_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Factory_AbortTransactionsForDatabase_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Factory_AbortTransactionsForDatabase_ResponseParams_Data));
      new (data()) Factory_AbortTransactionsForDatabase_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Factory_AbortTransactionsForDatabase_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Factory_AbortTransactionsForDatabase_ResponseParams_Data>(index_);
    }
    Factory_AbortTransactionsForDatabase_ResponseParams_Data* operator->() { return data(); }

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
  Factory_AbortTransactionsForDatabase_ResponseParams_Data();
  ~Factory_AbortTransactionsForDatabase_ResponseParams_Data() = delete;
};
static_assert(sizeof(Factory_AbortTransactionsForDatabase_ResponseParams_Data) == 16,
              "Bad sizeof(Factory_AbortTransactionsForDatabase_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace indexed_db

#endif  // CONTENT_COMMON_INDEXED_DB_INDEXED_DB_MOJOM_SHARED_INTERNAL_H_