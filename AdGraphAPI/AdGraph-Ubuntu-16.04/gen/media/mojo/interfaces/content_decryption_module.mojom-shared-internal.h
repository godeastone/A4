// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/mojo/interfaces/decryptor.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
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
using CdmConfig_Data = mojo::native::internal::NativeStruct_Data;
class CdmPromiseResult_Data;
class CdmKeyInformation_Data;
using EmeInitDataType_Data =
    mojo::internal::NativeEnum_Data;
using CdmSessionType_Data =
    mojo::internal::NativeEnum_Data;
using CdmMessageType_Data =
    mojo::internal::NativeEnum_Data;
using CdmKeyStatus_Data =
    mojo::internal::NativeEnum_Data;
using HdcpVersion_Data =
    mojo::internal::NativeEnum_Data;
using CdmPromiseResult_Exception_Data =
    mojo::internal::NativeEnum_Data;

#pragma pack(push, 1)
class  CdmPromiseResult_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmPromiseResult_Data));
      new (data()) CdmPromiseResult_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmPromiseResult_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmPromiseResult_Data>(index_);
    }
    CdmPromiseResult_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[3];
  int32_t exception;
  uint32_t system_code;
  uint8_t pad2_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> error_message;

 private:
  CdmPromiseResult_Data();
  ~CdmPromiseResult_Data() = delete;
};
static_assert(sizeof(CdmPromiseResult_Data) == 32,
              "Bad sizeof(CdmPromiseResult_Data)");
// Used by CdmPromiseResult::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CdmPromiseResult_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CdmPromiseResult_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CdmPromiseResult_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CdmPromiseResult_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CdmPromiseResult_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  CdmKeyInformation_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmKeyInformation_Data));
      new (data()) CdmKeyInformation_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmKeyInformation_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmKeyInformation_Data>(index_);
    }
    CdmKeyInformation_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key_id;
  int32_t status;
  uint32_t system_code;

 private:
  CdmKeyInformation_Data();
  ~CdmKeyInformation_Data() = delete;
};
static_assert(sizeof(CdmKeyInformation_Data) == 24,
              "Bad sizeof(CdmKeyInformation_Data)");
// Used by CdmKeyInformation::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CdmKeyInformation_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CdmKeyInformation_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CdmKeyInformation_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CdmKeyInformation_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CdmKeyInformation_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ContentDecryptionModule_SetClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_SetClient_Params_Data));
      new (data()) ContentDecryptionModule_SetClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_SetClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_SetClient_Params_Data>(index_);
    }
    ContentDecryptionModule_SetClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;

 private:
  ContentDecryptionModule_SetClient_Params_Data();
  ~ContentDecryptionModule_SetClient_Params_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_SetClient_Params_Data) == 16,
              "Bad sizeof(ContentDecryptionModule_SetClient_Params_Data)");
class  ContentDecryptionModule_Initialize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_Initialize_Params_Data));
      new (data()) ContentDecryptionModule_Initialize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_Initialize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_Initialize_Params_Data>(index_);
    }
    ContentDecryptionModule_Initialize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> key_system;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> security_origin;
  mojo::internal::Pointer<internal::CdmConfig_Data> cdm_config;

 private:
  ContentDecryptionModule_Initialize_Params_Data();
  ~ContentDecryptionModule_Initialize_Params_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_Initialize_Params_Data) == 32,
              "Bad sizeof(ContentDecryptionModule_Initialize_Params_Data)");
class  ContentDecryptionModule_Initialize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_Initialize_ResponseParams_Data));
      new (data()) ContentDecryptionModule_Initialize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_Initialize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_Initialize_ResponseParams_Data>(index_);
    }
    ContentDecryptionModule_Initialize_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CdmPromiseResult_Data> result;
  int32_t cdm_id;
  mojo::internal::Interface_Data decryptor;
  uint8_t padfinal_[4];

 private:
  ContentDecryptionModule_Initialize_ResponseParams_Data();
  ~ContentDecryptionModule_Initialize_ResponseParams_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_Initialize_ResponseParams_Data) == 32,
              "Bad sizeof(ContentDecryptionModule_Initialize_ResponseParams_Data)");
class  ContentDecryptionModule_SetServerCertificate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_SetServerCertificate_Params_Data));
      new (data()) ContentDecryptionModule_SetServerCertificate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_SetServerCertificate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_SetServerCertificate_Params_Data>(index_);
    }
    ContentDecryptionModule_SetServerCertificate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> certificate_data;

 private:
  ContentDecryptionModule_SetServerCertificate_Params_Data();
  ~ContentDecryptionModule_SetServerCertificate_Params_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_SetServerCertificate_Params_Data) == 16,
              "Bad sizeof(ContentDecryptionModule_SetServerCertificate_Params_Data)");
