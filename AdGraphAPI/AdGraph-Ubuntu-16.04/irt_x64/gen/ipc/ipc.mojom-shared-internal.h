// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef IPC_IPC_MOJOM_SHARED_INTERNAL_H_
#define IPC_IPC_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/read_only_buffer.mojom-shared-internal.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace IPC {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class COMPONENT_EXPORT(IPC_MOJOM_SHARED) Channel_SetPeerPid_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Channel_SetPeerPid_Params_Data));
      new (data()) Channel_SetPeerPid_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Channel_SetPeerPid_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Channel_SetPeerPid_Params_Data>(index_);
    }
    Channel_SetPeerPid_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t pid;
  uint8_t padfinal_[4];

 private:
  Channel_SetPeerPid_Params_Data();
  ~Channel_SetPeerPid_Params_Data() = delete;
};
static_assert(sizeof(Channel_SetPeerPid_Params_Data) == 16,
              "Bad sizeof(Channel_SetPeerPid_Params_Data)");
class COMPONENT_EXPORT(IPC_MOJOM_SHARED) Channel_Receive_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Channel_Receive_Params_Data));
      new (data()) Channel_Receive_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Channel_Receive_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Channel_Receive_Params_Data>(index_);
    }
    Channel_Receive_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::ReadOnlyBuffer_Data> data;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::mojo::native::internal::SerializedHandle_Data>>> handles;

 private:
  Channel_Receive_Params_Data();
  ~Channel_Receive_Params_Data() = delete;
};
static_assert(sizeof(Channel_Receive_Params_Data) == 24,
              "Bad sizeof(Channel_Receive_Params_Data)");
class COMPONENT_EXPORT(IPC_MOJOM_SHARED) Channel_GetAssociatedInterface_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Channel_GetAssociatedInterface_Params_Data));
      new (data()) Channel_GetAssociatedInterface_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Channel_GetAssociatedInterface_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Channel_GetAssociatedInterface_Params_Data>(index_);
    }
    Channel_GetAssociatedInterface_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::AssociatedEndpointHandle_Data request;
  uint8_t padfinal_[4];

 private:
  Channel_GetAssociatedInterface_Params_Data();
  ~Channel_GetAssociatedInterface_Params_Data() = delete;
};
static_assert(sizeof(Channel_GetAssociatedInterface_Params_Data) == 24,
              "Bad sizeof(Channel_GetAssociatedInterface_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace IPC

#endif  // IPC_IPC_MOJOM_SHARED_INTERNAL_H_