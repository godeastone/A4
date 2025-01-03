// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_PLATFORM_VERIFICATION_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_PLATFORM_VERIFICATION_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
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

#pragma pack(push, 1)
class  PlatformVerification_ChallengePlatform_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PlatformVerification_ChallengePlatform_Params_Data));
      new (data()) PlatformVerification_ChallengePlatform_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PlatformVerification_ChallengePlatform_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PlatformVerification_ChallengePlatform_Params_Data>(index_);
    }
    PlatformVerification_ChallengePlatform_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> service_id;
  mojo::internal::Pointer<mojo::internal::String_Data> challenge;

 private:
  PlatformVerification_ChallengePlatform_Params_Data();
  ~PlatformVerification_ChallengePlatform_Params_Data() = delete;
};
static_assert(sizeof(PlatformVerification_ChallengePlatform_Params_Data) == 24,
              "Bad sizeof(PlatformVerification_ChallengePlatform_Params_Data)");
class  PlatformVerification_ChallengePlatform_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PlatformVerification_ChallengePlatform_ResponseParams_Data));
      new (data()) PlatformVerification_ChallengePlatform_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PlatformVerification_ChallengePlatform_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PlatformVerification_ChallengePlatform_ResponseParams_Data>(index_);
    }
    PlatformVerification_ChallengePlatform_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::String_Data> signed_data;
  mojo::internal::Pointer<mojo::internal::String_Data> signed_data_signature;
  mojo::internal::Pointer<mojo::internal::String_Data> platform_key_certificate;

 private:
  PlatformVerification_ChallengePlatform_ResponseParams_Data();
  ~PlatformVerification_ChallengePlatform_ResponseParams_Data() = delete;
};
static_assert(sizeof(PlatformVerification_ChallengePlatform_ResponseParams_Data) == 40,
              "Bad sizeof(PlatformVerification_ChallengePlatform_ResponseParams_Data)");
class  PlatformVerification_GetStorageId_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PlatformVerification_GetStorageId_Params_Data));
      new (data()) PlatformVerification_GetStorageId_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PlatformVerification_GetStorageId_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PlatformVerification_GetStorageId_Params_Data>(index_);
    }
    PlatformVerification_GetStorageId_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t version;
  uint8_t padfinal_[4];

 private:
  PlatformVerification_GetStorageId_Params_Data();
  ~PlatformVerification_GetStorageId_Params_Data() = delete;
};
static_assert(sizeof(PlatformVerification_GetStorageId_Params_Data) == 16,
              "Bad sizeof(PlatformVerification_GetStorageId_Params_Data)");
class  PlatformVerification_GetStorageId_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PlatformVerification_GetStorageId_ResponseParams_Data));
      new (data()) PlatformVerification_GetStorageId_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PlatformVerification_GetStorageId_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PlatformVerification_GetStorageId_ResponseParams_Data>(index_);
    }
    PlatformVerification_GetStorageId_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t version;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> storage_id;

 private:
  PlatformVerification_GetStorageId_ResponseParams_Data();
  ~PlatformVerification_GetStorageId_ResponseParams_Data() = delete;
};
static_assert(sizeof(PlatformVerification_GetStorageId_ResponseParams_Data) == 24,
              "Bad sizeof(PlatformVerification_GetStorageId_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_PLATFORM_VERIFICATION_MOJOM_SHARED_INTERNAL_H_