class  ContentDecryptionModule_SetServerCertificate_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_SetServerCertificate_ResponseParams_Data));
      new (data()) ContentDecryptionModule_SetServerCertificate_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_SetServerCertificate_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_SetServerCertificate_ResponseParams_Data>(index_);
    }
    ContentDecryptionModule_SetServerCertificate_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CdmPromiseResult_Data> result;

 private:
  ContentDecryptionModule_SetServerCertificate_ResponseParams_Data();
  ~ContentDecryptionModule_SetServerCertificate_ResponseParams_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_SetServerCertificate_ResponseParams_Data) == 16,
              "Bad sizeof(ContentDecryptionModule_SetServerCertificate_ResponseParams_Data)");
class  ContentDecryptionModule_GetStatusForPolicy_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_GetStatusForPolicy_Params_Data));
      new (data()) ContentDecryptionModule_GetStatusForPolicy_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_GetStatusForPolicy_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_GetStatusForPolicy_Params_Data>(index_);
    }
    ContentDecryptionModule_GetStatusForPolicy_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t min_hdcp_version;
  uint8_t padfinal_[4];

 private:
  ContentDecryptionModule_GetStatusForPolicy_Params_Data();
  ~ContentDecryptionModule_GetStatusForPolicy_Params_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_GetStatusForPolicy_Params_Data) == 16,
              "Bad sizeof(ContentDecryptionModule_GetStatusForPolicy_Params_Data)");
class  ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data));
      new (data()) ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data>(index_);
    }
    ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CdmPromiseResult_Data> result;
  int32_t key_status;
  uint8_t padfinal_[4];

 private:
  ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data();
  ~ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data) == 24,
              "Bad sizeof(ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data)");
class  ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data));
      new (data()) ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data>(index_);
    }
    ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t session_type;
  int32_t init_data_type;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> init_data;

 private:
  ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data();
  ~ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data) == 24,
              "Bad sizeof(ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data)");
class  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data));
      new (data()) ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data>(index_);
    }
    ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CdmPromiseResult_Data> result;
  mojo::internal::Pointer<mojo::internal::String_Data> session_id;

 private:
  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data();
  ~ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data) == 24,
              "Bad sizeof(ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data)");
class  ContentDecryptionModule_LoadSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_LoadSession_Params_Data));
      new (data()) ContentDecryptionModule_LoadSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_LoadSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_LoadSession_Params_Data>(index_);
    }
    ContentDecryptionModule_LoadSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t session_type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> session_id;

 private:
  ContentDecryptionModule_LoadSession_Params_Data();
  ~ContentDecryptionModule_LoadSession_Params_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_LoadSession_Params_Data) == 24,
              "Bad sizeof(ContentDecryptionModule_LoadSession_Params_Data)");
class  ContentDecryptionModule_LoadSession_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_LoadSession_ResponseParams_Data));
      new (data()) ContentDecryptionModule_LoadSession_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_LoadSession_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_LoadSession_ResponseParams_Data>(index_);
    }
    ContentDecryptionModule_LoadSession_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CdmPromiseResult_Data> result;
  mojo::internal::Pointer<mojo::internal::String_Data> session_id;

 private:
  ContentDecryptionModule_LoadSession_ResponseParams_Data();
  ~ContentDecryptionModule_LoadSession_ResponseParams_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_LoadSession_ResponseParams_Data) == 24,
              "Bad sizeof(ContentDecryptionModule_LoadSession_ResponseParams_Data)");
class  ContentDecryptionModule_UpdateSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_UpdateSession_Params_Data));
      new (data()) ContentDecryptionModule_UpdateSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_UpdateSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_UpdateSession_Params_Data>(index_);
    }
    ContentDecryptionModule_UpdateSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> session_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> response;

 private:
  ContentDecryptionModule_UpdateSession_Params_Data();
  ~ContentDecryptionModule_UpdateSession_Params_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_UpdateSession_Params_Data) == 24,
              "Bad sizeof(ContentDecryptionModule_UpdateSession_Params_Data)");
class  ContentDecryptionModule_UpdateSession_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_UpdateSession_ResponseParams_Data));
      new (data()) ContentDecryptionModule_UpdateSession_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_UpdateSession_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_UpdateSession_ResponseParams_Data>(index_);
    }
    ContentDecryptionModule_UpdateSession_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CdmPromiseResult_Data> result;

 private:
  ContentDecryptionModule_UpdateSession_ResponseParams_Data();
  ~ContentDecryptionModule_UpdateSession_ResponseParams_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_UpdateSession_ResponseParams_Data) == 16,
              "Bad sizeof(ContentDecryptionModule_UpdateSession_ResponseParams_Data)");
