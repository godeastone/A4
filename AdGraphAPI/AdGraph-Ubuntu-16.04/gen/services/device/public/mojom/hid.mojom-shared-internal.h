// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_SHARED_INTERNAL_H_

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
namespace device {
namespace mojom {
namespace internal {
class HidUsageAndPage_Data;
class HidCollectionInfo_Data;
class HidDeviceInfo_Data;

struct HidBusType_Data {
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
class  HidUsageAndPage_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidUsageAndPage_Data));
      new (data()) HidUsageAndPage_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidUsageAndPage_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidUsageAndPage_Data>(index_);
    }
    HidUsageAndPage_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint16_t usage;
  uint16_t usage_page;
  uint8_t padfinal_[4];

 private:
  HidUsageAndPage_Data();
  ~HidUsageAndPage_Data() = delete;
};
static_assert(sizeof(HidUsageAndPage_Data) == 16,
              "Bad sizeof(HidUsageAndPage_Data)");
// Used by HidUsageAndPage::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct HidUsageAndPage_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  HidUsageAndPage_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~HidUsageAndPage_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    HidUsageAndPage_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    HidUsageAndPage_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  HidCollectionInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidCollectionInfo_Data));
      new (data()) HidCollectionInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidCollectionInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidCollectionInfo_Data>(index_);
    }
    HidCollectionInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::HidUsageAndPage_Data> usage;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> report_ids;

 private:
  HidCollectionInfo_Data();
  ~HidCollectionInfo_Data() = delete;
};
static_assert(sizeof(HidCollectionInfo_Data) == 24,
              "Bad sizeof(HidCollectionInfo_Data)");
// Used by HidCollectionInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct HidCollectionInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  HidCollectionInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~HidCollectionInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    HidCollectionInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    HidCollectionInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  HidDeviceInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidDeviceInfo_Data));
      new (data()) HidDeviceInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidDeviceInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidDeviceInfo_Data>(index_);
    }
    HidDeviceInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> guid;
  uint16_t vendor_id;
  uint16_t product_id;
  int32_t bus_type;
  mojo::internal::Pointer<mojo::internal::String_Data> product_name;
  mojo::internal::Pointer<mojo::internal::String_Data> serial_number;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> report_descriptor;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::HidCollectionInfo_Data>>> collections;
  uint8_t has_report_id : 1;
  uint8_t pad8_[7];
  uint64_t max_input_report_size;
  uint64_t max_output_report_size;
  uint64_t max_feature_report_size;
  mojo::internal::Pointer<mojo::internal::String_Data> device_node;

 private:
  HidDeviceInfo_Data();
  ~HidDeviceInfo_Data() = delete;
};
static_assert(sizeof(HidDeviceInfo_Data) == 96,
              "Bad sizeof(HidDeviceInfo_Data)");
// Used by HidDeviceInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct HidDeviceInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  HidDeviceInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~HidDeviceInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    HidDeviceInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    HidDeviceInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  HidManagerClient_DeviceAdded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidManagerClient_DeviceAdded_Params_Data));
      new (data()) HidManagerClient_DeviceAdded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidManagerClient_DeviceAdded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidManagerClient_DeviceAdded_Params_Data>(index_);
    }
    HidManagerClient_DeviceAdded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::HidDeviceInfo_Data> device_info;

 private:
  HidManagerClient_DeviceAdded_Params_Data();
  ~HidManagerClient_DeviceAdded_Params_Data() = delete;
};
static_assert(sizeof(HidManagerClient_DeviceAdded_Params_Data) == 16,
              "Bad sizeof(HidManagerClient_DeviceAdded_Params_Data)");
class  HidManagerClient_DeviceRemoved_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidManagerClient_DeviceRemoved_Params_Data));
      new (data()) HidManagerClient_DeviceRemoved_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidManagerClient_DeviceRemoved_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidManagerClient_DeviceRemoved_Params_Data>(index_);
    }
    HidManagerClient_DeviceRemoved_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::HidDeviceInfo_Data> device_info;

 private:
  HidManagerClient_DeviceRemoved_Params_Data();
  ~HidManagerClient_DeviceRemoved_Params_Data() = delete;
};
static_assert(sizeof(HidManagerClient_DeviceRemoved_Params_Data) == 16,
              "Bad sizeof(HidManagerClient_DeviceRemoved_Params_Data)");
