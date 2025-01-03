// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_CHOOSER_SERVICE_MOJOM_SHARED_INTERNAL_H_
#define DEVICE_USB_PUBLIC_MOJOM_CHOOSER_SERVICE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "device/usb/public/mojom/device.mojom-shared-internal.h"
#include "device/usb/public/mojom/device_manager.mojom-shared-internal.h"
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

#pragma pack(push, 1)
class  UsbChooserService_GetPermission_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbChooserService_GetPermission_Params_Data));
      new (data()) UsbChooserService_GetPermission_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbChooserService_GetPermission_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbChooserService_GetPermission_Params_Data>(index_);
    }
    UsbChooserService_GetPermission_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::device::mojom::internal::UsbDeviceFilter_Data>>> device_filters;

 private:
  UsbChooserService_GetPermission_Params_Data();
  ~UsbChooserService_GetPermission_Params_Data() = delete;
};
static_assert(sizeof(UsbChooserService_GetPermission_Params_Data) == 16,
              "Bad sizeof(UsbChooserService_GetPermission_Params_Data)");
class  UsbChooserService_GetPermission_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbChooserService_GetPermission_ResponseParams_Data));
      new (data()) UsbChooserService_GetPermission_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbChooserService_GetPermission_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbChooserService_GetPermission_ResponseParams_Data>(index_);
    }
    UsbChooserService_GetPermission_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::device::mojom::internal::UsbDeviceInfo_Data> result;

 private:
  UsbChooserService_GetPermission_ResponseParams_Data();
  ~UsbChooserService_GetPermission_ResponseParams_Data() = delete;
};
static_assert(sizeof(UsbChooserService_GetPermission_ResponseParams_Data) == 16,
              "Bad sizeof(UsbChooserService_GetPermission_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_USB_PUBLIC_MOJOM_CHOOSER_SERVICE_MOJOM_SHARED_INTERNAL_H_