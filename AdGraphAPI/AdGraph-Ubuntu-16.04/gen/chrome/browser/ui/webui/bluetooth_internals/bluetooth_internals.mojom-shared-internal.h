// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_BLUETOOTH_INTERNALS_BLUETOOTH_INTERNALS_MOJOM_SHARED_INTERNAL_H_
#define CHROME_BROWSER_UI_WEBUI_BLUETOOTH_INTERNALS_BLUETOOTH_INTERNALS_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "device/bluetooth/public/mojom/adapter.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  BluetoothInternalsHandler_GetAdapter_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BluetoothInternalsHandler_GetAdapter_Params_Data));
      new (data()) BluetoothInternalsHandler_GetAdapter_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BluetoothInternalsHandler_GetAdapter_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BluetoothInternalsHandler_GetAdapter_Params_Data>(index_);
    }
    BluetoothInternalsHandler_GetAdapter_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  BluetoothInternalsHandler_GetAdapter_Params_Data();
  ~BluetoothInternalsHandler_GetAdapter_Params_Data() = delete;
};
static_assert(sizeof(BluetoothInternalsHandler_GetAdapter_Params_Data) == 8,
              "Bad sizeof(BluetoothInternalsHandler_GetAdapter_Params_Data)");
class  BluetoothInternalsHandler_GetAdapter_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BluetoothInternalsHandler_GetAdapter_ResponseParams_Data));
      new (data()) BluetoothInternalsHandler_GetAdapter_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BluetoothInternalsHandler_GetAdapter_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BluetoothInternalsHandler_GetAdapter_ResponseParams_Data>(index_);
    }
    BluetoothInternalsHandler_GetAdapter_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data adapter;

 private:
  BluetoothInternalsHandler_GetAdapter_ResponseParams_Data();
  ~BluetoothInternalsHandler_GetAdapter_ResponseParams_Data() = delete;
};
static_assert(sizeof(BluetoothInternalsHandler_GetAdapter_ResponseParams_Data) == 16,
              "Bad sizeof(BluetoothInternalsHandler_GetAdapter_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom

#endif  // CHROME_BROWSER_UI_WEBUI_BLUETOOTH_INTERNALS_BLUETOOTH_INTERNALS_MOJOM_SHARED_INTERNAL_H_