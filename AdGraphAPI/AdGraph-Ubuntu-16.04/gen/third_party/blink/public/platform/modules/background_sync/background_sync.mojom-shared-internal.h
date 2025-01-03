// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
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
class SyncRegistration_Data;

struct BackgroundSyncNetworkState_Data {
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

struct BackgroundSyncError_Data {
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

struct BackgroundSyncState_Data {
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

struct BackgroundSyncEventLastChance_Data {
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SyncRegistration_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SyncRegistration_Data));
      new (data()) SyncRegistration_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SyncRegistration_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SyncRegistration_Data>(index_);
    }
    SyncRegistration_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t id;
  mojo::internal::Pointer<mojo::internal::String_Data> tag;
  int32_t network_state;
  uint8_t padfinal_[4];

 private:
  SyncRegistration_Data();
  ~SyncRegistration_Data() = delete;
};
static_assert(sizeof(SyncRegistration_Data) == 32,
              "Bad sizeof(SyncRegistration_Data)");
// Used by SyncRegistration::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SyncRegistration_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SyncRegistration_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SyncRegistration_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SyncRegistration_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SyncRegistration_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BackgroundSyncService_Register_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundSyncService_Register_Params_Data));
      new (data()) BackgroundSyncService_Register_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundSyncService_Register_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundSyncService_Register_Params_Data>(index_);
    }
    BackgroundSyncService_Register_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SyncRegistration_Data> options;
  int64_t service_worker_registration_id;

 private:
  BackgroundSyncService_Register_Params_Data();
  ~BackgroundSyncService_Register_Params_Data() = delete;
};
static_assert(sizeof(BackgroundSyncService_Register_Params_Data) == 24,
              "Bad sizeof(BackgroundSyncService_Register_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BackgroundSyncService_Register_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundSyncService_Register_ResponseParams_Data));
      new (data()) BackgroundSyncService_Register_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundSyncService_Register_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundSyncService_Register_ResponseParams_Data>(index_);
    }
    BackgroundSyncService_Register_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t err;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::SyncRegistration_Data> options;

 private:
  BackgroundSyncService_Register_ResponseParams_Data();
  ~BackgroundSyncService_Register_ResponseParams_Data() = delete;
};
static_assert(sizeof(BackgroundSyncService_Register_ResponseParams_Data) == 24,
              "Bad sizeof(BackgroundSyncService_Register_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BackgroundSyncService_GetRegistrations_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundSyncService_GetRegistrations_Params_Data));
      new (data()) BackgroundSyncService_GetRegistrations_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundSyncService_GetRegistrations_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundSyncService_GetRegistrations_Params_Data>(index_);
    }
    BackgroundSyncService_GetRegistrations_Params_Data* operator->() { return data(); }

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
  BackgroundSyncService_GetRegistrations_Params_Data();
  ~BackgroundSyncService_GetRegistrations_Params_Data() = delete;
};
static_assert(sizeof(BackgroundSyncService_GetRegistrations_Params_Data) == 16,
              "Bad sizeof(BackgroundSyncService_GetRegistrations_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BackgroundSyncService_GetRegistrations_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundSyncService_GetRegistrations_ResponseParams_Data));
      new (data()) BackgroundSyncService_GetRegistrations_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundSyncService_GetRegistrations_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundSyncService_GetRegistrations_ResponseParams_Data>(index_);
    }
    BackgroundSyncService_GetRegistrations_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t err;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::SyncRegistration_Data>>> registrations;

 private:
  BackgroundSyncService_GetRegistrations_ResponseParams_Data();
  ~BackgroundSyncService_GetRegistrations_ResponseParams_Data() = delete;
};
static_assert(sizeof(BackgroundSyncService_GetRegistrations_ResponseParams_Data) == 24,
              "Bad sizeof(BackgroundSyncService_GetRegistrations_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_SHARED_INTERNAL_H_