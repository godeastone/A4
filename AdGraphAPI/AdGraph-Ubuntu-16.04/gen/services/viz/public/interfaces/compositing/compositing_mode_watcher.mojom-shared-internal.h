// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITING_MODE_WATCHER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITING_MODE_WATCHER_MOJOM_SHARED_INTERNAL_H_

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
namespace viz {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data));
      new (data()) CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data>(index_);
    }
    CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data();
  ~CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data() = delete;
};
static_assert(sizeof(CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data) == 8,
              "Bad sizeof(CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data)");
class  CompositingModeReporter_AddCompositingModeWatcher_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositingModeReporter_AddCompositingModeWatcher_Params_Data));
      new (data()) CompositingModeReporter_AddCompositingModeWatcher_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositingModeReporter_AddCompositingModeWatcher_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositingModeReporter_AddCompositingModeWatcher_Params_Data>(index_);
    }
    CompositingModeReporter_AddCompositingModeWatcher_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data watcher;

 private:
  CompositingModeReporter_AddCompositingModeWatcher_Params_Data();
  ~CompositingModeReporter_AddCompositingModeWatcher_Params_Data() = delete;
};
static_assert(sizeof(CompositingModeReporter_AddCompositingModeWatcher_Params_Data) == 16,
              "Bad sizeof(CompositingModeReporter_AddCompositingModeWatcher_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITING_MODE_WATCHER_MOJOM_SHARED_INTERNAL_H_