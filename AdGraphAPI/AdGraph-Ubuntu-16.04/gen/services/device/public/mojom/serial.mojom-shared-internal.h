// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_SHARED_INTERNAL_H_

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
class SerialDeviceInfo_Data;
class SerialConnectionOptions_Data;
class SerialConnectionInfo_Data;
class SerialHostControlSignals_Data;
class SerialDeviceControlSignals_Data;

struct SerialSendError_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
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

struct SerialReceiveError_Data {
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

struct SerialDataBits_Data {
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

struct SerialParityBit_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
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

struct SerialStopBits_Data {
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
class  SerialDeviceInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialDeviceInfo_Data));
      new (data()) SerialDeviceInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialDeviceInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialDeviceInfo_Data>(index_);
    }
    SerialDeviceInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> path;
  uint16_t vendor_id;
  uint8_t has_vendor_id : 1;
  uint8_t has_product_id : 1;
  uint8_t pad3_[1];
  uint16_t product_id;
  uint8_t pad4_[2];
  mojo::internal::Pointer<mojo::internal::String_Data> display_name;

 private:
  SerialDeviceInfo_Data();
  ~SerialDeviceInfo_Data() = delete;
};
static_assert(sizeof(SerialDeviceInfo_Data) == 32,
              "Bad sizeof(SerialDeviceInfo_Data)");
// Used by SerialDeviceInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SerialDeviceInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SerialDeviceInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SerialDeviceInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SerialDeviceInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SerialDeviceInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SerialConnectionOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialConnectionOptions_Data));
      new (data()) SerialConnectionOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialConnectionOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialConnectionOptions_Data>(index_);
    }
    SerialConnectionOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t bitrate;
  int32_t data_bits;
  int32_t parity_bit;
  int32_t stop_bits;
  uint8_t cts_flow_control : 1;
  uint8_t has_cts_flow_control : 1;
  uint8_t padfinal_[7];

 private:
  SerialConnectionOptions_Data();
  ~SerialConnectionOptions_Data() = delete;
};
static_assert(sizeof(SerialConnectionOptions_Data) == 32,
              "Bad sizeof(SerialConnectionOptions_Data)");
// Used by SerialConnectionOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SerialConnectionOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SerialConnectionOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SerialConnectionOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SerialConnectionOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SerialConnectionOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SerialConnectionInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialConnectionInfo_Data));
      new (data()) SerialConnectionInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialConnectionInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialConnectionInfo_Data>(index_);
    }
    SerialConnectionInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t bitrate;
  int32_t data_bits;
  int32_t parity_bit;
  int32_t stop_bits;
  uint8_t cts_flow_control : 1;
  uint8_t padfinal_[7];

 private:
  SerialConnectionInfo_Data();
  ~SerialConnectionInfo_Data() = delete;
};
static_assert(sizeof(SerialConnectionInfo_Data) == 32,
              "Bad sizeof(SerialConnectionInfo_Data)");
// Used by SerialConnectionInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SerialConnectionInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SerialConnectionInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SerialConnectionInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SerialConnectionInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SerialConnectionInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SerialHostControlSignals_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialHostControlSignals_Data));
      new (data()) SerialHostControlSignals_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialHostControlSignals_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialHostControlSignals_Data>(index_);
    }
    SerialHostControlSignals_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t dtr : 1;
  uint8_t has_dtr : 1;
  uint8_t rts : 1;
  uint8_t has_rts : 1;
  uint8_t padfinal_[7];

 private:
  SerialHostControlSignals_Data();
  ~SerialHostControlSignals_Data() = delete;
};
static_assert(sizeof(SerialHostControlSignals_Data) == 16,
              "Bad sizeof(SerialHostControlSignals_Data)");
// Used by SerialHostControlSignals::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SerialHostControlSignals_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SerialHostControlSignals_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SerialHostControlSignals_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SerialHostControlSignals_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SerialHostControlSignals_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SerialDeviceControlSignals_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialDeviceControlSignals_Data));
      new (data()) SerialDeviceControlSignals_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialDeviceControlSignals_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialDeviceControlSignals_Data>(index_);
    }
    SerialDeviceControlSignals_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t dcd : 1;
  uint8_t cts : 1;
  uint8_t ri : 1;
  uint8_t dsr : 1;
  uint8_t padfinal_[7];

 private:
  SerialDeviceControlSignals_Data();
  ~SerialDeviceControlSignals_Data() = delete;
};
static_assert(sizeof(SerialDeviceControlSignals_Data) == 16,
              "Bad sizeof(SerialDeviceControlSignals_Data)");
