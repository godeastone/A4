// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_DISPATCHER_HOST_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_DISPATCHER_HOST_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "third_party/blink/public/mojom/quota/quota_types.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
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

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data));
      new (data()) QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data>(index_);
    }
    QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  int32_t storage_type;
  uint8_t padfinal_[4];

 private:
  QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data();
  ~QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data() = delete;
};
static_assert(sizeof(QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data) == 24,
              "Bad sizeof(QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data));
      new (data()) QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data>(index_);
    }
    QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data* operator->() { return data(); }

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
  int64_t current_usage;
  int64_t current_quota;

 private:
  QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data();
  ~QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data() = delete;
};
static_assert(sizeof(QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data) == 32,
              "Bad sizeof(QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) QuotaDispatcherHost_RequestStorageQuota_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(QuotaDispatcherHost_RequestStorageQuota_Params_Data));
      new (data()) QuotaDispatcherHost_RequestStorageQuota_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    QuotaDispatcherHost_RequestStorageQuota_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<QuotaDispatcherHost_RequestStorageQuota_Params_Data>(index_);
    }
    QuotaDispatcherHost_RequestStorageQuota_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  int32_t storage_type;
  uint8_t pad1_[4];
  uint64_t requested_size;

 private:
  QuotaDispatcherHost_RequestStorageQuota_Params_Data();
  ~QuotaDispatcherHost_RequestStorageQuota_Params_Data() = delete;
};
static_assert(sizeof(QuotaDispatcherHost_RequestStorageQuota_Params_Data) == 32,
              "Bad sizeof(QuotaDispatcherHost_RequestStorageQuota_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data));
      new (data()) QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data>(index_);
    }
    QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data* operator->() { return data(); }

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
  int64_t current_usage;
  int64_t granted_quota;

 private:
  QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data();
  ~QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data() = delete;
};
static_assert(sizeof(QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data) == 32,
              "Bad sizeof(QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_DISPATCHER_HOST_MOJOM_SHARED_INTERNAL_H_