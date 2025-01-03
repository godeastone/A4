// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_USER_ACTIVITY_MONITOR_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_UI_PUBLIC_INTERFACES_USER_ACTIVITY_MONITOR_MOJOM_SHARED_INTERNAL_H_

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
namespace ui {
namespace mojom {
namespace internal {

struct UserIdleObserver_IdleState_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
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
class  UserActivityObserver_OnUserActivity_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UserActivityObserver_OnUserActivity_Params_Data));
      new (data()) UserActivityObserver_OnUserActivity_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UserActivityObserver_OnUserActivity_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UserActivityObserver_OnUserActivity_Params_Data>(index_);
    }
    UserActivityObserver_OnUserActivity_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  UserActivityObserver_OnUserActivity_Params_Data();
  ~UserActivityObserver_OnUserActivity_Params_Data() = delete;
};
static_assert(sizeof(UserActivityObserver_OnUserActivity_Params_Data) == 8,
              "Bad sizeof(UserActivityObserver_OnUserActivity_Params_Data)");
class  UserIdleObserver_OnUserIdleStateChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UserIdleObserver_OnUserIdleStateChanged_Params_Data));
      new (data()) UserIdleObserver_OnUserIdleStateChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UserIdleObserver_OnUserIdleStateChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UserIdleObserver_OnUserIdleStateChanged_Params_Data>(index_);
    }
    UserIdleObserver_OnUserIdleStateChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t new_state;
  uint8_t padfinal_[4];

 private:
  UserIdleObserver_OnUserIdleStateChanged_Params_Data();
  ~UserIdleObserver_OnUserIdleStateChanged_Params_Data() = delete;
};
static_assert(sizeof(UserIdleObserver_OnUserIdleStateChanged_Params_Data) == 16,
              "Bad sizeof(UserIdleObserver_OnUserIdleStateChanged_Params_Data)");
class  UserActivityMonitor_AddUserActivityObserver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UserActivityMonitor_AddUserActivityObserver_Params_Data));
      new (data()) UserActivityMonitor_AddUserActivityObserver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UserActivityMonitor_AddUserActivityObserver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UserActivityMonitor_AddUserActivityObserver_Params_Data>(index_);
    }
    UserActivityMonitor_AddUserActivityObserver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t delay_between_notify_secs;
  mojo::internal::Interface_Data observer;
  uint8_t padfinal_[4];

 private:
  UserActivityMonitor_AddUserActivityObserver_Params_Data();
  ~UserActivityMonitor_AddUserActivityObserver_Params_Data() = delete;
};
static_assert(sizeof(UserActivityMonitor_AddUserActivityObserver_Params_Data) == 24,
              "Bad sizeof(UserActivityMonitor_AddUserActivityObserver_Params_Data)");
class  UserActivityMonitor_AddUserIdleObserver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UserActivityMonitor_AddUserIdleObserver_Params_Data));
      new (data()) UserActivityMonitor_AddUserIdleObserver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UserActivityMonitor_AddUserIdleObserver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UserActivityMonitor_AddUserIdleObserver_Params_Data>(index_);
    }
    UserActivityMonitor_AddUserIdleObserver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t idle_time_in_minutes;
  mojo::internal::Interface_Data observer;
  uint8_t padfinal_[4];

 private:
  UserActivityMonitor_AddUserIdleObserver_Params_Data();
  ~UserActivityMonitor_AddUserIdleObserver_Params_Data() = delete;
};
static_assert(sizeof(UserActivityMonitor_AddUserIdleObserver_Params_Data) == 24,
              "Bad sizeof(UserActivityMonitor_AddUserIdleObserver_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_USER_ACTIVITY_MONITOR_MOJOM_SHARED_INTERNAL_H_