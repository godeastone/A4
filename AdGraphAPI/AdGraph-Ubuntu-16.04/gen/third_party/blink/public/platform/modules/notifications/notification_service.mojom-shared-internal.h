// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "third_party/blink/public/platform/modules/notifications/notification.mojom-shared-internal.h"
#include "third_party/blink/public/platform/modules/permissions/permission_status.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace blink {
namespace mojom {
namespace internal {

struct PersistentNotificationError_Data {
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) NonPersistentNotificationListener_OnShow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NonPersistentNotificationListener_OnShow_Params_Data));
      new (data()) NonPersistentNotificationListener_OnShow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NonPersistentNotificationListener_OnShow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NonPersistentNotificationListener_OnShow_Params_Data>(index_);
    }
    NonPersistentNotificationListener_OnShow_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NonPersistentNotificationListener_OnShow_Params_Data();
  ~NonPersistentNotificationListener_OnShow_Params_Data() = delete;
};
static_assert(sizeof(NonPersistentNotificationListener_OnShow_Params_Data) == 8,
              "Bad sizeof(NonPersistentNotificationListener_OnShow_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) NonPersistentNotificationListener_OnClick_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NonPersistentNotificationListener_OnClick_Params_Data));
      new (data()) NonPersistentNotificationListener_OnClick_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NonPersistentNotificationListener_OnClick_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NonPersistentNotificationListener_OnClick_Params_Data>(index_);
    }
    NonPersistentNotificationListener_OnClick_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NonPersistentNotificationListener_OnClick_Params_Data();
  ~NonPersistentNotificationListener_OnClick_Params_Data() = delete;
};
static_assert(sizeof(NonPersistentNotificationListener_OnClick_Params_Data) == 8,
              "Bad sizeof(NonPersistentNotificationListener_OnClick_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) NonPersistentNotificationListener_OnClose_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NonPersistentNotificationListener_OnClose_Params_Data));
      new (data()) NonPersistentNotificationListener_OnClose_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NonPersistentNotificationListener_OnClose_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NonPersistentNotificationListener_OnClose_Params_Data>(index_);
    }
    NonPersistentNotificationListener_OnClose_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NonPersistentNotificationListener_OnClose_Params_Data();
  ~NonPersistentNotificationListener_OnClose_Params_Data() = delete;
};
static_assert(sizeof(NonPersistentNotificationListener_OnClose_Params_Data) == 8,
              "Bad sizeof(NonPersistentNotificationListener_OnClose_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) NonPersistentNotificationListener_OnClose_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NonPersistentNotificationListener_OnClose_ResponseParams_Data));
      new (data()) NonPersistentNotificationListener_OnClose_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NonPersistentNotificationListener_OnClose_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NonPersistentNotificationListener_OnClose_ResponseParams_Data>(index_);
    }
    NonPersistentNotificationListener_OnClose_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NonPersistentNotificationListener_OnClose_ResponseParams_Data();
  ~NonPersistentNotificationListener_OnClose_ResponseParams_Data() = delete;
};
static_assert(sizeof(NonPersistentNotificationListener_OnClose_ResponseParams_Data) == 8,
              "Bad sizeof(NonPersistentNotificationListener_OnClose_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) NotificationService_GetPermissionStatus_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NotificationService_GetPermissionStatus_Params_Data));
      new (data()) NotificationService_GetPermissionStatus_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NotificationService_GetPermissionStatus_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NotificationService_GetPermissionStatus_Params_Data>(index_);
    }
    NotificationService_GetPermissionStatus_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NotificationService_GetPermissionStatus_Params_Data();
  ~NotificationService_GetPermissionStatus_Params_Data() = delete;
};
static_assert(sizeof(NotificationService_GetPermissionStatus_Params_Data) == 8,
              "Bad sizeof(NotificationService_GetPermissionStatus_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) NotificationService_GetPermissionStatus_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NotificationService_GetPermissionStatus_ResponseParams_Data));
      new (data()) NotificationService_GetPermissionStatus_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NotificationService_GetPermissionStatus_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NotificationService_GetPermissionStatus_ResponseParams_Data>(index_);
    }
    NotificationService_GetPermissionStatus_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  NotificationService_GetPermissionStatus_ResponseParams_Data();
  ~NotificationService_GetPermissionStatus_ResponseParams_Data() = delete;
};
static_assert(sizeof(NotificationService_GetPermissionStatus_ResponseParams_Data) == 16,
              "Bad sizeof(NotificationService_GetPermissionStatus_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) NotificationService_DisplayNonPersistentNotification_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NotificationService_DisplayNonPersistentNotification_Params_Data));
      new (data()) NotificationService_DisplayNonPersistentNotification_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NotificationService_DisplayNonPersistentNotification_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NotificationService_DisplayNonPersistentNotification_Params_Data>(index_);
    }
    NotificationService_DisplayNonPersistentNotification_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> token;
  mojo::internal::Pointer<::blink::mojom::internal::NotificationData_Data> notification_data;
  mojo::internal::Pointer<::blink::mojom::internal::NotificationResources_Data> notification_resources;
  mojo::internal::Interface_Data event_listener;

 private:
  NotificationService_DisplayNonPersistentNotification_Params_Data();
  ~NotificationService_DisplayNonPersistentNotification_Params_Data() = delete;
};
static_assert(sizeof(NotificationService_DisplayNonPersistentNotification_Params_Data) == 40,
              "Bad sizeof(NotificationService_DisplayNonPersistentNotification_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) NotificationService_CloseNonPersistentNotification_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NotificationService_CloseNonPersistentNotification_Params_Data));
      new (data()) NotificationService_CloseNonPersistentNotification_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NotificationService_CloseNonPersistentNotification_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NotificationService_CloseNonPersistentNotification_Params_Data>(index_);
    }
    NotificationService_CloseNonPersistentNotification_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> token;

 private:
  NotificationService_CloseNonPersistentNotification_Params_Data();
  ~NotificationService_CloseNonPersistentNotification_Params_Data() = delete;
};
static_assert(sizeof(NotificationService_CloseNonPersistentNotification_Params_Data) == 16,
              "Bad sizeof(NotificationService_CloseNonPersistentNotification_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) NotificationService_DisplayPersistentNotification_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NotificationService_DisplayPersistentNotification_Params_Data));
      new (data()) NotificationService_DisplayPersistentNotification_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NotificationService_DisplayPersistentNotification_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NotificationService_DisplayPersistentNotification_Params_Data>(index_);
    }
    NotificationService_DisplayPersistentNotification_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t service_worker_registration_id;
  mojo::internal::Pointer<::blink::mojom::internal::NotificationData_Data> notification_data;
  mojo::internal::Pointer<::blink::mojom::internal::NotificationResources_Data> notification_resources;

 private:
  NotificationService_DisplayPersistentNotification_Params_Data();
  ~NotificationService_DisplayPersistentNotification_Params_Data() = delete;
};
static_assert(sizeof(NotificationService_DisplayPersistentNotification_Params_Data) == 32,
              "Bad sizeof(NotificationService_DisplayPersistentNotification_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) NotificationService_DisplayPersistentNotification_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NotificationService_DisplayPersistentNotification_ResponseParams_Data));
      new (data()) NotificationService_DisplayPersistentNotification_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NotificationService_DisplayPersistentNotification_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NotificationService_DisplayPersistentNotification_ResponseParams_Data>(index_);
    }
    NotificationService_DisplayPersistentNotification_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  NotificationService_DisplayPersistentNotification_ResponseParams_Data();
  ~NotificationService_DisplayPersistentNotification_ResponseParams_Data() = delete;
};
static_assert(sizeof(NotificationService_DisplayPersistentNotification_ResponseParams_Data) == 16,
              "Bad sizeof(NotificationService_DisplayPersistentNotification_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) NotificationService_ClosePersistentNotification_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NotificationService_ClosePersistentNotification_Params_Data));
      new (data()) NotificationService_ClosePersistentNotification_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NotificationService_ClosePersistentNotification_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NotificationService_ClosePersistentNotification_Params_Data>(index_);
    }
    NotificationService_ClosePersistentNotification_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> notification_id;

 private:
  NotificationService_ClosePersistentNotification_Params_Data();
  ~NotificationService_ClosePersistentNotification_Params_Data() = delete;
};
static_assert(sizeof(NotificationService_ClosePersistentNotification_Params_Data) == 16,
              "Bad sizeof(NotificationService_ClosePersistentNotification_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) NotificationService_GetNotifications_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NotificationService_GetNotifications_Params_Data));
      new (data()) NotificationService_GetNotifications_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NotificationService_GetNotifications_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NotificationService_GetNotifications_Params_Data>(index_);
    }
    NotificationService_GetNotifications_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t service_worker_registration_id;
  mojo::internal::Pointer<mojo::internal::String_Data> filter_tag;

 private:
  NotificationService_GetNotifications_Params_Data();
  ~NotificationService_GetNotifications_Params_Data() = delete;
};
static_assert(sizeof(NotificationService_GetNotifications_Params_Data) == 24,
              "Bad sizeof(NotificationService_GetNotifications_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) NotificationService_GetNotifications_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NotificationService_GetNotifications_ResponseParams_Data));
      new (data()) NotificationService_GetNotifications_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NotificationService_GetNotifications_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NotificationService_GetNotifications_ResponseParams_Data>(index_);
    }
    NotificationService_GetNotifications_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> notification_ids;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::blink::mojom::internal::NotificationData_Data>>> notification_datas;

 private:
  NotificationService_GetNotifications_ResponseParams_Data();
  ~NotificationService_GetNotifications_ResponseParams_Data() = delete;
};
static_assert(sizeof(NotificationService_GetNotifications_ResponseParams_Data) == 24,
              "Bad sizeof(NotificationService_GetNotifications_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_SHARED_INTERNAL_H_