// Used by SerialDeviceControlSignals::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SerialDeviceControlSignals_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SerialDeviceControlSignals_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SerialDeviceControlSignals_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SerialDeviceControlSignals_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SerialDeviceControlSignals_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SerialDeviceEnumerator_GetDevices_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialDeviceEnumerator_GetDevices_Params_Data));
      new (data()) SerialDeviceEnumerator_GetDevices_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialDeviceEnumerator_GetDevices_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialDeviceEnumerator_GetDevices_Params_Data>(index_);
    }
    SerialDeviceEnumerator_GetDevices_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SerialDeviceEnumerator_GetDevices_Params_Data();
  ~SerialDeviceEnumerator_GetDevices_Params_Data() = delete;
};
static_assert(sizeof(SerialDeviceEnumerator_GetDevices_Params_Data) == 8,
              "Bad sizeof(SerialDeviceEnumerator_GetDevices_Params_Data)");
class  SerialDeviceEnumerator_GetDevices_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialDeviceEnumerator_GetDevices_ResponseParams_Data));
      new (data()) SerialDeviceEnumerator_GetDevices_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialDeviceEnumerator_GetDevices_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialDeviceEnumerator_GetDevices_ResponseParams_Data>(index_);
    }
    SerialDeviceEnumerator_GetDevices_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::SerialDeviceInfo_Data>>> devices;

 private:
  SerialDeviceEnumerator_GetDevices_ResponseParams_Data();
  ~SerialDeviceEnumerator_GetDevices_ResponseParams_Data() = delete;
};
static_assert(sizeof(SerialDeviceEnumerator_GetDevices_ResponseParams_Data) == 16,
              "Bad sizeof(SerialDeviceEnumerator_GetDevices_ResponseParams_Data)");
class  SerialIoHandler_Open_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialIoHandler_Open_Params_Data));
      new (data()) SerialIoHandler_Open_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialIoHandler_Open_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialIoHandler_Open_Params_Data>(index_);
    }
    SerialIoHandler_Open_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> port;
  mojo::internal::Pointer<internal::SerialConnectionOptions_Data> options;

 private:
  SerialIoHandler_Open_Params_Data();
  ~SerialIoHandler_Open_Params_Data() = delete;
};
static_assert(sizeof(SerialIoHandler_Open_Params_Data) == 24,
              "Bad sizeof(SerialIoHandler_Open_Params_Data)");
class  SerialIoHandler_Open_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialIoHandler_Open_ResponseParams_Data));
      new (data()) SerialIoHandler_Open_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialIoHandler_Open_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialIoHandler_Open_ResponseParams_Data>(index_);
    }
    SerialIoHandler_Open_ResponseParams_Data* operator->() { return data(); }

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
  SerialIoHandler_Open_ResponseParams_Data();
  ~SerialIoHandler_Open_ResponseParams_Data() = delete;
};
static_assert(sizeof(SerialIoHandler_Open_ResponseParams_Data) == 16,
              "Bad sizeof(SerialIoHandler_Open_ResponseParams_Data)");
class  SerialIoHandler_Read_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialIoHandler_Read_Params_Data));
      new (data()) SerialIoHandler_Read_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialIoHandler_Read_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialIoHandler_Read_Params_Data>(index_);
    }
    SerialIoHandler_Read_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t bytes;
  uint8_t padfinal_[4];

 private:
  SerialIoHandler_Read_Params_Data();
  ~SerialIoHandler_Read_Params_Data() = delete;
};
static_assert(sizeof(SerialIoHandler_Read_Params_Data) == 16,
              "Bad sizeof(SerialIoHandler_Read_Params_Data)");
