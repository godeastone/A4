// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_CLIENT_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_CLIENT_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "third_party/blink/public/mojom/shared_worker/shared_worker_creation_context_type.mojom-shared-internal.h"
#include "third_party/blink/public/platform/web_feature.mojom-shared-internal.h"
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SharedWorkerClient_OnCreated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedWorkerClient_OnCreated_Params_Data));
      new (data()) SharedWorkerClient_OnCreated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedWorkerClient_OnCreated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedWorkerClient_OnCreated_Params_Data>(index_);
    }
    SharedWorkerClient_OnCreated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t creation_context_type;
  uint8_t padfinal_[4];

 private:
  SharedWorkerClient_OnCreated_Params_Data();
  ~SharedWorkerClient_OnCreated_Params_Data() = delete;
};
static_assert(sizeof(SharedWorkerClient_OnCreated_Params_Data) == 16,
              "Bad sizeof(SharedWorkerClient_OnCreated_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SharedWorkerClient_OnConnected_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedWorkerClient_OnConnected_Params_Data));
      new (data()) SharedWorkerClient_OnConnected_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedWorkerClient_OnConnected_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedWorkerClient_OnConnected_Params_Data>(index_);
    }
    SharedWorkerClient_OnConnected_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> features_used;

 private:
  SharedWorkerClient_OnConnected_Params_Data();
  ~SharedWorkerClient_OnConnected_Params_Data() = delete;
};
static_assert(sizeof(SharedWorkerClient_OnConnected_Params_Data) == 16,
              "Bad sizeof(SharedWorkerClient_OnConnected_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SharedWorkerClient_OnScriptLoadFailed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedWorkerClient_OnScriptLoadFailed_Params_Data));
      new (data()) SharedWorkerClient_OnScriptLoadFailed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedWorkerClient_OnScriptLoadFailed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedWorkerClient_OnScriptLoadFailed_Params_Data>(index_);
    }
    SharedWorkerClient_OnScriptLoadFailed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SharedWorkerClient_OnScriptLoadFailed_Params_Data();
  ~SharedWorkerClient_OnScriptLoadFailed_Params_Data() = delete;
};
static_assert(sizeof(SharedWorkerClient_OnScriptLoadFailed_Params_Data) == 8,
              "Bad sizeof(SharedWorkerClient_OnScriptLoadFailed_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SharedWorkerClient_OnFeatureUsed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedWorkerClient_OnFeatureUsed_Params_Data));
      new (data()) SharedWorkerClient_OnFeatureUsed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedWorkerClient_OnFeatureUsed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedWorkerClient_OnFeatureUsed_Params_Data>(index_);
    }
    SharedWorkerClient_OnFeatureUsed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t feature;
  uint8_t padfinal_[4];

 private:
  SharedWorkerClient_OnFeatureUsed_Params_Data();
  ~SharedWorkerClient_OnFeatureUsed_Params_Data() = delete;
};
static_assert(sizeof(SharedWorkerClient_OnFeatureUsed_Params_Data) == 16,
              "Bad sizeof(SharedWorkerClient_OnFeatureUsed_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_CLIENT_MOJOM_SHARED_INTERNAL_H_