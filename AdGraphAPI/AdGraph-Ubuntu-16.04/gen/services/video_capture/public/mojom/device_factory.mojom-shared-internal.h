// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_FACTORY_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_FACTORY_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/capture/mojom/video_capture_types.mojom-shared-internal.h"
#include "services/video_capture/public/mojom/device.mojom-shared-internal.h"
#include "services/video_capture/public/mojom/producer.mojom-shared-internal.h"
#include "services/video_capture/public/mojom/virtual_device.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace video_capture {
namespace mojom {
namespace internal {

struct DeviceAccessResultCode_Data {
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
class  DeviceFactory_GetDeviceInfos_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DeviceFactory_GetDeviceInfos_Params_Data));
      new (data()) DeviceFactory_GetDeviceInfos_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DeviceFactory_GetDeviceInfos_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DeviceFactory_GetDeviceInfos_Params_Data>(index_);
    }
    DeviceFactory_GetDeviceInfos_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DeviceFactory_GetDeviceInfos_Params_Data();
  ~DeviceFactory_GetDeviceInfos_Params_Data() = delete;
};
static_assert(sizeof(DeviceFactory_GetDeviceInfos_Params_Data) == 8,
              "Bad sizeof(DeviceFactory_GetDeviceInfos_Params_Data)");
class  DeviceFactory_GetDeviceInfos_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DeviceFactory_GetDeviceInfos_ResponseParams_Data));
      new (data()) DeviceFactory_GetDeviceInfos_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DeviceFactory_GetDeviceInfos_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DeviceFactory_GetDeviceInfos_ResponseParams_Data>(index_);
    }
    DeviceFactory_GetDeviceInfos_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::media::mojom::internal::VideoCaptureDeviceInfo_Data>>> device_infos;

 private:
  DeviceFactory_GetDeviceInfos_ResponseParams_Data();
  ~DeviceFactory_GetDeviceInfos_ResponseParams_Data() = delete;
};
static_assert(sizeof(DeviceFactory_GetDeviceInfos_ResponseParams_Data) == 16,
              "Bad sizeof(DeviceFactory_GetDeviceInfos_ResponseParams_Data)");
class  DeviceFactory_CreateDevice_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DeviceFactory_CreateDevice_Params_Data));
      new (data()) DeviceFactory_CreateDevice_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DeviceFactory_CreateDevice_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DeviceFactory_CreateDevice_Params_Data>(index_);
    }
    DeviceFactory_CreateDevice_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> device_id;
  mojo::internal::Handle_Data device_request;
  uint8_t padfinal_[4];

 private:
  DeviceFactory_CreateDevice_Params_Data();
  ~DeviceFactory_CreateDevice_Params_Data() = delete;
};
static_assert(sizeof(DeviceFactory_CreateDevice_Params_Data) == 24,
              "Bad sizeof(DeviceFactory_CreateDevice_Params_Data)");
class  DeviceFactory_CreateDevice_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DeviceFactory_CreateDevice_ResponseParams_Data));
      new (data()) DeviceFactory_CreateDevice_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DeviceFactory_CreateDevice_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DeviceFactory_CreateDevice_ResponseParams_Data>(index_);
    }
    DeviceFactory_CreateDevice_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result_code;
  uint8_t padfinal_[4];

 private:
  DeviceFactory_CreateDevice_ResponseParams_Data();
  ~DeviceFactory_CreateDevice_ResponseParams_Data() = delete;
};
static_assert(sizeof(DeviceFactory_CreateDevice_ResponseParams_Data) == 16,
              "Bad sizeof(DeviceFactory_CreateDevice_ResponseParams_Data)");
class  DeviceFactory_AddSharedMemoryVirtualDevice_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DeviceFactory_AddSharedMemoryVirtualDevice_Params_Data));
      new (data()) DeviceFactory_AddSharedMemoryVirtualDevice_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DeviceFactory_AddSharedMemoryVirtualDevice_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DeviceFactory_AddSharedMemoryVirtualDevice_Params_Data>(index_);
    }
    DeviceFactory_AddSharedMemoryVirtualDevice_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::VideoCaptureDeviceInfo_Data> device_info;
  mojo::internal::Interface_Data producer;
  mojo::internal::Handle_Data virtual_device;
  uint8_t padfinal_[4];

 private:
  DeviceFactory_AddSharedMemoryVirtualDevice_Params_Data();
  ~DeviceFactory_AddSharedMemoryVirtualDevice_Params_Data() = delete;
};
static_assert(sizeof(DeviceFactory_AddSharedMemoryVirtualDevice_Params_Data) == 32,
              "Bad sizeof(DeviceFactory_AddSharedMemoryVirtualDevice_Params_Data)");
class  DeviceFactory_AddTextureVirtualDevice_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DeviceFactory_AddTextureVirtualDevice_Params_Data));
      new (data()) DeviceFactory_AddTextureVirtualDevice_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DeviceFactory_AddTextureVirtualDevice_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DeviceFactory_AddTextureVirtualDevice_Params_Data>(index_);
    }
    DeviceFactory_AddTextureVirtualDevice_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::VideoCaptureDeviceInfo_Data> device_info;
  mojo::internal::Handle_Data virtual_device;
  uint8_t padfinal_[4];

 private:
  DeviceFactory_AddTextureVirtualDevice_Params_Data();
  ~DeviceFactory_AddTextureVirtualDevice_Params_Data() = delete;
};
static_assert(sizeof(DeviceFactory_AddTextureVirtualDevice_Params_Data) == 24,
              "Bad sizeof(DeviceFactory_AddTextureVirtualDevice_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace video_capture

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_FACTORY_MOJOM_SHARED_INTERNAL_H_