class  ContentDecryptionModule_CloseSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_CloseSession_Params_Data));
      new (data()) ContentDecryptionModule_CloseSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_CloseSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_CloseSession_Params_Data>(index_);
    }
    ContentDecryptionModule_CloseSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> session_id;

 private:
  ContentDecryptionModule_CloseSession_Params_Data();
  ~ContentDecryptionModule_CloseSession_Params_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_CloseSession_Params_Data) == 16,
              "Bad sizeof(ContentDecryptionModule_CloseSession_Params_Data)");
class  ContentDecryptionModule_CloseSession_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_CloseSession_ResponseParams_Data));
      new (data()) ContentDecryptionModule_CloseSession_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_CloseSession_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_CloseSession_ResponseParams_Data>(index_);
    }
    ContentDecryptionModule_CloseSession_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CdmPromiseResult_Data> result;

 private:
  ContentDecryptionModule_CloseSession_ResponseParams_Data();
  ~ContentDecryptionModule_CloseSession_ResponseParams_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_CloseSession_ResponseParams_Data) == 16,
              "Bad sizeof(ContentDecryptionModule_CloseSession_ResponseParams_Data)");
class  ContentDecryptionModule_RemoveSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_RemoveSession_Params_Data));
      new (data()) ContentDecryptionModule_RemoveSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_RemoveSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_RemoveSession_Params_Data>(index_);
    }
    ContentDecryptionModule_RemoveSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> session_id;

 private:
  ContentDecryptionModule_RemoveSession_Params_Data();
  ~ContentDecryptionModule_RemoveSession_Params_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_RemoveSession_Params_Data) == 16,
              "Bad sizeof(ContentDecryptionModule_RemoveSession_Params_Data)");
class  ContentDecryptionModule_RemoveSession_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_RemoveSession_ResponseParams_Data));
      new (data()) ContentDecryptionModule_RemoveSession_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_RemoveSession_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_RemoveSession_ResponseParams_Data>(index_);
    }
    ContentDecryptionModule_RemoveSession_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CdmPromiseResult_Data> result;

 private:
  ContentDecryptionModule_RemoveSession_ResponseParams_Data();
  ~ContentDecryptionModule_RemoveSession_ResponseParams_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_RemoveSession_ResponseParams_Data) == 16,
              "Bad sizeof(ContentDecryptionModule_RemoveSession_ResponseParams_Data)");
class  ContentDecryptionModuleClient_OnSessionMessage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModuleClient_OnSessionMessage_Params_Data));
      new (data()) ContentDecryptionModuleClient_OnSessionMessage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModuleClient_OnSessionMessage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModuleClient_OnSessionMessage_Params_Data>(index_);
    }
    ContentDecryptionModuleClient_OnSessionMessage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> session_id;
  int32_t message_type;
  uint8_t pad1_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> message;

 private:
  ContentDecryptionModuleClient_OnSessionMessage_Params_Data();
  ~ContentDecryptionModuleClient_OnSessionMessage_Params_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModuleClient_OnSessionMessage_Params_Data) == 32,
              "Bad sizeof(ContentDecryptionModuleClient_OnSessionMessage_Params_Data)");
class  ContentDecryptionModuleClient_OnSessionClosed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModuleClient_OnSessionClosed_Params_Data));
      new (data()) ContentDecryptionModuleClient_OnSessionClosed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModuleClient_OnSessionClosed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModuleClient_OnSessionClosed_Params_Data>(index_);
    }
    ContentDecryptionModuleClient_OnSessionClosed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> session_id;

 private:
  ContentDecryptionModuleClient_OnSessionClosed_Params_Data();
  ~ContentDecryptionModuleClient_OnSessionClosed_Params_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModuleClient_OnSessionClosed_Params_Data) == 16,
              "Bad sizeof(ContentDecryptionModuleClient_OnSessionClosed_Params_Data)");
class  ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data));
      new (data()) ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data>(index_);
    }
    ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> session_id;
  uint8_t has_additional_usable_key : 1;
  uint8_t pad1_[7];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::CdmKeyInformation_Data>>> keys_info;

 private:
  ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data();
  ~ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data) == 32,
              "Bad sizeof(ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data)");
class  ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data));
      new (data()) ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data>(index_);
    }
    ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> session_id;
  double new_expiry_time_sec;

 private:
  ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data();
  ~ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data) == 24,
              "Bad sizeof(ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data)");
class  CdmFactory_CreateCdm_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmFactory_CreateCdm_Params_Data));
      new (data()) CdmFactory_CreateCdm_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmFactory_CreateCdm_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmFactory_CreateCdm_Params_Data>(index_);
    }
    CdmFactory_CreateCdm_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> key_system;
  mojo::internal::Handle_Data cdm;
  uint8_t padfinal_[4];

 private:
  CdmFactory_CreateCdm_Params_Data();
  ~CdmFactory_CreateCdm_Params_Data() = delete;
};
static_assert(sizeof(CdmFactory_CreateCdm_Params_Data) == 24,
              "Bad sizeof(CdmFactory_CreateCdm_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_SHARED_INTERNAL_H_