class  SerialIoHandler_Read_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialIoHandler_Read_ResponseParams_Data));
      new (data()) SerialIoHandler_Read_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialIoHandler_Read_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialIoHandler_Read_ResponseParams_Data>(index_);
    }
    SerialIoHandler_Read_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  SerialIoHandler_Read_ResponseParams_Data();
  ~SerialIoHandler_Read_ResponseParams_Data() = delete;
};
static_assert(sizeof(SerialIoHandler_Read_ResponseParams_Data) == 24,
              "Bad sizeof(SerialIoHandler_Read_ResponseParams_Data)");
class  SerialIoHandler_Write_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialIoHandler_Write_Params_Data));
      new (data()) SerialIoHandler_Write_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialIoHandler_Write_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialIoHandler_Write_Params_Data>(index_);
    }
    SerialIoHandler_Write_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  SerialIoHandler_Write_Params_Data();
  ~SerialIoHandler_Write_Params_Data() = delete;
};
static_assert(sizeof(SerialIoHandler_Write_Params_Data) == 16,
              "Bad sizeof(SerialIoHandler_Write_Params_Data)");
class  SerialIoHandler_Write_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialIoHandler_Write_ResponseParams_Data));
      new (data()) SerialIoHandler_Write_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialIoHandler_Write_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialIoHandler_Write_ResponseParams_Data>(index_);
    }
    SerialIoHandler_Write_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t bytes_written;
  int32_t error;

 private:
  SerialIoHandler_Write_ResponseParams_Data();
  ~SerialIoHandler_Write_ResponseParams_Data() = delete;
};
static_assert(sizeof(SerialIoHandler_Write_ResponseParams_Data) == 16,
              "Bad sizeof(SerialIoHandler_Write_ResponseParams_Data)");
class  SerialIoHandler_CancelRead_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialIoHandler_CancelRead_Params_Data));
      new (data()) SerialIoHandler_CancelRead_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialIoHandler_CancelRead_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialIoHandler_CancelRead_Params_Data>(index_);
    }
    SerialIoHandler_CancelRead_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t reason;
  uint8_t padfinal_[4];

 private:
  SerialIoHandler_CancelRead_Params_Data();
  ~SerialIoHandler_CancelRead_Params_Data() = delete;
};
static_assert(sizeof(SerialIoHandler_CancelRead_Params_Data) == 16,
              "Bad sizeof(SerialIoHandler_CancelRead_Params_Data)");
class  SerialIoHandler_CancelWrite_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialIoHandler_CancelWrite_Params_Data));
      new (data()) SerialIoHandler_CancelWrite_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialIoHandler_CancelWrite_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialIoHandler_CancelWrite_Params_Data>(index_);
    }
    SerialIoHandler_CancelWrite_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t reason;
  uint8_t padfinal_[4];

 private:
  SerialIoHandler_CancelWrite_Params_Data();
  ~SerialIoHandler_CancelWrite_Params_Data() = delete;
};
static_assert(sizeof(SerialIoHandler_CancelWrite_Params_Data) == 16,
              "Bad sizeof(SerialIoHandler_CancelWrite_Params_Data)");
class  SerialIoHandler_Flush_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialIoHandler_Flush_Params_Data));
      new (data()) SerialIoHandler_Flush_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialIoHandler_Flush_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialIoHandler_Flush_Params_Data>(index_);
    }
    SerialIoHandler_Flush_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SerialIoHandler_Flush_Params_Data();
  ~SerialIoHandler_Flush_Params_Data() = delete;
};
static_assert(sizeof(SerialIoHandler_Flush_Params_Data) == 8,
              "Bad sizeof(SerialIoHandler_Flush_Params_Data)");
class  SerialIoHandler_Flush_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialIoHandler_Flush_ResponseParams_Data));
      new (data()) SerialIoHandler_Flush_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialIoHandler_Flush_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialIoHandler_Flush_ResponseParams_Data>(index_);
    }
    SerialIoHandler_Flush_ResponseParams_Data* operator->() { return data(); }

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
  SerialIoHandler_Flush_ResponseParams_Data();
  ~SerialIoHandler_Flush_ResponseParams_Data() = delete;
};
static_assert(sizeof(SerialIoHandler_Flush_ResponseParams_Data) == 16,
              "Bad sizeof(SerialIoHandler_Flush_ResponseParams_Data)");
