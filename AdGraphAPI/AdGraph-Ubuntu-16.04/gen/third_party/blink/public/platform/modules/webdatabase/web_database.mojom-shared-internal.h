// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBDATABASE_WEB_DATABASE_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBDATABASE_WEB_DATABASE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/file.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebDatabase_UpdateSize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabase_UpdateSize_Params_Data));
      new (data()) WebDatabase_UpdateSize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabase_UpdateSize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabase_UpdateSize_Params_Data>(index_);
    }
    WebDatabase_UpdateSize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;
  int64_t size;

 private:
  WebDatabase_UpdateSize_Params_Data();
  ~WebDatabase_UpdateSize_Params_Data() = delete;
};
static_assert(sizeof(WebDatabase_UpdateSize_Params_Data) == 32,
              "Bad sizeof(WebDatabase_UpdateSize_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebDatabase_CloseImmediately_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabase_CloseImmediately_Params_Data));
      new (data()) WebDatabase_CloseImmediately_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabase_CloseImmediately_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabase_CloseImmediately_Params_Data>(index_);
    }
    WebDatabase_CloseImmediately_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;

 private:
  WebDatabase_CloseImmediately_Params_Data();
  ~WebDatabase_CloseImmediately_Params_Data() = delete;
};
static_assert(sizeof(WebDatabase_CloseImmediately_Params_Data) == 24,
              "Bad sizeof(WebDatabase_CloseImmediately_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebDatabaseHost_OpenFile_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_OpenFile_Params_Data));
      new (data()) WebDatabaseHost_OpenFile_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_OpenFile_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_OpenFile_Params_Data>(index_);
    }
    WebDatabaseHost_OpenFile_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> vfs_file_name;
  int32_t desired_flags;
  uint8_t padfinal_[4];

 private:
  WebDatabaseHost_OpenFile_Params_Data();
  ~WebDatabaseHost_OpenFile_Params_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_OpenFile_Params_Data) == 24,
              "Bad sizeof(WebDatabaseHost_OpenFile_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebDatabaseHost_OpenFile_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_OpenFile_ResponseParams_Data));
      new (data()) WebDatabaseHost_OpenFile_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_OpenFile_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_OpenFile_ResponseParams_Data>(index_);
    }
    WebDatabaseHost_OpenFile_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> file;

 private:
  WebDatabaseHost_OpenFile_ResponseParams_Data();
  ~WebDatabaseHost_OpenFile_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_OpenFile_ResponseParams_Data) == 16,
              "Bad sizeof(WebDatabaseHost_OpenFile_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebDatabaseHost_DeleteFile_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_DeleteFile_Params_Data));
      new (data()) WebDatabaseHost_DeleteFile_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_DeleteFile_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_DeleteFile_Params_Data>(index_);
    }
    WebDatabaseHost_DeleteFile_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> vfs_file_name;
  uint8_t sync_dir : 1;
  uint8_t padfinal_[7];

 private:
  WebDatabaseHost_DeleteFile_Params_Data();
  ~WebDatabaseHost_DeleteFile_Params_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_DeleteFile_Params_Data) == 24,
              "Bad sizeof(WebDatabaseHost_DeleteFile_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebDatabaseHost_DeleteFile_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_DeleteFile_ResponseParams_Data));
      new (data()) WebDatabaseHost_DeleteFile_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_DeleteFile_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_DeleteFile_ResponseParams_Data>(index_);
    }
    WebDatabaseHost_DeleteFile_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t sqlite_error_code;
  uint8_t padfinal_[4];

 private:
  WebDatabaseHost_DeleteFile_ResponseParams_Data();
  ~WebDatabaseHost_DeleteFile_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_DeleteFile_ResponseParams_Data) == 16,
              "Bad sizeof(WebDatabaseHost_DeleteFile_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebDatabaseHost_GetFileAttributes_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_GetFileAttributes_Params_Data));
      new (data()) WebDatabaseHost_GetFileAttributes_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_GetFileAttributes_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_GetFileAttributes_Params_Data>(index_);
    }
    WebDatabaseHost_GetFileAttributes_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> vfs_file_name;

 private:
  WebDatabaseHost_GetFileAttributes_Params_Data();
  ~WebDatabaseHost_GetFileAttributes_Params_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_GetFileAttributes_Params_Data) == 16,
              "Bad sizeof(WebDatabaseHost_GetFileAttributes_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebDatabaseHost_GetFileAttributes_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_GetFileAttributes_ResponseParams_Data));
      new (data()) WebDatabaseHost_GetFileAttributes_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_GetFileAttributes_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_GetFileAttributes_ResponseParams_Data>(index_);
    }
    WebDatabaseHost_GetFileAttributes_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t attributes;
  uint8_t padfinal_[4];

 private:
  WebDatabaseHost_GetFileAttributes_ResponseParams_Data();
  ~WebDatabaseHost_GetFileAttributes_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_GetFileAttributes_ResponseParams_Data) == 16,
              "Bad sizeof(WebDatabaseHost_GetFileAttributes_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebDatabaseHost_GetFileSize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_GetFileSize_Params_Data));
      new (data()) WebDatabaseHost_GetFileSize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_GetFileSize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_GetFileSize_Params_Data>(index_);
    }
    WebDatabaseHost_GetFileSize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> vfs_file_name;

 private:
  WebDatabaseHost_GetFileSize_Params_Data();
  ~WebDatabaseHost_GetFileSize_Params_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_GetFileSize_Params_Data) == 16,
              "Bad sizeof(WebDatabaseHost_GetFileSize_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebDatabaseHost_GetFileSize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_GetFileSize_ResponseParams_Data));
      new (data()) WebDatabaseHost_GetFileSize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_GetFileSize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_GetFileSize_ResponseParams_Data>(index_);
    }
    WebDatabaseHost_GetFileSize_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t size;

 private:
  WebDatabaseHost_GetFileSize_ResponseParams_Data();
  ~WebDatabaseHost_GetFileSize_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_GetFileSize_ResponseParams_Data) == 16,
              "Bad sizeof(WebDatabaseHost_GetFileSize_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebDatabaseHost_SetFileSize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_SetFileSize_Params_Data));
      new (data()) WebDatabaseHost_SetFileSize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_SetFileSize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_SetFileSize_Params_Data>(index_);
    }
    WebDatabaseHost_SetFileSize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> vfs_file_name;
  int64_t expected_size;

 private:
  WebDatabaseHost_SetFileSize_Params_Data();
  ~WebDatabaseHost_SetFileSize_Params_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_SetFileSize_Params_Data) == 24,
              "Bad sizeof(WebDatabaseHost_SetFileSize_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebDatabaseHost_SetFileSize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_SetFileSize_ResponseParams_Data));
      new (data()) WebDatabaseHost_SetFileSize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_SetFileSize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_SetFileSize_ResponseParams_Data>(index_);
    }
    WebDatabaseHost_SetFileSize_ResponseParams_Data* operator->() { return data(); }

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
  WebDatabaseHost_SetFileSize_ResponseParams_Data();
  ~WebDatabaseHost_SetFileSize_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_SetFileSize_ResponseParams_Data) == 16,
              "Bad sizeof(WebDatabaseHost_SetFileSize_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebDatabaseHost_GetSpaceAvailable_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_GetSpaceAvailable_Params_Data));
      new (data()) WebDatabaseHost_GetSpaceAvailable_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_GetSpaceAvailable_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_GetSpaceAvailable_Params_Data>(index_);
    }
    WebDatabaseHost_GetSpaceAvailable_Params_Data* operator->() { return data(); }

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
  WebDatabaseHost_GetSpaceAvailable_Params_Data();
  ~WebDatabaseHost_GetSpaceAvailable_Params_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_GetSpaceAvailable_Params_Data) == 16,
              "Bad sizeof(WebDatabaseHost_GetSpaceAvailable_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data));
      new (data()) WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data>(index_);
    }
    WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t space_available;

 private:
  WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data();
  ~WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data) == 16,
              "Bad sizeof(WebDatabaseHost_GetSpaceAvailable_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebDatabaseHost_Opened_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_Opened_Params_Data));
      new (data()) WebDatabaseHost_Opened_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_Opened_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_Opened_Params_Data>(index_);
    }
    WebDatabaseHost_Opened_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> database_name;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> database_description;
  int64_t estimated_size;

 private:
  WebDatabaseHost_Opened_Params_Data();
  ~WebDatabaseHost_Opened_Params_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_Opened_Params_Data) == 40,
              "Bad sizeof(WebDatabaseHost_Opened_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebDatabaseHost_Modified_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_Modified_Params_Data));
      new (data()) WebDatabaseHost_Modified_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_Modified_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_Modified_Params_Data>(index_);
    }
    WebDatabaseHost_Modified_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> database_name;

 private:
  WebDatabaseHost_Modified_Params_Data();
  ~WebDatabaseHost_Modified_Params_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_Modified_Params_Data) == 24,
              "Bad sizeof(WebDatabaseHost_Modified_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebDatabaseHost_Closed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_Closed_Params_Data));
      new (data()) WebDatabaseHost_Closed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_Closed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_Closed_Params_Data>(index_);
    }
    WebDatabaseHost_Closed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> database_name;

 private:
  WebDatabaseHost_Closed_Params_Data();
  ~WebDatabaseHost_Closed_Params_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_Closed_Params_Data) == 24,
              "Bad sizeof(WebDatabaseHost_Closed_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebDatabaseHost_HandleSqliteError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebDatabaseHost_HandleSqliteError_Params_Data));
      new (data()) WebDatabaseHost_HandleSqliteError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebDatabaseHost_HandleSqliteError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebDatabaseHost_HandleSqliteError_Params_Data>(index_);
    }
    WebDatabaseHost_HandleSqliteError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> database_name;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  WebDatabaseHost_HandleSqliteError_Params_Data();
  ~WebDatabaseHost_HandleSqliteError_Params_Data() = delete;
};
static_assert(sizeof(WebDatabaseHost_HandleSqliteError_Params_Data) == 32,
              "Bad sizeof(WebDatabaseHost_HandleSqliteError_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBDATABASE_WEB_DATABASE_MOJOM_SHARED_INTERNAL_H_