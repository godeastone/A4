// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_OOM_INTERVENTION_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_OOM_INTERVENTION_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/shared_memory.mojom-shared-internal.h"
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) OomInterventionHost_OnHighMemoryUsage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(OomInterventionHost_OnHighMemoryUsage_Params_Data));
      new (data()) OomInterventionHost_OnHighMemoryUsage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    OomInterventionHost_OnHighMemoryUsage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<OomInterventionHost_OnHighMemoryUsage_Params_Data>(index_);
    }
    OomInterventionHost_OnHighMemoryUsage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t intervention_triggered : 1;
  uint8_t padfinal_[7];

 private:
  OomInterventionHost_OnHighMemoryUsage_Params_Data();
  ~OomInterventionHost_OnHighMemoryUsage_Params_Data() = delete;
};
static_assert(sizeof(OomInterventionHost_OnHighMemoryUsage_Params_Data) == 16,
              "Bad sizeof(OomInterventionHost_OnHighMemoryUsage_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) OomIntervention_StartDetection_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(OomIntervention_StartDetection_Params_Data));
      new (data()) OomIntervention_StartDetection_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    OomIntervention_StartDetection_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<OomIntervention_StartDetection_Params_Data>(index_);
    }
    OomIntervention_StartDetection_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data host;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnsafeSharedMemoryRegion_Data> shared_metrics_buffer;
  uint64_t memory_workload_threshold;
  uint8_t trigger_intervention : 1;
  uint8_t padfinal_[7];

 private:
  OomIntervention_StartDetection_Params_Data();
  ~OomIntervention_StartDetection_Params_Data() = delete;
};
static_assert(sizeof(OomIntervention_StartDetection_Params_Data) == 40,
              "Bad sizeof(OomIntervention_StartDetection_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_OOM_INTERVENTION_MOJOM_SHARED_INTERNAL_H_