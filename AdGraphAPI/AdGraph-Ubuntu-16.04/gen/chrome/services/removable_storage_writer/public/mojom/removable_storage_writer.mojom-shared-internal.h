// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_SERVICES_REMOVABLE_STORAGE_WRITER_PUBLIC_MOJOM_REMOVABLE_STORAGE_WRITER_MOJOM_SHARED_INTERNAL_H_
#define CHROME_SERVICES_REMOVABLE_STORAGE_WRITER_PUBLIC_MOJOM_REMOVABLE_STORAGE_WRITER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/file_path.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace chrome {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  RemovableStorageWriter_Write_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemovableStorageWriter_Write_Params_Data));
      new (data()) RemovableStorageWriter_Write_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemovableStorageWriter_Write_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemovableStorageWriter_Write_Params_Data>(index_);
    }
    RemovableStorageWriter_Write_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> source;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> target;
  mojo::internal::Interface_Data client;

 private:
  RemovableStorageWriter_Write_Params_Data();
  ~RemovableStorageWriter_Write_Params_Data() = delete;
};
static_assert(sizeof(RemovableStorageWriter_Write_Params_Data) == 32,
              "Bad sizeof(RemovableStorageWriter_Write_Params_Data)");
class  RemovableStorageWriter_Verify_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemovableStorageWriter_Verify_Params_Data));
      new (data()) RemovableStorageWriter_Verify_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemovableStorageWriter_Verify_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemovableStorageWriter_Verify_Params_Data>(index_);
    }
    RemovableStorageWriter_Verify_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> source;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> target;
  mojo::internal::Interface_Data client;

 private:
  RemovableStorageWriter_Verify_Params_Data();
  ~RemovableStorageWriter_Verify_Params_Data() = delete;
};
static_assert(sizeof(RemovableStorageWriter_Verify_Params_Data) == 32,
              "Bad sizeof(RemovableStorageWriter_Verify_Params_Data)");
class  RemovableStorageWriterClient_Progress_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemovableStorageWriterClient_Progress_Params_Data));
      new (data()) RemovableStorageWriterClient_Progress_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemovableStorageWriterClient_Progress_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemovableStorageWriterClient_Progress_Params_Data>(index_);
    }
    RemovableStorageWriterClient_Progress_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t progress;

 private:
  RemovableStorageWriterClient_Progress_Params_Data();
  ~RemovableStorageWriterClient_Progress_Params_Data() = delete;
};
static_assert(sizeof(RemovableStorageWriterClient_Progress_Params_Data) == 16,
              "Bad sizeof(RemovableStorageWriterClient_Progress_Params_Data)");
class  RemovableStorageWriterClient_Complete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemovableStorageWriterClient_Complete_Params_Data));
      new (data()) RemovableStorageWriterClient_Complete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemovableStorageWriterClient_Complete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemovableStorageWriterClient_Complete_Params_Data>(index_);
    }
    RemovableStorageWriterClient_Complete_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> error;

 private:
  RemovableStorageWriterClient_Complete_Params_Data();
  ~RemovableStorageWriterClient_Complete_Params_Data() = delete;
};
static_assert(sizeof(RemovableStorageWriterClient_Complete_Params_Data) == 16,
              "Bad sizeof(RemovableStorageWriterClient_Complete_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_SERVICES_REMOVABLE_STORAGE_WRITER_PUBLIC_MOJOM_REMOVABLE_STORAGE_WRITER_MOJOM_SHARED_INTERNAL_H_