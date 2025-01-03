// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_FILE_PUBLIC_MOJOM_FILE_SYSTEM_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_FILE_PUBLIC_MOJOM_FILE_SYSTEM_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "components/services/filesystem/public/interfaces/directory.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file_error.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace file {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  FileSystem_GetDirectory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystem_GetDirectory_Params_Data));
      new (data()) FileSystem_GetDirectory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystem_GetDirectory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystem_GetDirectory_Params_Data>(index_);
    }
    FileSystem_GetDirectory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data dir;
  uint8_t padfinal_[4];

 private:
  FileSystem_GetDirectory_Params_Data();
  ~FileSystem_GetDirectory_Params_Data() = delete;
};
static_assert(sizeof(FileSystem_GetDirectory_Params_Data) == 16,
              "Bad sizeof(FileSystem_GetDirectory_Params_Data)");
class  FileSystem_GetDirectory_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystem_GetDirectory_ResponseParams_Data));
      new (data()) FileSystem_GetDirectory_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystem_GetDirectory_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystem_GetDirectory_ResponseParams_Data>(index_);
    }
    FileSystem_GetDirectory_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FileSystem_GetDirectory_ResponseParams_Data();
  ~FileSystem_GetDirectory_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileSystem_GetDirectory_ResponseParams_Data) == 8,
              "Bad sizeof(FileSystem_GetDirectory_ResponseParams_Data)");
class  FileSystem_GetSubDirectory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystem_GetSubDirectory_Params_Data));
      new (data()) FileSystem_GetSubDirectory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystem_GetSubDirectory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystem_GetSubDirectory_Params_Data>(index_);
    }
    FileSystem_GetSubDirectory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> dir_path;
  mojo::internal::Handle_Data dir;
  uint8_t padfinal_[4];

 private:
  FileSystem_GetSubDirectory_Params_Data();
  ~FileSystem_GetSubDirectory_Params_Data() = delete;
};
static_assert(sizeof(FileSystem_GetSubDirectory_Params_Data) == 24,
              "Bad sizeof(FileSystem_GetSubDirectory_Params_Data)");
class  FileSystem_GetSubDirectory_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileSystem_GetSubDirectory_ResponseParams_Data));
      new (data()) FileSystem_GetSubDirectory_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileSystem_GetSubDirectory_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileSystem_GetSubDirectory_ResponseParams_Data>(index_);
    }
    FileSystem_GetSubDirectory_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t err;
  uint8_t padfinal_[4];

 private:
  FileSystem_GetSubDirectory_ResponseParams_Data();
  ~FileSystem_GetSubDirectory_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileSystem_GetSubDirectory_ResponseParams_Data) == 16,
              "Bad sizeof(FileSystem_GetSubDirectory_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace file

#endif  // SERVICES_FILE_PUBLIC_MOJOM_FILE_SYSTEM_MOJOM_SHARED_INTERNAL_H_