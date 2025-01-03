// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_SHARED_INTERNAL_H_

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
class InputDeviceInfo_Data;

struct InputDeviceSubsystem_Data {
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

struct InputDeviceType_Data {
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

#pragma pack(push, 1)
class  InputDeviceInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputDeviceInfo_Data));
      new (data()) InputDeviceInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputDeviceInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputDeviceInfo_Data>(index_);
    }
    InputDeviceInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> id;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  int32_t subsystem;
  int32_t type;
  uint8_t is_accelerometer : 1;
  uint8_t is_joystick : 1;
  uint8_t is_key : 1;
  uint8_t is_keyboard : 1;
  uint8_t is_mouse : 1;
  uint8_t is_tablet : 1;
  uint8_t is_touchpad : 1;
  uint8_t is_touchscreen : 1;
  uint8_t padfinal_[7];

 private:
  InputDeviceInfo_Data();
  ~InputDeviceInfo_Data() = delete;
};
static_assert(sizeof(InputDeviceInfo_Data) == 40,
              "Bad sizeof(InputDeviceInfo_Data)");
// Used by InputDeviceInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct InputDeviceInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  InputDeviceInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~InputDeviceInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    InputDeviceInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    InputDeviceInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  InputDeviceManagerClient_InputDeviceAdded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputDeviceManagerClient_InputDeviceAdded_Params_Data));
      new (data()) InputDeviceManagerClient_InputDeviceAdded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputDeviceManagerClient_InputDeviceAdded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputDeviceManagerClient_InputDeviceAdded_Params_Data>(index_);
    }
    InputDeviceManagerClient_InputDeviceAdded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::InputDeviceInfo_Data> device_info;

 private:
  InputDeviceManagerClient_InputDeviceAdded_Params_Data();
  ~InputDeviceManagerClient_InputDeviceAdded_Params_Data() = delete;
};
static_assert(sizeof(InputDeviceManagerClient_InputDeviceAdded_Params_Data) == 16,
              "Bad sizeof(InputDeviceManagerClient_InputDeviceAdded_Params_Data)");
class  InputDeviceManagerClient_InputDeviceRemoved_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputDeviceManagerClient_InputDeviceRemoved_Params_Data));
      new (data()) InputDeviceManagerClient_InputDeviceRemoved_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputDeviceManagerClient_InputDeviceRemoved_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputDeviceManagerClient_InputDeviceRemoved_Params_Data>(index_);
    }
    InputDeviceManagerClient_InputDeviceRemoved_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> id;

 private:
  InputDeviceManagerClient_InputDeviceRemoved_Params_Data();
  ~InputDeviceManagerClient_InputDeviceRemoved_Params_Data() = delete;
};
static_assert(sizeof(InputDeviceManagerClient_InputDeviceRemoved_Params_Data) == 16,
              "Bad sizeof(InputDeviceManagerClient_InputDeviceRemoved_Params_Data)");
class  InputDeviceManager_GetDevicesAndSetClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputDeviceManager_GetDevicesAndSetClient_Params_Data));
      new (data()) InputDeviceManager_GetDevicesAndSetClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputDeviceManager_GetDevicesAndSetClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputDeviceManager_GetDevicesAndSetClient_Params_Data>(index_);
    }
    InputDeviceManager_GetDevicesAndSetClient_Params_Data* operator->() { return data(); }

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
  InputDeviceManager_GetDevicesAndSetClient_Params_Data();
  ~InputDeviceManager_GetDevicesAndSetClient_Params_Data() = delete;
};
static_assert(sizeof(InputDeviceManager_GetDevicesAndSetClient_Params_Data) == 16,
              "Bad sizeof(InputDeviceManager_GetDevicesAndSetClient_Params_Data)");
class  InputDeviceManager_GetDevicesAndSetClient_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputDeviceManager_GetDevicesAndSetClient_ResponseParams_Data));
      new (data()) InputDeviceManager_GetDevicesAndSetClient_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputDeviceManager_GetDevicesAndSetClient_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputDeviceManager_GetDevicesAndSetClient_ResponseParams_Data>(index_);
    }
    InputDeviceManager_GetDevicesAndSetClient_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::InputDeviceInfo_Data>>> devices;

 private:
  InputDeviceManager_GetDevicesAndSetClient_ResponseParams_Data();
  ~InputDeviceManager_GetDevicesAndSetClient_ResponseParams_Data() = delete;
};
static_assert(sizeof(InputDeviceManager_GetDevicesAndSetClient_ResponseParams_Data) == 16,
              "Bad sizeof(InputDeviceManager_GetDevicesAndSetClient_ResponseParams_Data)");
class  InputDeviceManager_GetDevices_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputDeviceManager_GetDevices_Params_Data));
      new (data()) InputDeviceManager_GetDevices_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputDeviceManager_GetDevices_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputDeviceManager_GetDevices_Params_Data>(index_);
    }
    InputDeviceManager_GetDevices_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  InputDeviceManager_GetDevices_Params_Data();
  ~InputDeviceManager_GetDevices_Params_Data() = delete;
};
static_assert(sizeof(InputDeviceManager_GetDevices_Params_Data) == 8,
              "Bad sizeof(InputDeviceManager_GetDevices_Params_Data)");
class  InputDeviceManager_GetDevices_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputDeviceManager_GetDevices_ResponseParams_Data));
      new (data()) InputDeviceManager_GetDevices_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputDeviceManager_GetDevices_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputDeviceManager_GetDevices_ResponseParams_Data>(index_);
    }
    InputDeviceManager_GetDevices_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::InputDeviceInfo_Data>>> devices;

 private:
  InputDeviceManager_GetDevices_ResponseParams_Data();
  ~InputDeviceManager_GetDevices_ResponseParams_Data() = delete;
};
static_assert(sizeof(InputDeviceManager_GetDevices_ResponseParams_Data) == 16,
              "Bad sizeof(InputDeviceManager_GetDevices_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_SHARED_INTERNAL_H_