// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_BLUETOOTH_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_INTERNAL_H_
#define DEVICE_BLUETOOTH_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "device/bluetooth/public/mojom/uuid.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace bluetooth {
namespace mojom {
namespace internal {
class RSSIWrapper_Data;
class DeviceInfo_Data;
class ServiceInfo_Data;
class CharacteristicInfo_Data;
class DescriptorInfo_Data;

struct Property_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 4:
      case 8:
      case 16:
      case 32:
      case 64:
      case 128:
      case 256:
      case 512:
      case 1024:
      case 2048:
      case 4096:
      case 8192:
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

struct GattResult_Data {
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
      case 8:
      case 9:
      case 10:
      case 11:
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
class  RSSIWrapper_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RSSIWrapper_Data));
      new (data()) RSSIWrapper_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RSSIWrapper_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RSSIWrapper_Data>(index_);
    }
    RSSIWrapper_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int8_t value;
  uint8_t padfinal_[7];

 private:
  RSSIWrapper_Data();
  ~RSSIWrapper_Data() = delete;
};
static_assert(sizeof(RSSIWrapper_Data) == 16,
              "Bad sizeof(RSSIWrapper_Data)");
// Used by RSSIWrapper::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct RSSIWrapper_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  RSSIWrapper_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~RSSIWrapper_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    RSSIWrapper_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    RSSIWrapper_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  DeviceInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DeviceInfo_Data));
      new (data()) DeviceInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DeviceInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DeviceInfo_Data>(index_);
    }
    DeviceInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::String_Data> name_for_display;
  mojo::internal::Pointer<mojo::internal::String_Data> address;
  uint8_t is_gatt_connected : 1;
  uint8_t pad3_[7];
  mojo::internal::Pointer<internal::RSSIWrapper_Data> rssi;

 private:
  DeviceInfo_Data();
  ~DeviceInfo_Data() = delete;
};
static_assert(sizeof(DeviceInfo_Data) == 48,
              "Bad sizeof(DeviceInfo_Data)");
// Used by DeviceInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DeviceInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DeviceInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DeviceInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DeviceInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DeviceInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ServiceInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceInfo_Data));
      new (data()) ServiceInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceInfo_Data>(index_);
    }
    ServiceInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> id;
  mojo::internal::Pointer<::bluetooth::mojom::internal::UUID_Data> uuid;
  uint8_t is_primary : 1;
  uint8_t padfinal_[7];

 private:
  ServiceInfo_Data();
  ~ServiceInfo_Data() = delete;
};
static_assert(sizeof(ServiceInfo_Data) == 32,
              "Bad sizeof(ServiceInfo_Data)");
// Used by ServiceInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ServiceInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ServiceInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ServiceInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ServiceInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ServiceInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  CharacteristicInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CharacteristicInfo_Data));
      new (data()) CharacteristicInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CharacteristicInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CharacteristicInfo_Data>(index_);
    }
    CharacteristicInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> id;
  mojo::internal::Pointer<::bluetooth::mojom::internal::UUID_Data> uuid;
  uint32_t properties;
  uint8_t pad2_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> last_known_value;

 private:
  CharacteristicInfo_Data();
  ~CharacteristicInfo_Data() = delete;
};
static_assert(sizeof(CharacteristicInfo_Data) == 40,
              "Bad sizeof(CharacteristicInfo_Data)");
// Used by CharacteristicInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CharacteristicInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CharacteristicInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CharacteristicInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CharacteristicInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CharacteristicInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  DescriptorInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DescriptorInfo_Data));
      new (data()) DescriptorInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DescriptorInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DescriptorInfo_Data>(index_);
    }
    DescriptorInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> id;
  mojo::internal::Pointer<::bluetooth::mojom::internal::UUID_Data> uuid;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> last_known_value;

 private:
  DescriptorInfo_Data();
  ~DescriptorInfo_Data() = delete;
};
static_assert(sizeof(DescriptorInfo_Data) == 32,
              "Bad sizeof(DescriptorInfo_Data)");
// Used by DescriptorInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DescriptorInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DescriptorInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DescriptorInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DescriptorInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DescriptorInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Device_Disconnect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_Disconnect_Params_Data));
      new (data()) Device_Disconnect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_Disconnect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_Disconnect_Params_Data>(index_);
    }
    Device_Disconnect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Device_Disconnect_Params_Data();
  ~Device_Disconnect_Params_Data() = delete;
};
static_assert(sizeof(Device_Disconnect_Params_Data) == 8,
              "Bad sizeof(Device_Disconnect_Params_Data)");
class  Device_GetInfo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_GetInfo_Params_Data));
      new (data()) Device_GetInfo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_GetInfo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_GetInfo_Params_Data>(index_);
    }
    Device_GetInfo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Device_GetInfo_Params_Data();
  ~Device_GetInfo_Params_Data() = delete;
};
static_assert(sizeof(Device_GetInfo_Params_Data) == 8,
              "Bad sizeof(Device_GetInfo_Params_Data)");
