// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "third_party/blink/public/web/devtools_agent.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace content {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SharedWorker_Connect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedWorker_Connect_Params_Data));
      new (data()) SharedWorker_Connect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedWorker_Connect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedWorker_Connect_Params_Data>(index_);
    }
    SharedWorker_Connect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t connection_id;
  mojo::internal::Handle_Data message_port;

 private:
  SharedWorker_Connect_Params_Data();
  ~SharedWorker_Connect_Params_Data() = delete;
};
static_assert(sizeof(SharedWorker_Connect_Params_Data) == 16,
              "Bad sizeof(SharedWorker_Connect_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SharedWorker_Terminate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedWorker_Terminate_Params_Data));
      new (data()) SharedWorker_Terminate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedWorker_Terminate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedWorker_Terminate_Params_Data>(index_);
    }
    SharedWorker_Terminate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SharedWorker_Terminate_Params_Data();
  ~SharedWorker_Terminate_Params_Data() = delete;
};
static_assert(sizeof(SharedWorker_Terminate_Params_Data) == 8,
              "Bad sizeof(SharedWorker_Terminate_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SharedWorker_BindDevToolsAgent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedWorker_BindDevToolsAgent_Params_Data));
      new (data()) SharedWorker_BindDevToolsAgent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedWorker_BindDevToolsAgent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedWorker_BindDevToolsAgent_Params_Data>(index_);
    }
    SharedWorker_BindDevToolsAgent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedEndpointHandle_Data devtools_agent;
  uint8_t padfinal_[4];

 private:
  SharedWorker_BindDevToolsAgent_Params_Data();
  ~SharedWorker_BindDevToolsAgent_Params_Data() = delete;
};
static_assert(sizeof(SharedWorker_BindDevToolsAgent_Params_Data) == 16,
              "Bad sizeof(SharedWorker_BindDevToolsAgent_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_MOJOM_SHARED_INTERNAL_H_