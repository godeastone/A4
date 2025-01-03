// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_BLUETOOTH_PUBLIC_MOJOM_ADAPTER_MOJOM_SHARED_INTERNAL_H_
#define DEVICE_BLUETOOTH_PUBLIC_MOJOM_ADAPTER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "device/bluetooth/public/mojom/device.mojom-shared-internal.h"
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
class AdapterInfo_Data;

struct ConnectResult_Data {
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

#pragma pack(push, 1)
class  AdapterInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AdapterInfo_Data));
      new (data()) AdapterInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AdapterInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AdapterInfo_Data>(index_);
    }
    AdapterInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> address;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  uint8_t initialized : 1;
  uint8_t present : 1;
  uint8_t powered : 1;
  uint8_t discoverable : 1;
  uint8_t discovering : 1;
  uint8_t padfinal_[7];

 private:
  AdapterInfo_Data();
  ~AdapterInfo_Data() = delete;
};
static_assert(sizeof(AdapterInfo_Data) == 32,
              "Bad sizeof(AdapterInfo_Data)");
// Used by AdapterInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct AdapterInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  AdapterInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~AdapterInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    AdapterInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    AdapterInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  DiscoverySession_IsActive_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DiscoverySession_IsActive_Params_Data));
      new (data()) DiscoverySession_IsActive_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DiscoverySession_IsActive_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DiscoverySession_IsActive_Params_Data>(index_);
    }
    DiscoverySession_IsActive_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DiscoverySession_IsActive_Params_Data();
  ~DiscoverySession_IsActive_Params_Data() = delete;
};
static_assert(sizeof(DiscoverySession_IsActive_Params_Data) == 8,
              "Bad sizeof(DiscoverySession_IsActive_Params_Data)");
class  DiscoverySession_IsActive_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DiscoverySession_IsActive_ResponseParams_Data));
      new (data()) DiscoverySession_IsActive_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DiscoverySession_IsActive_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DiscoverySession_IsActive_ResponseParams_Data>(index_);
    }
    DiscoverySession_IsActive_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t active : 1;
  uint8_t padfinal_[7];

 private:
  DiscoverySession_IsActive_ResponseParams_Data();
  ~DiscoverySession_IsActive_ResponseParams_Data() = delete;
};
static_assert(sizeof(DiscoverySession_IsActive_ResponseParams_Data) == 16,
              "Bad sizeof(DiscoverySession_IsActive_ResponseParams_Data)");
class  DiscoverySession_Stop_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DiscoverySession_Stop_Params_Data));
      new (data()) DiscoverySession_Stop_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DiscoverySession_Stop_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DiscoverySession_Stop_Params_Data>(index_);
    }
    DiscoverySession_Stop_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DiscoverySession_Stop_Params_Data();
  ~DiscoverySession_Stop_Params_Data() = delete;
};
static_assert(sizeof(DiscoverySession_Stop_Params_Data) == 8,
              "Bad sizeof(DiscoverySession_Stop_Params_Data)");
class  DiscoverySession_Stop_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DiscoverySession_Stop_ResponseParams_Data));
      new (data()) DiscoverySession_Stop_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DiscoverySession_Stop_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DiscoverySession_Stop_ResponseParams_Data>(index_);
    }
    DiscoverySession_Stop_ResponseParams_Data* operator->() { return data(); }

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
  DiscoverySession_Stop_ResponseParams_Data();
  ~DiscoverySession_Stop_ResponseParams_Data() = delete;
};
static_assert(sizeof(DiscoverySession_Stop_ResponseParams_Data) == 16,
              "Bad sizeof(DiscoverySession_Stop_ResponseParams_Data)");
class  Adapter_ConnectToDevice_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Adapter_ConnectToDevice_Params_Data));
      new (data()) Adapter_ConnectToDevice_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Adapter_ConnectToDevice_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Adapter_ConnectToDevice_Params_Data>(index_);
    }
    Adapter_ConnectToDevice_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> address;

 private:
  Adapter_ConnectToDevice_Params_Data();
  ~Adapter_ConnectToDevice_Params_Data() = delete;
};
static_assert(sizeof(Adapter_ConnectToDevice_Params_Data) == 16,
              "Bad sizeof(Adapter_ConnectToDevice_Params_Data)");
class  Adapter_ConnectToDevice_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Adapter_ConnectToDevice_ResponseParams_Data));
      new (data()) Adapter_ConnectToDevice_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Adapter_ConnectToDevice_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Adapter_ConnectToDevice_ResponseParams_Data>(index_);
    }
    Adapter_ConnectToDevice_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  mojo::internal::Interface_Data device;
  uint8_t padfinal_[4];

 private:
  Adapter_ConnectToDevice_ResponseParams_Data();
  ~Adapter_ConnectToDevice_ResponseParams_Data() = delete;
};
static_assert(sizeof(Adapter_ConnectToDevice_ResponseParams_Data) == 24,
              "Bad sizeof(Adapter_ConnectToDevice_ResponseParams_Data)");
