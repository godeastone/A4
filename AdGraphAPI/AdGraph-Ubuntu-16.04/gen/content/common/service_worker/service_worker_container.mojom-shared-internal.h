// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "content/common/service_worker/controller_service_worker.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/message_port/message_port.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-shared-internal.h"
#include "third_party/blink/public/platform/web_feature.mojom-shared-internal.h"
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

struct ControllerServiceWorkerPurpose_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerContainerHost_Register_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainerHost_Register_Params_Data));
      new (data()) ServiceWorkerContainerHost_Register_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainerHost_Register_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainerHost_Register_Params_Data>(index_);
    }
    ServiceWorkerContainerHost_Register_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> script_url;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerRegistrationOptions_Data> options;

 private:
  ServiceWorkerContainerHost_Register_Params_Data();
  ~ServiceWorkerContainerHost_Register_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainerHost_Register_Params_Data) == 24,
              "Bad sizeof(ServiceWorkerContainerHost_Register_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerContainerHost_Register_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainerHost_Register_ResponseParams_Data));
      new (data()) ServiceWorkerContainerHost_Register_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainerHost_Register_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainerHost_Register_ResponseParams_Data>(index_);
    }
    ServiceWorkerContainerHost_Register_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerRegistrationObjectInfo_Data> registration;

 private:
  ServiceWorkerContainerHost_Register_ResponseParams_Data();
  ~ServiceWorkerContainerHost_Register_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainerHost_Register_ResponseParams_Data) == 32,
              "Bad sizeof(ServiceWorkerContainerHost_Register_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerContainerHost_GetRegistration_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainerHost_GetRegistration_Params_Data));
      new (data()) ServiceWorkerContainerHost_GetRegistration_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainerHost_GetRegistration_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainerHost_GetRegistration_Params_Data>(index_);
    }
    ServiceWorkerContainerHost_GetRegistration_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> client_url;

 private:
  ServiceWorkerContainerHost_GetRegistration_Params_Data();
  ~ServiceWorkerContainerHost_GetRegistration_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainerHost_GetRegistration_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerContainerHost_GetRegistration_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data));
      new (data()) ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data>(index_);
    }
    ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerRegistrationObjectInfo_Data> registration;

 private:
  ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data();
  ~ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data) == 32,
              "Bad sizeof(ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerContainerHost_GetRegistrations_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainerHost_GetRegistrations_Params_Data));
      new (data()) ServiceWorkerContainerHost_GetRegistrations_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainerHost_GetRegistrations_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainerHost_GetRegistrations_Params_Data>(index_);
    }
    ServiceWorkerContainerHost_GetRegistrations_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerContainerHost_GetRegistrations_Params_Data();
  ~ServiceWorkerContainerHost_GetRegistrations_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainerHost_GetRegistrations_Params_Data) == 8,
              "Bad sizeof(ServiceWorkerContainerHost_GetRegistrations_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data));
      new (data()) ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data>(index_);
    }
    ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerRegistrationObjectInfo_Data>>> infos;

 private:
  ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data();
  ~ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data) == 32,
              "Bad sizeof(ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data));
      new (data()) ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data>(index_);
    }
    ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data();
  ~ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data) == 8,
              "Bad sizeof(ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data));
      new (data()) ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data>(index_);
    }
    ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerRegistrationObjectInfo_Data> registration;

 private:
  ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data();
  ~ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data));
      new (data()) ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data>(index_);
    }
    ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data controller;
  int32_t purpose;

 private:
  ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data();
  ~ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerContainerHost_CloneForWorker_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainerHost_CloneForWorker_Params_Data));
      new (data()) ServiceWorkerContainerHost_CloneForWorker_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainerHost_CloneForWorker_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainerHost_CloneForWorker_Params_Data>(index_);
    }
    ServiceWorkerContainerHost_CloneForWorker_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data container_host_for_worker;
  uint8_t padfinal_[4];

 private:
  ServiceWorkerContainerHost_CloneForWorker_Params_Data();
  ~ServiceWorkerContainerHost_CloneForWorker_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainerHost_CloneForWorker_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerContainerHost_CloneForWorker_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerContainerHost_Ping_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainerHost_Ping_Params_Data));
      new (data()) ServiceWorkerContainerHost_Ping_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainerHost_Ping_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainerHost_Ping_Params_Data>(index_);
    }
    ServiceWorkerContainerHost_Ping_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerContainerHost_Ping_Params_Data();
  ~ServiceWorkerContainerHost_Ping_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainerHost_Ping_Params_Data) == 8,
              "Bad sizeof(ServiceWorkerContainerHost_Ping_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerContainerHost_Ping_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainerHost_Ping_ResponseParams_Data));
      new (data()) ServiceWorkerContainerHost_Ping_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainerHost_Ping_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainerHost_Ping_ResponseParams_Data>(index_);
    }
    ServiceWorkerContainerHost_Ping_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerContainerHost_Ping_ResponseParams_Data();
  ~ServiceWorkerContainerHost_Ping_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainerHost_Ping_ResponseParams_Data) == 8,
              "Bad sizeof(ServiceWorkerContainerHost_Ping_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerContainer_SetController_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainer_SetController_Params_Data));
      new (data()) ServiceWorkerContainer_SetController_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainer_SetController_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainer_SetController_Params_Data>(index_);
    }
    ServiceWorkerContainer_SetController_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::content::mojom::internal::ControllerServiceWorkerInfo_Data> controller_info;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> used_features;
  uint8_t should_notify_controllerchange : 1;
  uint8_t padfinal_[7];

 private:
  ServiceWorkerContainer_SetController_Params_Data();
  ~ServiceWorkerContainer_SetController_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainer_SetController_Params_Data) == 32,
              "Bad sizeof(ServiceWorkerContainer_SetController_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerContainer_PostMessageToClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainer_PostMessageToClient_Params_Data));
      new (data()) ServiceWorkerContainer_PostMessageToClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainer_PostMessageToClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainer_PostMessageToClient_Params_Data>(index_);
    }
    ServiceWorkerContainer_PostMessageToClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerObjectInfo_Data> source;
  mojo::internal::Pointer<::blink::mojom::internal::TransferableMessage_Data> message;

 private:
  ServiceWorkerContainer_PostMessageToClient_Params_Data();
  ~ServiceWorkerContainer_PostMessageToClient_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainer_PostMessageToClient_Params_Data) == 24,
              "Bad sizeof(ServiceWorkerContainer_PostMessageToClient_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerContainer_CountFeature_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainer_CountFeature_Params_Data));
      new (data()) ServiceWorkerContainer_CountFeature_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainer_CountFeature_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainer_CountFeature_Params_Data>(index_);
    }
    ServiceWorkerContainer_CountFeature_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t feature;
  uint8_t padfinal_[4];

 private:
  ServiceWorkerContainer_CountFeature_Params_Data();
  ~ServiceWorkerContainer_CountFeature_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainer_CountFeature_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerContainer_CountFeature_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_SHARED_INTERNAL_H_