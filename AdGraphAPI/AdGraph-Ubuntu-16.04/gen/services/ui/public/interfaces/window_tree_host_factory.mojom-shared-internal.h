// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_HOST_FACTORY_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_HOST_FACTORY_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/ui/public/interfaces/window_tree.mojom-shared-internal.h"
#include "services/ui/public/interfaces/window_tree_host.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace ui {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  WindowTreeHostFactory_CreateWindowTreeHost_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowTreeHostFactory_CreateWindowTreeHost_Params_Data));
      new (data()) WindowTreeHostFactory_CreateWindowTreeHost_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowTreeHostFactory_CreateWindowTreeHost_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowTreeHostFactory_CreateWindowTreeHost_Params_Data>(index_);
    }
    WindowTreeHostFactory_CreateWindowTreeHost_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data window_tree_host;
  mojo::internal::Interface_Data tree_client;
  uint8_t padfinal_[4];

 private:
  WindowTreeHostFactory_CreateWindowTreeHost_Params_Data();
  ~WindowTreeHostFactory_CreateWindowTreeHost_Params_Data() = delete;
};
static_assert(sizeof(WindowTreeHostFactory_CreateWindowTreeHost_Params_Data) == 24,
              "Bad sizeof(WindowTreeHostFactory_CreateWindowTreeHost_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_HOST_FACTORY_MOJOM_SHARED_INTERNAL_H_