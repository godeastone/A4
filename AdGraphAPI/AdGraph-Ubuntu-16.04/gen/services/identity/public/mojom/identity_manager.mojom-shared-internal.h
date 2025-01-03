// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_IDENTITY_PUBLIC_MOJOM_IDENTITY_MANAGER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_IDENTITY_PUBLIC_MOJOM_IDENTITY_MANAGER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "services/identity/public/mojom/account.mojom-shared-internal.h"
#include "services/identity/public/mojom/account_info.mojom-shared-internal.h"
#include "services/identity/public/mojom/account_state.mojom-shared-internal.h"
#include "services/identity/public/mojom/google_service_auth_error.mojom-shared-internal.h"
#include "services/identity/public/mojom/scope_set.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace identity {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  IdentityManager_GetPrimaryAccountInfo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IdentityManager_GetPrimaryAccountInfo_Params_Data));
      new (data()) IdentityManager_GetPrimaryAccountInfo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IdentityManager_GetPrimaryAccountInfo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IdentityManager_GetPrimaryAccountInfo_Params_Data>(index_);
    }
    IdentityManager_GetPrimaryAccountInfo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  IdentityManager_GetPrimaryAccountInfo_Params_Data();
  ~IdentityManager_GetPrimaryAccountInfo_Params_Data() = delete;
};
static_assert(sizeof(IdentityManager_GetPrimaryAccountInfo_Params_Data) == 8,
              "Bad sizeof(IdentityManager_GetPrimaryAccountInfo_Params_Data)");
class  IdentityManager_GetPrimaryAccountInfo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IdentityManager_GetPrimaryAccountInfo_ResponseParams_Data));
      new (data()) IdentityManager_GetPrimaryAccountInfo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IdentityManager_GetPrimaryAccountInfo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IdentityManager_GetPrimaryAccountInfo_ResponseParams_Data>(index_);
    }
    IdentityManager_GetPrimaryAccountInfo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::identity::mojom::internal::AccountInfo_Data> account_info;
  mojo::internal::Pointer<::identity::mojom::internal::AccountState_Data> account_state;

 private:
  IdentityManager_GetPrimaryAccountInfo_ResponseParams_Data();
  ~IdentityManager_GetPrimaryAccountInfo_ResponseParams_Data() = delete;
};
static_assert(sizeof(IdentityManager_GetPrimaryAccountInfo_ResponseParams_Data) == 24,
              "Bad sizeof(IdentityManager_GetPrimaryAccountInfo_ResponseParams_Data)");
class  IdentityManager_GetPrimaryAccountWhenAvailable_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IdentityManager_GetPrimaryAccountWhenAvailable_Params_Data));
      new (data()) IdentityManager_GetPrimaryAccountWhenAvailable_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IdentityManager_GetPrimaryAccountWhenAvailable_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IdentityManager_GetPrimaryAccountWhenAvailable_Params_Data>(index_);
    }
    IdentityManager_GetPrimaryAccountWhenAvailable_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  IdentityManager_GetPrimaryAccountWhenAvailable_Params_Data();
  ~IdentityManager_GetPrimaryAccountWhenAvailable_Params_Data() = delete;
};
static_assert(sizeof(IdentityManager_GetPrimaryAccountWhenAvailable_Params_Data) == 8,
              "Bad sizeof(IdentityManager_GetPrimaryAccountWhenAvailable_Params_Data)");
class  IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams_Data));
      new (data()) IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams_Data>(index_);
    }
    IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::identity::mojom::internal::AccountInfo_Data> account_info;
  mojo::internal::Pointer<::identity::mojom::internal::AccountState_Data> account_state;

 private:
  IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams_Data();
  ~IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams_Data() = delete;
};
static_assert(sizeof(IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams_Data) == 24,
              "Bad sizeof(IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams_Data)");
class  IdentityManager_GetAccountInfoFromGaiaId_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IdentityManager_GetAccountInfoFromGaiaId_Params_Data));
      new (data()) IdentityManager_GetAccountInfoFromGaiaId_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IdentityManager_GetAccountInfoFromGaiaId_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IdentityManager_GetAccountInfoFromGaiaId_Params_Data>(index_);
    }
    IdentityManager_GetAccountInfoFromGaiaId_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> gaia_id;

 private:
  IdentityManager_GetAccountInfoFromGaiaId_Params_Data();
  ~IdentityManager_GetAccountInfoFromGaiaId_Params_Data() = delete;
};
static_assert(sizeof(IdentityManager_GetAccountInfoFromGaiaId_Params_Data) == 16,
              "Bad sizeof(IdentityManager_GetAccountInfoFromGaiaId_Params_Data)");