class  SerialIoHandler_GetControlSignals_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialIoHandler_GetControlSignals_Params_Data));
      new (data()) SerialIoHandler_GetControlSignals_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialIoHandler_GetControlSignals_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialIoHandler_GetControlSignals_Params_Data>(index_);
    }
    SerialIoHandler_GetControlSignals_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SerialIoHandler_GetControlSignals_Params_Data();
  ~SerialIoHandler_GetControlSignals_Params_Data() = delete;
};
static_assert(sizeof(SerialIoHandler_GetControlSignals_Params_Data) == 8,
              "Bad sizeof(SerialIoHandler_GetControlSignals_Params_Data)");
class  SerialIoHandler_GetControlSignals_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialIoHandler_GetControlSignals_ResponseParams_Data));
      new (data()) SerialIoHandler_GetControlSignals_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialIoHandler_GetControlSignals_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialIoHandler_GetControlSignals_ResponseParams_Data>(index_);
    }
    SerialIoHandler_GetControlSignals_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SerialDeviceControlSignals_Data> signals;

 private:
  SerialIoHandler_GetControlSignals_ResponseParams_Data();
  ~SerialIoHandler_GetControlSignals_ResponseParams_Data() = delete;
};
static_assert(sizeof(SerialIoHandler_GetControlSignals_ResponseParams_Data) == 16,
              "Bad sizeof(SerialIoHandler_GetControlSignals_ResponseParams_Data)");
class  SerialIoHandler_SetControlSignals_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialIoHandler_SetControlSignals_Params_Data));
      new (data()) SerialIoHandler_SetControlSignals_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialIoHandler_SetControlSignals_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialIoHandler_SetControlSignals_Params_Data>(index_);
    }
    SerialIoHandler_SetControlSignals_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SerialHostControlSignals_Data> signals;

 private:
  SerialIoHandler_SetControlSignals_Params_Data();
  ~SerialIoHandler_SetControlSignals_Params_Data() = delete;
};
static_assert(sizeof(SerialIoHandler_SetControlSignals_Params_Data) == 16,
              "Bad sizeof(SerialIoHandler_SetControlSignals_Params_Data)");
class  SerialIoHandler_SetControlSignals_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialIoHandler_SetControlSignals_ResponseParams_Data));
      new (data()) SerialIoHandler_SetControlSignals_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialIoHandler_SetControlSignals_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialIoHandler_SetControlSignals_ResponseParams_Data>(index_);
    }
    SerialIoHandler_SetControlSignals_ResponseParams_Data* operator->() { return data(); }

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
  SerialIoHandler_SetControlSignals_ResponseParams_Data();
  ~SerialIoHandler_SetControlSignals_ResponseParams_Data() = delete;
};
static_assert(sizeof(SerialIoHandler_SetControlSignals_ResponseParams_Data) == 16,
              "Bad sizeof(SerialIoHandler_SetControlSignals_ResponseParams_Data)");
class  SerialIoHandler_ConfigurePort_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialIoHandler_ConfigurePort_Params_Data));
      new (data()) SerialIoHandler_ConfigurePort_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialIoHandler_ConfigurePort_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialIoHandler_ConfigurePort_Params_Data>(index_);
    }
    SerialIoHandler_ConfigurePort_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SerialConnectionOptions_Data> options;

 private:
  SerialIoHandler_ConfigurePort_Params_Data();
  ~SerialIoHandler_ConfigurePort_Params_Data() = delete;
};
static_assert(sizeof(SerialIoHandler_ConfigurePort_Params_Data) == 16,
              "Bad sizeof(SerialIoHandler_ConfigurePort_Params_Data)");
class  SerialIoHandler_ConfigurePort_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialIoHandler_ConfigurePort_ResponseParams_Data));
      new (data()) SerialIoHandler_ConfigurePort_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialIoHandler_ConfigurePort_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialIoHandler_ConfigurePort_ResponseParams_Data>(index_);
    }
    SerialIoHandler_ConfigurePort_ResponseParams_Data* operator->() { return data(); }

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
  SerialIoHandler_ConfigurePort_ResponseParams_Data();
  ~SerialIoHandler_ConfigurePort_ResponseParams_Data() = delete;
};
static_assert(sizeof(SerialIoHandler_ConfigurePort_ResponseParams_Data) == 16,
              "Bad sizeof(SerialIoHandler_ConfigurePort_ResponseParams_Data)");