class  HidManager_GetDevicesAndSetClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidManager_GetDevicesAndSetClient_Params_Data));
      new (data()) HidManager_GetDevicesAndSetClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidManager_GetDevicesAndSetClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidManager_GetDevicesAndSetClient_Params_Data>(index_);
    }
    HidManager_GetDevicesAndSetClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data client;

 private:
  HidManager_GetDevicesAndSetClient_Params_Data();
  ~HidManager_GetDevicesAndSetClient_Params_Data() = delete;
};
static_assert(sizeof(HidManager_GetDevicesAndSetClient_Params_Data) == 16,
              "Bad sizeof(HidManager_GetDevicesAndSetClient_Params_Data)");
class  HidManager_GetDevicesAndSetClient_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidManager_GetDevicesAndSetClient_ResponseParams_Data));
      new (data()) HidManager_GetDevicesAndSetClient_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidManager_GetDevicesAndSetClient_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidManager_GetDevicesAndSetClient_ResponseParams_Data>(index_);
    }
    HidManager_GetDevicesAndSetClient_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::HidDeviceInfo_Data>>> devices;

 private:
  HidManager_GetDevicesAndSetClient_ResponseParams_Data();
  ~HidManager_GetDevicesAndSetClient_ResponseParams_Data() = delete;
};
static_assert(sizeof(HidManager_GetDevicesAndSetClient_ResponseParams_Data) == 16,
              "Bad sizeof(HidManager_GetDevicesAndSetClient_ResponseParams_Data)");
class  HidManager_GetDevices_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidManager_GetDevices_Params_Data));
      new (data()) HidManager_GetDevices_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidManager_GetDevices_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidManager_GetDevices_Params_Data>(index_);
    }
    HidManager_GetDevices_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  HidManager_GetDevices_Params_Data();
  ~HidManager_GetDevices_Params_Data() = delete;
};
static_assert(sizeof(HidManager_GetDevices_Params_Data) == 8,
              "Bad sizeof(HidManager_GetDevices_Params_Data)");
class  HidManager_GetDevices_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidManager_GetDevices_ResponseParams_Data));
      new (data()) HidManager_GetDevices_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidManager_GetDevices_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidManager_GetDevices_ResponseParams_Data>(index_);
    }
    HidManager_GetDevices_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::HidDeviceInfo_Data>>> devices;

 private:
  HidManager_GetDevices_ResponseParams_Data();
  ~HidManager_GetDevices_ResponseParams_Data() = delete;
};
static_assert(sizeof(HidManager_GetDevices_ResponseParams_Data) == 16,
              "Bad sizeof(HidManager_GetDevices_ResponseParams_Data)");
class  HidManager_Connect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidManager_Connect_Params_Data));
      new (data()) HidManager_Connect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidManager_Connect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidManager_Connect_Params_Data>(index_);
    }
    HidManager_Connect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> device_guid;

 private:
  HidManager_Connect_Params_Data();
  ~HidManager_Connect_Params_Data() = delete;
};
static_assert(sizeof(HidManager_Connect_Params_Data) == 16,
              "Bad sizeof(HidManager_Connect_Params_Data)");
class  HidManager_Connect_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidManager_Connect_ResponseParams_Data));
      new (data()) HidManager_Connect_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidManager_Connect_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidManager_Connect_ResponseParams_Data>(index_);
    }
    HidManager_Connect_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data connection;

 private:
  HidManager_Connect_ResponseParams_Data();
  ~HidManager_Connect_ResponseParams_Data() = delete;
};
static_assert(sizeof(HidManager_Connect_ResponseParams_Data) == 16,
              "Bad sizeof(HidManager_Connect_ResponseParams_Data)");
class  HidConnection_Read_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidConnection_Read_Params_Data));
      new (data()) HidConnection_Read_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidConnection_Read_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidConnection_Read_Params_Data>(index_);
    }
    HidConnection_Read_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  HidConnection_Read_Params_Data();
  ~HidConnection_Read_Params_Data() = delete;
};
static_assert(sizeof(HidConnection_Read_Params_Data) == 8,
              "Bad sizeof(HidConnection_Read_Params_Data)");