class  IdentityManager_GetAccountInfoFromGaiaId_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IdentityManager_GetAccountInfoFromGaiaId_ResponseParams_Data));
      new (data()) IdentityManager_GetAccountInfoFromGaiaId_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IdentityManager_GetAccountInfoFromGaiaId_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IdentityManager_GetAccountInfoFromGaiaId_ResponseParams_Data>(index_);
    }
    IdentityManager_GetAccountInfoFromGaiaId_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::identity::mojom::internal::AccountInfo_Data> account_info;
  mojo::internal::Pointer<::identity::mojom::internal::AccountState_Data> account_state;

 private:
  IdentityManager_GetAccountInfoFromGaiaId_ResponseParams_Data();
  ~IdentityManager_GetAccountInfoFromGaiaId_ResponseParams_Data() = delete;
};
static_assert(sizeof(IdentityManager_GetAccountInfoFromGaiaId_ResponseParams_Data) == 24,
              "Bad sizeof(IdentityManager_GetAccountInfoFromGaiaId_ResponseParams_Data)");
class  IdentityManager_GetAccounts_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IdentityManager_GetAccounts_Params_Data));
      new (data()) IdentityManager_GetAccounts_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IdentityManager_GetAccounts_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IdentityManager_GetAccounts_Params_Data>(index_);
    }
    IdentityManager_GetAccounts_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  IdentityManager_GetAccounts_Params_Data();
  ~IdentityManager_GetAccounts_Params_Data() = delete;
};
static_assert(sizeof(IdentityManager_GetAccounts_Params_Data) == 8,
              "Bad sizeof(IdentityManager_GetAccounts_Params_Data)");
class  IdentityManager_GetAccounts_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IdentityManager_GetAccounts_ResponseParams_Data));
      new (data()) IdentityManager_GetAccounts_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IdentityManager_GetAccounts_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IdentityManager_GetAccounts_ResponseParams_Data>(index_);
    }
    IdentityManager_GetAccounts_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::identity::mojom::internal::Account_Data>>> accounts;

 private:
  IdentityManager_GetAccounts_ResponseParams_Data();
  ~IdentityManager_GetAccounts_ResponseParams_Data() = delete;
};
static_assert(sizeof(IdentityManager_GetAccounts_ResponseParams_Data) == 16,
              "Bad sizeof(IdentityManager_GetAccounts_ResponseParams_Data)");
class  IdentityManager_GetAccessToken_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IdentityManager_GetAccessToken_Params_Data));
      new (data()) IdentityManager_GetAccessToken_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IdentityManager_GetAccessToken_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IdentityManager_GetAccessToken_Params_Data>(index_);
    }
    IdentityManager_GetAccessToken_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> account_id;
  mojo::internal::Pointer<::identity::mojom::internal::ScopeSet_Data> scopes;
  mojo::internal::Pointer<mojo::internal::String_Data> consumer_id;

 private:
  IdentityManager_GetAccessToken_Params_Data();
  ~IdentityManager_GetAccessToken_Params_Data() = delete;
};
static_assert(sizeof(IdentityManager_GetAccessToken_Params_Data) == 32,
              "Bad sizeof(IdentityManager_GetAccessToken_Params_Data)");
class  IdentityManager_GetAccessToken_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IdentityManager_GetAccessToken_ResponseParams_Data));
      new (data()) IdentityManager_GetAccessToken_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IdentityManager_GetAccessToken_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IdentityManager_GetAccessToken_ResponseParams_Data>(index_);
    }
    IdentityManager_GetAccessToken_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> token;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> expiration_time;
  mojo::internal::Pointer<::identity::mojom::internal::GoogleServiceAuthError_Data> error;

 private:
  IdentityManager_GetAccessToken_ResponseParams_Data();
  ~IdentityManager_GetAccessToken_ResponseParams_Data() = delete;
};
static_assert(sizeof(IdentityManager_GetAccessToken_ResponseParams_Data) == 32,
              "Bad sizeof(IdentityManager_GetAccessToken_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace identity

#endif  // SERVICES_IDENTITY_PUBLIC_MOJOM_IDENTITY_MANAGER_MOJOM_SHARED_INTERNAL_H_