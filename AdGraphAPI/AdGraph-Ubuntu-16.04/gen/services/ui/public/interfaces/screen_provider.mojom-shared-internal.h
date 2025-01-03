// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_SCREEN_PROVIDER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_UI_PUBLIC_INTERFACES_SCREEN_PROVIDER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/ui/public/interfaces/window_manager_constants.mojom-shared-internal.h"
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
class  ScreenProviderObserver_OnDisplaysChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ScreenProviderObserver_OnDisplaysChanged_Params_Data));
      new (data()) ScreenProviderObserver_OnDisplaysChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ScreenProviderObserver_OnDisplaysChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ScreenProviderObserver_OnDisplaysChanged_Params_Data>(index_);
    }
    ScreenProviderObserver_OnDisplaysChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::ui::mojom::internal::WsDisplay_Data>>> displays;
  int64_t primary_display_id;
  int64_t internal_display_id;

 private:
  ScreenProviderObserver_OnDisplaysChanged_Params_Data();
  ~ScreenProviderObserver_OnDisplaysChanged_Params_Data() = delete;
};
static_assert(sizeof(ScreenProviderObserver_OnDisplaysChanged_Params_Data) == 32,
              "Bad sizeof(ScreenProviderObserver_OnDisplaysChanged_Params_Data)");
class  ScreenProvider_AddObserver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ScreenProvider_AddObserver_Params_Data));
      new (data()) ScreenProvider_AddObserver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ScreenProvider_AddObserver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ScreenProvider_AddObserver_Params_Data>(index_);
    }
    ScreenProvider_AddObserver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data observer;

 private:
  ScreenProvider_AddObserver_Params_Data();
  ~ScreenProvider_AddObserver_Params_Data() = delete;
};
static_assert(sizeof(ScreenProvider_AddObserver_Params_Data) == 16,
              "Bad sizeof(ScreenProvider_AddObserver_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_SCREEN_PROVIDER_MOJOM_SHARED_INTERNAL_H_