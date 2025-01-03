// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "components/services/filesystem/public/interfaces/file.mojom-shared-internal.h"
#include "components/services/filesystem/public/interfaces/types.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file_error.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace filesystem {
namespace mojom {
namespace internal {
class FileOpenDetails_Data;
class FileOpenResult_Data;

#pragma pack(push, 1)
class  FileOpenDetails_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileOpenDetails_Data));
      new (data()) FileOpenDetails_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileOpenDetails_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileOpenDetails_Data>(index_);
    }
    FileOpenDetails_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> path;
  uint32_t open_flags;
  uint8_t padfinal_[4];

 private:
  FileOpenDetails_Data();
  ~FileOpenDetails_Data() = delete;
};
static_assert(sizeof(FileOpenDetails_Data) == 24,
              "Bad sizeof(FileOpenDetails_Data)");
// Used by FileOpenDetails::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct FileOpenDetails_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  FileOpenDetails_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~FileOpenDetails_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    FileOpenDetails_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    FileOpenDetails_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  FileOpenResult_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileOpenResult_Data));
      new (data()) FileOpenResult_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileOpenResult_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileOpenResult_Data>(index_);
    }
    FileOpenResult_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> path;
  int32_t error;
  uint8_t pad1_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> file_handle;

 private:
  FileOpenResult_Data();
  ~FileOpenResult_Data() = delete;
};
static_assert(sizeof(FileOpenResult_Data) == 32,
              "Bad sizeof(FileOpenResult_Data)");
// Used by FileOpenResult::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct FileOpenResult_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  FileOpenResult_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~FileOpenResult_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    FileOpenResult_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    FileOpenResult_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Directory_Read_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_Read_Params_Data));
      new (data()) Directory_Read_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_Read_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_Read_Params_Data>(index_);
    }
    Directory_Read_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Directory_Read_Params_Data();
  ~Directory_Read_Params_Data() = delete;
};
static_assert(sizeof(Directory_Read_Params_Data) == 8,
              "Bad sizeof(Directory_Read_Params_Data)");
class  Directory_Read_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_Read_ResponseParams_Data));
      new (data()) Directory_Read_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_Read_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_Read_ResponseParams_Data>(index_);
    }
    Directory_Read_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::filesystem::mojom::internal::DirectoryEntry_Data>>> directory_contents;

 private:
  Directory_Read_ResponseParams_Data();
  ~Directory_Read_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_Read_ResponseParams_Data) == 24,
              "Bad sizeof(Directory_Read_ResponseParams_Data)");
class  Directory_OpenFile_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_OpenFile_Params_Data));
      new (data()) Directory_OpenFile_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_OpenFile_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_OpenFile_Params_Data>(index_);
    }
    Directory_OpenFile_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> path;
  mojo::internal::Handle_Data file;
  uint32_t open_flags;

 private:
  Directory_OpenFile_Params_Data();
  ~Directory_OpenFile_Params_Data() = delete;
};
static_assert(sizeof(Directory_OpenFile_Params_Data) == 24,
              "Bad sizeof(Directory_OpenFile_Params_Data)");
class  Directory_OpenFile_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_OpenFile_ResponseParams_Data));
      new (data()) Directory_OpenFile_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_OpenFile_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_OpenFile_ResponseParams_Data>(index_);
    }
    Directory_OpenFile_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  Directory_OpenFile_ResponseParams_Data();
  ~Directory_OpenFile_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_OpenFile_ResponseParams_Data) == 16,
              "Bad sizeof(Directory_OpenFile_ResponseParams_Data)");
class  Directory_OpenFileHandle_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_OpenFileHandle_Params_Data));
      new (data()) Directory_OpenFileHandle_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_OpenFileHandle_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_OpenFileHandle_Params_Data>(index_);
    }
    Directory_OpenFileHandle_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> path;
  uint32_t open_flags;
  uint8_t padfinal_[4];

 private:
  Directory_OpenFileHandle_Params_Data();
  ~Directory_OpenFileHandle_Params_Data() = delete;
};
static_assert(sizeof(Directory_OpenFileHandle_Params_Data) == 24,
              "Bad sizeof(Directory_OpenFileHandle_Params_Data)");