class  HidConnection_Read_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidConnection_Read_ResponseParams_Data));
      new (data()) HidConnection_Read_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidConnection_Read_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidConnection_Read_ResponseParams_Data>(index_);
    }
    HidConnection_Read_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t report_id;
  uint8_t pad1_[6];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> buffer;

 private:
  HidConnection_Read_ResponseParams_Data();
  ~HidConnection_Read_ResponseParams_Data() = delete;
};
static_assert(sizeof(HidConnection_Read_ResponseParams_Data) == 24,
              "Bad sizeof(HidConnection_Read_ResponseParams_Data)");
class  HidConnection_Write_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidConnection_Write_Params_Data));
      new (data()) HidConnection_Write_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidConnection_Write_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidConnection_Write_Params_Data>(index_);
    }
    HidConnection_Write_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t report_id;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> buffer;

 private:
  HidConnection_Write_Params_Data();
  ~HidConnection_Write_Params_Data() = delete;
};
static_assert(sizeof(HidConnection_Write_Params_Data) == 24,
              "Bad sizeof(HidConnection_Write_Params_Data)");
class  HidConnection_Write_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidConnection_Write_ResponseParams_Data));
      new (data()) HidConnection_Write_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidConnection_Write_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidConnection_Write_ResponseParams_Data>(index_);
    }
    HidConnection_Write_ResponseParams_Data* operator->() { return data(); }

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
  HidConnection_Write_ResponseParams_Data();
  ~HidConnection_Write_ResponseParams_Data() = delete;
};
static_assert(sizeof(HidConnection_Write_ResponseParams_Data) == 16,
              "Bad sizeof(HidConnection_Write_ResponseParams_Data)");
class  HidConnection_GetFeatureReport_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidConnection_GetFeatureReport_Params_Data));
      new (data()) HidConnection_GetFeatureReport_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidConnection_GetFeatureReport_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidConnection_GetFeatureReport_Params_Data>(index_);
    }
    HidConnection_GetFeatureReport_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t report_id;
  uint8_t padfinal_[7];

 private:
  HidConnection_GetFeatureReport_Params_Data();
  ~HidConnection_GetFeatureReport_Params_Data() = delete;
};
static_assert(sizeof(HidConnection_GetFeatureReport_Params_Data) == 16,
              "Bad sizeof(HidConnection_GetFeatureReport_Params_Data)");
class  HidConnection_GetFeatureReport_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidConnection_GetFeatureReport_ResponseParams_Data));
      new (data()) HidConnection_GetFeatureReport_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidConnection_GetFeatureReport_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidConnection_GetFeatureReport_ResponseParams_Data>(index_);
    }
    HidConnection_GetFeatureReport_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> buffer;

 private:
  HidConnection_GetFeatureReport_ResponseParams_Data();
  ~HidConnection_GetFeatureReport_ResponseParams_Data() = delete;
};
static_assert(sizeof(HidConnection_GetFeatureReport_ResponseParams_Data) == 24,
              "Bad sizeof(HidConnection_GetFeatureReport_ResponseParams_Data)");
class  HidConnection_SendFeatureReport_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidConnection_SendFeatureReport_Params_Data));
      new (data()) HidConnection_SendFeatureReport_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidConnection_SendFeatureReport_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidConnection_SendFeatureReport_Params_Data>(index_);
    }
    HidConnection_SendFeatureReport_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t report_id;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> buffer;

 private:
  HidConnection_SendFeatureReport_Params_Data();
  ~HidConnection_SendFeatureReport_Params_Data() = delete;
};
static_assert(sizeof(HidConnection_SendFeatureReport_Params_Data) == 24,
              "Bad sizeof(HidConnection_SendFeatureReport_Params_Data)");
class  HidConnection_SendFeatureReport_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidConnection_SendFeatureReport_ResponseParams_Data));
      new (data()) HidConnection_SendFeatureReport_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidConnection_SendFeatureReport_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidConnection_SendFeatureReport_ResponseParams_Data>(index_);
    }
    HidConnection_SendFeatureReport_ResponseParams_Data* operator->() { return data(); }

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
  HidConnection_SendFeatureReport_ResponseParams_Data();
  ~HidConnection_SendFeatureReport_ResponseParams_Data() = delete;
};
static_assert(sizeof(HidConnection_SendFeatureReport_ResponseParams_Data) == 16,
              "Bad sizeof(HidConnection_SendFeatureReport_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_SHARED_INTERNAL_H_