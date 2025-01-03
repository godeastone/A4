// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_PAGE_SIGNAL_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_PAGE_SIGNAL_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/resource_coordinator/public/mojom/coordination_unit.mojom-shared-internal.h"
#include "services/resource_coordinator/public/mojom/lifecycle.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace resource_coordinator {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) PageSignalReceiver_NotifyPageAlmostIdle_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PageSignalReceiver_NotifyPageAlmostIdle_Params_Data));
      new (data()) PageSignalReceiver_NotifyPageAlmostIdle_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PageSignalReceiver_NotifyPageAlmostIdle_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PageSignalReceiver_NotifyPageAlmostIdle_Params_Data>(index_);
    }
    PageSignalReceiver_NotifyPageAlmostIdle_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::resource_coordinator::mojom::internal::CoordinationUnitID_Data> cu_id;

 private:
  PageSignalReceiver_NotifyPageAlmostIdle_Params_Data();
  ~PageSignalReceiver_NotifyPageAlmostIdle_Params_Data() = delete;
};
static_assert(sizeof(PageSignalReceiver_NotifyPageAlmostIdle_Params_Data) == 16,
              "Bad sizeof(PageSignalReceiver_NotifyPageAlmostIdle_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) PageSignalReceiver_SetExpectedTaskQueueingDuration_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PageSignalReceiver_SetExpectedTaskQueueingDuration_Params_Data));
      new (data()) PageSignalReceiver_SetExpectedTaskQueueingDuration_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PageSignalReceiver_SetExpectedTaskQueueingDuration_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PageSignalReceiver_SetExpectedTaskQueueingDuration_Params_Data>(index_);
    }
    PageSignalReceiver_SetExpectedTaskQueueingDuration_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::resource_coordinator::mojom::internal::CoordinationUnitID_Data> cu_id;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> duration;

 private:
  PageSignalReceiver_SetExpectedTaskQueueingDuration_Params_Data();
  ~PageSignalReceiver_SetExpectedTaskQueueingDuration_Params_Data() = delete;
};
static_assert(sizeof(PageSignalReceiver_SetExpectedTaskQueueingDuration_Params_Data) == 24,
              "Bad sizeof(PageSignalReceiver_SetExpectedTaskQueueingDuration_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) PageSignalReceiver_SetLifecycleState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PageSignalReceiver_SetLifecycleState_Params_Data));
      new (data()) PageSignalReceiver_SetLifecycleState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PageSignalReceiver_SetLifecycleState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PageSignalReceiver_SetLifecycleState_Params_Data>(index_);
    }
    PageSignalReceiver_SetLifecycleState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::resource_coordinator::mojom::internal::CoordinationUnitID_Data> cu_id;
  int32_t state;
  uint8_t padfinal_[4];

 private:
  PageSignalReceiver_SetLifecycleState_Params_Data();
  ~PageSignalReceiver_SetLifecycleState_Params_Data() = delete;
};
static_assert(sizeof(PageSignalReceiver_SetLifecycleState_Params_Data) == 24,
              "Bad sizeof(PageSignalReceiver_SetLifecycleState_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) PageSignalGenerator_AddReceiver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PageSignalGenerator_AddReceiver_Params_Data));
      new (data()) PageSignalGenerator_AddReceiver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PageSignalGenerator_AddReceiver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PageSignalGenerator_AddReceiver_Params_Data>(index_);
    }
    PageSignalGenerator_AddReceiver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data receiver;

 private:
  PageSignalGenerator_AddReceiver_Params_Data();
  ~PageSignalGenerator_AddReceiver_Params_Data() = delete;
};
static_assert(sizeof(PageSignalGenerator_AddReceiver_Params_Data) == 16,
              "Bad sizeof(PageSignalGenerator_AddReceiver_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace resource_coordinator

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_PAGE_SIGNAL_MOJOM_SHARED_INTERNAL_H_