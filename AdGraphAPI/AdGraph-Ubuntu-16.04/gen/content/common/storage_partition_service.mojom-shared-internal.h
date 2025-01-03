// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_STORAGE_PARTITION_SERVICE_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_STORAGE_PARTITION_SERVICE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "content/common/leveldb_wrapper.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
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

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SessionStorageNamespace_OpenArea_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SessionStorageNamespace_OpenArea_Params_Data));
      new (data()) SessionStorageNamespace_OpenArea_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SessionStorageNamespace_OpenArea_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SessionStorageNamespace_OpenArea_Params_Data>(index_);
    }
    SessionStorageNamespace_OpenArea_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  mojo::internal::AssociatedEndpointHandle_Data database;
  uint8_t padfinal_[4];

 private:
  SessionStorageNamespace_OpenArea_Params_Data();
  ~SessionStorageNamespace_OpenArea_Params_Data() = delete;
};
static_assert(sizeof(SessionStorageNamespace_OpenArea_Params_Data) == 24,
              "Bad sizeof(SessionStorageNamespace_OpenArea_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SessionStorageNamespace_Clone_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SessionStorageNamespace_Clone_Params_Data));
      new (data()) SessionStorageNamespace_Clone_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SessionStorageNamespace_Clone_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SessionStorageNamespace_Clone_Params_Data>(index_);
    }
    SessionStorageNamespace_Clone_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> clone_to_namespace;

 private:
  SessionStorageNamespace_Clone_Params_Data();
  ~SessionStorageNamespace_Clone_Params_Data() = delete;
};
static_assert(sizeof(SessionStorageNamespace_Clone_Params_Data) == 16,
              "Bad sizeof(SessionStorageNamespace_Clone_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) StoragePartitionService_OpenLocalStorage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StoragePartitionService_OpenLocalStorage_Params_Data));
      new (data()) StoragePartitionService_OpenLocalStorage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StoragePartitionService_OpenLocalStorage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StoragePartitionService_OpenLocalStorage_Params_Data>(index_);
    }
    StoragePartitionService_OpenLocalStorage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  mojo::internal::Handle_Data database;
  uint8_t padfinal_[4];

 private:
  StoragePartitionService_OpenLocalStorage_Params_Data();
  ~StoragePartitionService_OpenLocalStorage_Params_Data() = delete;
};
static_assert(sizeof(StoragePartitionService_OpenLocalStorage_Params_Data) == 24,
              "Bad sizeof(StoragePartitionService_OpenLocalStorage_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) StoragePartitionService_OpenSessionStorage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StoragePartitionService_OpenSessionStorage_Params_Data));
      new (data()) StoragePartitionService_OpenSessionStorage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StoragePartitionService_OpenSessionStorage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StoragePartitionService_OpenSessionStorage_Params_Data>(index_);
    }
    StoragePartitionService_OpenSessionStorage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> namespace_id;
  mojo::internal::Handle_Data session_namespace;
  uint8_t padfinal_[4];

 private:
  StoragePartitionService_OpenSessionStorage_Params_Data();
  ~StoragePartitionService_OpenSessionStorage_Params_Data() = delete;
};
static_assert(sizeof(StoragePartitionService_OpenSessionStorage_Params_Data) == 24,
              "Bad sizeof(StoragePartitionService_OpenSessionStorage_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_STORAGE_PARTITION_SERVICE_MOJOM_SHARED_INTERNAL_H_