class  Device_GetInfo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_GetInfo_ResponseParams_Data));
      new (data()) Device_GetInfo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_GetInfo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_GetInfo_ResponseParams_Data>(index_);
    }
    Device_GetInfo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::DeviceInfo_Data> info;

 private:
  Device_GetInfo_ResponseParams_Data();
  ~Device_GetInfo_ResponseParams_Data() = delete;
};
static_assert(sizeof(Device_GetInfo_ResponseParams_Data) == 16,
              "Bad sizeof(Device_GetInfo_ResponseParams_Data)");
class  Device_GetServices_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_GetServices_Params_Data));
      new (data()) Device_GetServices_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_GetServices_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_GetServices_Params_Data>(index_);
    }
    Device_GetServices_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Device_GetServices_Params_Data();
  ~Device_GetServices_Params_Data() = delete;
};
static_assert(sizeof(Device_GetServices_Params_Data) == 8,
              "Bad sizeof(Device_GetServices_Params_Data)");
class  Device_GetServices_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_GetServices_ResponseParams_Data));
      new (data()) Device_GetServices_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_GetServices_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_GetServices_ResponseParams_Data>(index_);
    }
    Device_GetServices_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ServiceInfo_Data>>> services;

 private:
  Device_GetServices_ResponseParams_Data();
  ~Device_GetServices_ResponseParams_Data() = delete;
};
static_assert(sizeof(Device_GetServices_ResponseParams_Data) == 16,
              "Bad sizeof(Device_GetServices_ResponseParams_Data)");
class  Device_GetCharacteristics_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_GetCharacteristics_Params_Data));
      new (data()) Device_GetCharacteristics_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_GetCharacteristics_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_GetCharacteristics_Params_Data>(index_);
    }
    Device_GetCharacteristics_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> service_id;

 private:
  Device_GetCharacteristics_Params_Data();
  ~Device_GetCharacteristics_Params_Data() = delete;
};
static_assert(sizeof(Device_GetCharacteristics_Params_Data) == 16,
              "Bad sizeof(Device_GetCharacteristics_Params_Data)");
class  Device_GetCharacteristics_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_GetCharacteristics_ResponseParams_Data));
      new (data()) Device_GetCharacteristics_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_GetCharacteristics_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_GetCharacteristics_ResponseParams_Data>(index_);
    }
    Device_GetCharacteristics_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::CharacteristicInfo_Data>>> characteristics;

 private:
  Device_GetCharacteristics_ResponseParams_Data();
  ~Device_GetCharacteristics_ResponseParams_Data() = delete;
};
static_assert(sizeof(Device_GetCharacteristics_ResponseParams_Data) == 16,
              "Bad sizeof(Device_GetCharacteristics_ResponseParams_Data)");
class  Device_ReadValueForCharacteristic_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_ReadValueForCharacteristic_Params_Data));
      new (data()) Device_ReadValueForCharacteristic_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_ReadValueForCharacteristic_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_ReadValueForCharacteristic_Params_Data>(index_);
    }
    Device_ReadValueForCharacteristic_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> service_id;
  mojo::internal::Pointer<mojo::internal::String_Data> characteristic_id;

 private:
  Device_ReadValueForCharacteristic_Params_Data();
  ~Device_ReadValueForCharacteristic_Params_Data() = delete;
};
static_assert(sizeof(Device_ReadValueForCharacteristic_Params_Data) == 24,
              "Bad sizeof(Device_ReadValueForCharacteristic_Params_Data)");
class  Device_ReadValueForCharacteristic_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_ReadValueForCharacteristic_ResponseParams_Data));
      new (data()) Device_ReadValueForCharacteristic_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_ReadValueForCharacteristic_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_ReadValueForCharacteristic_ResponseParams_Data>(index_);
    }
    Device_ReadValueForCharacteristic_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  Device_ReadValueForCharacteristic_ResponseParams_Data();
  ~Device_ReadValueForCharacteristic_ResponseParams_Data() = delete;
};
static_assert(sizeof(Device_ReadValueForCharacteristic_ResponseParams_Data) == 24,
              "Bad sizeof(Device_ReadValueForCharacteristic_ResponseParams_Data)");
class  Device_WriteValueForCharacteristic_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_WriteValueForCharacteristic_Params_Data));
      new (data()) Device_WriteValueForCharacteristic_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_WriteValueForCharacteristic_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_WriteValueForCharacteristic_Params_Data>(index_);
    }
    Device_WriteValueForCharacteristic_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> service_id;
  mojo::internal::Pointer<mojo::internal::String_Data> characteristic_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  Device_WriteValueForCharacteristic_Params_Data();
  ~Device_WriteValueForCharacteristic_Params_Data() = delete;
};
static_assert(sizeof(Device_WriteValueForCharacteristic_Params_Data) == 32,
              "Bad sizeof(Device_WriteValueForCharacteristic_Params_Data)");
