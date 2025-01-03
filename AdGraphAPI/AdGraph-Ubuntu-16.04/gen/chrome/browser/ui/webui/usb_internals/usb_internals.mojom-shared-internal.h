// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_USB_INTERNALS_USB_INTERNALS_MOJOM_SHARED_INTERNAL_H_
#define CHROME_BROWSER_UI_WEBUI_USB_INTERNALS_USB_INTERNALS_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "url/mojom/origin.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace mojom {
namespace internal {
class TestDeviceInfo_Data;

#pragma pack(push, 1)
class  TestDeviceInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestDeviceInfo_Data));
      new (data()) TestDeviceInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestDeviceInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestDeviceInfo_Data>(index_);
    }
    TestDeviceInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> guid;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::String_Data> serial_number;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> landing_page;

 private:
  TestDeviceInfo_Data();
  ~TestDeviceInfo_Data() = delete;
};
static_assert(sizeof(TestDeviceInfo_Data) == 40,
              "Bad sizeof(TestDeviceInfo_Data)");
// Used by TestDeviceInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TestDeviceInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TestDeviceInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TestDeviceInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    TestDeviceInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TestDeviceInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  UsbInternalsPageHandler_AddDeviceForTesting_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbInternalsPageHandler_AddDeviceForTesting_Params_Data));
      new (data()) UsbInternalsPageHandler_AddDeviceForTesting_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbInternalsPageHandler_AddDeviceForTesting_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbInternalsPageHandler_AddDeviceForTesting_Params_Data>(index_);
    }
    UsbInternalsPageHandler_AddDeviceForTesting_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::String_Data> serial_number;
  mojo::internal::Pointer<mojo::internal::String_Data> landing_page;

 private:
  UsbInternalsPageHandler_AddDeviceForTesting_Params_Data();
  ~UsbInternalsPageHandler_AddDeviceForTesting_Params_Data() = delete;
};
static_assert(sizeof(UsbInternalsPageHandler_AddDeviceForTesting_Params_Data) == 32,
              "Bad sizeof(UsbInternalsPageHandler_AddDeviceForTesting_Params_Data)");
class  UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data));
      new (data()) UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data>(index_);
    }
    UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<mojo::internal::String_Data> message;

 private:
  UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data();
  ~UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data() = delete;
};
static_assert(sizeof(UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data) == 24,
              "Bad sizeof(UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data)");
class  UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data));
      new (data()) UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data>(index_);
    }
    UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> guid;

 private:
  UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data();
  ~UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data() = delete;
};
static_assert(sizeof(UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data) == 16,
              "Bad sizeof(UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data)");
class  UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data));
      new (data()) UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data>(index_);
    }
    UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data();
  ~UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data() = delete;
};
static_assert(sizeof(UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data) == 8,
              "Bad sizeof(UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data)");
class  UsbInternalsPageHandler_GetTestDevices_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbInternalsPageHandler_GetTestDevices_Params_Data));
      new (data()) UsbInternalsPageHandler_GetTestDevices_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbInternalsPageHandler_GetTestDevices_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbInternalsPageHandler_GetTestDevices_Params_Data>(index_);
    }
    UsbInternalsPageHandler_GetTestDevices_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  UsbInternalsPageHandler_GetTestDevices_Params_Data();
  ~UsbInternalsPageHandler_GetTestDevices_Params_Data() = delete;
};
static_assert(sizeof(UsbInternalsPageHandler_GetTestDevices_Params_Data) == 8,
              "Bad sizeof(UsbInternalsPageHandler_GetTestDevices_Params_Data)");
class  UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data));
      new (data()) UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data>(index_);
    }
    UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::TestDeviceInfo_Data>>> devices;

 private:
  UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data();
  ~UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data() = delete;
};
static_assert(sizeof(UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data) == 16,
              "Bad sizeof(UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom

#endif  // CHROME_BROWSER_UI_WEBUI_USB_INTERNALS_USB_INTERNALS_MOJOM_SHARED_INTERNAL_H_