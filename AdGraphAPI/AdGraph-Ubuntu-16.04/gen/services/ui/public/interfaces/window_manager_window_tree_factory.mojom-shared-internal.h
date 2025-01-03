// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_WINDOW_TREE_FACTORY_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_WINDOW_TREE_FACTORY_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/ui/public/interfaces/window_manager_constants.mojom-shared-internal.h"
#include "services/ui/public/interfaces/window_tree.mojom-shared-internal.h"
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
class  WindowManagerWindowTreeFactory_CreateWindowTree_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowManagerWindowTreeFactory_CreateWindowTree_Params_Data));
      new (data()) WindowManagerWindowTreeFactory_CreateWindowTree_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowManagerWindowTreeFactory_CreateWindowTree_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowManagerWindowTreeFactory_CreateWindowTree_Params_Data>(index_);
    }
    WindowManagerWindowTreeFactory_CreateWindowTree_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data tree_request;
  mojo::internal::Interface_Data client;
  uint8_t automatically_create_display_roots : 1;
  uint8_t padfinal_[3];

 private:
  WindowManagerWindowTreeFactory_CreateWindowTree_Params_Data();
  ~WindowManagerWindowTreeFactory_CreateWindowTree_Params_Data() = delete;
};
static_assert(sizeof(WindowManagerWindowTreeFactory_CreateWindowTree_Params_Data) == 24,
              "Bad sizeof(WindowManagerWindowTreeFactory_CreateWindowTree_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_WINDOW_TREE_FACTORY_MOJOM_SHARED_INTERNAL_H_