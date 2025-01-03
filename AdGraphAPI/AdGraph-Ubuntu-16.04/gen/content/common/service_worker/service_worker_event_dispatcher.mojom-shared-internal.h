// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_EVENT_DISPATCHER_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_EVENT_DISPATCHER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "content/common/service_worker/dispatch_fetch_event_params.mojom-shared-internal.h"
#include "content/common/service_worker/service_worker_fetch_response_callback.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "services/network/public/mojom/cookie_manager.mojom-shared-internal.h"
#include "third_party/blink/public/platform/modules/fetch/fetch_api_request.mojom-shared-internal.h"
#include "third_party/blink/public/platform/modules/payments/payment_app.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/message_port/message_port.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_client.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_event_status.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace content {
namespace mojom {
namespace internal {
using PlatformNotificationData_Data = mojo::native::internal::NativeStruct_Data;
using PushEventPayload_Data = mojo::native::internal::NativeStruct_Data;
using ServiceWorkerResponse_Data = mojo::native::internal::NativeStruct_Data;
class BackgroundFetchSettledFetch_Data;
class ExtendableMessageEvent_Data;

struct BackgroundFetchState_Data {
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BackgroundFetchSettledFetch_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchSettledFetch_Data));
      new (data()) BackgroundFetchSettledFetch_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchSettledFetch_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchSettledFetch_Data>(index_);
    }
    BackgroundFetchSettledFetch_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::FetchAPIRequest_Data> request;
  mojo::internal::Pointer<internal::ServiceWorkerResponse_Data> response;

 private:
  BackgroundFetchSettledFetch_Data();
  ~BackgroundFetchSettledFetch_Data() = delete;
};
static_assert(sizeof(BackgroundFetchSettledFetch_Data) == 24,
              "Bad sizeof(BackgroundFetchSettledFetch_Data)");
// Used by BackgroundFetchSettledFetch::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct BackgroundFetchSettledFetch_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  BackgroundFetchSettledFetch_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~BackgroundFetchSettledFetch_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    BackgroundFetchSettledFetch_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    BackgroundFetchSettledFetch_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ExtendableMessageEvent_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ExtendableMessageEvent_Data));
      new (data()) ExtendableMessageEvent_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ExtendableMessageEvent_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ExtendableMessageEvent_Data>(index_);
    }
    ExtendableMessageEvent_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::TransferableMessage_Data> message;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> source_origin;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerClientInfo_Data> source_info_for_client;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerObjectInfo_Data> source_info_for_service_worker;

 private:
  ExtendableMessageEvent_Data();
  ~ExtendableMessageEvent_Data() = delete;
};
static_assert(sizeof(ExtendableMessageEvent_Data) == 40,
              "Bad sizeof(ExtendableMessageEvent_Data)");
