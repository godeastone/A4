// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "skia/public/interfaces/bitmap.mojom-shared-internal.h"
#include "third_party/blink/public/platform/modules/fetch/fetch_api_request.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
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
class IconDefinition_Data;
class BackgroundFetchOptions_Data;
class BackgroundFetchRegistration_Data;

struct BackgroundFetchError_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) IconDefinition_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IconDefinition_Data));
      new (data()) IconDefinition_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IconDefinition_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IconDefinition_Data>(index_);
    }
    IconDefinition_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> src;
  mojo::internal::Pointer<mojo::internal::String_Data> sizes;
  mojo::internal::Pointer<mojo::internal::String_Data> type;

 private:
  IconDefinition_Data();
  ~IconDefinition_Data() = delete;
};
static_assert(sizeof(IconDefinition_Data) == 32,
              "Bad sizeof(IconDefinition_Data)");
// Used by IconDefinition::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct IconDefinition_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  IconDefinition_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~IconDefinition_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    IconDefinition_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    IconDefinition_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BackgroundFetchOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchOptions_Data));
      new (data()) BackgroundFetchOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchOptions_Data>(index_);
    }
    BackgroundFetchOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::IconDefinition_Data>>> icons;
  uint64_t download_total;
  mojo::internal::Pointer<mojo::internal::String_Data> title;

 private:
  BackgroundFetchOptions_Data();
  ~BackgroundFetchOptions_Data() = delete;
};
static_assert(sizeof(BackgroundFetchOptions_Data) == 32,
              "Bad sizeof(BackgroundFetchOptions_Data)");
// Used by BackgroundFetchOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct BackgroundFetchOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  BackgroundFetchOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~BackgroundFetchOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    BackgroundFetchOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    BackgroundFetchOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BackgroundFetchRegistration_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchRegistration_Data));
      new (data()) BackgroundFetchRegistration_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchRegistration_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchRegistration_Data>(index_);
    }
    BackgroundFetchRegistration_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> developer_id;
  mojo::internal::Pointer<mojo::internal::String_Data> unique_id;
  uint64_t upload_total;
  uint64_t uploaded;
  uint64_t download_total;
  uint64_t downloaded;

 private:
  BackgroundFetchRegistration_Data();
  ~BackgroundFetchRegistration_Data() = delete;
};
static_assert(sizeof(BackgroundFetchRegistration_Data) == 56,
              "Bad sizeof(BackgroundFetchRegistration_Data)");
