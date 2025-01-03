// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/network/public/mojom/data_pipe_getter.mojom-shared-internal.h"
#include "services/network/public/mojom/http_request_headers.mojom-shared-internal.h"
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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobReaderClient_OnCalculatedSize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobReaderClient_OnCalculatedSize_Params_Data));
      new (data()) BlobReaderClient_OnCalculatedSize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobReaderClient_OnCalculatedSize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobReaderClient_OnCalculatedSize_Params_Data>(index_);
    }
    BlobReaderClient_OnCalculatedSize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t total_size;
  uint64_t expected_content_size;

 private:
  BlobReaderClient_OnCalculatedSize_Params_Data();
  ~BlobReaderClient_OnCalculatedSize_Params_Data() = delete;
};
static_assert(sizeof(BlobReaderClient_OnCalculatedSize_Params_Data) == 24,
              "Bad sizeof(BlobReaderClient_OnCalculatedSize_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobReaderClient_OnComplete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobReaderClient_OnComplete_Params_Data));
      new (data()) BlobReaderClient_OnComplete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobReaderClient_OnComplete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobReaderClient_OnComplete_Params_Data>(index_);
    }
    BlobReaderClient_OnComplete_Params_Data* operator->() { return data(); }

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
  uint64_t data_length;

 private:
  BlobReaderClient_OnComplete_Params_Data();
  ~BlobReaderClient_OnComplete_Params_Data() = delete;
};
static_assert(sizeof(BlobReaderClient_OnComplete_Params_Data) == 24,
              "Bad sizeof(BlobReaderClient_OnComplete_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Blob_Clone_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Blob_Clone_Params_Data));
      new (data()) Blob_Clone_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Blob_Clone_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Blob_Clone_Params_Data>(index_);
    }
    Blob_Clone_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data blob;
  uint8_t padfinal_[4];

 private:
  Blob_Clone_Params_Data();
  ~Blob_Clone_Params_Data() = delete;
};
static_assert(sizeof(Blob_Clone_Params_Data) == 16,
              "Bad sizeof(Blob_Clone_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Blob_AsDataPipeGetter_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Blob_AsDataPipeGetter_Params_Data));
      new (data()) Blob_AsDataPipeGetter_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Blob_AsDataPipeGetter_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Blob_AsDataPipeGetter_Params_Data>(index_);
    }
    Blob_AsDataPipeGetter_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data data_pipe_getter;
  uint8_t padfinal_[4];

 private:
  Blob_AsDataPipeGetter_Params_Data();
  ~Blob_AsDataPipeGetter_Params_Data() = delete;
};
static_assert(sizeof(Blob_AsDataPipeGetter_Params_Data) == 16,
              "Bad sizeof(Blob_AsDataPipeGetter_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Blob_ReadAll_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Blob_ReadAll_Params_Data));
      new (data()) Blob_ReadAll_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Blob_ReadAll_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Blob_ReadAll_Params_Data>(index_);
    }
    Blob_ReadAll_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data pipe;
  mojo::internal::Interface_Data client;
  uint8_t padfinal_[4];

 private:
  Blob_ReadAll_Params_Data();
  ~Blob_ReadAll_Params_Data() = delete;
};
static_assert(sizeof(Blob_ReadAll_Params_Data) == 24,
              "Bad sizeof(Blob_ReadAll_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Blob_ReadRange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Blob_ReadRange_Params_Data));
      new (data()) Blob_ReadRange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Blob_ReadRange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Blob_ReadRange_Params_Data>(index_);
    }
    Blob_ReadRange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t offset;
  uint64_t length;
  mojo::internal::Handle_Data pipe;
  mojo::internal::Interface_Data client;
  uint8_t padfinal_[4];

 private:
  Blob_ReadRange_Params_Data();
  ~Blob_ReadRange_Params_Data() = delete;
};
static_assert(sizeof(Blob_ReadRange_Params_Data) == 40,
              "Bad sizeof(Blob_ReadRange_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Blob_ReadSideData_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Blob_ReadSideData_Params_Data));
      new (data()) Blob_ReadSideData_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Blob_ReadSideData_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Blob_ReadSideData_Params_Data>(index_);
    }
    Blob_ReadSideData_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Blob_ReadSideData_Params_Data();
  ~Blob_ReadSideData_Params_Data() = delete;
};
static_assert(sizeof(Blob_ReadSideData_Params_Data) == 8,
              "Bad sizeof(Blob_ReadSideData_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Blob_ReadSideData_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Blob_ReadSideData_ResponseParams_Data));
      new (data()) Blob_ReadSideData_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Blob_ReadSideData_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Blob_ReadSideData_ResponseParams_Data>(index_);
    }
    Blob_ReadSideData_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  Blob_ReadSideData_ResponseParams_Data();
  ~Blob_ReadSideData_ResponseParams_Data() = delete;
};
static_assert(sizeof(Blob_ReadSideData_ResponseParams_Data) == 16,
              "Bad sizeof(Blob_ReadSideData_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Blob_GetInternalUUID_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Blob_GetInternalUUID_Params_Data));
      new (data()) Blob_GetInternalUUID_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Blob_GetInternalUUID_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Blob_GetInternalUUID_Params_Data>(index_);
    }
    Blob_GetInternalUUID_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Blob_GetInternalUUID_Params_Data();
  ~Blob_GetInternalUUID_Params_Data() = delete;
};
static_assert(sizeof(Blob_GetInternalUUID_Params_Data) == 8,
              "Bad sizeof(Blob_GetInternalUUID_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Blob_GetInternalUUID_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Blob_GetInternalUUID_ResponseParams_Data));
      new (data()) Blob_GetInternalUUID_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Blob_GetInternalUUID_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Blob_GetInternalUUID_ResponseParams_Data>(index_);
    }
    Blob_GetInternalUUID_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> uuid;

 private:
  Blob_GetInternalUUID_ResponseParams_Data();
  ~Blob_GetInternalUUID_ResponseParams_Data() = delete;
};
static_assert(sizeof(Blob_GetInternalUUID_ResponseParams_Data) == 16,
              "Bad sizeof(Blob_GetInternalUUID_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_SHARED_INTERNAL_H_