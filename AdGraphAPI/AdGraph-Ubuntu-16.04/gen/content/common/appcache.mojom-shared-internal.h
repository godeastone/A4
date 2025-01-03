// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_APPCACHE_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_APPCACHE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "content/public/common/appcache_info.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared-internal.h"
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
class AppCacheResourceInfo_Data;
class AppCacheErrorDetails_Data;

struct AppCacheEventID_Data {
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
      case 7:
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

struct AppCacheErrorReason_Data {
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
      case 7:
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppCacheResourceInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheResourceInfo_Data));
      new (data()) AppCacheResourceInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheResourceInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheResourceInfo_Data>(index_);
    }
    AppCacheResourceInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  int64_t size;
  uint8_t is_master : 1;
  uint8_t is_manifest : 1;
  uint8_t is_intercept : 1;
  uint8_t is_fallback : 1;
  uint8_t is_foreign : 1;
  uint8_t is_explicit : 1;
  uint8_t pad7_[7];
  int64_t response_id;

 private:
  AppCacheResourceInfo_Data();
  ~AppCacheResourceInfo_Data() = delete;
};
static_assert(sizeof(AppCacheResourceInfo_Data) == 40,
              "Bad sizeof(AppCacheResourceInfo_Data)");
// Used by AppCacheResourceInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct AppCacheResourceInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  AppCacheResourceInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~AppCacheResourceInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    AppCacheResourceInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    AppCacheResourceInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppCacheErrorDetails_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheErrorDetails_Data));
      new (data()) AppCacheErrorDetails_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheErrorDetails_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheErrorDetails_Data>(index_);
    }
    AppCacheErrorDetails_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> message;
  int32_t reason;
  int32_t status;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  uint8_t is_cross_origin : 1;
  uint8_t padfinal_[7];

 private:
  AppCacheErrorDetails_Data();
  ~AppCacheErrorDetails_Data() = delete;
};
static_assert(sizeof(AppCacheErrorDetails_Data) == 40,
              "Bad sizeof(AppCacheErrorDetails_Data)");