class  Directory_OpenFileHandle_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_OpenFileHandle_ResponseParams_Data));
      new (data()) Directory_OpenFileHandle_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_OpenFileHandle_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_OpenFileHandle_ResponseParams_Data>(index_);
    }
    Directory_OpenFileHandle_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> file_handle;

 private:
  Directory_OpenFileHandle_ResponseParams_Data();
  ~Directory_OpenFileHandle_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_OpenFileHandle_ResponseParams_Data) == 24,
              "Bad sizeof(Directory_OpenFileHandle_ResponseParams_Data)");
class  Directory_OpenFileHandles_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_OpenFileHandles_Params_Data));
      new (data()) Directory_OpenFileHandles_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_OpenFileHandles_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_OpenFileHandles_Params_Data>(index_);
    }
    Directory_OpenFileHandles_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::FileOpenDetails_Data>>> files;

 private:
  Directory_OpenFileHandles_Params_Data();
  ~Directory_OpenFileHandles_Params_Data() = delete;
};
static_assert(sizeof(Directory_OpenFileHandles_Params_Data) == 16,
              "Bad sizeof(Directory_OpenFileHandles_Params_Data)");
class  Directory_OpenFileHandles_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_OpenFileHandles_ResponseParams_Data));
      new (data()) Directory_OpenFileHandles_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_OpenFileHandles_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_OpenFileHandles_ResponseParams_Data>(index_);
    }
    Directory_OpenFileHandles_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::FileOpenResult_Data>>> results;

 private:
  Directory_OpenFileHandles_ResponseParams_Data();
  ~Directory_OpenFileHandles_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_OpenFileHandles_ResponseParams_Data) == 16,
              "Bad sizeof(Directory_OpenFileHandles_ResponseParams_Data)");
class  Directory_OpenDirectory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_OpenDirectory_Params_Data));
      new (data()) Directory_OpenDirectory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_OpenDirectory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_OpenDirectory_Params_Data>(index_);
    }
    Directory_OpenDirectory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> path;
  mojo::internal::Handle_Data directory;
  uint32_t open_flags;

 private:
  Directory_OpenDirectory_Params_Data();
  ~Directory_OpenDirectory_Params_Data() = delete;
};
static_assert(sizeof(Directory_OpenDirectory_Params_Data) == 24,
              "Bad sizeof(Directory_OpenDirectory_Params_Data)");
class  Directory_OpenDirectory_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_OpenDirectory_ResponseParams_Data));
      new (data()) Directory_OpenDirectory_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_OpenDirectory_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_OpenDirectory_ResponseParams_Data>(index_);
    }
    Directory_OpenDirectory_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  Directory_OpenDirectory_ResponseParams_Data();
  ~Directory_OpenDirectory_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_OpenDirectory_ResponseParams_Data) == 16,
              "Bad sizeof(Directory_OpenDirectory_ResponseParams_Data)");
class  Directory_Rename_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_Rename_Params_Data));
      new (data()) Directory_Rename_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_Rename_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_Rename_Params_Data>(index_);
    }
    Directory_Rename_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> path;
  mojo::internal::Pointer<mojo::internal::String_Data> new_path;

 private:
  Directory_Rename_Params_Data();
  ~Directory_Rename_Params_Data() = delete;
};
static_assert(sizeof(Directory_Rename_Params_Data) == 24,
              "Bad sizeof(Directory_Rename_Params_Data)");
class  Directory_Rename_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_Rename_ResponseParams_Data));
      new (data()) Directory_Rename_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_Rename_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_Rename_ResponseParams_Data>(index_);
    }
    Directory_Rename_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  Directory_Rename_ResponseParams_Data();
  ~Directory_Rename_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_Rename_ResponseParams_Data) == 16,
              "Bad sizeof(Directory_Rename_ResponseParams_Data)");
