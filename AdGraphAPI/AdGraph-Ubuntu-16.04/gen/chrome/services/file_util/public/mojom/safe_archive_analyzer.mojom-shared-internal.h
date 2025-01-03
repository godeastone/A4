// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_SERVICES_FILE_UTIL_PUBLIC_MOJOM_SAFE_ARCHIVE_ANALYZER_MOJOM_SHARED_INTERNAL_H_
#define CHROME_SERVICES_FILE_UTIL_PUBLIC_MOJOM_SAFE_ARCHIVE_ANALYZER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/file.mojom-shared-internal.h"
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
using SafeArchiveAnalyzerResults_Data = mojo::native::internal::NativeStruct_Data;

#pragma pack(push, 1)
class  SafeArchiveAnalyzer_AnalyzeZipFile_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SafeArchiveAnalyzer_AnalyzeZipFile_Params_Data));
      new (data()) SafeArchiveAnalyzer_AnalyzeZipFile_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SafeArchiveAnalyzer_AnalyzeZipFile_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SafeArchiveAnalyzer_AnalyzeZipFile_Params_Data>(index_);
    }
    SafeArchiveAnalyzer_AnalyzeZipFile_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> zip_file;
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> temporary_file;

 private:
  SafeArchiveAnalyzer_AnalyzeZipFile_Params_Data();
  ~SafeArchiveAnalyzer_AnalyzeZipFile_Params_Data() = delete;
};
static_assert(sizeof(SafeArchiveAnalyzer_AnalyzeZipFile_Params_Data) == 24,
              "Bad sizeof(SafeArchiveAnalyzer_AnalyzeZipFile_Params_Data)");
class  SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams_Data));
      new (data()) SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams_Data>(index_);
    }
    SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SafeArchiveAnalyzerResults_Data> results;

 private:
  SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams_Data();
  ~SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams_Data() = delete;
};
static_assert(sizeof(SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams_Data) == 16,
              "Bad sizeof(SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams_Data)");
class  SafeArchiveAnalyzer_AnalyzeDmgFile_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SafeArchiveAnalyzer_AnalyzeDmgFile_Params_Data));
      new (data()) SafeArchiveAnalyzer_AnalyzeDmgFile_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SafeArchiveAnalyzer_AnalyzeDmgFile_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SafeArchiveAnalyzer_AnalyzeDmgFile_Params_Data>(index_);
    }
    SafeArchiveAnalyzer_AnalyzeDmgFile_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> dmg_file;

 private:
  SafeArchiveAnalyzer_AnalyzeDmgFile_Params_Data();
  ~SafeArchiveAnalyzer_AnalyzeDmgFile_Params_Data() = delete;
};
static_assert(sizeof(SafeArchiveAnalyzer_AnalyzeDmgFile_Params_Data) == 16,
              "Bad sizeof(SafeArchiveAnalyzer_AnalyzeDmgFile_Params_Data)");
class  SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams_Data));
      new (data()) SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams_Data>(index_);
    }
    SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SafeArchiveAnalyzerResults_Data> results;

 private:
  SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams_Data();
  ~SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams_Data() = delete;
};
static_assert(sizeof(SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams_Data) == 16,
              "Bad sizeof(SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams_Data)");
class  SafeArchiveAnalyzer_AnalyzeRarFile_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SafeArchiveAnalyzer_AnalyzeRarFile_Params_Data));
      new (data()) SafeArchiveAnalyzer_AnalyzeRarFile_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SafeArchiveAnalyzer_AnalyzeRarFile_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SafeArchiveAnalyzer_AnalyzeRarFile_Params_Data>(index_);
    }
    SafeArchiveAnalyzer_AnalyzeRarFile_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> rar_file;

 private:
  SafeArchiveAnalyzer_AnalyzeRarFile_Params_Data();
  ~SafeArchiveAnalyzer_AnalyzeRarFile_Params_Data() = delete;
};
static_assert(sizeof(SafeArchiveAnalyzer_AnalyzeRarFile_Params_Data) == 16,
              "Bad sizeof(SafeArchiveAnalyzer_AnalyzeRarFile_Params_Data)");
class  SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams_Data));
      new (data()) SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams_Data>(index_);
    }
    SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SafeArchiveAnalyzerResults_Data> results;

 private:
  SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams_Data();
  ~SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams_Data() = delete;
};
static_assert(sizeof(SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams_Data) == 16,
              "Bad sizeof(SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_SERVICES_FILE_UTIL_PUBLIC_MOJOM_SAFE_ARCHIVE_ANALYZER_MOJOM_SHARED_INTERNAL_H_