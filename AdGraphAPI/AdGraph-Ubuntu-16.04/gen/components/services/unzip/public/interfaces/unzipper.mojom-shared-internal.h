// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_UNZIP_PUBLIC_INTERFACES_UNZIPPER_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_SERVICES_UNZIP_PUBLIC_INTERFACES_UNZIPPER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "components/services/filesystem/public/interfaces/directory.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file_path.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace unzip {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  UnzipFilter_ShouldUnzipFile_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UnzipFilter_ShouldUnzipFile_Params_Data));
      new (data()) UnzipFilter_ShouldUnzipFile_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UnzipFilter_ShouldUnzipFile_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UnzipFilter_ShouldUnzipFile_Params_Data>(index_);
    }
    UnzipFilter_ShouldUnzipFile_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> path;

 private:
  UnzipFilter_ShouldUnzipFile_Params_Data();
  ~UnzipFilter_ShouldUnzipFile_Params_Data() = delete;
};
static_assert(sizeof(UnzipFilter_ShouldUnzipFile_Params_Data) == 16,
              "Bad sizeof(UnzipFilter_ShouldUnzipFile_Params_Data)");
class  UnzipFilter_ShouldUnzipFile_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UnzipFilter_ShouldUnzipFile_ResponseParams_Data));
      new (data()) UnzipFilter_ShouldUnzipFile_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UnzipFilter_ShouldUnzipFile_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UnzipFilter_ShouldUnzipFile_ResponseParams_Data>(index_);
    }
    UnzipFilter_ShouldUnzipFile_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t result : 1;
  uint8_t padfinal_[7];

 private:
  UnzipFilter_ShouldUnzipFile_ResponseParams_Data();
  ~UnzipFilter_ShouldUnzipFile_ResponseParams_Data() = delete;
};
static_assert(sizeof(UnzipFilter_ShouldUnzipFile_ResponseParams_Data) == 16,
              "Bad sizeof(UnzipFilter_ShouldUnzipFile_ResponseParams_Data)");
class  Unzipper_Unzip_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Unzipper_Unzip_Params_Data));
      new (data()) Unzipper_Unzip_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Unzipper_Unzip_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Unzipper_Unzip_Params_Data>(index_);
    }
    Unzipper_Unzip_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> zip_file;
  mojo::internal::Interface_Data output_dir;

 private:
  Unzipper_Unzip_Params_Data();
  ~Unzipper_Unzip_Params_Data() = delete;
};
static_assert(sizeof(Unzipper_Unzip_Params_Data) == 24,
              "Bad sizeof(Unzipper_Unzip_Params_Data)");
class  Unzipper_Unzip_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Unzipper_Unzip_ResponseParams_Data));
      new (data()) Unzipper_Unzip_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Unzipper_Unzip_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Unzipper_Unzip_ResponseParams_Data>(index_);
    }
    Unzipper_Unzip_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t result : 1;
  uint8_t padfinal_[7];

 private:
  Unzipper_Unzip_ResponseParams_Data();
  ~Unzipper_Unzip_ResponseParams_Data() = delete;
};
static_assert(sizeof(Unzipper_Unzip_ResponseParams_Data) == 16,
              "Bad sizeof(Unzipper_Unzip_ResponseParams_Data)");
class  Unzipper_UnzipWithFilter_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Unzipper_UnzipWithFilter_Params_Data));
      new (data()) Unzipper_UnzipWithFilter_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Unzipper_UnzipWithFilter_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Unzipper_UnzipWithFilter_Params_Data>(index_);
    }
    Unzipper_UnzipWithFilter_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> zip_file;
  mojo::internal::Interface_Data output_dir;
  mojo::internal::Interface_Data filter;

 private:
  Unzipper_UnzipWithFilter_Params_Data();
  ~Unzipper_UnzipWithFilter_Params_Data() = delete;
};
static_assert(sizeof(Unzipper_UnzipWithFilter_Params_Data) == 32,
              "Bad sizeof(Unzipper_UnzipWithFilter_Params_Data)");
class  Unzipper_UnzipWithFilter_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Unzipper_UnzipWithFilter_ResponseParams_Data));
      new (data()) Unzipper_UnzipWithFilter_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Unzipper_UnzipWithFilter_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Unzipper_UnzipWithFilter_ResponseParams_Data>(index_);
    }
    Unzipper_UnzipWithFilter_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t result : 1;
  uint8_t padfinal_[7];

 private:
  Unzipper_UnzipWithFilter_ResponseParams_Data();
  ~Unzipper_UnzipWithFilter_ResponseParams_Data() = delete;
};
static_assert(sizeof(Unzipper_UnzipWithFilter_ResponseParams_Data) == 16,
              "Bad sizeof(Unzipper_UnzipWithFilter_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace unzip

#endif  // COMPONENTS_SERVICES_UNZIP_PUBLIC_INTERFACES_UNZIPPER_MOJOM_SHARED_INTERNAL_H_