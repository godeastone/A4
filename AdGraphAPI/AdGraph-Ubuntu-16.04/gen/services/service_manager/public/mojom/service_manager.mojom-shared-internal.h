// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/service_manager/public/mojom/connector.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace service_manager {
namespace mojom {
namespace internal {
class RunningServiceInfo_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) RunningServiceInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RunningServiceInfo_Data));
      new (data()) RunningServiceInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RunningServiceInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RunningServiceInfo_Data>(index_);
    }
    RunningServiceInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t id;
  uint32_t pid;
  mojo::internal::Pointer<::service_manager::mojom::internal::Identity_Data> identity;

 private:
  RunningServiceInfo_Data();
  ~RunningServiceInfo_Data() = delete;
};
static_assert(sizeof(RunningServiceInfo_Data) == 24,
              "Bad sizeof(RunningServiceInfo_Data)");
// Used by RunningServiceInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct RunningServiceInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  RunningServiceInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~RunningServiceInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    RunningServiceInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    RunningServiceInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) ServiceManagerListener_OnInit_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceManagerListener_OnInit_Params_Data));
      new (data()) ServiceManagerListener_OnInit_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceManagerListener_OnInit_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceManagerListener_OnInit_Params_Data>(index_);
    }
    ServiceManagerListener_OnInit_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::RunningServiceInfo_Data>>> running_services;

 private:
  ServiceManagerListener_OnInit_Params_Data();
  ~ServiceManagerListener_OnInit_Params_Data() = delete;
};
static_assert(sizeof(ServiceManagerListener_OnInit_Params_Data) == 16,
              "Bad sizeof(ServiceManagerListener_OnInit_Params_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) ServiceManagerListener_OnServiceCreated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceManagerListener_OnServiceCreated_Params_Data));
      new (data()) ServiceManagerListener_OnServiceCreated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceManagerListener_OnServiceCreated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceManagerListener_OnServiceCreated_Params_Data>(index_);
    }
    ServiceManagerListener_OnServiceCreated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::RunningServiceInfo_Data> service;

 private:
  ServiceManagerListener_OnServiceCreated_Params_Data();
  ~ServiceManagerListener_OnServiceCreated_Params_Data() = delete;
};
static_assert(sizeof(ServiceManagerListener_OnServiceCreated_Params_Data) == 16,
              "Bad sizeof(ServiceManagerListener_OnServiceCreated_Params_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) ServiceManagerListener_OnServiceStarted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceManagerListener_OnServiceStarted_Params_Data));
      new (data()) ServiceManagerListener_OnServiceStarted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceManagerListener_OnServiceStarted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceManagerListener_OnServiceStarted_Params_Data>(index_);
    }
    ServiceManagerListener_OnServiceStarted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::service_manager::mojom::internal::Identity_Data> identity;
  uint32_t pid;
  uint8_t padfinal_[4];

 private:
  ServiceManagerListener_OnServiceStarted_Params_Data();
  ~ServiceManagerListener_OnServiceStarted_Params_Data() = delete;
};
static_assert(sizeof(ServiceManagerListener_OnServiceStarted_Params_Data) == 24,
              "Bad sizeof(ServiceManagerListener_OnServiceStarted_Params_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) ServiceManagerListener_OnServicePIDReceived_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceManagerListener_OnServicePIDReceived_Params_Data));
      new (data()) ServiceManagerListener_OnServicePIDReceived_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceManagerListener_OnServicePIDReceived_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceManagerListener_OnServicePIDReceived_Params_Data>(index_);
    }
    ServiceManagerListener_OnServicePIDReceived_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::service_manager::mojom::internal::Identity_Data> identity;
  uint32_t pid;
  uint8_t padfinal_[4];

 private:
  ServiceManagerListener_OnServicePIDReceived_Params_Data();
  ~ServiceManagerListener_OnServicePIDReceived_Params_Data() = delete;
};
static_assert(sizeof(ServiceManagerListener_OnServicePIDReceived_Params_Data) == 24,
              "Bad sizeof(ServiceManagerListener_OnServicePIDReceived_Params_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) ServiceManagerListener_OnServiceFailedToStart_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceManagerListener_OnServiceFailedToStart_Params_Data));
      new (data()) ServiceManagerListener_OnServiceFailedToStart_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceManagerListener_OnServiceFailedToStart_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceManagerListener_OnServiceFailedToStart_Params_Data>(index_);
    }
    ServiceManagerListener_OnServiceFailedToStart_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::service_manager::mojom::internal::Identity_Data> identity;

 private:
  ServiceManagerListener_OnServiceFailedToStart_Params_Data();
  ~ServiceManagerListener_OnServiceFailedToStart_Params_Data() = delete;
};
static_assert(sizeof(ServiceManagerListener_OnServiceFailedToStart_Params_Data) == 16,
              "Bad sizeof(ServiceManagerListener_OnServiceFailedToStart_Params_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) ServiceManagerListener_OnServiceStopped_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceManagerListener_OnServiceStopped_Params_Data));
      new (data()) ServiceManagerListener_OnServiceStopped_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceManagerListener_OnServiceStopped_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceManagerListener_OnServiceStopped_Params_Data>(index_);
    }
    ServiceManagerListener_OnServiceStopped_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::service_manager::mojom::internal::Identity_Data> identity;

 private:
  ServiceManagerListener_OnServiceStopped_Params_Data();
  ~ServiceManagerListener_OnServiceStopped_Params_Data() = delete;
};
static_assert(sizeof(ServiceManagerListener_OnServiceStopped_Params_Data) == 16,
              "Bad sizeof(ServiceManagerListener_OnServiceStopped_Params_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) ServiceManager_AddListener_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceManager_AddListener_Params_Data));
      new (data()) ServiceManager_AddListener_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceManager_AddListener_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceManager_AddListener_Params_Data>(index_);
    }
    ServiceManager_AddListener_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data listener;

 private:
  ServiceManager_AddListener_Params_Data();
  ~ServiceManager_AddListener_Params_Data() = delete;
};
static_assert(sizeof(ServiceManager_AddListener_Params_Data) == 16,
              "Bad sizeof(ServiceManager_AddListener_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_SHARED_INTERNAL_H_