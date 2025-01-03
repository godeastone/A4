// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_INPUT_TARGET_CLIENT_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_INPUT_TARGET_CLIENT_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-shared-internal.h"
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
class  InputTargetClient_FrameSinkIdAt_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputTargetClient_FrameSinkIdAt_Params_Data));
      new (data()) InputTargetClient_FrameSinkIdAt_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputTargetClient_FrameSinkIdAt_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputTargetClient_FrameSinkIdAt_Params_Data>(index_);
    }
    InputTargetClient_FrameSinkIdAt_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Point_Data> point;

 private:
  InputTargetClient_FrameSinkIdAt_Params_Data();
  ~InputTargetClient_FrameSinkIdAt_Params_Data() = delete;
};
static_assert(sizeof(InputTargetClient_FrameSinkIdAt_Params_Data) == 16,
              "Bad sizeof(InputTargetClient_FrameSinkIdAt_Params_Data)");
class  InputTargetClient_FrameSinkIdAt_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputTargetClient_FrameSinkIdAt_ResponseParams_Data));
      new (data()) InputTargetClient_FrameSinkIdAt_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputTargetClient_FrameSinkIdAt_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputTargetClient_FrameSinkIdAt_ResponseParams_Data>(index_);
    }
    InputTargetClient_FrameSinkIdAt_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> id;

 private:
  InputTargetClient_FrameSinkIdAt_ResponseParams_Data();
  ~InputTargetClient_FrameSinkIdAt_ResponseParams_Data() = delete;
};
static_assert(sizeof(InputTargetClient_FrameSinkIdAt_ResponseParams_Data) == 16,
              "Bad sizeof(InputTargetClient_FrameSinkIdAt_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_INPUT_TARGET_CLIENT_MOJOM_SHARED_INTERNAL_H_