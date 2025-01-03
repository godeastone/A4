// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/network/public/mojom/network_change_manager.mojom-shared-internal.h"
#include "services/network/public/mojom/network_context.mojom-shared-internal.h"
#include "services/network/public/mojom/url_loader.mojom-shared-internal.h"
#include "services/network/public/mojom/network_param.mojom-shared-internal.h"
#include "services/network/public/mojom/signed_tree_head.mojom-shared-internal.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace network {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  SSLPrivateKey_Sign_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SSLPrivateKey_Sign_Params_Data));
      new (data()) SSLPrivateKey_Sign_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SSLPrivateKey_Sign_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SSLPrivateKey_Sign_Params_Data>(index_);
    }
    SSLPrivateKey_Sign_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint16_t algorithm;
  uint8_t pad0_[6];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> input;

 private:
  SSLPrivateKey_Sign_Params_Data();
  ~SSLPrivateKey_Sign_Params_Data() = delete;
};
static_assert(sizeof(SSLPrivateKey_Sign_Params_Data) == 24,
              "Bad sizeof(SSLPrivateKey_Sign_Params_Data)");
class  SSLPrivateKey_Sign_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SSLPrivateKey_Sign_ResponseParams_Data));
      new (data()) SSLPrivateKey_Sign_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SSLPrivateKey_Sign_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SSLPrivateKey_Sign_ResponseParams_Data>(index_);
    }
    SSLPrivateKey_Sign_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t net_error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> signature;

 private:
  SSLPrivateKey_Sign_ResponseParams_Data();
  ~SSLPrivateKey_Sign_ResponseParams_Data() = delete;
};
static_assert(sizeof(SSLPrivateKey_Sign_ResponseParams_Data) == 24,
              "Bad sizeof(SSLPrivateKey_Sign_ResponseParams_Data)");
class  AuthChallengeResponder_OnAuthCredentials_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AuthChallengeResponder_OnAuthCredentials_Params_Data));
      new (data()) AuthChallengeResponder_OnAuthCredentials_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AuthChallengeResponder_OnAuthCredentials_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AuthChallengeResponder_OnAuthCredentials_Params_Data>(index_);
    }
    AuthChallengeResponder_OnAuthCredentials_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::AuthCredentials_Data> credentials;

 private:
  AuthChallengeResponder_OnAuthCredentials_Params_Data();
  ~AuthChallengeResponder_OnAuthCredentials_Params_Data() = delete;
};
static_assert(sizeof(AuthChallengeResponder_OnAuthCredentials_Params_Data) == 16,
              "Bad sizeof(AuthChallengeResponder_OnAuthCredentials_Params_Data)");
class  NetworkServiceClient_OnAuthRequired_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceClient_OnAuthRequired_Params_Data));
      new (data()) NetworkServiceClient_OnAuthRequired_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceClient_OnAuthRequired_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceClient_OnAuthRequired_Params_Data>(index_);
    }
    NetworkServiceClient_OnAuthRequired_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t process_id;
  uint32_t routing_id;
  uint32_t request_id;
  uint8_t first_auth_attempt : 1;
  uint8_t pad3_[3];
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> site_for_cookies;
  mojo::internal::Pointer<::network::mojom::internal::AuthChallengeInfo_Data> auth_info;
  int32_t resource_type;
  mojo::internal::Interface_Data auth_challenge_responder;
  uint8_t padfinal_[4];

 private:
  NetworkServiceClient_OnAuthRequired_Params_Data();
  ~NetworkServiceClient_OnAuthRequired_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceClient_OnAuthRequired_Params_Data) == 64,
              "Bad sizeof(NetworkServiceClient_OnAuthRequired_Params_Data)");
class  NetworkServiceClient_OnCertificateRequested_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceClient_OnCertificateRequested_Params_Data));
      new (data()) NetworkServiceClient_OnCertificateRequested_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceClient_OnCertificateRequested_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceClient_OnCertificateRequested_Params_Data>(index_);
    }
    NetworkServiceClient_OnCertificateRequested_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t process_id;
  uint32_t routing_id;
  uint32_t request_id;
  uint8_t pad2_[4];
  mojo::internal::Pointer<::network::mojom::internal::SSLCertRequestInfo_Data> cert_info;

 private:
  NetworkServiceClient_OnCertificateRequested_Params_Data();
  ~NetworkServiceClient_OnCertificateRequested_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceClient_OnCertificateRequested_Params_Data) == 32,
              "Bad sizeof(NetworkServiceClient_OnCertificateRequested_Params_Data)");
class  NetworkServiceClient_OnCertificateRequested_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceClient_OnCertificateRequested_ResponseParams_Data));
      new (data()) NetworkServiceClient_OnCertificateRequested_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceClient_OnCertificateRequested_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceClient_OnCertificateRequested_ResponseParams_Data>(index_);
    }
    NetworkServiceClient_OnCertificateRequested_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::X509Certificate_Data> x509_certificate;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint16_t>> algorithm_preferences;
  mojo::internal::Interface_Data ssl_private_key;
  uint8_t cancel_certificate_selection : 1;
  uint8_t padfinal_[7];

 private:
  NetworkServiceClient_OnCertificateRequested_ResponseParams_Data();
  ~NetworkServiceClient_OnCertificateRequested_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkServiceClient_OnCertificateRequested_ResponseParams_Data) == 40,
              "Bad sizeof(NetworkServiceClient_OnCertificateRequested_ResponseParams_Data)");
