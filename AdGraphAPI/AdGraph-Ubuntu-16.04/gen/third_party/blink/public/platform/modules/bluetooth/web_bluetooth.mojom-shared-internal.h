// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BLUETOOTH_WEB_BLUETOOTH_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BLUETOOTH_WEB_BLUETOOTH_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "device/bluetooth/public/mojom/uuid.mojom-shared-internal.h"
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
class WebBluetoothLeScanFilter_Data;
class WebBluetoothRequestDeviceOptions_Data;
class WebBluetoothDeviceId_Data;
class WebBluetoothDevice_Data;
class WebBluetoothRemoteGATTService_Data;
class WebBluetoothRemoteGATTCharacteristic_Data;
class WebBluetoothRemoteGATTDescriptor_Data;

struct WebBluetoothResult_Data {
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
      case 12:
      case 13:
      case 14:
      case 15:
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
      case 22:
      case 23:
      case 24:
      case 25:
      case 26:
      case 27:
      case 28:
      case 29:
      case 30:
      case 31:
      case 32:
      case 33:
      case 34:
      case 35:
      case 36:
      case 37:
      case 38:
      case 39:
      case 40:
      case 41:
      case 42:
      case 43:
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

struct WebBluetoothGATTQueryQuantity_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothLeScanFilter_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothLeScanFilter_Data));
      new (data()) WebBluetoothLeScanFilter_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothLeScanFilter_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothLeScanFilter_Data>(index_);
    }
    WebBluetoothLeScanFilter_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::bluetooth::mojom::internal::UUID_Data>>> services;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::String_Data> name_prefix;

 private:
  WebBluetoothLeScanFilter_Data();
  ~WebBluetoothLeScanFilter_Data() = delete;
};
static_assert(sizeof(WebBluetoothLeScanFilter_Data) == 32,
              "Bad sizeof(WebBluetoothLeScanFilter_Data)");
// Used by WebBluetoothLeScanFilter::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct WebBluetoothLeScanFilter_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  WebBluetoothLeScanFilter_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~WebBluetoothLeScanFilter_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    WebBluetoothLeScanFilter_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    WebBluetoothLeScanFilter_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothRequestDeviceOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothRequestDeviceOptions_Data));
      new (data()) WebBluetoothRequestDeviceOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothRequestDeviceOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothRequestDeviceOptions_Data>(index_);
    }
    WebBluetoothRequestDeviceOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::WebBluetoothLeScanFilter_Data>>> filters;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::bluetooth::mojom::internal::UUID_Data>>> optional_services;
  uint8_t accept_all_devices : 1;
  uint8_t padfinal_[7];

 private:
  WebBluetoothRequestDeviceOptions_Data();
  ~WebBluetoothRequestDeviceOptions_Data() = delete;
};
static_assert(sizeof(WebBluetoothRequestDeviceOptions_Data) == 32,
              "Bad sizeof(WebBluetoothRequestDeviceOptions_Data)");
// Used by WebBluetoothRequestDeviceOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct WebBluetoothRequestDeviceOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  WebBluetoothRequestDeviceOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~WebBluetoothRequestDeviceOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    WebBluetoothRequestDeviceOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    WebBluetoothRequestDeviceOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothDeviceId_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothDeviceId_Data));
      new (data()) WebBluetoothDeviceId_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothDeviceId_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothDeviceId_Data>(index_);
    }
    WebBluetoothDeviceId_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> device_id;

 private:
  WebBluetoothDeviceId_Data();
  ~WebBluetoothDeviceId_Data() = delete;
};
static_assert(sizeof(WebBluetoothDeviceId_Data) == 16,
              "Bad sizeof(WebBluetoothDeviceId_Data)");
// Used by WebBluetoothDeviceId::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct WebBluetoothDeviceId_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  WebBluetoothDeviceId_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~WebBluetoothDeviceId_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    WebBluetoothDeviceId_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    WebBluetoothDeviceId_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothDevice_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothDevice_Data));
      new (data()) WebBluetoothDevice_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothDevice_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothDevice_Data>(index_);
    }
    WebBluetoothDevice_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::WebBluetoothDeviceId_Data> id;
  mojo::internal::Pointer<mojo::internal::String_Data> name;

 private:
  WebBluetoothDevice_Data();
  ~WebBluetoothDevice_Data() = delete;
};
static_assert(sizeof(WebBluetoothDevice_Data) == 24,
              "Bad sizeof(WebBluetoothDevice_Data)");
