// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_LAYERED_WINDOW_UPDATER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_LAYERED_WINDOW_UPDATER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
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
class  LayeredWindowUpdater_OnAllocatedSharedMemory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LayeredWindowUpdater_OnAllocatedSharedMemory_Params_Data));
      new (data()) LayeredWindowUpdater_OnAllocatedSharedMemory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LayeredWindowUpdater_OnAllocatedSharedMemory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LayeredWindowUpdater_OnAllocatedSharedMemory_Params_Data>(index_);
    }
    LayeredWindowUpdater_OnAllocatedSharedMemory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> pixel_size;
  mojo::internal::Handle_Data scoped_buffer_handle;
  uint8_t padfinal_[4];

 private:
  LayeredWindowUpdater_OnAllocatedSharedMemory_Params_Data();
  ~LayeredWindowUpdater_OnAllocatedSharedMemory_Params_Data() = delete;
};
static_assert(sizeof(LayeredWindowUpdater_OnAllocatedSharedMemory_Params_Data) == 24,
              "Bad sizeof(LayeredWindowUpdater_OnAllocatedSharedMemory_Params_Data)");
class  LayeredWindowUpdater_Draw_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LayeredWindowUpdater_Draw_Params_Data));
      new (data()) LayeredWindowUpdater_Draw_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LayeredWindowUpdater_Draw_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LayeredWindowUpdater_Draw_Params_Data>(index_);
    }
    LayeredWindowUpdater_Draw_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  LayeredWindowUpdater_Draw_Params_Data();
  ~LayeredWindowUpdater_Draw_Params_Data() = delete;
};
static_assert(sizeof(LayeredWindowUpdater_Draw_Params_Data) == 8,
              "Bad sizeof(LayeredWindowUpdater_Draw_Params_Data)");
class  LayeredWindowUpdater_Draw_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LayeredWindowUpdater_Draw_ResponseParams_Data));
      new (data()) LayeredWindowUpdater_Draw_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LayeredWindowUpdater_Draw_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LayeredWindowUpdater_Draw_ResponseParams_Data>(index_);
    }
    LayeredWindowUpdater_Draw_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  LayeredWindowUpdater_Draw_ResponseParams_Data();
  ~LayeredWindowUpdater_Draw_ResponseParams_Data() = delete;
};
static_assert(sizeof(LayeredWindowUpdater_Draw_ResponseParams_Data) == 8,
              "Bad sizeof(LayeredWindowUpdater_Draw_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_LAYERED_WINDOW_UPDATER_MOJOM_SHARED_INTERNAL_H_