class  NetworkServiceClient_OnSSLCertificateError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceClient_OnSSLCertificateError_Params_Data));
      new (data()) NetworkServiceClient_OnSSLCertificateError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceClient_OnSSLCertificateError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceClient_OnSSLCertificateError_Params_Data>(index_);
    }
    NetworkServiceClient_OnSSLCertificateError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t process_id;
  uint32_t routing_id;
  uint32_t request_id;
  int32_t resource_type;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::network::mojom::internal::SSLInfo_Data> ssl_info;
  uint8_t fatal : 1;
  uint8_t padfinal_[7];

 private:
  NetworkServiceClient_OnSSLCertificateError_Params_Data();
  ~NetworkServiceClient_OnSSLCertificateError_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceClient_OnSSLCertificateError_Params_Data) == 48,
              "Bad sizeof(NetworkServiceClient_OnSSLCertificateError_Params_Data)");
class  NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data));
      new (data()) NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data>(index_);
    }
    NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t net_error;
  uint8_t padfinal_[4];

 private:
  NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data();
  ~NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data) == 16,
              "Bad sizeof(NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data)");
class  NetworkService_SetClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_SetClient_Params_Data));
      new (data()) NetworkService_SetClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_SetClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_SetClient_Params_Data>(index_);
    }
    NetworkService_SetClient_Params_Data* operator->() { return data(); }

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
  NetworkService_SetClient_Params_Data();
  ~NetworkService_SetClient_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_SetClient_Params_Data) == 16,
              "Bad sizeof(NetworkService_SetClient_Params_Data)");
class  NetworkService_CreateNetworkContext_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_CreateNetworkContext_Params_Data));
      new (data()) NetworkService_CreateNetworkContext_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_CreateNetworkContext_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_CreateNetworkContext_Params_Data>(index_);
    }
    NetworkService_CreateNetworkContext_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data context;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::network::mojom::internal::NetworkContextParams_Data> params;

 private:
  NetworkService_CreateNetworkContext_Params_Data();
  ~NetworkService_CreateNetworkContext_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_CreateNetworkContext_Params_Data) == 24,
              "Bad sizeof(NetworkService_CreateNetworkContext_Params_Data)");
class  NetworkService_DisableQuic_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_DisableQuic_Params_Data));
      new (data()) NetworkService_DisableQuic_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_DisableQuic_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_DisableQuic_Params_Data>(index_);
    }
    NetworkService_DisableQuic_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkService_DisableQuic_Params_Data();
  ~NetworkService_DisableQuic_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_DisableQuic_Params_Data) == 8,
              "Bad sizeof(NetworkService_DisableQuic_Params_Data)");
class  NetworkService_SetRawHeadersAccess_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_SetRawHeadersAccess_Params_Data));
      new (data()) NetworkService_SetRawHeadersAccess_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_SetRawHeadersAccess_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_SetRawHeadersAccess_Params_Data>(index_);
    }
    NetworkService_SetRawHeadersAccess_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t process_id;
  uint8_t allow : 1;
  uint8_t padfinal_[3];

 private:
  NetworkService_SetRawHeadersAccess_Params_Data();
  ~NetworkService_SetRawHeadersAccess_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_SetRawHeadersAccess_Params_Data) == 16,
              "Bad sizeof(NetworkService_SetRawHeadersAccess_Params_Data)");
class  NetworkService_GetNetworkChangeManager_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_GetNetworkChangeManager_Params_Data));
      new (data()) NetworkService_GetNetworkChangeManager_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_GetNetworkChangeManager_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_GetNetworkChangeManager_Params_Data>(index_);
    }
    NetworkService_GetNetworkChangeManager_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data network_change_manager;
  uint8_t padfinal_[4];

 private:
  NetworkService_GetNetworkChangeManager_Params_Data();
  ~NetworkService_GetNetworkChangeManager_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_GetNetworkChangeManager_Params_Data) == 16,
              "Bad sizeof(NetworkService_GetNetworkChangeManager_Params_Data)");
class  NetworkService_GetTotalNetworkUsages_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_GetTotalNetworkUsages_Params_Data));
      new (data()) NetworkService_GetTotalNetworkUsages_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_GetTotalNetworkUsages_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_GetTotalNetworkUsages_Params_Data>(index_);
    }
    NetworkService_GetTotalNetworkUsages_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkService_GetTotalNetworkUsages_Params_Data();
  ~NetworkService_GetTotalNetworkUsages_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_GetTotalNetworkUsages_Params_Data) == 8,
              "Bad sizeof(NetworkService_GetTotalNetworkUsages_Params_Data)");
class  NetworkService_GetTotalNetworkUsages_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_GetTotalNetworkUsages_ResponseParams_Data));
      new (data()) NetworkService_GetTotalNetworkUsages_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_GetTotalNetworkUsages_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_GetTotalNetworkUsages_ResponseParams_Data>(index_);
    }
    NetworkService_GetTotalNetworkUsages_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::network::mojom::internal::NetworkUsage_Data>>> total_network_usages;

 private:
  NetworkService_GetTotalNetworkUsages_ResponseParams_Data();
  ~NetworkService_GetTotalNetworkUsages_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkService_GetTotalNetworkUsages_ResponseParams_Data) == 16,
              "Bad sizeof(NetworkService_GetTotalNetworkUsages_ResponseParams_Data)");
class  NetworkService_UpdateSignedTreeHead_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkService_UpdateSignedTreeHead_Params_Data));
      new (data()) NetworkService_UpdateSignedTreeHead_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkService_UpdateSignedTreeHead_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkService_UpdateSignedTreeHead_Params_Data>(index_);
    }
    NetworkService_UpdateSignedTreeHead_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::SignedTreeHead_Data> signed_tree_head;

 private:
  NetworkService_UpdateSignedTreeHead_Params_Data();
  ~NetworkService_UpdateSignedTreeHead_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_UpdateSignedTreeHead_Params_Data) == 16,
              "Bad sizeof(NetworkService_UpdateSignedTreeHead_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_SHARED_INTERNAL_H_