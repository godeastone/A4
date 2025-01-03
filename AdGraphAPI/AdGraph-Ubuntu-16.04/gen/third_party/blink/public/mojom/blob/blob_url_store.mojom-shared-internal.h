// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-internal.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/blob/blob.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobURLStore_Register_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobURLStore_Register_Params_Data));
      new (data()) BlobURLStore_Register_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobURLStore_Register_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobURLStore_Register_Params_Data>(index_);
    }
    BlobURLStore_Register_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data blob;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;

 private:
  BlobURLStore_Register_Params_Data();
  ~BlobURLStore_Register_Params_Data() = delete;
};
static_assert(sizeof(BlobURLStore_Register_Params_Data) == 24,
              "Bad sizeof(BlobURLStore_Register_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobURLStore_Register_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobURLStore_Register_ResponseParams_Data));
      new (data()) BlobURLStore_Register_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobURLStore_Register_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobURLStore_Register_ResponseParams_Data>(index_);
    }
    BlobURLStore_Register_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  BlobURLStore_Register_ResponseParams_Data();
  ~BlobURLStore_Register_ResponseParams_Data() = delete;
};
static_assert(sizeof(BlobURLStore_Register_ResponseParams_Data) == 8,
              "Bad sizeof(BlobURLStore_Register_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobURLStore_Revoke_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobURLStore_Revoke_Params_Data));
      new (data()) BlobURLStore_Revoke_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobURLStore_Revoke_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobURLStore_Revoke_Params_Data>(index_);
    }
    BlobURLStore_Revoke_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;

 private:
  BlobURLStore_Revoke_Params_Data();
  ~BlobURLStore_Revoke_Params_Data() = delete;
};
static_assert(sizeof(BlobURLStore_Revoke_Params_Data) == 16,
              "Bad sizeof(BlobURLStore_Revoke_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobURLStore_Resolve_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobURLStore_Resolve_Params_Data));
      new (data()) BlobURLStore_Resolve_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobURLStore_Resolve_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobURLStore_Resolve_Params_Data>(index_);
    }
    BlobURLStore_Resolve_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;

 private:
  BlobURLStore_Resolve_Params_Data();
  ~BlobURLStore_Resolve_Params_Data() = delete;
};
static_assert(sizeof(BlobURLStore_Resolve_Params_Data) == 16,
              "Bad sizeof(BlobURLStore_Resolve_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobURLStore_Resolve_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobURLStore_Resolve_ResponseParams_Data));
      new (data()) BlobURLStore_Resolve_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobURLStore_Resolve_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobURLStore_Resolve_ResponseParams_Data>(index_);
    }
    BlobURLStore_Resolve_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data blob;

 private:
  BlobURLStore_Resolve_ResponseParams_Data();
  ~BlobURLStore_Resolve_ResponseParams_Data() = delete;
};
static_assert(sizeof(BlobURLStore_Resolve_ResponseParams_Data) == 16,
              "Bad sizeof(BlobURLStore_Resolve_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobURLStore_ResolveAsURLLoaderFactory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobURLStore_ResolveAsURLLoaderFactory_Params_Data));
      new (data()) BlobURLStore_ResolveAsURLLoaderFactory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobURLStore_ResolveAsURLLoaderFactory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobURLStore_ResolveAsURLLoaderFactory_Params_Data>(index_);
    }
    BlobURLStore_ResolveAsURLLoaderFactory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Handle_Data factory;
  uint8_t padfinal_[4];

 private:
  BlobURLStore_ResolveAsURLLoaderFactory_Params_Data();
  ~BlobURLStore_ResolveAsURLLoaderFactory_Params_Data() = delete;
};
static_assert(sizeof(BlobURLStore_ResolveAsURLLoaderFactory_Params_Data) == 24,
              "Bad sizeof(BlobURLStore_ResolveAsURLLoaderFactory_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobURLStore_ResolveForNavigation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobURLStore_ResolveForNavigation_Params_Data));
      new (data()) BlobURLStore_ResolveForNavigation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobURLStore_ResolveForNavigation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobURLStore_ResolveForNavigation_Params_Data>(index_);
    }
    BlobURLStore_ResolveForNavigation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Handle_Data token;
  uint8_t padfinal_[4];

 private:
  BlobURLStore_ResolveForNavigation_Params_Data();
  ~BlobURLStore_ResolveForNavigation_Params_Data() = delete;
};
static_assert(sizeof(BlobURLStore_ResolveForNavigation_Params_Data) == 24,
              "Bad sizeof(BlobURLStore_ResolveForNavigation_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobURLToken_Clone_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobURLToken_Clone_Params_Data));
      new (data()) BlobURLToken_Clone_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobURLToken_Clone_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobURLToken_Clone_Params_Data>(index_);
    }
    BlobURLToken_Clone_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data token;
  uint8_t padfinal_[4];

 private:
  BlobURLToken_Clone_Params_Data();
  ~BlobURLToken_Clone_Params_Data() = delete;
};
static_assert(sizeof(BlobURLToken_Clone_Params_Data) == 16,
              "Bad sizeof(BlobURLToken_Clone_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobURLToken_GetToken_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobURLToken_GetToken_Params_Data));
      new (data()) BlobURLToken_GetToken_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobURLToken_GetToken_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobURLToken_GetToken_Params_Data>(index_);
    }
    BlobURLToken_GetToken_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  BlobURLToken_GetToken_Params_Data();
  ~BlobURLToken_GetToken_Params_Data() = delete;
};
static_assert(sizeof(BlobURLToken_GetToken_Params_Data) == 8,
              "Bad sizeof(BlobURLToken_GetToken_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobURLToken_GetToken_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobURLToken_GetToken_ResponseParams_Data));
      new (data()) BlobURLToken_GetToken_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobURLToken_GetToken_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobURLToken_GetToken_ResponseParams_Data>(index_);
    }
    BlobURLToken_GetToken_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> token;

 private:
  BlobURLToken_GetToken_ResponseParams_Data();
  ~BlobURLToken_GetToken_ResponseParams_Data() = delete;
};
static_assert(sizeof(BlobURLToken_GetToken_ResponseParams_Data) == 16,
              "Bad sizeof(BlobURLToken_GetToken_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_SHARED_INTERNAL_H_