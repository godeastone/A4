// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "third_party/blink/public/mojom/blob/blob.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/blob/blob_url_store.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/blob/data_element.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-shared-internal.h"
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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ProgressClient_OnProgress_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProgressClient_OnProgress_Params_Data));
      new (data()) ProgressClient_OnProgress_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProgressClient_OnProgress_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProgressClient_OnProgress_Params_Data>(index_);
    }
    ProgressClient_OnProgress_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t delta;

 private:
  ProgressClient_OnProgress_Params_Data();
  ~ProgressClient_OnProgress_Params_Data() = delete;
};
static_assert(sizeof(ProgressClient_OnProgress_Params_Data) == 16,
              "Bad sizeof(ProgressClient_OnProgress_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobRegistry_Register_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobRegistry_Register_Params_Data));
      new (data()) BlobRegistry_Register_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobRegistry_Register_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobRegistry_Register_Params_Data>(index_);
    }
    BlobRegistry_Register_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data blob;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> uuid;
  mojo::internal::Pointer<mojo::internal::String_Data> content_type;
  mojo::internal::Pointer<mojo::internal::String_Data> content_disposition;
  mojo::internal::Pointer<mojo::internal::Array_Data<::blink::mojom::internal::DataElement_Data>> elements;

 private:
  BlobRegistry_Register_Params_Data();
  ~BlobRegistry_Register_Params_Data() = delete;
};
static_assert(sizeof(BlobRegistry_Register_Params_Data) == 48,
              "Bad sizeof(BlobRegistry_Register_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobRegistry_Register_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobRegistry_Register_ResponseParams_Data));
      new (data()) BlobRegistry_Register_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobRegistry_Register_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobRegistry_Register_ResponseParams_Data>(index_);
    }
    BlobRegistry_Register_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  BlobRegistry_Register_ResponseParams_Data();
  ~BlobRegistry_Register_ResponseParams_Data() = delete;
};
static_assert(sizeof(BlobRegistry_Register_ResponseParams_Data) == 8,
              "Bad sizeof(BlobRegistry_Register_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobRegistry_RegisterFromStream_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobRegistry_RegisterFromStream_Params_Data));
      new (data()) BlobRegistry_RegisterFromStream_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobRegistry_RegisterFromStream_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobRegistry_RegisterFromStream_Params_Data>(index_);
    }
    BlobRegistry_RegisterFromStream_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> content_type;
  mojo::internal::Pointer<mojo::internal::String_Data> content_disposition;
  uint64_t length_hint;
  mojo::internal::Handle_Data data;
  mojo::internal::AssociatedInterface_Data progress_client;
  uint8_t padfinal_[4];

 private:
  BlobRegistry_RegisterFromStream_Params_Data();
  ~BlobRegistry_RegisterFromStream_Params_Data() = delete;
};
static_assert(sizeof(BlobRegistry_RegisterFromStream_Params_Data) == 48,
              "Bad sizeof(BlobRegistry_RegisterFromStream_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobRegistry_RegisterFromStream_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobRegistry_RegisterFromStream_ResponseParams_Data));
      new (data()) BlobRegistry_RegisterFromStream_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobRegistry_RegisterFromStream_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobRegistry_RegisterFromStream_ResponseParams_Data>(index_);
    }
    BlobRegistry_RegisterFromStream_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::SerializedBlob_Data> blob;

 private:
  BlobRegistry_RegisterFromStream_ResponseParams_Data();
  ~BlobRegistry_RegisterFromStream_ResponseParams_Data() = delete;
};
static_assert(sizeof(BlobRegistry_RegisterFromStream_ResponseParams_Data) == 16,
              "Bad sizeof(BlobRegistry_RegisterFromStream_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobRegistry_GetBlobFromUUID_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobRegistry_GetBlobFromUUID_Params_Data));
      new (data()) BlobRegistry_GetBlobFromUUID_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobRegistry_GetBlobFromUUID_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobRegistry_GetBlobFromUUID_Params_Data>(index_);
    }
    BlobRegistry_GetBlobFromUUID_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data blob;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> uuid;

 private:
  BlobRegistry_GetBlobFromUUID_Params_Data();
  ~BlobRegistry_GetBlobFromUUID_Params_Data() = delete;
};
static_assert(sizeof(BlobRegistry_GetBlobFromUUID_Params_Data) == 24,
              "Bad sizeof(BlobRegistry_GetBlobFromUUID_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobRegistry_GetBlobFromUUID_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobRegistry_GetBlobFromUUID_ResponseParams_Data));
      new (data()) BlobRegistry_GetBlobFromUUID_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobRegistry_GetBlobFromUUID_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobRegistry_GetBlobFromUUID_ResponseParams_Data>(index_);
    }
    BlobRegistry_GetBlobFromUUID_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  BlobRegistry_GetBlobFromUUID_ResponseParams_Data();
  ~BlobRegistry_GetBlobFromUUID_ResponseParams_Data() = delete;
};
static_assert(sizeof(BlobRegistry_GetBlobFromUUID_ResponseParams_Data) == 8,
              "Bad sizeof(BlobRegistry_GetBlobFromUUID_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobRegistry_URLStoreForOrigin_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobRegistry_URLStoreForOrigin_Params_Data));
      new (data()) BlobRegistry_URLStoreForOrigin_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobRegistry_URLStoreForOrigin_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobRegistry_URLStoreForOrigin_Params_Data>(index_);
    }
    BlobRegistry_URLStoreForOrigin_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  mojo::internal::AssociatedEndpointHandle_Data url_store;
  uint8_t padfinal_[4];

 private:
  BlobRegistry_URLStoreForOrigin_Params_Data();
  ~BlobRegistry_URLStoreForOrigin_Params_Data() = delete;
};
static_assert(sizeof(BlobRegistry_URLStoreForOrigin_Params_Data) == 24,
              "Bad sizeof(BlobRegistry_URLStoreForOrigin_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_SHARED_INTERNAL_H_