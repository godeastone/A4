// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_PUSH_MESSAGING_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_PUSH_MESSAGING_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "content/public/common/push_messaging_status.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace content {
namespace mojom {
namespace internal {
class PushSubscriptionOptions_Data;

struct PushErrorType_Data {
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PushSubscriptionOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PushSubscriptionOptions_Data));
      new (data()) PushSubscriptionOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PushSubscriptionOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PushSubscriptionOptions_Data>(index_);
    }
    PushSubscriptionOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t user_visible_only : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::String_Data> sender_info;

 private:
  PushSubscriptionOptions_Data();
  ~PushSubscriptionOptions_Data() = delete;
};
static_assert(sizeof(PushSubscriptionOptions_Data) == 24,
              "Bad sizeof(PushSubscriptionOptions_Data)");
// Used by PushSubscriptionOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PushSubscriptionOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PushSubscriptionOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PushSubscriptionOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PushSubscriptionOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PushSubscriptionOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PushMessaging_Subscribe_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PushMessaging_Subscribe_Params_Data));
      new (data()) PushMessaging_Subscribe_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PushMessaging_Subscribe_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PushMessaging_Subscribe_Params_Data>(index_);
    }
    PushMessaging_Subscribe_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t render_frame_id;
  uint8_t user_gesture : 1;
  uint8_t pad1_[3];
  int64_t service_worker_registration_id;
  mojo::internal::Pointer<internal::PushSubscriptionOptions_Data> options;

 private:
  PushMessaging_Subscribe_Params_Data();
  ~PushMessaging_Subscribe_Params_Data() = delete;
};
static_assert(sizeof(PushMessaging_Subscribe_Params_Data) == 32,
              "Bad sizeof(PushMessaging_Subscribe_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PushMessaging_Subscribe_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PushMessaging_Subscribe_ResponseParams_Data));
      new (data()) PushMessaging_Subscribe_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PushMessaging_Subscribe_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PushMessaging_Subscribe_ResponseParams_Data>(index_);
    }
    PushMessaging_Subscribe_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> endpoint;
  mojo::internal::Pointer<internal::PushSubscriptionOptions_Data> options;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> p256dh;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> auth;

 private:
  PushMessaging_Subscribe_ResponseParams_Data();
  ~PushMessaging_Subscribe_ResponseParams_Data() = delete;
};
static_assert(sizeof(PushMessaging_Subscribe_ResponseParams_Data) == 48,
              "Bad sizeof(PushMessaging_Subscribe_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PushMessaging_Unsubscribe_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PushMessaging_Unsubscribe_Params_Data));
      new (data()) PushMessaging_Unsubscribe_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PushMessaging_Unsubscribe_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PushMessaging_Unsubscribe_Params_Data>(index_);
    }
    PushMessaging_Unsubscribe_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t service_worker_registration_id;

 private:
  PushMessaging_Unsubscribe_Params_Data();
  ~PushMessaging_Unsubscribe_Params_Data() = delete;
};
static_assert(sizeof(PushMessaging_Unsubscribe_Params_Data) == 16,
              "Bad sizeof(PushMessaging_Unsubscribe_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PushMessaging_Unsubscribe_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PushMessaging_Unsubscribe_ResponseParams_Data));
      new (data()) PushMessaging_Unsubscribe_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PushMessaging_Unsubscribe_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PushMessaging_Unsubscribe_ResponseParams_Data>(index_);
    }
    PushMessaging_Unsubscribe_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error_type;
  uint8_t did_unsubscribe : 1;
  uint8_t pad1_[3];
  mojo::internal::Pointer<mojo::internal::String_Data> error_message;

 private:
  PushMessaging_Unsubscribe_ResponseParams_Data();
  ~PushMessaging_Unsubscribe_ResponseParams_Data() = delete;
};
static_assert(sizeof(PushMessaging_Unsubscribe_ResponseParams_Data) == 24,
              "Bad sizeof(PushMessaging_Unsubscribe_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PushMessaging_GetSubscription_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PushMessaging_GetSubscription_Params_Data));
      new (data()) PushMessaging_GetSubscription_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PushMessaging_GetSubscription_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PushMessaging_GetSubscription_Params_Data>(index_);
    }
    PushMessaging_GetSubscription_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t service_worker_registration_id;

 private:
  PushMessaging_GetSubscription_Params_Data();
  ~PushMessaging_GetSubscription_Params_Data() = delete;
};
static_assert(sizeof(PushMessaging_GetSubscription_Params_Data) == 16,
              "Bad sizeof(PushMessaging_GetSubscription_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PushMessaging_GetSubscription_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PushMessaging_GetSubscription_ResponseParams_Data));
      new (data()) PushMessaging_GetSubscription_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PushMessaging_GetSubscription_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PushMessaging_GetSubscription_ResponseParams_Data>(index_);
    }
    PushMessaging_GetSubscription_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> endpoint;
  mojo::internal::Pointer<internal::PushSubscriptionOptions_Data> options;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> p256dh;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> auth;

 private:
  PushMessaging_GetSubscription_ResponseParams_Data();
  ~PushMessaging_GetSubscription_ResponseParams_Data() = delete;
};
static_assert(sizeof(PushMessaging_GetSubscription_ResponseParams_Data) == 48,
              "Bad sizeof(PushMessaging_GetSubscription_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_PUSH_MESSAGING_MOJOM_SHARED_INTERNAL_H_