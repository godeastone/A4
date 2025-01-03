// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_PATCH_PUBLIC_INTERFACES_FILE_PATCHER_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_SERVICES_PATCH_PUBLIC_INTERFACES_FILE_PATCHER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/file.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace patch {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  FilePatcher_PatchFileBsdiff_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FilePatcher_PatchFileBsdiff_Params_Data));
      new (data()) FilePatcher_PatchFileBsdiff_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FilePatcher_PatchFileBsdiff_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FilePatcher_PatchFileBsdiff_Params_Data>(index_);
    }
    FilePatcher_PatchFileBsdiff_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> input_file;
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> patch_file;
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> output_file;

 private:
  FilePatcher_PatchFileBsdiff_Params_Data();
  ~FilePatcher_PatchFileBsdiff_Params_Data() = delete;
};
static_assert(sizeof(FilePatcher_PatchFileBsdiff_Params_Data) == 32,
              "Bad sizeof(FilePatcher_PatchFileBsdiff_Params_Data)");
class  FilePatcher_PatchFileBsdiff_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FilePatcher_PatchFileBsdiff_ResponseParams_Data));
      new (data()) FilePatcher_PatchFileBsdiff_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FilePatcher_PatchFileBsdiff_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FilePatcher_PatchFileBsdiff_ResponseParams_Data>(index_);
    }
    FilePatcher_PatchFileBsdiff_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  FilePatcher_PatchFileBsdiff_ResponseParams_Data();
  ~FilePatcher_PatchFileBsdiff_ResponseParams_Data() = delete;
};
static_assert(sizeof(FilePatcher_PatchFileBsdiff_ResponseParams_Data) == 16,
              "Bad sizeof(FilePatcher_PatchFileBsdiff_ResponseParams_Data)");
class  FilePatcher_PatchFileCourgette_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FilePatcher_PatchFileCourgette_Params_Data));
      new (data()) FilePatcher_PatchFileCourgette_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FilePatcher_PatchFileCourgette_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FilePatcher_PatchFileCourgette_Params_Data>(index_);
    }
    FilePatcher_PatchFileCourgette_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> input_file;
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> patch_file;
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> output_file;

 private:
  FilePatcher_PatchFileCourgette_Params_Data();
  ~FilePatcher_PatchFileCourgette_Params_Data() = delete;
};
static_assert(sizeof(FilePatcher_PatchFileCourgette_Params_Data) == 32,
              "Bad sizeof(FilePatcher_PatchFileCourgette_Params_Data)");
class  FilePatcher_PatchFileCourgette_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FilePatcher_PatchFileCourgette_ResponseParams_Data));
      new (data()) FilePatcher_PatchFileCourgette_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FilePatcher_PatchFileCourgette_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FilePatcher_PatchFileCourgette_ResponseParams_Data>(index_);
    }
    FilePatcher_PatchFileCourgette_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  FilePatcher_PatchFileCourgette_ResponseParams_Data();
  ~FilePatcher_PatchFileCourgette_ResponseParams_Data() = delete;
};
static_assert(sizeof(FilePatcher_PatchFileCourgette_ResponseParams_Data) == 16,
              "Bad sizeof(FilePatcher_PatchFileCourgette_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace patch

#endif  // COMPONENTS_SERVICES_PATCH_PUBLIC_INTERFACES_FILE_PATCHER_MOJOM_SHARED_INTERNAL_H_