// Used by ExtendableMessageEvent::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ExtendableMessageEvent_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ExtendableMessageEvent_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ExtendableMessageEvent_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ExtendableMessageEvent_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ExtendableMessageEvent_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_InitializeGlobalScope_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_InitializeGlobalScope_Params_Data));
      new (data()) ServiceWorkerEventDispatcher_InitializeGlobalScope_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_InitializeGlobalScope_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_InitializeGlobalScope_Params_Data>(index_);
    }
    ServiceWorkerEventDispatcher_InitializeGlobalScope_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data service_worker_host;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerRegistrationObjectInfo_Data> registration_info;

 private:
  ServiceWorkerEventDispatcher_InitializeGlobalScope_Params_Data();
  ~ServiceWorkerEventDispatcher_InitializeGlobalScope_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_InitializeGlobalScope_Params_Data) == 24,
              "Bad sizeof(ServiceWorkerEventDispatcher_InitializeGlobalScope_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchInstallEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchInstallEvent_Params_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchInstallEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchInstallEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchInstallEvent_Params_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchInstallEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerEventDispatcher_DispatchInstallEvent_Params_Data();
  ~ServiceWorkerEventDispatcher_DispatchInstallEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchInstallEvent_Params_Data) == 8,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchInstallEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t has_fetch_handler : 1;
  uint8_t pad1_[3];
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> dispatch_event_time;

 private:
  ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams_Data();
  ~ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams_Data) == 24,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchActivateEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchActivateEvent_Params_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchActivateEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchActivateEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchActivateEvent_Params_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchActivateEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerEventDispatcher_DispatchActivateEvent_Params_Data();
  ~ServiceWorkerEventDispatcher_DispatchActivateEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchActivateEvent_Params_Data) == 8,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchActivateEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> dispatch_event_time;

 private:
  ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams_Data();
  ~ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams_Data) == 24,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> developer_id;
  mojo::internal::Pointer<mojo::internal::String_Data> unique_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::BackgroundFetchSettledFetch_Data>>> fetches;

 private:
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params_Data();
  ~ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params_Data) == 32,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> dispatch_event_time;

 private:
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams_Data();
  ~ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams_Data) == 24,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> developer_id;
  int32_t state;
  uint8_t padfinal_[4];

 private:
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params_Data();
  ~ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params_Data) == 24,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> dispatch_event_time;

 private:
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams_Data();
  ~ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams_Data) == 24,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> developer_id;
  mojo::internal::Pointer<mojo::internal::String_Data> unique_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::BackgroundFetchSettledFetch_Data>>> fetches;

 private:
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params_Data();
  ~ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params_Data) == 32,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> dispatch_event_time;

 private:
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams_Data();
  ~ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams_Data) == 24,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> developer_id;
  mojo::internal::Pointer<mojo::internal::String_Data> unique_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::BackgroundFetchSettledFetch_Data>>> fetches;

 private:
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params_Data();
  ~ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params_Data) == 32,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> dispatch_event_time;

 private:
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams_Data();
  ~ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams_Data) == 24,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::CanonicalCookie_Data> cookie;
  int32_t cause;
  uint8_t padfinal_[4];

 private:
  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params_Data();
  ~ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params_Data) == 24,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> dispatch_event_time;

 private:
  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams_Data();
  ~ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams_Data) == 24,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchFetchEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchFetchEvent_Params_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchFetchEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchFetchEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchFetchEvent_Params_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchFetchEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::content::mojom::internal::DispatchFetchEventParams_Data> params;
  mojo::internal::Interface_Data response_callback;

 private:
  ServiceWorkerEventDispatcher_DispatchFetchEvent_Params_Data();
  ~ServiceWorkerEventDispatcher_DispatchFetchEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchFetchEvent_Params_Data) == 24,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchFetchEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> dispatch_event_time;

 private:
  ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams_Data();
  ~ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams_Data) == 24,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> notification_id;
  mojo::internal::Pointer<internal::PlatformNotificationData_Data> notification_data;
  int32_t action_index;
  uint8_t pad2_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> reply;

 private:
  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params_Data();
  ~ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params_Data) == 40,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> dispatch_event_time;

 private:
  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams_Data();
  ~ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams_Data) == 24,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> notification_id;
  mojo::internal::Pointer<internal::PlatformNotificationData_Data> notification_data;

 private:
  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params_Data();
  ~ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params_Data) == 24,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> dispatch_event_time;

 private:
  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams_Data();
  ~ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams_Data) == 24,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchPushEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchPushEvent_Params_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchPushEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchPushEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchPushEvent_Params_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchPushEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PushEventPayload_Data> payload;

 private:
  ServiceWorkerEventDispatcher_DispatchPushEvent_Params_Data();
  ~ServiceWorkerEventDispatcher_DispatchPushEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchPushEvent_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchPushEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> dispatch_event_time;

 private:
  ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams_Data();
  ~ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams_Data) == 24,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchSyncEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchSyncEvent_Params_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchSyncEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchSyncEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchSyncEvent_Params_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchSyncEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> id;
  uint8_t last_chance : 1;
  uint8_t pad1_[7];
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> timeout;

 private:
  ServiceWorkerEventDispatcher_DispatchSyncEvent_Params_Data();
  ~ServiceWorkerEventDispatcher_DispatchSyncEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchSyncEvent_Params_Data) == 32,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchSyncEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> dispatch_event_time;

 private:
  ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams_Data();
  ~ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams_Data) == 24,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t event_id;
  mojo::internal::Interface_Data result_of_abort_payment;
  uint8_t padfinal_[4];

 private:
  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params_Data();
  ~ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params_Data) == 24,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> dispatch_event_time;

 private:
  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams_Data();
  ~ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams_Data) == 24,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t event_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::payments::mojom::internal::CanMakePaymentEventData_Data> event_data;
  mojo::internal::Interface_Data result_of_can_make_payment;

 private:
  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params_Data();
  ~ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params_Data) == 32,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> dispatch_event_time;

 private:
  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams_Data();
  ~ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams_Data) == 24,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t payment_request_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::payments::mojom::internal::PaymentRequestEventData_Data> request_data;
  mojo::internal::Interface_Data response_callback;

 private:
  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params_Data();
  ~ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params_Data) == 32,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> dispatch_event_time;

 private:
  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams_Data();
  ~ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams_Data) == 24,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ExtendableMessageEvent_Data> event;

 private:
  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params_Data();
  ~ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams_Data));
      new (data()) ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams_Data>(index_);
    }
    ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> dispatch_event_time;

 private:
  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams_Data();
  ~ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams_Data) == 24,
              "Bad sizeof(ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_Ping_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_Ping_Params_Data));
      new (data()) ServiceWorkerEventDispatcher_Ping_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_Ping_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_Ping_Params_Data>(index_);
    }
    ServiceWorkerEventDispatcher_Ping_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerEventDispatcher_Ping_Params_Data();
  ~ServiceWorkerEventDispatcher_Ping_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_Ping_Params_Data) == 8,
              "Bad sizeof(ServiceWorkerEventDispatcher_Ping_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_Ping_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_Ping_ResponseParams_Data));
      new (data()) ServiceWorkerEventDispatcher_Ping_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_Ping_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_Ping_ResponseParams_Data>(index_);
    }
    ServiceWorkerEventDispatcher_Ping_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerEventDispatcher_Ping_ResponseParams_Data();
  ~ServiceWorkerEventDispatcher_Ping_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_Ping_ResponseParams_Data) == 8,
              "Bad sizeof(ServiceWorkerEventDispatcher_Ping_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params_Data));
      new (data()) ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params_Data>(index_);
    }
    ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params_Data();
  ~ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params_Data) == 8,
              "Bad sizeof(ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_EVENT_DISPATCHER_MOJOM_SHARED_INTERNAL_H_