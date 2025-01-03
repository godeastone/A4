// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLER_JAVASCRIPT_SERVICE_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLER_JAVASCRIPT_SERVICE_MOJOM_SHARED_INTERNAL_H_

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
namespace dom_distiller {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params_Data));
      new (data()) DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params_Data>(index_);
    }
    DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params_Data();
  ~DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params_Data() = delete;
};
static_assert(sizeof(DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params_Data) == 8,
              "Bad sizeof(DistillerJavaScriptService_HandleDistillerOpenSettingsCall_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace dom_distiller

#endif  // COMPONENTS_DOM_DISTILLER_CONTENT_COMMON_DISTILLER_JAVASCRIPT_SERVICE_MOJOM_SHARED_INTERNAL_H_