class  Directory_Replace_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_Replace_Params_Data));
      new (data()) Directory_Replace_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_Replace_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_Replace_Params_Data>(index_);
    }
    Directory_Replace_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> path;
  mojo::internal::Pointer<mojo::internal::String_Data> new_path;

 private:
  Directory_Replace_Params_Data();
  ~Directory_Replace_Params_Data() = delete;
};
static_assert(sizeof(Directory_Replace_Params_Data) == 24,
              "Bad sizeof(Directory_Replace_Params_Data)");
class  Directory_Replace_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_Replace_ResponseParams_Data));
      new (data()) Directory_Replace_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_Replace_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_Replace_ResponseParams_Data>(index_);
    }
    Directory_Replace_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  Directory_Replace_ResponseParams_Data();
  ~Directory_Replace_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_Replace_ResponseParams_Data) == 16,
              "Bad sizeof(Directory_Replace_ResponseParams_Data)");
class  Directory_Delete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_Delete_Params_Data));
      new (data()) Directory_Delete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_Delete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_Delete_Params_Data>(index_);
    }
    Directory_Delete_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> path;
  uint32_t delete_flags;
  uint8_t padfinal_[4];

 private:
  Directory_Delete_Params_Data();
  ~Directory_Delete_Params_Data() = delete;
};
static_assert(sizeof(Directory_Delete_Params_Data) == 24,
              "Bad sizeof(Directory_Delete_Params_Data)");
class  Directory_Delete_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_Delete_ResponseParams_Data));
      new (data()) Directory_Delete_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_Delete_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_Delete_ResponseParams_Data>(index_);
    }
    Directory_Delete_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  Directory_Delete_ResponseParams_Data();
  ~Directory_Delete_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_Delete_ResponseParams_Data) == 16,
              "Bad sizeof(Directory_Delete_ResponseParams_Data)");
class  Directory_Exists_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_Exists_Params_Data));
      new (data()) Directory_Exists_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_Exists_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_Exists_Params_Data>(index_);
    }
    Directory_Exists_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> path;

 private:
  Directory_Exists_Params_Data();
  ~Directory_Exists_Params_Data() = delete;
};
static_assert(sizeof(Directory_Exists_Params_Data) == 16,
              "Bad sizeof(Directory_Exists_Params_Data)");
class  Directory_Exists_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_Exists_ResponseParams_Data));
      new (data()) Directory_Exists_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_Exists_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_Exists_ResponseParams_Data>(index_);
    }
    Directory_Exists_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t exists : 1;
  uint8_t padfinal_[3];

 private:
  Directory_Exists_ResponseParams_Data();
  ~Directory_Exists_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_Exists_ResponseParams_Data) == 16,
              "Bad sizeof(Directory_Exists_ResponseParams_Data)");
class  Directory_IsWritable_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_IsWritable_Params_Data));
      new (data()) Directory_IsWritable_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_IsWritable_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_IsWritable_Params_Data>(index_);
    }
    Directory_IsWritable_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> path;

 private:
  Directory_IsWritable_Params_Data();
  ~Directory_IsWritable_Params_Data() = delete;
};
static_assert(sizeof(Directory_IsWritable_Params_Data) == 16,
              "Bad sizeof(Directory_IsWritable_Params_Data)");
class  Directory_IsWritable_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_IsWritable_ResponseParams_Data));
      new (data()) Directory_IsWritable_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_IsWritable_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_IsWritable_ResponseParams_Data>(index_);
    }
    Directory_IsWritable_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t is_writable : 1;
  uint8_t padfinal_[3];

 private:
  Directory_IsWritable_ResponseParams_Data();
  ~Directory_IsWritable_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_IsWritable_ResponseParams_Data) == 16,
              "Bad sizeof(Directory_IsWritable_ResponseParams_Data)");
class  Directory_Flush_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_Flush_Params_Data));
      new (data()) Directory_Flush_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_Flush_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_Flush_Params_Data>(index_);
    }
    Directory_Flush_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Directory_Flush_Params_Data();
  ~Directory_Flush_Params_Data() = delete;
};
static_assert(sizeof(Directory_Flush_Params_Data) == 8,
              "Bad sizeof(Directory_Flush_Params_Data)");