class  Adapter_GetDevices_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Adapter_GetDevices_Params_Data));
      new (data()) Adapter_GetDevices_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Adapter_GetDevices_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Adapter_GetDevices_Params_Data>(index_);
    }
    Adapter_GetDevices_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Adapter_GetDevices_Params_Data();
  ~Adapter_GetDevices_Params_Data() = delete;
};
static_assert(sizeof(Adapter_GetDevices_Params_Data) == 8,
              "Bad sizeof(Adapter_GetDevices_Params_Data)");
class  Adapter_GetDevices_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Adapter_GetDevices_ResponseParams_Data));
      new (data()) Adapter_GetDevices_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Adapter_GetDevices_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Adapter_GetDevices_ResponseParams_Data>(index_);
    }
    Adapter_GetDevices_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::bluetooth::mojom::internal::DeviceInfo_Data>>> devices;

 private:
  Adapter_GetDevices_ResponseParams_Data();
  ~Adapter_GetDevices_ResponseParams_Data() = delete;
};
static_assert(sizeof(Adapter_GetDevices_ResponseParams_Data) == 16,
              "Bad sizeof(Adapter_GetDevices_ResponseParams_Data)");
class  Adapter_GetInfo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Adapter_GetInfo_Params_Data));
      new (data()) Adapter_GetInfo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Adapter_GetInfo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Adapter_GetInfo_Params_Data>(index_);
    }
    Adapter_GetInfo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Adapter_GetInfo_Params_Data();
  ~Adapter_GetInfo_Params_Data() = delete;
};
static_assert(sizeof(Adapter_GetInfo_Params_Data) == 8,
              "Bad sizeof(Adapter_GetInfo_Params_Data)");
class  Adapter_GetInfo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Adapter_GetInfo_ResponseParams_Data));
      new (data()) Adapter_GetInfo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Adapter_GetInfo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Adapter_GetInfo_ResponseParams_Data>(index_);
    }
    Adapter_GetInfo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::AdapterInfo_Data> info;

 private:
  Adapter_GetInfo_ResponseParams_Data();
  ~Adapter_GetInfo_ResponseParams_Data() = delete;
};
static_assert(sizeof(Adapter_GetInfo_ResponseParams_Data) == 16,
              "Bad sizeof(Adapter_GetInfo_ResponseParams_Data)");
class  Adapter_SetClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Adapter_SetClient_Params_Data));
      new (data()) Adapter_SetClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Adapter_SetClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Adapter_SetClient_Params_Data>(index_);
    }
    Adapter_SetClient_Params_Data* operator->() { return data(); }

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
  Adapter_SetClient_Params_Data();
  ~Adapter_SetClient_Params_Data() = delete;
};
static_assert(sizeof(Adapter_SetClient_Params_Data) == 16,
              "Bad sizeof(Adapter_SetClient_Params_Data)");
class  Adapter_StartDiscoverySession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Adapter_StartDiscoverySession_Params_Data));
      new (data()) Adapter_StartDiscoverySession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Adapter_StartDiscoverySession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Adapter_StartDiscoverySession_Params_Data>(index_);
    }
    Adapter_StartDiscoverySession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Adapter_StartDiscoverySession_Params_Data();
  ~Adapter_StartDiscoverySession_Params_Data() = delete;
};
static_assert(sizeof(Adapter_StartDiscoverySession_Params_Data) == 8,
              "Bad sizeof(Adapter_StartDiscoverySession_Params_Data)");
class  Adapter_StartDiscoverySession_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Adapter_StartDiscoverySession_ResponseParams_Data));
      new (data()) Adapter_StartDiscoverySession_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Adapter_StartDiscoverySession_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Adapter_StartDiscoverySession_ResponseParams_Data>(index_);
    }
    Adapter_StartDiscoverySession_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data session;

 private:
  Adapter_StartDiscoverySession_ResponseParams_Data();
  ~Adapter_StartDiscoverySession_ResponseParams_Data() = delete;
};
static_assert(sizeof(Adapter_StartDiscoverySession_ResponseParams_Data) == 16,
              "Bad sizeof(Adapter_StartDiscoverySession_ResponseParams_Data)");
