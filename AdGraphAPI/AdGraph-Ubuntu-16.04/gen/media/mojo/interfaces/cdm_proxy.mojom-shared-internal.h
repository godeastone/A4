// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_SHARED_INTERNAL_H_

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
using CdmProxy_Status_Data =
    mojo::internal::NativeEnum_Data;
using CdmProxy_Protocol_Data =
    mojo::internal::NativeEnum_Data;
using CdmProxy_Function_Data =
    mojo::internal::NativeEnum_Data;

#pragma pack(push, 1)
class  CdmProxy_Initialize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmProxy_Initialize_Params_Data));
      new (data()) CdmProxy_Initialize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmProxy_Initialize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmProxy_Initialize_Params_Data>(index_);
    }
    CdmProxy_Initialize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data client;

 private:
  CdmProxy_Initialize_Params_Data();
  ~CdmProxy_Initialize_Params_Data() = delete;
};
static_assert(sizeof(CdmProxy_Initialize_Params_Data) == 16,
              "Bad sizeof(CdmProxy_Initialize_Params_Data)");
class  CdmProxy_Initialize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmProxy_Initialize_ResponseParams_Data));
      new (data()) CdmProxy_Initialize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmProxy_Initialize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmProxy_Initialize_ResponseParams_Data>(index_);
    }
    CdmProxy_Initialize_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  int32_t protocol;
  uint32_t crypto_session_id;
  int32_t cdm_id;

 private:
  CdmProxy_Initialize_ResponseParams_Data();
  ~CdmProxy_Initialize_ResponseParams_Data() = delete;
};
static_assert(sizeof(CdmProxy_Initialize_ResponseParams_Data) == 24,
              "Bad sizeof(CdmProxy_Initialize_ResponseParams_Data)");
class  CdmProxy_Process_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmProxy_Process_Params_Data));
      new (data()) CdmProxy_Process_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmProxy_Process_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmProxy_Process_Params_Data>(index_);
    }
    CdmProxy_Process_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t function;
  uint32_t crypto_session_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> input_data;
  uint32_t output_data_size;
  uint8_t padfinal_[4];

 private:
  CdmProxy_Process_Params_Data();
  ~CdmProxy_Process_Params_Data() = delete;
};
static_assert(sizeof(CdmProxy_Process_Params_Data) == 32,
              "Bad sizeof(CdmProxy_Process_Params_Data)");
class  CdmProxy_Process_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmProxy_Process_ResponseParams_Data));
      new (data()) CdmProxy_Process_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmProxy_Process_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmProxy_Process_ResponseParams_Data>(index_);
    }
    CdmProxy_Process_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> output_data;

 private:
  CdmProxy_Process_ResponseParams_Data();
  ~CdmProxy_Process_ResponseParams_Data() = delete;
};
static_assert(sizeof(CdmProxy_Process_ResponseParams_Data) == 24,
              "Bad sizeof(CdmProxy_Process_ResponseParams_Data)");
class  CdmProxy_CreateMediaCryptoSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmProxy_CreateMediaCryptoSession_Params_Data));
      new (data()) CdmProxy_CreateMediaCryptoSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmProxy_CreateMediaCryptoSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmProxy_CreateMediaCryptoSession_Params_Data>(index_);
    }
    CdmProxy_CreateMediaCryptoSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> input_data;

 private:
  CdmProxy_CreateMediaCryptoSession_Params_Data();
  ~CdmProxy_CreateMediaCryptoSession_Params_Data() = delete;
};
static_assert(sizeof(CdmProxy_CreateMediaCryptoSession_Params_Data) == 16,
              "Bad sizeof(CdmProxy_CreateMediaCryptoSession_Params_Data)");
class  CdmProxy_CreateMediaCryptoSession_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmProxy_CreateMediaCryptoSession_ResponseParams_Data));
      new (data()) CdmProxy_CreateMediaCryptoSession_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmProxy_CreateMediaCryptoSession_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmProxy_CreateMediaCryptoSession_ResponseParams_Data>(index_);
    }
    CdmProxy_CreateMediaCryptoSession_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint32_t crypto_session_id;
  uint64_t output_data;

 private:
  CdmProxy_CreateMediaCryptoSession_ResponseParams_Data();
  ~CdmProxy_CreateMediaCryptoSession_ResponseParams_Data() = delete;
};
static_assert(sizeof(CdmProxy_CreateMediaCryptoSession_ResponseParams_Data) == 24,
              "Bad sizeof(CdmProxy_CreateMediaCryptoSession_ResponseParams_Data)");
class  CdmProxy_SetKey_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmProxy_SetKey_Params_Data));
      new (data()) CdmProxy_SetKey_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmProxy_SetKey_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmProxy_SetKey_Params_Data>(index_);
    }
    CdmProxy_SetKey_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t crypto_session_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key_blob;

 private:
  CdmProxy_SetKey_Params_Data();
  ~CdmProxy_SetKey_Params_Data() = delete;
};
static_assert(sizeof(CdmProxy_SetKey_Params_Data) == 32,
              "Bad sizeof(CdmProxy_SetKey_Params_Data)");
class  CdmProxy_RemoveKey_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmProxy_RemoveKey_Params_Data));
      new (data()) CdmProxy_RemoveKey_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmProxy_RemoveKey_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmProxy_RemoveKey_Params_Data>(index_);
    }
    CdmProxy_RemoveKey_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t crypto_session_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key_id;

 private:
  CdmProxy_RemoveKey_Params_Data();
  ~CdmProxy_RemoveKey_Params_Data() = delete;
};
static_assert(sizeof(CdmProxy_RemoveKey_Params_Data) == 24,
              "Bad sizeof(CdmProxy_RemoveKey_Params_Data)");
class  CdmProxyClient_NotifyHardwareReset_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmProxyClient_NotifyHardwareReset_Params_Data));
      new (data()) CdmProxyClient_NotifyHardwareReset_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmProxyClient_NotifyHardwareReset_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmProxyClient_NotifyHardwareReset_Params_Data>(index_);
    }
    CdmProxyClient_NotifyHardwareReset_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CdmProxyClient_NotifyHardwareReset_Params_Data();
  ~CdmProxyClient_NotifyHardwareReset_Params_Data() = delete;
};
static_assert(sizeof(CdmProxyClient_NotifyHardwareReset_Params_Data) == 8,
              "Bad sizeof(CdmProxyClient_NotifyHardwareReset_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_SHARED_INTERNAL_H_