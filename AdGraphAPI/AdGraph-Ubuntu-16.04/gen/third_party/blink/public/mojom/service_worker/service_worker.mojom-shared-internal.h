// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "third_party/blink/public/mojom/message_port/message_port.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_client.mojom-shared-internal.h"
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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_SetCachedMetadata_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_SetCachedMetadata_Params_Data));
      new (data()) ServiceWorkerHost_SetCachedMetadata_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_SetCachedMetadata_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_SetCachedMetadata_Params_Data>(index_);
    }
    ServiceWorkerHost_SetCachedMetadata_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  ServiceWorkerHost_SetCachedMetadata_Params_Data();
  ~ServiceWorkerHost_SetCachedMetadata_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_SetCachedMetadata_Params_Data) == 24,
              "Bad sizeof(ServiceWorkerHost_SetCachedMetadata_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_ClearCachedMetadata_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_ClearCachedMetadata_Params_Data));
      new (data()) ServiceWorkerHost_ClearCachedMetadata_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_ClearCachedMetadata_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_ClearCachedMetadata_Params_Data>(index_);
    }
    ServiceWorkerHost_ClearCachedMetadata_Params_Data* operator->() { return data(); }

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
  ServiceWorkerHost_ClearCachedMetadata_Params_Data();
  ~ServiceWorkerHost_ClearCachedMetadata_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_ClearCachedMetadata_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerHost_ClearCachedMetadata_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_GetClients_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_GetClients_Params_Data));
      new (data()) ServiceWorkerHost_GetClients_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_GetClients_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_GetClients_Params_Data>(index_);
    }
    ServiceWorkerHost_GetClients_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerClientQueryOptions_Data> options;

 private:
  ServiceWorkerHost_GetClients_Params_Data();
  ~ServiceWorkerHost_GetClients_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_GetClients_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerHost_GetClients_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_GetClients_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_GetClients_ResponseParams_Data));
      new (data()) ServiceWorkerHost_GetClients_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_GetClients_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_GetClients_ResponseParams_Data>(index_);
    }
    ServiceWorkerHost_GetClients_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerClientInfo_Data>>> clients;

 private:
  ServiceWorkerHost_GetClients_ResponseParams_Data();
  ~ServiceWorkerHost_GetClients_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_GetClients_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceWorkerHost_GetClients_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_GetClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_GetClient_Params_Data));
      new (data()) ServiceWorkerHost_GetClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_GetClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_GetClient_Params_Data>(index_);
    }
    ServiceWorkerHost_GetClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> client_uuid;

 private:
  ServiceWorkerHost_GetClient_Params_Data();
  ~ServiceWorkerHost_GetClient_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_GetClient_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerHost_GetClient_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_GetClient_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_GetClient_ResponseParams_Data));
      new (data()) ServiceWorkerHost_GetClient_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_GetClient_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_GetClient_ResponseParams_Data>(index_);
    }
    ServiceWorkerHost_GetClient_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerClientInfo_Data> client;

 private:
  ServiceWorkerHost_GetClient_ResponseParams_Data();
  ~ServiceWorkerHost_GetClient_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_GetClient_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceWorkerHost_GetClient_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_OpenNewTab_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_OpenNewTab_Params_Data));
      new (data()) ServiceWorkerHost_OpenNewTab_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_OpenNewTab_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_OpenNewTab_Params_Data>(index_);
    }
    ServiceWorkerHost_OpenNewTab_Params_Data* operator->() { return data(); }

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
  ServiceWorkerHost_OpenNewTab_Params_Data();
  ~ServiceWorkerHost_OpenNewTab_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_OpenNewTab_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerHost_OpenNewTab_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_OpenNewTab_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_OpenNewTab_ResponseParams_Data));
      new (data()) ServiceWorkerHost_OpenNewTab_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_OpenNewTab_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_OpenNewTab_ResponseParams_Data>(index_);
    }
    ServiceWorkerHost_OpenNewTab_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerClientInfo_Data> client;
  mojo::internal::Pointer<mojo::internal::String_Data> error_msg;

 private:
  ServiceWorkerHost_OpenNewTab_ResponseParams_Data();
  ~ServiceWorkerHost_OpenNewTab_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_OpenNewTab_ResponseParams_Data) == 32,
              "Bad sizeof(ServiceWorkerHost_OpenNewTab_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data));
      new (data()) ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data>(index_);
    }
    ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data* operator->() { return data(); }

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
  ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data();
  ~ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data));
      new (data()) ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data>(index_);
    }
    ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerClientInfo_Data> client;
  mojo::internal::Pointer<mojo::internal::String_Data> error_msg;

 private:
  ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data();
  ~ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data) == 32,
              "Bad sizeof(ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_PostMessageToClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_PostMessageToClient_Params_Data));
      new (data()) ServiceWorkerHost_PostMessageToClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_PostMessageToClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_PostMessageToClient_Params_Data>(index_);
    }
    ServiceWorkerHost_PostMessageToClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> client_uuid;
  mojo::internal::Pointer<::blink::mojom::internal::TransferableMessage_Data> message;

 private:
  ServiceWorkerHost_PostMessageToClient_Params_Data();
  ~ServiceWorkerHost_PostMessageToClient_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_PostMessageToClient_Params_Data) == 24,
              "Bad sizeof(ServiceWorkerHost_PostMessageToClient_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_FocusClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_FocusClient_Params_Data));
      new (data()) ServiceWorkerHost_FocusClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_FocusClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_FocusClient_Params_Data>(index_);
    }
    ServiceWorkerHost_FocusClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> client_uuid;

 private:
  ServiceWorkerHost_FocusClient_Params_Data();
  ~ServiceWorkerHost_FocusClient_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_FocusClient_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerHost_FocusClient_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_FocusClient_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_FocusClient_ResponseParams_Data));
      new (data()) ServiceWorkerHost_FocusClient_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_FocusClient_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_FocusClient_ResponseParams_Data>(index_);
    }
    ServiceWorkerHost_FocusClient_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerClientInfo_Data> client;

 private:
  ServiceWorkerHost_FocusClient_ResponseParams_Data();
  ~ServiceWorkerHost_FocusClient_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_FocusClient_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceWorkerHost_FocusClient_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_NavigateClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_NavigateClient_Params_Data));
      new (data()) ServiceWorkerHost_NavigateClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_NavigateClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_NavigateClient_Params_Data>(index_);
    }
    ServiceWorkerHost_NavigateClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> client_uuid;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;

 private:
  ServiceWorkerHost_NavigateClient_Params_Data();
  ~ServiceWorkerHost_NavigateClient_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_NavigateClient_Params_Data) == 24,
              "Bad sizeof(ServiceWorkerHost_NavigateClient_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_NavigateClient_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_NavigateClient_ResponseParams_Data));
      new (data()) ServiceWorkerHost_NavigateClient_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_NavigateClient_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_NavigateClient_ResponseParams_Data>(index_);
    }
    ServiceWorkerHost_NavigateClient_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerClientInfo_Data> client;
  mojo::internal::Pointer<mojo::internal::String_Data> error_msg;

 private:
  ServiceWorkerHost_NavigateClient_ResponseParams_Data();
  ~ServiceWorkerHost_NavigateClient_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_NavigateClient_ResponseParams_Data) == 32,
              "Bad sizeof(ServiceWorkerHost_NavigateClient_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_SkipWaiting_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_SkipWaiting_Params_Data));
      new (data()) ServiceWorkerHost_SkipWaiting_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_SkipWaiting_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_SkipWaiting_Params_Data>(index_);
    }
    ServiceWorkerHost_SkipWaiting_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerHost_SkipWaiting_Params_Data();
  ~ServiceWorkerHost_SkipWaiting_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_SkipWaiting_Params_Data) == 8,
              "Bad sizeof(ServiceWorkerHost_SkipWaiting_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_SkipWaiting_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_SkipWaiting_ResponseParams_Data));
      new (data()) ServiceWorkerHost_SkipWaiting_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_SkipWaiting_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_SkipWaiting_ResponseParams_Data>(index_);
    }
    ServiceWorkerHost_SkipWaiting_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  ServiceWorkerHost_SkipWaiting_ResponseParams_Data();
  ~ServiceWorkerHost_SkipWaiting_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_SkipWaiting_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceWorkerHost_SkipWaiting_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_ClaimClients_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_ClaimClients_Params_Data));
      new (data()) ServiceWorkerHost_ClaimClients_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_ClaimClients_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_ClaimClients_Params_Data>(index_);
    }
    ServiceWorkerHost_ClaimClients_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerHost_ClaimClients_Params_Data();
  ~ServiceWorkerHost_ClaimClients_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_ClaimClients_Params_Data) == 8,
              "Bad sizeof(ServiceWorkerHost_ClaimClients_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_ClaimClients_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_ClaimClients_ResponseParams_Data));
      new (data()) ServiceWorkerHost_ClaimClients_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_ClaimClients_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_ClaimClients_ResponseParams_Data>(index_);
    }
    ServiceWorkerHost_ClaimClients_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> error_msg;

 private:
  ServiceWorkerHost_ClaimClients_ResponseParams_Data();
  ~ServiceWorkerHost_ClaimClients_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_ClaimClients_ResponseParams_Data) == 24,
              "Bad sizeof(ServiceWorkerHost_ClaimClients_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_SHARED_INTERNAL_H_