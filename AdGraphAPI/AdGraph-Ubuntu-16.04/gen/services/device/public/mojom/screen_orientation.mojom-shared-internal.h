// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/device/public/mojom/screen_orientation_lock_types.mojom-shared-internal.h"
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
class  ScreenOrientation_LockOrientation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ScreenOrientation_LockOrientation_Params_Data));
      new (data()) ScreenOrientation_LockOrientation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ScreenOrientation_LockOrientation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ScreenOrientation_LockOrientation_Params_Data>(index_);
    }
    ScreenOrientation_LockOrientation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t orientation;
  uint8_t padfinal_[4];

 private:
  ScreenOrientation_LockOrientation_Params_Data();
  ~ScreenOrientation_LockOrientation_Params_Data() = delete;
};
static_assert(sizeof(ScreenOrientation_LockOrientation_Params_Data) == 16,
              "Bad sizeof(ScreenOrientation_LockOrientation_Params_Data)");
class  ScreenOrientation_LockOrientation_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ScreenOrientation_LockOrientation_ResponseParams_Data));
      new (data()) ScreenOrientation_LockOrientation_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ScreenOrientation_LockOrientation_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ScreenOrientation_LockOrientation_ResponseParams_Data>(index_);
    }
    ScreenOrientation_LockOrientation_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  ScreenOrientation_LockOrientation_ResponseParams_Data();
  ~ScreenOrientation_LockOrientation_ResponseParams_Data() = delete;
};
static_assert(sizeof(ScreenOrientation_LockOrientation_ResponseParams_Data) == 16,
              "Bad sizeof(ScreenOrientation_LockOrientation_ResponseParams_Data)");
class  ScreenOrientation_UnlockOrientation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ScreenOrientation_UnlockOrientation_Params_Data));
      new (data()) ScreenOrientation_UnlockOrientation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ScreenOrientation_UnlockOrientation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ScreenOrientation_UnlockOrientation_Params_Data>(index_);
    }
    ScreenOrientation_UnlockOrientation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ScreenOrientation_UnlockOrientation_Params_Data();
  ~ScreenOrientation_UnlockOrientation_Params_Data() = delete;
};
static_assert(sizeof(ScreenOrientation_UnlockOrientation_Params_Data) == 8,
              "Bad sizeof(ScreenOrientation_UnlockOrientation_Params_Data)");
class  ScreenOrientationListener_Start_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ScreenOrientationListener_Start_Params_Data));
      new (data()) ScreenOrientationListener_Start_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ScreenOrientationListener_Start_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ScreenOrientationListener_Start_Params_Data>(index_);
    }
    ScreenOrientationListener_Start_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ScreenOrientationListener_Start_Params_Data();
  ~ScreenOrientationListener_Start_Params_Data() = delete;
};
static_assert(sizeof(ScreenOrientationListener_Start_Params_Data) == 8,
              "Bad sizeof(ScreenOrientationListener_Start_Params_Data)");
class  ScreenOrientationListener_Stop_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ScreenOrientationListener_Stop_Params_Data));
      new (data()) ScreenOrientationListener_Stop_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ScreenOrientationListener_Stop_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ScreenOrientationListener_Stop_Params_Data>(index_);
    }
    ScreenOrientationListener_Stop_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ScreenOrientationListener_Stop_Params_Data();
  ~ScreenOrientationListener_Stop_Params_Data() = delete;
};
static_assert(sizeof(ScreenOrientationListener_Stop_Params_Data) == 8,
              "Bad sizeof(ScreenOrientationListener_Stop_Params_Data)");
class  ScreenOrientationListener_IsAutoRotateEnabledByUser_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ScreenOrientationListener_IsAutoRotateEnabledByUser_Params_Data));
      new (data()) ScreenOrientationListener_IsAutoRotateEnabledByUser_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ScreenOrientationListener_IsAutoRotateEnabledByUser_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ScreenOrientationListener_IsAutoRotateEnabledByUser_Params_Data>(index_);
    }
    ScreenOrientationListener_IsAutoRotateEnabledByUser_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ScreenOrientationListener_IsAutoRotateEnabledByUser_Params_Data();
  ~ScreenOrientationListener_IsAutoRotateEnabledByUser_Params_Data() = delete;
};
static_assert(sizeof(ScreenOrientationListener_IsAutoRotateEnabledByUser_Params_Data) == 8,
              "Bad sizeof(ScreenOrientationListener_IsAutoRotateEnabledByUser_Params_Data)");
class  ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams_Data));
      new (data()) ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams_Data>(index_);
    }
    ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t enabled : 1;
  uint8_t padfinal_[7];

 private:
  ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams_Data();
  ~ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams_Data() = delete;
};
static_assert(sizeof(ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams_Data) == 16,
              "Bad sizeof(ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_SHARED_INTERNAL_H_