// Used by WebBluetoothDevice::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct WebBluetoothDevice_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  WebBluetoothDevice_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~WebBluetoothDevice_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    WebBluetoothDevice_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    WebBluetoothDevice_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothRemoteGATTService_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothRemoteGATTService_Data));
      new (data()) WebBluetoothRemoteGATTService_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothRemoteGATTService_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothRemoteGATTService_Data>(index_);
    }
    WebBluetoothRemoteGATTService_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> instance_id;
  mojo::internal::Pointer<::bluetooth::mojom::internal::UUID_Data> uuid;

 private:
  WebBluetoothRemoteGATTService_Data();
  ~WebBluetoothRemoteGATTService_Data() = delete;
};
static_assert(sizeof(WebBluetoothRemoteGATTService_Data) == 24,
              "Bad sizeof(WebBluetoothRemoteGATTService_Data)");
// Used by WebBluetoothRemoteGATTService::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct WebBluetoothRemoteGATTService_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  WebBluetoothRemoteGATTService_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~WebBluetoothRemoteGATTService_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    WebBluetoothRemoteGATTService_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    WebBluetoothRemoteGATTService_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothRemoteGATTCharacteristic_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothRemoteGATTCharacteristic_Data));
      new (data()) WebBluetoothRemoteGATTCharacteristic_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothRemoteGATTCharacteristic_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothRemoteGATTCharacteristic_Data>(index_);
    }
    WebBluetoothRemoteGATTCharacteristic_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> instance_id;
  mojo::internal::Pointer<::bluetooth::mojom::internal::UUID_Data> uuid;
  uint32_t properties;
  uint8_t padfinal_[4];

 private:
  WebBluetoothRemoteGATTCharacteristic_Data();
  ~WebBluetoothRemoteGATTCharacteristic_Data() = delete;
};
static_assert(sizeof(WebBluetoothRemoteGATTCharacteristic_Data) == 32,
              "Bad sizeof(WebBluetoothRemoteGATTCharacteristic_Data)");
// Used by WebBluetoothRemoteGATTCharacteristic::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct WebBluetoothRemoteGATTCharacteristic_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  WebBluetoothRemoteGATTCharacteristic_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~WebBluetoothRemoteGATTCharacteristic_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    WebBluetoothRemoteGATTCharacteristic_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    WebBluetoothRemoteGATTCharacteristic_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothRemoteGATTDescriptor_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothRemoteGATTDescriptor_Data));
      new (data()) WebBluetoothRemoteGATTDescriptor_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothRemoteGATTDescriptor_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothRemoteGATTDescriptor_Data>(index_);
    }
    WebBluetoothRemoteGATTDescriptor_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> instance_id;
  mojo::internal::Pointer<::bluetooth::mojom::internal::UUID_Data> uuid;

 private:
  WebBluetoothRemoteGATTDescriptor_Data();
  ~WebBluetoothRemoteGATTDescriptor_Data() = delete;
};
static_assert(sizeof(WebBluetoothRemoteGATTDescriptor_Data) == 24,
              "Bad sizeof(WebBluetoothRemoteGATTDescriptor_Data)");