class  Device_WriteValueForCharacteristic_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_WriteValueForCharacteristic_ResponseParams_Data));
      new (data()) Device_WriteValueForCharacteristic_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_WriteValueForCharacteristic_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_WriteValueForCharacteristic_ResponseParams_Data>(index_);
    }
    Device_WriteValueForCharacteristic_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  Device_WriteValueForCharacteristic_ResponseParams_Data();
  ~Device_WriteValueForCharacteristic_ResponseParams_Data() = delete;
};
static_assert(sizeof(Device_WriteValueForCharacteristic_ResponseParams_Data) == 16,
              "Bad sizeof(Device_WriteValueForCharacteristic_ResponseParams_Data)");
class  Device_GetDescriptors_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_GetDescriptors_Params_Data));
      new (data()) Device_GetDescriptors_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_GetDescriptors_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_GetDescriptors_Params_Data>(index_);
    }
    Device_GetDescriptors_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> service_id;
  mojo::internal::Pointer<mojo::internal::String_Data> characteristic_id;

 private:
  Device_GetDescriptors_Params_Data();
  ~Device_GetDescriptors_Params_Data() = delete;
};
static_assert(sizeof(Device_GetDescriptors_Params_Data) == 24,
              "Bad sizeof(Device_GetDescriptors_Params_Data)");
class  Device_GetDescriptors_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_GetDescriptors_ResponseParams_Data));
      new (data()) Device_GetDescriptors_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_GetDescriptors_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_GetDescriptors_ResponseParams_Data>(index_);
    }
    Device_GetDescriptors_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::DescriptorInfo_Data>>> descriptors;

 private:
  Device_GetDescriptors_ResponseParams_Data();
  ~Device_GetDescriptors_ResponseParams_Data() = delete;
};
static_assert(sizeof(Device_GetDescriptors_ResponseParams_Data) == 16,
              "Bad sizeof(Device_GetDescriptors_ResponseParams_Data)");
class  Device_ReadValueForDescriptor_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_ReadValueForDescriptor_Params_Data));
      new (data()) Device_ReadValueForDescriptor_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_ReadValueForDescriptor_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_ReadValueForDescriptor_Params_Data>(index_);
    }
    Device_ReadValueForDescriptor_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> service_id;
  mojo::internal::Pointer<mojo::internal::String_Data> characteristic_id;
  mojo::internal::Pointer<mojo::internal::String_Data> descriptor_id;

 private:
  Device_ReadValueForDescriptor_Params_Data();
  ~Device_ReadValueForDescriptor_Params_Data() = delete;
};
static_assert(sizeof(Device_ReadValueForDescriptor_Params_Data) == 32,
              "Bad sizeof(Device_ReadValueForDescriptor_Params_Data)");
class  Device_ReadValueForDescriptor_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_ReadValueForDescriptor_ResponseParams_Data));
      new (data()) Device_ReadValueForDescriptor_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_ReadValueForDescriptor_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_ReadValueForDescriptor_ResponseParams_Data>(index_);
    }
    Device_ReadValueForDescriptor_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  Device_ReadValueForDescriptor_ResponseParams_Data();
  ~Device_ReadValueForDescriptor_ResponseParams_Data() = delete;
};
static_assert(sizeof(Device_ReadValueForDescriptor_ResponseParams_Data) == 24,
              "Bad sizeof(Device_ReadValueForDescriptor_ResponseParams_Data)");
class  Device_WriteValueForDescriptor_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_WriteValueForDescriptor_Params_Data));
      new (data()) Device_WriteValueForDescriptor_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_WriteValueForDescriptor_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_WriteValueForDescriptor_Params_Data>(index_);
    }
    Device_WriteValueForDescriptor_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> service_id;
  mojo::internal::Pointer<mojo::internal::String_Data> characteristic_id;
  mojo::internal::Pointer<mojo::internal::String_Data> descriptor_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  Device_WriteValueForDescriptor_Params_Data();
  ~Device_WriteValueForDescriptor_Params_Data() = delete;
};
static_assert(sizeof(Device_WriteValueForDescriptor_Params_Data) == 40,
              "Bad sizeof(Device_WriteValueForDescriptor_Params_Data)");
class  Device_WriteValueForDescriptor_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Device_WriteValueForDescriptor_ResponseParams_Data));
      new (data()) Device_WriteValueForDescriptor_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Device_WriteValueForDescriptor_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Device_WriteValueForDescriptor_ResponseParams_Data>(index_);
    }
    Device_WriteValueForDescriptor_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  Device_WriteValueForDescriptor_ResponseParams_Data();
  ~Device_WriteValueForDescriptor_ResponseParams_Data() = delete;
};
static_assert(sizeof(Device_WriteValueForDescriptor_ResponseParams_Data) == 16,
              "Bad sizeof(Device_WriteValueForDescriptor_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace bluetooth

#endif  // DEVICE_BLUETOOTH_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_INTERNAL_H_