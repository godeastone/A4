// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_SHARED_INTERNAL_H_

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

struct WakeLockType_Data {
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

struct WakeLockReason_Data {
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
class  WakeLock_RequestWakeLock_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WakeLock_RequestWakeLock_Params_Data));
      new (data()) WakeLock_RequestWakeLock_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WakeLock_RequestWakeLock_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WakeLock_RequestWakeLock_Params_Data>(index_);
    }
    WakeLock_RequestWakeLock_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WakeLock_RequestWakeLock_Params_Data();
  ~WakeLock_RequestWakeLock_Params_Data() = delete;
};
static_assert(sizeof(WakeLock_RequestWakeLock_Params_Data) == 8,
              "Bad sizeof(WakeLock_RequestWakeLock_Params_Data)");
class  WakeLock_CancelWakeLock_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WakeLock_CancelWakeLock_Params_Data));
      new (data()) WakeLock_CancelWakeLock_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WakeLock_CancelWakeLock_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WakeLock_CancelWakeLock_Params_Data>(index_);
    }
    WakeLock_CancelWakeLock_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WakeLock_CancelWakeLock_Params_Data();
  ~WakeLock_CancelWakeLock_Params_Data() = delete;
};
static_assert(sizeof(WakeLock_CancelWakeLock_Params_Data) == 8,
              "Bad sizeof(WakeLock_CancelWakeLock_Params_Data)");
class  WakeLock_AddClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WakeLock_AddClient_Params_Data));
      new (data()) WakeLock_AddClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WakeLock_AddClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WakeLock_AddClient_Params_Data>(index_);
    }
    WakeLock_AddClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data wake_lock;
  uint8_t padfinal_[4];

 private:
  WakeLock_AddClient_Params_Data();
  ~WakeLock_AddClient_Params_Data() = delete;
};
static_assert(sizeof(WakeLock_AddClient_Params_Data) == 16,
              "Bad sizeof(WakeLock_AddClient_Params_Data)");
class  WakeLock_ChangeType_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WakeLock_ChangeType_Params_Data));
      new (data()) WakeLock_ChangeType_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WakeLock_ChangeType_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WakeLock_ChangeType_Params_Data>(index_);
    }
    WakeLock_ChangeType_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t padfinal_[4];

 private:
  WakeLock_ChangeType_Params_Data();
  ~WakeLock_ChangeType_Params_Data() = delete;
};
static_assert(sizeof(WakeLock_ChangeType_Params_Data) == 16,
              "Bad sizeof(WakeLock_ChangeType_Params_Data)");
class  WakeLock_ChangeType_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WakeLock_ChangeType_ResponseParams_Data));
      new (data()) WakeLock_ChangeType_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WakeLock_ChangeType_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WakeLock_ChangeType_ResponseParams_Data>(index_);
    }
    WakeLock_ChangeType_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t result : 1;
  uint8_t padfinal_[7];

 private:
  WakeLock_ChangeType_ResponseParams_Data();
  ~WakeLock_ChangeType_ResponseParams_Data() = delete;
};
static_assert(sizeof(WakeLock_ChangeType_ResponseParams_Data) == 16,
              "Bad sizeof(WakeLock_ChangeType_ResponseParams_Data)");
class  WakeLock_HasWakeLockForTests_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WakeLock_HasWakeLockForTests_Params_Data));
      new (data()) WakeLock_HasWakeLockForTests_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WakeLock_HasWakeLockForTests_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WakeLock_HasWakeLockForTests_Params_Data>(index_);
    }
    WakeLock_HasWakeLockForTests_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WakeLock_HasWakeLockForTests_Params_Data();
  ~WakeLock_HasWakeLockForTests_Params_Data() = delete;
};
static_assert(sizeof(WakeLock_HasWakeLockForTests_Params_Data) == 8,
              "Bad sizeof(WakeLock_HasWakeLockForTests_Params_Data)");
class  WakeLock_HasWakeLockForTests_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WakeLock_HasWakeLockForTests_ResponseParams_Data));
      new (data()) WakeLock_HasWakeLockForTests_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WakeLock_HasWakeLockForTests_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WakeLock_HasWakeLockForTests_ResponseParams_Data>(index_);
    }
    WakeLock_HasWakeLockForTests_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t result : 1;
  uint8_t padfinal_[7];

 private:
  WakeLock_HasWakeLockForTests_ResponseParams_Data();
  ~WakeLock_HasWakeLockForTests_ResponseParams_Data() = delete;
};
static_assert(sizeof(WakeLock_HasWakeLockForTests_ResponseParams_Data) == 16,
              "Bad sizeof(WakeLock_HasWakeLockForTests_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_SHARED_INTERNAL_H_