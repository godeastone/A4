// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_VISITEDLINK_COMMON_VISITEDLINK_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_VISITEDLINK_COMMON_VISITEDLINK_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/shared_memory.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace visitedlink {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  VisitedLinkNotificationSink_UpdateVisitedLinks_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VisitedLinkNotificationSink_UpdateVisitedLinks_Params_Data));
      new (data()) VisitedLinkNotificationSink_UpdateVisitedLinks_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VisitedLinkNotificationSink_UpdateVisitedLinks_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VisitedLinkNotificationSink_UpdateVisitedLinks_Params_Data>(index_);
    }
    VisitedLinkNotificationSink_UpdateVisitedLinks_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::ReadOnlySharedMemoryRegion_Data> table_region;

 private:
  VisitedLinkNotificationSink_UpdateVisitedLinks_Params_Data();
  ~VisitedLinkNotificationSink_UpdateVisitedLinks_Params_Data() = delete;
};
static_assert(sizeof(VisitedLinkNotificationSink_UpdateVisitedLinks_Params_Data) == 16,
              "Bad sizeof(VisitedLinkNotificationSink_UpdateVisitedLinks_Params_Data)");
class  VisitedLinkNotificationSink_AddVisitedLinks_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VisitedLinkNotificationSink_AddVisitedLinks_Params_Data));
      new (data()) VisitedLinkNotificationSink_AddVisitedLinks_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VisitedLinkNotificationSink_AddVisitedLinks_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VisitedLinkNotificationSink_AddVisitedLinks_Params_Data>(index_);
    }
    VisitedLinkNotificationSink_AddVisitedLinks_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint64_t>> link_hashes;

 private:
  VisitedLinkNotificationSink_AddVisitedLinks_Params_Data();
  ~VisitedLinkNotificationSink_AddVisitedLinks_Params_Data() = delete;
};
static_assert(sizeof(VisitedLinkNotificationSink_AddVisitedLinks_Params_Data) == 16,
              "Bad sizeof(VisitedLinkNotificationSink_AddVisitedLinks_Params_Data)");
class  VisitedLinkNotificationSink_ResetVisitedLinks_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VisitedLinkNotificationSink_ResetVisitedLinks_Params_Data));
      new (data()) VisitedLinkNotificationSink_ResetVisitedLinks_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VisitedLinkNotificationSink_ResetVisitedLinks_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VisitedLinkNotificationSink_ResetVisitedLinks_Params_Data>(index_);
    }
    VisitedLinkNotificationSink_ResetVisitedLinks_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t invalidate_cached_hashes : 1;
  uint8_t padfinal_[7];

 private:
  VisitedLinkNotificationSink_ResetVisitedLinks_Params_Data();
  ~VisitedLinkNotificationSink_ResetVisitedLinks_Params_Data() = delete;
};
static_assert(sizeof(VisitedLinkNotificationSink_ResetVisitedLinks_Params_Data) == 16,
              "Bad sizeof(VisitedLinkNotificationSink_ResetVisitedLinks_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace visitedlink

#endif  // COMPONENTS_VISITEDLINK_COMMON_VISITEDLINK_MOJOM_SHARED_INTERNAL_H_