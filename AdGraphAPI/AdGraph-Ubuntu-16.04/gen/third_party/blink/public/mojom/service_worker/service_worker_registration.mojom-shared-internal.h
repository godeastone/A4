// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "third_party/blink/public/mojom/service_worker/navigation_preload_state.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-shared-internal.h"
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
class ServiceWorkerRegistrationOptions_Data;
class ServiceWorkerRegistrationObjectInfo_Data;

struct ServiceWorkerUpdateViaCache_Data {
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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationOptions_Data));
      new (data()) ServiceWorkerRegistrationOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationOptions_Data>(index_);
    }
    ServiceWorkerRegistrationOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> scope;
  int32_t update_via_cache;
  uint8_t padfinal_[4];

 private:
  ServiceWorkerRegistrationOptions_Data();
  ~ServiceWorkerRegistrationOptions_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationOptions_Data) == 24,
              "Bad sizeof(ServiceWorkerRegistrationOptions_Data)");
// Used by ServiceWorkerRegistrationOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ServiceWorkerRegistrationOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ServiceWorkerRegistrationOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ServiceWorkerRegistrationOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ServiceWorkerRegistrationOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ServiceWorkerRegistrationOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationObjectInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationObjectInfo_Data));
      new (data()) ServiceWorkerRegistrationObjectInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationObjectInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationObjectInfo_Data>(index_);
    }
    ServiceWorkerRegistrationObjectInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t registration_id;
  mojo::internal::Pointer<internal::ServiceWorkerRegistrationOptions_Data> options;
  mojo::internal::AssociatedInterface_Data host_ptr_info;
  mojo::internal::AssociatedEndpointHandle_Data request;
  uint8_t pad3_[4];
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerObjectInfo_Data> installing;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerObjectInfo_Data> waiting;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerObjectInfo_Data> active;

 private:
  ServiceWorkerRegistrationObjectInfo_Data();
  ~ServiceWorkerRegistrationObjectInfo_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationObjectInfo_Data) == 64,
              "Bad sizeof(ServiceWorkerRegistrationObjectInfo_Data)");
// Used by ServiceWorkerRegistrationObjectInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ServiceWorkerRegistrationObjectInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ServiceWorkerRegistrationObjectInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ServiceWorkerRegistrationObjectInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ServiceWorkerRegistrationObjectInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ServiceWorkerRegistrationObjectInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationObjectHost_Update_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationObjectHost_Update_Params_Data));
      new (data()) ServiceWorkerRegistrationObjectHost_Update_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationObjectHost_Update_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationObjectHost_Update_Params_Data>(index_);
    }
    ServiceWorkerRegistrationObjectHost_Update_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerRegistrationObjectHost_Update_Params_Data();
  ~ServiceWorkerRegistrationObjectHost_Update_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationObjectHost_Update_Params_Data) == 8,
              "Bad sizeof(ServiceWorkerRegistrationObjectHost_Update_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data));
      new (data()) ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data>(index_);
    }
    ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data* operator->() { return data(); }

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
  ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data();
  ~ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data) == 24,
              "Bad sizeof(ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationObjectHost_Unregister_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationObjectHost_Unregister_Params_Data));
      new (data()) ServiceWorkerRegistrationObjectHost_Unregister_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationObjectHost_Unregister_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationObjectHost_Unregister_Params_Data>(index_);
    }
    ServiceWorkerRegistrationObjectHost_Unregister_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerRegistrationObjectHost_Unregister_Params_Data();
  ~ServiceWorkerRegistrationObjectHost_Unregister_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationObjectHost_Unregister_Params_Data) == 8,
              "Bad sizeof(ServiceWorkerRegistrationObjectHost_Unregister_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data));
      new (data()) ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data>(index_);
    }
    ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data* operator->() { return data(); }

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
  ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data();
  ~ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data) == 24,
              "Bad sizeof(ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data));
      new (data()) ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data>(index_);
    }
    ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t enable : 1;
  uint8_t padfinal_[7];

 private:
  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data();
  ~ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data));
      new (data()) ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data>(index_);
    }
    ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data* operator->() { return data(); }

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
  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data();
  ~ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data) == 24,
              "Bad sizeof(ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data));
      new (data()) ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data>(index_);
    }
    ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data();
  ~ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data) == 8,
              "Bad sizeof(ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data));
      new (data()) ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data>(index_);
    }
    ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::blink::mojom::internal::NavigationPreloadState_Data> state;

 private:
  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data();
  ~ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data) == 32,
              "Bad sizeof(ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data));
      new (data()) ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data>(index_);
    }
    ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> value;

 private:
  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data();
  ~ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data));
      new (data()) ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data>(index_);
    }
    ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data* operator->() { return data(); }

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
  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data();
  ~ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data) == 24,
              "Bad sizeof(ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationObject_SetVersionAttributes_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationObject_SetVersionAttributes_Params_Data));
      new (data()) ServiceWorkerRegistrationObject_SetVersionAttributes_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationObject_SetVersionAttributes_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationObject_SetVersionAttributes_Params_Data>(index_);
    }
    ServiceWorkerRegistrationObject_SetVersionAttributes_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t changed_mask;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerObjectInfo_Data> installing;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerObjectInfo_Data> waiting;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerObjectInfo_Data> active;

 private:
  ServiceWorkerRegistrationObject_SetVersionAttributes_Params_Data();
  ~ServiceWorkerRegistrationObject_SetVersionAttributes_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationObject_SetVersionAttributes_Params_Data) == 40,
              "Bad sizeof(ServiceWorkerRegistrationObject_SetVersionAttributes_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data));
      new (data()) ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data>(index_);
    }
    ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t update_via_cache;
  uint8_t padfinal_[4];

 private:
  ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data();
  ~ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationObject_UpdateFound_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationObject_UpdateFound_Params_Data));
      new (data()) ServiceWorkerRegistrationObject_UpdateFound_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationObject_UpdateFound_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationObject_UpdateFound_Params_Data>(index_);
    }
    ServiceWorkerRegistrationObject_UpdateFound_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerRegistrationObject_UpdateFound_Params_Data();
  ~ServiceWorkerRegistrationObject_UpdateFound_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationObject_UpdateFound_Params_Data) == 8,
              "Bad sizeof(ServiceWorkerRegistrationObject_UpdateFound_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_SHARED_INTERNAL_H_