// Used by AppCacheErrorDetails::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct AppCacheErrorDetails_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  AppCacheErrorDetails_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~AppCacheErrorDetails_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    AppCacheErrorDetails_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    AppCacheErrorDetails_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppCacheBackend_RegisterHost_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheBackend_RegisterHost_Params_Data));
      new (data()) AppCacheBackend_RegisterHost_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheBackend_RegisterHost_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheBackend_RegisterHost_Params_Data>(index_);
    }
    AppCacheBackend_RegisterHost_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t host_id;
  uint8_t padfinal_[4];

 private:
  AppCacheBackend_RegisterHost_Params_Data();
  ~AppCacheBackend_RegisterHost_Params_Data() = delete;
};
static_assert(sizeof(AppCacheBackend_RegisterHost_Params_Data) == 16,
              "Bad sizeof(AppCacheBackend_RegisterHost_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppCacheBackend_UnregisterHost_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheBackend_UnregisterHost_Params_Data));
      new (data()) AppCacheBackend_UnregisterHost_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheBackend_UnregisterHost_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheBackend_UnregisterHost_Params_Data>(index_);
    }
    AppCacheBackend_UnregisterHost_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t host_id;
  uint8_t padfinal_[4];

 private:
  AppCacheBackend_UnregisterHost_Params_Data();
  ~AppCacheBackend_UnregisterHost_Params_Data() = delete;
};
static_assert(sizeof(AppCacheBackend_UnregisterHost_Params_Data) == 16,
              "Bad sizeof(AppCacheBackend_UnregisterHost_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppCacheBackend_SetSpawningHostId_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheBackend_SetSpawningHostId_Params_Data));
      new (data()) AppCacheBackend_SetSpawningHostId_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheBackend_SetSpawningHostId_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheBackend_SetSpawningHostId_Params_Data>(index_);
    }
    AppCacheBackend_SetSpawningHostId_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t host_id;
  int32_t spawning_host_id;

 private:
  AppCacheBackend_SetSpawningHostId_Params_Data();
  ~AppCacheBackend_SetSpawningHostId_Params_Data() = delete;
};
static_assert(sizeof(AppCacheBackend_SetSpawningHostId_Params_Data) == 16,
              "Bad sizeof(AppCacheBackend_SetSpawningHostId_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppCacheBackend_SelectCache_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheBackend_SelectCache_Params_Data));
      new (data()) AppCacheBackend_SelectCache_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheBackend_SelectCache_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheBackend_SelectCache_Params_Data>(index_);
    }
    AppCacheBackend_SelectCache_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t host_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> document_url;
  int64_t appcache_document_was_loaded_from;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> opt_manifest_url;

 private:
  AppCacheBackend_SelectCache_Params_Data();
  ~AppCacheBackend_SelectCache_Params_Data() = delete;
};
static_assert(sizeof(AppCacheBackend_SelectCache_Params_Data) == 40,
              "Bad sizeof(AppCacheBackend_SelectCache_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppCacheBackend_SelectCacheForSharedWorker_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheBackend_SelectCacheForSharedWorker_Params_Data));
      new (data()) AppCacheBackend_SelectCacheForSharedWorker_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheBackend_SelectCacheForSharedWorker_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheBackend_SelectCacheForSharedWorker_Params_Data>(index_);
    }
    AppCacheBackend_SelectCacheForSharedWorker_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t host_id;
  uint8_t pad0_[4];
  int64_t appcache_id;

 private:
  AppCacheBackend_SelectCacheForSharedWorker_Params_Data();
  ~AppCacheBackend_SelectCacheForSharedWorker_Params_Data() = delete;
};
static_assert(sizeof(AppCacheBackend_SelectCacheForSharedWorker_Params_Data) == 24,
              "Bad sizeof(AppCacheBackend_SelectCacheForSharedWorker_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppCacheBackend_MarkAsForeignEntry_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheBackend_MarkAsForeignEntry_Params_Data));
      new (data()) AppCacheBackend_MarkAsForeignEntry_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheBackend_MarkAsForeignEntry_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheBackend_MarkAsForeignEntry_Params_Data>(index_);
    }
    AppCacheBackend_MarkAsForeignEntry_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t host_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> document_url;
  int64_t appcache_document_was_loaded_from;

 private:
  AppCacheBackend_MarkAsForeignEntry_Params_Data();
  ~AppCacheBackend_MarkAsForeignEntry_Params_Data() = delete;
};
static_assert(sizeof(AppCacheBackend_MarkAsForeignEntry_Params_Data) == 32,
              "Bad sizeof(AppCacheBackend_MarkAsForeignEntry_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppCacheBackend_GetStatus_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheBackend_GetStatus_Params_Data));
      new (data()) AppCacheBackend_GetStatus_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheBackend_GetStatus_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheBackend_GetStatus_Params_Data>(index_);
    }
    AppCacheBackend_GetStatus_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t host_id;
  uint8_t padfinal_[4];

 private:
  AppCacheBackend_GetStatus_Params_Data();
  ~AppCacheBackend_GetStatus_Params_Data() = delete;
};
static_assert(sizeof(AppCacheBackend_GetStatus_Params_Data) == 16,
              "Bad sizeof(AppCacheBackend_GetStatus_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppCacheBackend_GetStatus_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheBackend_GetStatus_ResponseParams_Data));
      new (data()) AppCacheBackend_GetStatus_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheBackend_GetStatus_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheBackend_GetStatus_ResponseParams_Data>(index_);
    }
    AppCacheBackend_GetStatus_ResponseParams_Data* operator->() { return data(); }

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
  AppCacheBackend_GetStatus_ResponseParams_Data();
  ~AppCacheBackend_GetStatus_ResponseParams_Data() = delete;
};
static_assert(sizeof(AppCacheBackend_GetStatus_ResponseParams_Data) == 16,
              "Bad sizeof(AppCacheBackend_GetStatus_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppCacheBackend_StartUpdate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheBackend_StartUpdate_Params_Data));
      new (data()) AppCacheBackend_StartUpdate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheBackend_StartUpdate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheBackend_StartUpdate_Params_Data>(index_);
    }
    AppCacheBackend_StartUpdate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t host_id;
  uint8_t padfinal_[4];

 private:
  AppCacheBackend_StartUpdate_Params_Data();
  ~AppCacheBackend_StartUpdate_Params_Data() = delete;
};
static_assert(sizeof(AppCacheBackend_StartUpdate_Params_Data) == 16,
              "Bad sizeof(AppCacheBackend_StartUpdate_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppCacheBackend_StartUpdate_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheBackend_StartUpdate_ResponseParams_Data));
      new (data()) AppCacheBackend_StartUpdate_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheBackend_StartUpdate_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheBackend_StartUpdate_ResponseParams_Data>(index_);
    }
    AppCacheBackend_StartUpdate_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  AppCacheBackend_StartUpdate_ResponseParams_Data();
  ~AppCacheBackend_StartUpdate_ResponseParams_Data() = delete;
};
static_assert(sizeof(AppCacheBackend_StartUpdate_ResponseParams_Data) == 16,
              "Bad sizeof(AppCacheBackend_StartUpdate_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppCacheBackend_SwapCache_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheBackend_SwapCache_Params_Data));
      new (data()) AppCacheBackend_SwapCache_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheBackend_SwapCache_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheBackend_SwapCache_Params_Data>(index_);
    }
    AppCacheBackend_SwapCache_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t host_id;
  uint8_t padfinal_[4];

 private:
  AppCacheBackend_SwapCache_Params_Data();
  ~AppCacheBackend_SwapCache_Params_Data() = delete;
};
static_assert(sizeof(AppCacheBackend_SwapCache_Params_Data) == 16,
              "Bad sizeof(AppCacheBackend_SwapCache_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppCacheBackend_SwapCache_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheBackend_SwapCache_ResponseParams_Data));
      new (data()) AppCacheBackend_SwapCache_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheBackend_SwapCache_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheBackend_SwapCache_ResponseParams_Data>(index_);
    }
    AppCacheBackend_SwapCache_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  AppCacheBackend_SwapCache_ResponseParams_Data();
  ~AppCacheBackend_SwapCache_ResponseParams_Data() = delete;
};
static_assert(sizeof(AppCacheBackend_SwapCache_ResponseParams_Data) == 16,
              "Bad sizeof(AppCacheBackend_SwapCache_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppCacheBackend_GetResourceList_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheBackend_GetResourceList_Params_Data));
      new (data()) AppCacheBackend_GetResourceList_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheBackend_GetResourceList_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheBackend_GetResourceList_Params_Data>(index_);
    }
    AppCacheBackend_GetResourceList_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t host_id;
  uint8_t padfinal_[4];

 private:
  AppCacheBackend_GetResourceList_Params_Data();
  ~AppCacheBackend_GetResourceList_Params_Data() = delete;
};
static_assert(sizeof(AppCacheBackend_GetResourceList_Params_Data) == 16,
              "Bad sizeof(AppCacheBackend_GetResourceList_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppCacheBackend_GetResourceList_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheBackend_GetResourceList_ResponseParams_Data));
      new (data()) AppCacheBackend_GetResourceList_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheBackend_GetResourceList_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheBackend_GetResourceList_ResponseParams_Data>(index_);
    }
    AppCacheBackend_GetResourceList_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::AppCacheResourceInfo_Data>>> resources;

 private:
  AppCacheBackend_GetResourceList_ResponseParams_Data();
  ~AppCacheBackend_GetResourceList_ResponseParams_Data() = delete;
};
static_assert(sizeof(AppCacheBackend_GetResourceList_ResponseParams_Data) == 16,
              "Bad sizeof(AppCacheBackend_GetResourceList_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppCacheFrontend_CacheSelected_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheFrontend_CacheSelected_Params_Data));
      new (data()) AppCacheFrontend_CacheSelected_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheFrontend_CacheSelected_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheFrontend_CacheSelected_Params_Data>(index_);
    }
    AppCacheFrontend_CacheSelected_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t host_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::content::mojom::internal::AppCacheInfo_Data> info;

 private:
  AppCacheFrontend_CacheSelected_Params_Data();
  ~AppCacheFrontend_CacheSelected_Params_Data() = delete;
};
static_assert(sizeof(AppCacheFrontend_CacheSelected_Params_Data) == 24,
              "Bad sizeof(AppCacheFrontend_CacheSelected_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppCacheFrontend_StatusChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheFrontend_StatusChanged_Params_Data));
      new (data()) AppCacheFrontend_StatusChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheFrontend_StatusChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheFrontend_StatusChanged_Params_Data>(index_);
    }
    AppCacheFrontend_StatusChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> host_ids;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  AppCacheFrontend_StatusChanged_Params_Data();
  ~AppCacheFrontend_StatusChanged_Params_Data() = delete;
};
static_assert(sizeof(AppCacheFrontend_StatusChanged_Params_Data) == 24,
              "Bad sizeof(AppCacheFrontend_StatusChanged_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppCacheFrontend_EventRaised_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheFrontend_EventRaised_Params_Data));
      new (data()) AppCacheFrontend_EventRaised_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheFrontend_EventRaised_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheFrontend_EventRaised_Params_Data>(index_);
    }
    AppCacheFrontend_EventRaised_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> host_ids;
  int32_t event_id;
  uint8_t padfinal_[4];

 private:
  AppCacheFrontend_EventRaised_Params_Data();
  ~AppCacheFrontend_EventRaised_Params_Data() = delete;
};
static_assert(sizeof(AppCacheFrontend_EventRaised_Params_Data) == 24,
              "Bad sizeof(AppCacheFrontend_EventRaised_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppCacheFrontend_ProgressEventRaised_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheFrontend_ProgressEventRaised_Params_Data));
      new (data()) AppCacheFrontend_ProgressEventRaised_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheFrontend_ProgressEventRaised_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheFrontend_ProgressEventRaised_Params_Data>(index_);
    }
    AppCacheFrontend_ProgressEventRaised_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> host_ids;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  int32_t total;
  int32_t complete;

 private:
  AppCacheFrontend_ProgressEventRaised_Params_Data();
  ~AppCacheFrontend_ProgressEventRaised_Params_Data() = delete;
};
static_assert(sizeof(AppCacheFrontend_ProgressEventRaised_Params_Data) == 32,
              "Bad sizeof(AppCacheFrontend_ProgressEventRaised_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppCacheFrontend_ErrorEventRaised_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheFrontend_ErrorEventRaised_Params_Data));
      new (data()) AppCacheFrontend_ErrorEventRaised_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheFrontend_ErrorEventRaised_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheFrontend_ErrorEventRaised_Params_Data>(index_);
    }
    AppCacheFrontend_ErrorEventRaised_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> host_ids;
  mojo::internal::Pointer<internal::AppCacheErrorDetails_Data> error_details;

 private:
  AppCacheFrontend_ErrorEventRaised_Params_Data();
  ~AppCacheFrontend_ErrorEventRaised_Params_Data() = delete;
};
static_assert(sizeof(AppCacheFrontend_ErrorEventRaised_Params_Data) == 24,
              "Bad sizeof(AppCacheFrontend_ErrorEventRaised_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppCacheFrontend_LogMessage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheFrontend_LogMessage_Params_Data));
      new (data()) AppCacheFrontend_LogMessage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheFrontend_LogMessage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheFrontend_LogMessage_Params_Data>(index_);
    }
    AppCacheFrontend_LogMessage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t host_id;
  int32_t log_level;
  mojo::internal::Pointer<mojo::internal::String_Data> message;

 private:
  AppCacheFrontend_LogMessage_Params_Data();
  ~AppCacheFrontend_LogMessage_Params_Data() = delete;
};
static_assert(sizeof(AppCacheFrontend_LogMessage_Params_Data) == 24,
              "Bad sizeof(AppCacheFrontend_LogMessage_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppCacheFrontend_ContentBlocked_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheFrontend_ContentBlocked_Params_Data));
      new (data()) AppCacheFrontend_ContentBlocked_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheFrontend_ContentBlocked_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheFrontend_ContentBlocked_Params_Data>(index_);
    }
    AppCacheFrontend_ContentBlocked_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t host_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> manifest_url;

 private:
  AppCacheFrontend_ContentBlocked_Params_Data();
  ~AppCacheFrontend_ContentBlocked_Params_Data() = delete;
};
static_assert(sizeof(AppCacheFrontend_ContentBlocked_Params_Data) == 24,
              "Bad sizeof(AppCacheFrontend_ContentBlocked_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) AppCacheFrontend_SetSubresourceFactory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheFrontend_SetSubresourceFactory_Params_Data));
      new (data()) AppCacheFrontend_SetSubresourceFactory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheFrontend_SetSubresourceFactory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheFrontend_SetSubresourceFactory_Params_Data>(index_);
    }
    AppCacheFrontend_SetSubresourceFactory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t host_id;
  mojo::internal::Interface_Data url_loader_factory;
  uint8_t padfinal_[4];

 private:
  AppCacheFrontend_SetSubresourceFactory_Params_Data();
  ~AppCacheFrontend_SetSubresourceFactory_Params_Data() = delete;
};
static_assert(sizeof(AppCacheFrontend_SetSubresourceFactory_Params_Data) == 24,
              "Bad sizeof(AppCacheFrontend_SetSubresourceFactory_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_APPCACHE_MOJOM_SHARED_INTERNAL_H_