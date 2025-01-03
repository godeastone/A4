// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_CONTROL_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_CONTROL_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace service_manager {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) ServiceControl_RequestQuit_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceControl_RequestQuit_Params_Data));
      new (data()) ServiceControl_RequestQuit_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceControl_RequestQuit_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceControl_RequestQuit_Params_Data>(index_);
    }
    ServiceControl_RequestQuit_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceControl_RequestQuit_Params_Data();
  ~ServiceControl_RequestQuit_Params_Data() = delete;
};
static_assert(sizeof(ServiceControl_RequestQuit_Params_Data) == 8,
              "Bad sizeof(ServiceControl_RequestQuit_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_CONTROL_MOJOM_SHARED_INTERNAL_H_