class  AdapterClient_PresentChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AdapterClient_PresentChanged_Params_Data));
      new (data()) AdapterClient_PresentChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AdapterClient_PresentChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AdapterClient_PresentChanged_Params_Data>(index_);
    }
    AdapterClient_PresentChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t present : 1;
  uint8_t padfinal_[7];

 private:
  AdapterClient_PresentChanged_Params_Data();
  ~AdapterClient_PresentChanged_Params_Data() = delete;
};
static_assert(sizeof(AdapterClient_PresentChanged_Params_Data) == 16,
              "Bad sizeof(AdapterClient_PresentChanged_Params_Data)");
class  AdapterClient_PoweredChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AdapterClient_PoweredChanged_Params_Data));
      new (data()) AdapterClient_PoweredChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AdapterClient_PoweredChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AdapterClient_PoweredChanged_Params_Data>(index_);
    }
    AdapterClient_PoweredChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t powered : 1;
  uint8_t padfinal_[7];

 private:
  AdapterClient_PoweredChanged_Params_Data();
  ~AdapterClient_PoweredChanged_Params_Data() = delete;
};
static_assert(sizeof(AdapterClient_PoweredChanged_Params_Data) == 16,
              "Bad sizeof(AdapterClient_PoweredChanged_Params_Data)");
class  AdapterClient_DiscoverableChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AdapterClient_DiscoverableChanged_Params_Data));
      new (data()) AdapterClient_DiscoverableChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AdapterClient_DiscoverableChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AdapterClient_DiscoverableChanged_Params_Data>(index_);
    }
    AdapterClient_DiscoverableChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t discoverable : 1;
  uint8_t padfinal_[7];

 private:
  AdapterClient_DiscoverableChanged_Params_Data();
  ~AdapterClient_DiscoverableChanged_Params_Data() = delete;
};
static_assert(sizeof(AdapterClient_DiscoverableChanged_Params_Data) == 16,
              "Bad sizeof(AdapterClient_DiscoverableChanged_Params_Data)");
class  AdapterClient_DiscoveringChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AdapterClient_DiscoveringChanged_Params_Data));
      new (data()) AdapterClient_DiscoveringChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AdapterClient_DiscoveringChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AdapterClient_DiscoveringChanged_Params_Data>(index_);
    }
    AdapterClient_DiscoveringChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t discovering : 1;
  uint8_t padfinal_[7];

 private:
  AdapterClient_DiscoveringChanged_Params_Data();
  ~AdapterClient_DiscoveringChanged_Params_Data() = delete;
};
static_assert(sizeof(AdapterClient_DiscoveringChanged_Params_Data) == 16,
              "Bad sizeof(AdapterClient_DiscoveringChanged_Params_Data)");
class  AdapterClient_DeviceAdded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AdapterClient_DeviceAdded_Params_Data));
      new (data()) AdapterClient_DeviceAdded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AdapterClient_DeviceAdded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AdapterClient_DeviceAdded_Params_Data>(index_);
    }
    AdapterClient_DeviceAdded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::bluetooth::mojom::internal::DeviceInfo_Data> device;

 private:
  AdapterClient_DeviceAdded_Params_Data();
  ~AdapterClient_DeviceAdded_Params_Data() = delete;
};
static_assert(sizeof(AdapterClient_DeviceAdded_Params_Data) == 16,
              "Bad sizeof(AdapterClient_DeviceAdded_Params_Data)");
class  AdapterClient_DeviceChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AdapterClient_DeviceChanged_Params_Data));
      new (data()) AdapterClient_DeviceChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AdapterClient_DeviceChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AdapterClient_DeviceChanged_Params_Data>(index_);
    }
    AdapterClient_DeviceChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::bluetooth::mojom::internal::DeviceInfo_Data> device;

 private:
  AdapterClient_DeviceChanged_Params_Data();
  ~AdapterClient_DeviceChanged_Params_Data() = delete;
};
static_assert(sizeof(AdapterClient_DeviceChanged_Params_Data) == 16,
              "Bad sizeof(AdapterClient_DeviceChanged_Params_Data)");
class  AdapterClient_DeviceRemoved_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AdapterClient_DeviceRemoved_Params_Data));
      new (data()) AdapterClient_DeviceRemoved_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AdapterClient_DeviceRemoved_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AdapterClient_DeviceRemoved_Params_Data>(index_);
    }
    AdapterClient_DeviceRemoved_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::bluetooth::mojom::internal::DeviceInfo_Data> device;

 private:
  AdapterClient_DeviceRemoved_Params_Data();
  ~AdapterClient_DeviceRemoved_Params_Data() = delete;
};
static_assert(sizeof(AdapterClient_DeviceRemoved_Params_Data) == 16,
              "Bad sizeof(AdapterClient_DeviceRemoved_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace bluetooth

#endif  // DEVICE_BLUETOOTH_PUBLIC_MOJOM_ADAPTER_MOJOM_SHARED_INTERNAL_H_