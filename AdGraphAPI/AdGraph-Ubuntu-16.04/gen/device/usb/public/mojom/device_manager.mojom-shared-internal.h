// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_SHARED_INTERNAL_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "device/usb/public/mojom/device.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
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
class UsbDeviceFilter_Data;
class UsbEnumerationOptions_Data;

#pragma pack(push, 1)
class  UsbDeviceFilter_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDeviceFilter_Data));
      new (data()) UsbDeviceFilter_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDeviceFilter_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDeviceFilter_Data>(index_);
    }
    UsbDeviceFilter_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t has_vendor_id : 1;
  uint8_t has_product_id : 1;
  uint8_t has_class_code : 1;
  uint8_t has_subclass_code : 1;
  uint8_t has_protocol_code : 1;
  uint8_t class_code;
  uint16_t vendor_id;
  uint16_t product_id;
  uint8_t subclass_code;
  uint8_t protocol_code;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> serial_number;

 private:
  UsbDeviceFilter_Data();
  ~UsbDeviceFilter_Data() = delete;
};
static_assert(sizeof(UsbDeviceFilter_Data) == 24,
              "Bad sizeof(UsbDeviceFilter_Data)");
// Used by UsbDeviceFilter::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct UsbDeviceFilter_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  UsbDeviceFilter_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~UsbDeviceFilter_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    UsbDeviceFilter_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    UsbDeviceFilter_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  UsbEnumerationOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbEnumerationOptions_Data));
      new (data()) UsbEnumerationOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbEnumerationOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbEnumerationOptions_Data>(index_);
    }
    UsbEnumerationOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::UsbDeviceFilter_Data>>> filters;

 private:
  UsbEnumerationOptions_Data();
  ~UsbEnumerationOptions_Data() = delete;
};
static_assert(sizeof(UsbEnumerationOptions_Data) == 16,
              "Bad sizeof(UsbEnumerationOptions_Data)");
// Used by UsbEnumerationOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct UsbEnumerationOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  UsbEnumerationOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~UsbEnumerationOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    UsbEnumerationOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    UsbEnumerationOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  UsbDeviceManager_GetDevices_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDeviceManager_GetDevices_Params_Data));
      new (data()) UsbDeviceManager_GetDevices_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDeviceManager_GetDevices_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDeviceManager_GetDevices_Params_Data>(index_);
    }
    UsbDeviceManager_GetDevices_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::UsbEnumerationOptions_Data> options;

 private:
  UsbDeviceManager_GetDevices_Params_Data();
  ~UsbDeviceManager_GetDevices_Params_Data() = delete;
};
static_assert(sizeof(UsbDeviceManager_GetDevices_Params_Data) == 16,
              "Bad sizeof(UsbDeviceManager_GetDevices_Params_Data)");
class  UsbDeviceManager_GetDevices_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDeviceManager_GetDevices_ResponseParams_Data));
      new (data()) UsbDeviceManager_GetDevices_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDeviceManager_GetDevices_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDeviceManager_GetDevices_ResponseParams_Data>(index_);
    }
    UsbDeviceManager_GetDevices_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::device::mojom::internal::UsbDeviceInfo_Data>>> results;

 private:
  UsbDeviceManager_GetDevices_ResponseParams_Data();
  ~UsbDeviceManager_GetDevices_ResponseParams_Data() = delete;
};
static_assert(sizeof(UsbDeviceManager_GetDevices_ResponseParams_Data) == 16,
              "Bad sizeof(UsbDeviceManager_GetDevices_ResponseParams_Data)");
class  UsbDeviceManager_GetDevice_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDeviceManager_GetDevice_Params_Data));
      new (data()) UsbDeviceManager_GetDevice_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDeviceManager_GetDevice_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDeviceManager_GetDevice_Params_Data>(index_);
    }
    UsbDeviceManager_GetDevice_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> guid;
  mojo::internal::Handle_Data device_request;
  uint8_t padfinal_[4];

 private:
  UsbDeviceManager_GetDevice_Params_Data();
  ~UsbDeviceManager_GetDevice_Params_Data() = delete;
};
static_assert(sizeof(UsbDeviceManager_GetDevice_Params_Data) == 24,
              "Bad sizeof(UsbDeviceManager_GetDevice_Params_Data)");
class  UsbDeviceManager_SetClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDeviceManager_SetClient_Params_Data));
      new (data()) UsbDeviceManager_SetClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDeviceManager_SetClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDeviceManager_SetClient_Params_Data>(index_);
    }
    UsbDeviceManager_SetClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;

 private:
  UsbDeviceManager_SetClient_Params_Data();
  ~UsbDeviceManager_SetClient_Params_Data() = delete;
};
static_assert(sizeof(UsbDeviceManager_SetClient_Params_Data) == 16,
              "Bad sizeof(UsbDeviceManager_SetClient_Params_Data)");
class  UsbDeviceManagerClient_OnDeviceAdded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDeviceManagerClient_OnDeviceAdded_Params_Data));
      new (data()) UsbDeviceManagerClient_OnDeviceAdded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDeviceManagerClient_OnDeviceAdded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDeviceManagerClient_OnDeviceAdded_Params_Data>(index_);
    }
    UsbDeviceManagerClient_OnDeviceAdded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::device::mojom::internal::UsbDeviceInfo_Data> device_info;

 private:
  UsbDeviceManagerClient_OnDeviceAdded_Params_Data();
  ~UsbDeviceManagerClient_OnDeviceAdded_Params_Data() = delete;
};
static_assert(sizeof(UsbDeviceManagerClient_OnDeviceAdded_Params_Data) == 16,
              "Bad sizeof(UsbDeviceManagerClient_OnDeviceAdded_Params_Data)");
class  UsbDeviceManagerClient_OnDeviceRemoved_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDeviceManagerClient_OnDeviceRemoved_Params_Data));
      new (data()) UsbDeviceManagerClient_OnDeviceRemoved_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDeviceManagerClient_OnDeviceRemoved_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDeviceManagerClient_OnDeviceRemoved_Params_Data>(index_);
    }
    UsbDeviceManagerClient_OnDeviceRemoved_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::device::mojom::internal::UsbDeviceInfo_Data> device_info;

 private:
  UsbDeviceManagerClient_OnDeviceRemoved_Params_Data();
  ~UsbDeviceManagerClient_OnDeviceRemoved_Params_Data() = delete;
};
static_assert(sizeof(UsbDeviceManagerClient_OnDeviceRemoved_Params_Data) == 16,
              "Bad sizeof(UsbDeviceManagerClient_OnDeviceRemoved_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_SHARED_INTERNAL_H_