class  Directory_Flush_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_Flush_ResponseParams_Data));
      new (data()) Directory_Flush_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_Flush_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_Flush_ResponseParams_Data>(index_);
    }
    Directory_Flush_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  Directory_Flush_ResponseParams_Data();
  ~Directory_Flush_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_Flush_ResponseParams_Data) == 16,
              "Bad sizeof(Directory_Flush_ResponseParams_Data)");
class  Directory_StatFile_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_StatFile_Params_Data));
      new (data()) Directory_StatFile_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_StatFile_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_StatFile_Params_Data>(index_);
    }
    Directory_StatFile_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> path;

 private:
  Directory_StatFile_Params_Data();
  ~Directory_StatFile_Params_Data() = delete;
};
static_assert(sizeof(Directory_StatFile_Params_Data) == 16,
              "Bad sizeof(Directory_StatFile_Params_Data)");
class  Directory_StatFile_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_StatFile_ResponseParams_Data));
      new (data()) Directory_StatFile_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_StatFile_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_StatFile_ResponseParams_Data>(index_);
    }
    Directory_StatFile_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::filesystem::mojom::internal::FileInformation_Data> file_information;

 private:
  Directory_StatFile_ResponseParams_Data();
  ~Directory_StatFile_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_StatFile_ResponseParams_Data) == 24,
              "Bad sizeof(Directory_StatFile_ResponseParams_Data)");
class  Directory_Clone_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_Clone_Params_Data));
      new (data()) Directory_Clone_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_Clone_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_Clone_Params_Data>(index_);
    }
    Directory_Clone_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data directory;
  uint8_t padfinal_[4];

 private:
  Directory_Clone_Params_Data();
  ~Directory_Clone_Params_Data() = delete;
};
static_assert(sizeof(Directory_Clone_Params_Data) == 16,
              "Bad sizeof(Directory_Clone_Params_Data)");
class  Directory_ReadEntireFile_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_ReadEntireFile_Params_Data));
      new (data()) Directory_ReadEntireFile_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_ReadEntireFile_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_ReadEntireFile_Params_Data>(index_);
    }
    Directory_ReadEntireFile_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> path;

 private:
  Directory_ReadEntireFile_Params_Data();
  ~Directory_ReadEntireFile_Params_Data() = delete;
};
static_assert(sizeof(Directory_ReadEntireFile_Params_Data) == 16,
              "Bad sizeof(Directory_ReadEntireFile_Params_Data)");
class  Directory_ReadEntireFile_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_ReadEntireFile_ResponseParams_Data));
      new (data()) Directory_ReadEntireFile_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_ReadEntireFile_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_ReadEntireFile_ResponseParams_Data>(index_);
    }
    Directory_ReadEntireFile_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  Directory_ReadEntireFile_ResponseParams_Data();
  ~Directory_ReadEntireFile_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_ReadEntireFile_ResponseParams_Data) == 24,
              "Bad sizeof(Directory_ReadEntireFile_ResponseParams_Data)");
class  Directory_WriteFile_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_WriteFile_Params_Data));
      new (data()) Directory_WriteFile_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_WriteFile_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_WriteFile_Params_Data>(index_);
    }
    Directory_WriteFile_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> path;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  Directory_WriteFile_Params_Data();
  ~Directory_WriteFile_Params_Data() = delete;
};
static_assert(sizeof(Directory_WriteFile_Params_Data) == 24,
              "Bad sizeof(Directory_WriteFile_Params_Data)");
class  Directory_WriteFile_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Directory_WriteFile_ResponseParams_Data));
      new (data()) Directory_WriteFile_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Directory_WriteFile_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Directory_WriteFile_ResponseParams_Data>(index_);
    }
    Directory_WriteFile_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  Directory_WriteFile_ResponseParams_Data();
  ~Directory_WriteFile_ResponseParams_Data() = delete;
};
static_assert(sizeof(Directory_WriteFile_ResponseParams_Data) == 16,
              "Bad sizeof(Directory_WriteFile_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace filesystem

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_SHARED_INTERNAL_H_