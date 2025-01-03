// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_SHARED_INTERNAL_H_

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
namespace media {
namespace mojom {
namespace internal {

struct CdmStorage_Status_Data {
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

#pragma pack(push, 1)
class  CdmStorage_Open_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmStorage_Open_Params_Data));
      new (data()) CdmStorage_Open_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmStorage_Open_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmStorage_Open_Params_Data>(index_);
    }
    CdmStorage_Open_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> file_name;

 private:
  CdmStorage_Open_Params_Data();
  ~CdmStorage_Open_Params_Data() = delete;
};
static_assert(sizeof(CdmStorage_Open_Params_Data) == 16,
              "Bad sizeof(CdmStorage_Open_Params_Data)");
class  CdmStorage_Open_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmStorage_Open_ResponseParams_Data));
      new (data()) CdmStorage_Open_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmStorage_Open_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmStorage_Open_ResponseParams_Data>(index_);
    }
    CdmStorage_Open_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> file_for_reading;
  mojo::internal::AssociatedInterface_Data cdm_file;

 private:
  CdmStorage_Open_ResponseParams_Data();
  ~CdmStorage_Open_ResponseParams_Data() = delete;
};
static_assert(sizeof(CdmStorage_Open_ResponseParams_Data) == 32,
              "Bad sizeof(CdmStorage_Open_ResponseParams_Data)");
class  CdmFile_OpenFileForWriting_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmFile_OpenFileForWriting_Params_Data));
      new (data()) CdmFile_OpenFileForWriting_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmFile_OpenFileForWriting_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmFile_OpenFileForWriting_Params_Data>(index_);
    }
    CdmFile_OpenFileForWriting_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CdmFile_OpenFileForWriting_Params_Data();
  ~CdmFile_OpenFileForWriting_Params_Data() = delete;
};
static_assert(sizeof(CdmFile_OpenFileForWriting_Params_Data) == 8,
              "Bad sizeof(CdmFile_OpenFileForWriting_Params_Data)");
class  CdmFile_OpenFileForWriting_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmFile_OpenFileForWriting_ResponseParams_Data));
      new (data()) CdmFile_OpenFileForWriting_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmFile_OpenFileForWriting_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmFile_OpenFileForWriting_ResponseParams_Data>(index_);
    }
    CdmFile_OpenFileForWriting_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> file_for_writing;

 private:
  CdmFile_OpenFileForWriting_ResponseParams_Data();
  ~CdmFile_OpenFileForWriting_ResponseParams_Data() = delete;
};
static_assert(sizeof(CdmFile_OpenFileForWriting_ResponseParams_Data) == 16,
              "Bad sizeof(CdmFile_OpenFileForWriting_ResponseParams_Data)");
class  CdmFile_CommitWrite_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmFile_CommitWrite_Params_Data));
      new (data()) CdmFile_CommitWrite_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmFile_CommitWrite_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmFile_CommitWrite_Params_Data>(index_);
    }
    CdmFile_CommitWrite_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CdmFile_CommitWrite_Params_Data();
  ~CdmFile_CommitWrite_Params_Data() = delete;
};
static_assert(sizeof(CdmFile_CommitWrite_Params_Data) == 8,
              "Bad sizeof(CdmFile_CommitWrite_Params_Data)");
class  CdmFile_CommitWrite_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmFile_CommitWrite_ResponseParams_Data));
      new (data()) CdmFile_CommitWrite_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmFile_CommitWrite_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmFile_CommitWrite_ResponseParams_Data>(index_);
    }
    CdmFile_CommitWrite_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> updated_file_for_reading;

 private:
  CdmFile_CommitWrite_ResponseParams_Data();
  ~CdmFile_CommitWrite_ResponseParams_Data() = delete;
};
static_assert(sizeof(CdmFile_CommitWrite_ResponseParams_Data) == 16,
              "Bad sizeof(CdmFile_CommitWrite_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_SHARED_INTERNAL_H_