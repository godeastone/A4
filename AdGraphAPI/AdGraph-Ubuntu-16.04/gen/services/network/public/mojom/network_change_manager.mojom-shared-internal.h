// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_SHARED_INTERNAL_H_

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
namespace network {
namespace mojom {
namespace internal {

struct ConnectionType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
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
class  NetworkChangeManagerClient_OnInitialConnectionType_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkChangeManagerClient_OnInitialConnectionType_Params_Data));
      new (data()) NetworkChangeManagerClient_OnInitialConnectionType_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkChangeManagerClient_OnInitialConnectionType_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkChangeManagerClient_OnInitialConnectionType_Params_Data>(index_);
    }
    NetworkChangeManagerClient_OnInitialConnectionType_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t padfinal_[4];

 private:
  NetworkChangeManagerClient_OnInitialConnectionType_Params_Data();
  ~NetworkChangeManagerClient_OnInitialConnectionType_Params_Data() = delete;
};
static_assert(sizeof(NetworkChangeManagerClient_OnInitialConnectionType_Params_Data) == 16,
              "Bad sizeof(NetworkChangeManagerClient_OnInitialConnectionType_Params_Data)");
class  NetworkChangeManagerClient_OnNetworkChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkChangeManagerClient_OnNetworkChanged_Params_Data));
      new (data()) NetworkChangeManagerClient_OnNetworkChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkChangeManagerClient_OnNetworkChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkChangeManagerClient_OnNetworkChanged_Params_Data>(index_);
    }
    NetworkChangeManagerClient_OnNetworkChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t padfinal_[4];

 private:
  NetworkChangeManagerClient_OnNetworkChanged_Params_Data();
  ~NetworkChangeManagerClient_OnNetworkChanged_Params_Data() = delete;
};
static_assert(sizeof(NetworkChangeManagerClient_OnNetworkChanged_Params_Data) == 16,
              "Bad sizeof(NetworkChangeManagerClient_OnNetworkChanged_Params_Data)");
class  NetworkChangeManager_RequestNotifications_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkChangeManager_RequestNotifications_Params_Data));
      new (data()) NetworkChangeManager_RequestNotifications_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkChangeManager_RequestNotifications_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkChangeManager_RequestNotifications_Params_Data>(index_);
    }
    NetworkChangeManager_RequestNotifications_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client_ptr;

 private:
  NetworkChangeManager_RequestNotifications_Params_Data();
  ~NetworkChangeManager_RequestNotifications_Params_Data() = delete;
};
static_assert(sizeof(NetworkChangeManager_RequestNotifications_Params_Data) == 16,
              "Bad sizeof(NetworkChangeManager_RequestNotifications_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_SHARED_INTERNAL_H_