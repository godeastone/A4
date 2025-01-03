// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_VIBRATION_MANAGER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_VIBRATION_MANAGER_MOJOM_SHARED_INTERNAL_H_

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

#pragma pack(push, 1)
class  VibrationManager_Vibrate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VibrationManager_Vibrate_Params_Data));
      new (data()) VibrationManager_Vibrate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VibrationManager_Vibrate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VibrationManager_Vibrate_Params_Data>(index_);
    }
    VibrationManager_Vibrate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t milliseconds;

 private:
  VibrationManager_Vibrate_Params_Data();
  ~VibrationManager_Vibrate_Params_Data() = delete;
};
static_assert(sizeof(VibrationManager_Vibrate_Params_Data) == 16,
              "Bad sizeof(VibrationManager_Vibrate_Params_Data)");
class  VibrationManager_Vibrate_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VibrationManager_Vibrate_ResponseParams_Data));
      new (data()) VibrationManager_Vibrate_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VibrationManager_Vibrate_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VibrationManager_Vibrate_ResponseParams_Data>(index_);
    }
    VibrationManager_Vibrate_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VibrationManager_Vibrate_ResponseParams_Data();
  ~VibrationManager_Vibrate_ResponseParams_Data() = delete;
};
static_assert(sizeof(VibrationManager_Vibrate_ResponseParams_Data) == 8,
              "Bad sizeof(VibrationManager_Vibrate_ResponseParams_Data)");
class  VibrationManager_Cancel_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VibrationManager_Cancel_Params_Data));
      new (data()) VibrationManager_Cancel_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VibrationManager_Cancel_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VibrationManager_Cancel_Params_Data>(index_);
    }
    VibrationManager_Cancel_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VibrationManager_Cancel_Params_Data();
  ~VibrationManager_Cancel_Params_Data() = delete;
};
static_assert(sizeof(VibrationManager_Cancel_Params_Data) == 8,
              "Bad sizeof(VibrationManager_Cancel_Params_Data)");
class  VibrationManager_Cancel_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VibrationManager_Cancel_ResponseParams_Data));
      new (data()) VibrationManager_Cancel_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VibrationManager_Cancel_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VibrationManager_Cancel_ResponseParams_Data>(index_);
    }
    VibrationManager_Cancel_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VibrationManager_Cancel_ResponseParams_Data();
  ~VibrationManager_Cancel_ResponseParams_Data() = delete;
};
static_assert(sizeof(VibrationManager_Cancel_ResponseParams_Data) == 8,
              "Bad sizeof(VibrationManager_Cancel_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_VIBRATION_MANAGER_MOJOM_SHARED_INTERNAL_H_