// Used by WebBluetoothRemoteGATTDescriptor::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct WebBluetoothRemoteGATTDescriptor_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  WebBluetoothRemoteGATTDescriptor_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~WebBluetoothRemoteGATTDescriptor_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    WebBluetoothRemoteGATTDescriptor_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    WebBluetoothRemoteGATTDescriptor_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RequestDevice_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RequestDevice_Params_Data));
      new (data()) WebBluetoothService_RequestDevice_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RequestDevice_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RequestDevice_Params_Data>(index_);
    }
    WebBluetoothService_RequestDevice_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::WebBluetoothRequestDeviceOptions_Data> options;

 private:
  WebBluetoothService_RequestDevice_Params_Data();
  ~WebBluetoothService_RequestDevice_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RequestDevice_Params_Data) == 16,
              "Bad sizeof(WebBluetoothService_RequestDevice_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RequestDevice_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RequestDevice_ResponseParams_Data));
      new (data()) WebBluetoothService_RequestDevice_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RequestDevice_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RequestDevice_ResponseParams_Data>(index_);
    }
    WebBluetoothService_RequestDevice_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<internal::WebBluetoothDevice_Data> device;

 private:
  WebBluetoothService_RequestDevice_ResponseParams_Data();
  ~WebBluetoothService_RequestDevice_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RequestDevice_ResponseParams_Data) == 24,
              "Bad sizeof(WebBluetoothService_RequestDevice_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteServerConnect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteServerConnect_Params_Data));
      new (data()) WebBluetoothService_RemoteServerConnect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteServerConnect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteServerConnect_Params_Data>(index_);
    }
    WebBluetoothService_RemoteServerConnect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::WebBluetoothDeviceId_Data> device_id;
  mojo::internal::AssociatedInterface_Data client;

 private:
  WebBluetoothService_RemoteServerConnect_Params_Data();
  ~WebBluetoothService_RemoteServerConnect_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteServerConnect_Params_Data) == 24,
              "Bad sizeof(WebBluetoothService_RemoteServerConnect_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteServerConnect_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteServerConnect_ResponseParams_Data));
      new (data()) WebBluetoothService_RemoteServerConnect_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteServerConnect_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteServerConnect_ResponseParams_Data>(index_);
    }
    WebBluetoothService_RemoteServerConnect_ResponseParams_Data* operator->() { return data(); }

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
  WebBluetoothService_RemoteServerConnect_ResponseParams_Data();
  ~WebBluetoothService_RemoteServerConnect_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteServerConnect_ResponseParams_Data) == 16,
              "Bad sizeof(WebBluetoothService_RemoteServerConnect_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteServerDisconnect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteServerDisconnect_Params_Data));
      new (data()) WebBluetoothService_RemoteServerDisconnect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteServerDisconnect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteServerDisconnect_Params_Data>(index_);
    }
    WebBluetoothService_RemoteServerDisconnect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::WebBluetoothDeviceId_Data> device_id;

 private:
  WebBluetoothService_RemoteServerDisconnect_Params_Data();
  ~WebBluetoothService_RemoteServerDisconnect_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteServerDisconnect_Params_Data) == 16,
              "Bad sizeof(WebBluetoothService_RemoteServerDisconnect_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data));
      new (data()) WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data>(index_);
    }
    WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::WebBluetoothDeviceId_Data> device_id;
  int32_t quantity;
  uint8_t pad1_[4];
  mojo::internal::Pointer<::bluetooth::mojom::internal::UUID_Data> services_uuid;

 private:
  WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data();
  ~WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data) == 32,
              "Bad sizeof(WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data));
      new (data()) WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data>(index_);
    }
    WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::WebBluetoothRemoteGATTService_Data>>> services;

 private:
  WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data();
  ~WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data) == 24,
              "Bad sizeof(WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data));
      new (data()) WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data>(index_);
    }
    WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> service_instance_id;
  int32_t quantity;
  uint8_t pad1_[4];
  mojo::internal::Pointer<::bluetooth::mojom::internal::UUID_Data> characteristics_uuid;

 private:
  WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data();
  ~WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data) == 32,
              "Bad sizeof(WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data));
      new (data()) WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data>(index_);
    }
    WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::WebBluetoothRemoteGATTCharacteristic_Data>>> characteristics;

 private:
  WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data();
  ~WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data) == 24,
              "Bad sizeof(WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteCharacteristicReadValue_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteCharacteristicReadValue_Params_Data));
      new (data()) WebBluetoothService_RemoteCharacteristicReadValue_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteCharacteristicReadValue_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteCharacteristicReadValue_Params_Data>(index_);
    }
    WebBluetoothService_RemoteCharacteristicReadValue_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> characteristic_instance_id;

 private:
  WebBluetoothService_RemoteCharacteristicReadValue_Params_Data();
  ~WebBluetoothService_RemoteCharacteristicReadValue_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteCharacteristicReadValue_Params_Data) == 16,
              "Bad sizeof(WebBluetoothService_RemoteCharacteristicReadValue_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data));
      new (data()) WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data>(index_);
    }
    WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data* operator->() { return data(); }

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
  WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data();
  ~WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data) == 24,
              "Bad sizeof(WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data));
      new (data()) WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data>(index_);
    }
    WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> characteristic_instance_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data();
  ~WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data) == 24,
              "Bad sizeof(WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data));
      new (data()) WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data>(index_);
    }
    WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data* operator->() { return data(); }

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
  WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data();
  ~WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data) == 16,
              "Bad sizeof(WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data));
      new (data()) WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data>(index_);
    }
    WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> characteristic_instance_id;
  mojo::internal::AssociatedInterface_Data client;

 private:
  WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data();
  ~WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data) == 24,
              "Bad sizeof(WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data));
      new (data()) WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data>(index_);
    }
    WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data* operator->() { return data(); }

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
  WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data();
  ~WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data) == 16,
              "Bad sizeof(WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data));
      new (data()) WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data>(index_);
    }
    WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> characteristic_instance_id;

 private:
  WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data();
  ~WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data) == 16,
              "Bad sizeof(WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data));
      new (data()) WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data>(index_);
    }
    WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data();
  ~WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data) == 8,
              "Bad sizeof(WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data));
      new (data()) WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data>(index_);
    }
    WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> characteristics_instance_id;
  int32_t quantity;
  uint8_t pad1_[4];
  mojo::internal::Pointer<::bluetooth::mojom::internal::UUID_Data> descriptor_uuid;

 private:
  WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data();
  ~WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data) == 32,
              "Bad sizeof(WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data));
      new (data()) WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data>(index_);
    }
    WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::WebBluetoothRemoteGATTDescriptor_Data>>> descriptors;

 private:
  WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data();
  ~WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data) == 24,
              "Bad sizeof(WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteDescriptorReadValue_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteDescriptorReadValue_Params_Data));
      new (data()) WebBluetoothService_RemoteDescriptorReadValue_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteDescriptorReadValue_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteDescriptorReadValue_Params_Data>(index_);
    }
    WebBluetoothService_RemoteDescriptorReadValue_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> descriptor_instance_id;

 private:
  WebBluetoothService_RemoteDescriptorReadValue_Params_Data();
  ~WebBluetoothService_RemoteDescriptorReadValue_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteDescriptorReadValue_Params_Data) == 16,
              "Bad sizeof(WebBluetoothService_RemoteDescriptorReadValue_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data));
      new (data()) WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data>(index_);
    }
    WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data* operator->() { return data(); }

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
  WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data();
  ~WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data) == 24,
              "Bad sizeof(WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteDescriptorWriteValue_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteDescriptorWriteValue_Params_Data));
      new (data()) WebBluetoothService_RemoteDescriptorWriteValue_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteDescriptorWriteValue_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteDescriptorWriteValue_Params_Data>(index_);
    }
    WebBluetoothService_RemoteDescriptorWriteValue_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> descriptor_instance_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  WebBluetoothService_RemoteDescriptorWriteValue_Params_Data();
  ~WebBluetoothService_RemoteDescriptorWriteValue_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteDescriptorWriteValue_Params_Data) == 24,
              "Bad sizeof(WebBluetoothService_RemoteDescriptorWriteValue_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data));
      new (data()) WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data>(index_);
    }
    WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data* operator->() { return data(); }

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
  WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data();
  ~WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data) == 16,
              "Bad sizeof(WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothServerClient_GATTServerDisconnected_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothServerClient_GATTServerDisconnected_Params_Data));
      new (data()) WebBluetoothServerClient_GATTServerDisconnected_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothServerClient_GATTServerDisconnected_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothServerClient_GATTServerDisconnected_Params_Data>(index_);
    }
    WebBluetoothServerClient_GATTServerDisconnected_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WebBluetoothServerClient_GATTServerDisconnected_Params_Data();
  ~WebBluetoothServerClient_GATTServerDisconnected_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothServerClient_GATTServerDisconnected_Params_Data) == 8,
              "Bad sizeof(WebBluetoothServerClient_GATTServerDisconnected_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data));
      new (data()) WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data>(index_);
    }
    WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data();
  ~WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data) == 16,
              "Bad sizeof(WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BLUETOOTH_WEB_BLUETOOTH_MOJOM_SHARED_INTERNAL_H_