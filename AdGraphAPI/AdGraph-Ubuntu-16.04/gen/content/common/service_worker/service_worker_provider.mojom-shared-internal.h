// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "content/common/service_worker/service_worker_container.mojom-shared-internal.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared-internal.h"
#include "services/service_manager/public/mojom/interface_provider.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_provider_type.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-shared-internal.h"
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
class ServiceWorkerProviderInfoForSharedWorker_Data;
class ServiceWorkerProviderInfoForStartWorker_Data;
class ServiceWorkerProviderHostInfo_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerProviderInfoForSharedWorker_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerProviderInfoForSharedWorker_Data));
      new (data()) ServiceWorkerProviderInfoForSharedWorker_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerProviderInfoForSharedWorker_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerProviderInfoForSharedWorker_Data>(index_);
    }
    ServiceWorkerProviderInfoForSharedWorker_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t provider_id;
  mojo::internal::AssociatedInterface_Data host_ptr_info;
  mojo::internal::AssociatedEndpointHandle_Data client_request;

 private:
  ServiceWorkerProviderInfoForSharedWorker_Data();
  ~ServiceWorkerProviderInfoForSharedWorker_Data() = delete;
};
static_assert(sizeof(ServiceWorkerProviderInfoForSharedWorker_Data) == 24,
              "Bad sizeof(ServiceWorkerProviderInfoForSharedWorker_Data)");
// Used by ServiceWorkerProviderInfoForSharedWorker::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ServiceWorkerProviderInfoForSharedWorker_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ServiceWorkerProviderInfoForSharedWorker_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ServiceWorkerProviderInfoForSharedWorker_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ServiceWorkerProviderInfoForSharedWorker_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ServiceWorkerProviderInfoForSharedWorker_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerProviderInfoForStartWorker_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerProviderInfoForStartWorker_Data));
      new (data()) ServiceWorkerProviderInfoForStartWorker_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerProviderInfoForStartWorker_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerProviderInfoForStartWorker_Data>(index_);
    }
    ServiceWorkerProviderInfoForStartWorker_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t provider_id;
  mojo::internal::AssociatedInterface_Data host_ptr_info;
  mojo::internal::AssociatedEndpointHandle_Data client_request;
  mojo::internal::AssociatedInterface_Data script_loader_factory_ptr_info;
  mojo::internal::Interface_Data interface_provider;

 private:
  ServiceWorkerProviderInfoForStartWorker_Data();
  ~ServiceWorkerProviderInfoForStartWorker_Data() = delete;
};
static_assert(sizeof(ServiceWorkerProviderInfoForStartWorker_Data) == 40,
              "Bad sizeof(ServiceWorkerProviderInfoForStartWorker_Data)");
// Used by ServiceWorkerProviderInfoForStartWorker::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ServiceWorkerProviderInfoForStartWorker_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ServiceWorkerProviderInfoForStartWorker_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ServiceWorkerProviderInfoForStartWorker_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ServiceWorkerProviderInfoForStartWorker_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ServiceWorkerProviderInfoForStartWorker_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerProviderHostInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerProviderHostInfo_Data));
      new (data()) ServiceWorkerProviderHostInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerProviderHostInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerProviderHostInfo_Data>(index_);
    }
    ServiceWorkerProviderHostInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t provider_id;
  int32_t route_id;
  int32_t type;
  uint8_t is_parent_frame_secure : 1;
  uint8_t pad3_[3];
  mojo::internal::AssociatedEndpointHandle_Data host_request;
  mojo::internal::AssociatedInterface_Data client_ptr_info;
  uint8_t padfinal_[4];

 private:
  ServiceWorkerProviderHostInfo_Data();
  ~ServiceWorkerProviderHostInfo_Data() = delete;
};
static_assert(sizeof(ServiceWorkerProviderHostInfo_Data) == 40,
              "Bad sizeof(ServiceWorkerProviderHostInfo_Data)");
// Used by ServiceWorkerProviderHostInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ServiceWorkerProviderHostInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ServiceWorkerProviderHostInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ServiceWorkerProviderHostInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ServiceWorkerProviderHostInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ServiceWorkerProviderHostInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerWorkerClient_SetControllerServiceWorker_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerWorkerClient_SetControllerServiceWorker_Params_Data));
      new (data()) ServiceWorkerWorkerClient_SetControllerServiceWorker_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerWorkerClient_SetControllerServiceWorker_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerWorkerClient_SetControllerServiceWorker_Params_Data>(index_);
    }
    ServiceWorkerWorkerClient_SetControllerServiceWorker_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t controller_version_id;

 private:
  ServiceWorkerWorkerClient_SetControllerServiceWorker_Params_Data();
  ~ServiceWorkerWorkerClient_SetControllerServiceWorker_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerWorkerClient_SetControllerServiceWorker_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerWorkerClient_SetControllerServiceWorker_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_SHARED_INTERNAL_H_