class  SerialIoHandler_GetPortInfo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialIoHandler_GetPortInfo_Params_Data));
      new (data()) SerialIoHandler_GetPortInfo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialIoHandler_GetPortInfo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialIoHandler_GetPortInfo_Params_Data>(index_);
    }
    SerialIoHandler_GetPortInfo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SerialIoHandler_GetPortInfo_Params_Data();
  ~SerialIoHandler_GetPortInfo_Params_Data() = delete;
};
static_assert(sizeof(SerialIoHandler_GetPortInfo_Params_Data) == 8,
              "Bad sizeof(SerialIoHandler_GetPortInfo_Params_Data)");
class  SerialIoHandler_GetPortInfo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialIoHandler_GetPortInfo_ResponseParams_Data));
      new (data()) SerialIoHandler_GetPortInfo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialIoHandler_GetPortInfo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialIoHandler_GetPortInfo_ResponseParams_Data>(index_);
    }
    SerialIoHandler_GetPortInfo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SerialConnectionInfo_Data> info;

 private:
  SerialIoHandler_GetPortInfo_ResponseParams_Data();
  ~SerialIoHandler_GetPortInfo_ResponseParams_Data() = delete;
};
static_assert(sizeof(SerialIoHandler_GetPortInfo_ResponseParams_Data) == 16,
              "Bad sizeof(SerialIoHandler_GetPortInfo_ResponseParams_Data)");
class  SerialIoHandler_SetBreak_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialIoHandler_SetBreak_Params_Data));
      new (data()) SerialIoHandler_SetBreak_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialIoHandler_SetBreak_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialIoHandler_SetBreak_Params_Data>(index_);
    }
    SerialIoHandler_SetBreak_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SerialIoHandler_SetBreak_Params_Data();
  ~SerialIoHandler_SetBreak_Params_Data() = delete;
};
static_assert(sizeof(SerialIoHandler_SetBreak_Params_Data) == 8,
              "Bad sizeof(SerialIoHandler_SetBreak_Params_Data)");
class  SerialIoHandler_SetBreak_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialIoHandler_SetBreak_ResponseParams_Data));
      new (data()) SerialIoHandler_SetBreak_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialIoHandler_SetBreak_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialIoHandler_SetBreak_ResponseParams_Data>(index_);
    }
    SerialIoHandler_SetBreak_ResponseParams_Data* operator->() { return data(); }

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
  SerialIoHandler_SetBreak_ResponseParams_Data();
  ~SerialIoHandler_SetBreak_ResponseParams_Data() = delete;
};
static_assert(sizeof(SerialIoHandler_SetBreak_ResponseParams_Data) == 16,
              "Bad sizeof(SerialIoHandler_SetBreak_ResponseParams_Data)");
class  SerialIoHandler_ClearBreak_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialIoHandler_ClearBreak_Params_Data));
      new (data()) SerialIoHandler_ClearBreak_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialIoHandler_ClearBreak_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialIoHandler_ClearBreak_Params_Data>(index_);
    }
    SerialIoHandler_ClearBreak_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SerialIoHandler_ClearBreak_Params_Data();
  ~SerialIoHandler_ClearBreak_Params_Data() = delete;
};
static_assert(sizeof(SerialIoHandler_ClearBreak_Params_Data) == 8,
              "Bad sizeof(SerialIoHandler_ClearBreak_Params_Data)");
class  SerialIoHandler_ClearBreak_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialIoHandler_ClearBreak_ResponseParams_Data));
      new (data()) SerialIoHandler_ClearBreak_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialIoHandler_ClearBreak_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialIoHandler_ClearBreak_ResponseParams_Data>(index_);
    }
    SerialIoHandler_ClearBreak_ResponseParams_Data* operator->() { return data(); }

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
  SerialIoHandler_ClearBreak_ResponseParams_Data();
  ~SerialIoHandler_ClearBreak_ResponseParams_Data() = delete;
};
static_assert(sizeof(SerialIoHandler_ClearBreak_ResponseParams_Data) == 16,
              "Bad sizeof(SerialIoHandler_ClearBreak_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_SHARED_INTERNAL_H_