// Used by BackgroundFetchRegistration::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct BackgroundFetchRegistration_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  BackgroundFetchRegistration_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~BackgroundFetchRegistration_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    BackgroundFetchRegistration_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    BackgroundFetchRegistration_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BackgroundFetchRegistrationObserver_OnProgress_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchRegistrationObserver_OnProgress_Params_Data));
      new (data()) BackgroundFetchRegistrationObserver_OnProgress_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchRegistrationObserver_OnProgress_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchRegistrationObserver_OnProgress_Params_Data>(index_);
    }
    BackgroundFetchRegistrationObserver_OnProgress_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t upload_total;
  uint64_t uploaded;
  uint64_t download_total;
  uint64_t downloaded;

 private:
  BackgroundFetchRegistrationObserver_OnProgress_Params_Data();
  ~BackgroundFetchRegistrationObserver_OnProgress_Params_Data() = delete;
};
static_assert(sizeof(BackgroundFetchRegistrationObserver_OnProgress_Params_Data) == 40,
              "Bad sizeof(BackgroundFetchRegistrationObserver_OnProgress_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BackgroundFetchService_Fetch_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchService_Fetch_Params_Data));
      new (data()) BackgroundFetchService_Fetch_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchService_Fetch_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchService_Fetch_Params_Data>(index_);
    }
    BackgroundFetchService_Fetch_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t service_worker_registration_id;
  mojo::internal::Pointer<mojo::internal::String_Data> developer_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::blink::mojom::internal::FetchAPIRequest_Data>>> requests;
  mojo::internal::Pointer<internal::BackgroundFetchOptions_Data> options;
  mojo::internal::Pointer<::skia::mojom::internal::Bitmap_Data> icon;

 private:
  BackgroundFetchService_Fetch_Params_Data();
  ~BackgroundFetchService_Fetch_Params_Data() = delete;
};
static_assert(sizeof(BackgroundFetchService_Fetch_Params_Data) == 48,
              "Bad sizeof(BackgroundFetchService_Fetch_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BackgroundFetchService_Fetch_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchService_Fetch_ResponseParams_Data));
      new (data()) BackgroundFetchService_Fetch_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchService_Fetch_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchService_Fetch_ResponseParams_Data>(index_);
    }
    BackgroundFetchService_Fetch_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::BackgroundFetchRegistration_Data> registration;

 private:
  BackgroundFetchService_Fetch_ResponseParams_Data();
  ~BackgroundFetchService_Fetch_ResponseParams_Data() = delete;
};
static_assert(sizeof(BackgroundFetchService_Fetch_ResponseParams_Data) == 24,
              "Bad sizeof(BackgroundFetchService_Fetch_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BackgroundFetchService_UpdateUI_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchService_UpdateUI_Params_Data));
      new (data()) BackgroundFetchService_UpdateUI_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchService_UpdateUI_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchService_UpdateUI_Params_Data>(index_);
    }
    BackgroundFetchService_UpdateUI_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t service_worker_registration_id;
  mojo::internal::Pointer<mojo::internal::String_Data> developer_id;
  mojo::internal::Pointer<mojo::internal::String_Data> unique_id;
  mojo::internal::Pointer<mojo::internal::String_Data> title;

 private:
  BackgroundFetchService_UpdateUI_Params_Data();
  ~BackgroundFetchService_UpdateUI_Params_Data() = delete;
};
static_assert(sizeof(BackgroundFetchService_UpdateUI_Params_Data) == 40,
              "Bad sizeof(BackgroundFetchService_UpdateUI_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BackgroundFetchService_UpdateUI_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchService_UpdateUI_ResponseParams_Data));
      new (data()) BackgroundFetchService_UpdateUI_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchService_UpdateUI_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchService_UpdateUI_ResponseParams_Data>(index_);
    }
    BackgroundFetchService_UpdateUI_ResponseParams_Data* operator->() { return data(); }

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
  BackgroundFetchService_UpdateUI_ResponseParams_Data();
  ~BackgroundFetchService_UpdateUI_ResponseParams_Data() = delete;
};
static_assert(sizeof(BackgroundFetchService_UpdateUI_ResponseParams_Data) == 16,
              "Bad sizeof(BackgroundFetchService_UpdateUI_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BackgroundFetchService_Abort_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchService_Abort_Params_Data));
      new (data()) BackgroundFetchService_Abort_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchService_Abort_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchService_Abort_Params_Data>(index_);
    }
    BackgroundFetchService_Abort_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t service_worker_registration_id;
  mojo::internal::Pointer<mojo::internal::String_Data> developer_id;
  mojo::internal::Pointer<mojo::internal::String_Data> unique_id;

 private:
  BackgroundFetchService_Abort_Params_Data();
  ~BackgroundFetchService_Abort_Params_Data() = delete;
};
static_assert(sizeof(BackgroundFetchService_Abort_Params_Data) == 32,
              "Bad sizeof(BackgroundFetchService_Abort_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BackgroundFetchService_Abort_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchService_Abort_ResponseParams_Data));
      new (data()) BackgroundFetchService_Abort_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchService_Abort_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchService_Abort_ResponseParams_Data>(index_);
    }
    BackgroundFetchService_Abort_ResponseParams_Data* operator->() { return data(); }

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
  BackgroundFetchService_Abort_ResponseParams_Data();
  ~BackgroundFetchService_Abort_ResponseParams_Data() = delete;
};
static_assert(sizeof(BackgroundFetchService_Abort_ResponseParams_Data) == 16,
              "Bad sizeof(BackgroundFetchService_Abort_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BackgroundFetchService_GetRegistration_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchService_GetRegistration_Params_Data));
      new (data()) BackgroundFetchService_GetRegistration_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchService_GetRegistration_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchService_GetRegistration_Params_Data>(index_);
    }
    BackgroundFetchService_GetRegistration_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t service_worker_registration_id;
  mojo::internal::Pointer<mojo::internal::String_Data> developer_id;

 private:
  BackgroundFetchService_GetRegistration_Params_Data();
  ~BackgroundFetchService_GetRegistration_Params_Data() = delete;
};
static_assert(sizeof(BackgroundFetchService_GetRegistration_Params_Data) == 24,
              "Bad sizeof(BackgroundFetchService_GetRegistration_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BackgroundFetchService_GetRegistration_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchService_GetRegistration_ResponseParams_Data));
      new (data()) BackgroundFetchService_GetRegistration_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchService_GetRegistration_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchService_GetRegistration_ResponseParams_Data>(index_);
    }
    BackgroundFetchService_GetRegistration_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::BackgroundFetchRegistration_Data> registration;

 private:
  BackgroundFetchService_GetRegistration_ResponseParams_Data();
  ~BackgroundFetchService_GetRegistration_ResponseParams_Data() = delete;
};
static_assert(sizeof(BackgroundFetchService_GetRegistration_ResponseParams_Data) == 24,
              "Bad sizeof(BackgroundFetchService_GetRegistration_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BackgroundFetchService_GetDeveloperIds_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchService_GetDeveloperIds_Params_Data));
      new (data()) BackgroundFetchService_GetDeveloperIds_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchService_GetDeveloperIds_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchService_GetDeveloperIds_Params_Data>(index_);
    }
    BackgroundFetchService_GetDeveloperIds_Params_Data* operator->() { return data(); }

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
  BackgroundFetchService_GetDeveloperIds_Params_Data();
  ~BackgroundFetchService_GetDeveloperIds_Params_Data() = delete;
};
static_assert(sizeof(BackgroundFetchService_GetDeveloperIds_Params_Data) == 16,
              "Bad sizeof(BackgroundFetchService_GetDeveloperIds_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BackgroundFetchService_GetDeveloperIds_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchService_GetDeveloperIds_ResponseParams_Data));
      new (data()) BackgroundFetchService_GetDeveloperIds_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchService_GetDeveloperIds_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchService_GetDeveloperIds_ResponseParams_Data>(index_);
    }
    BackgroundFetchService_GetDeveloperIds_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> developer_ids;

 private:
  BackgroundFetchService_GetDeveloperIds_ResponseParams_Data();
  ~BackgroundFetchService_GetDeveloperIds_ResponseParams_Data() = delete;
};
static_assert(sizeof(BackgroundFetchService_GetDeveloperIds_ResponseParams_Data) == 24,
              "Bad sizeof(BackgroundFetchService_GetDeveloperIds_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BackgroundFetchService_GetIconDisplaySize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchService_GetIconDisplaySize_Params_Data));
      new (data()) BackgroundFetchService_GetIconDisplaySize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchService_GetIconDisplaySize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchService_GetIconDisplaySize_Params_Data>(index_);
    }
    BackgroundFetchService_GetIconDisplaySize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  BackgroundFetchService_GetIconDisplaySize_Params_Data();
  ~BackgroundFetchService_GetIconDisplaySize_Params_Data() = delete;
};
static_assert(sizeof(BackgroundFetchService_GetIconDisplaySize_Params_Data) == 8,
              "Bad sizeof(BackgroundFetchService_GetIconDisplaySize_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data));
      new (data()) BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data>(index_);
    }
    BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> icon_size_pixels;

 private:
  BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data();
  ~BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data() = delete;
};
static_assert(sizeof(BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data) == 16,
              "Bad sizeof(BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) BackgroundFetchService_AddRegistrationObserver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchService_AddRegistrationObserver_Params_Data));
      new (data()) BackgroundFetchService_AddRegistrationObserver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchService_AddRegistrationObserver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchService_AddRegistrationObserver_Params_Data>(index_);
    }
    BackgroundFetchService_AddRegistrationObserver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> unique_id;
  mojo::internal::Interface_Data observer;

 private:
  BackgroundFetchService_AddRegistrationObserver_Params_Data();
  ~BackgroundFetchService_AddRegistrationObserver_Params_Data() = delete;
};
static_assert(sizeof(BackgroundFetchService_AddRegistrationObserver_Params_Data) == 24,
              "Bad sizeof(BackgroundFetchService_AddRegistrationObserver_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_SHARED_INTERNAL_H_