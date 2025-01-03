// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/blob/blob.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_stream_handle.mojom-shared-internal.h"
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
using ServiceWorkerResponse_Data = mojo::native::internal::NativeStruct_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerFetchResponseCallback_OnResponse_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerFetchResponseCallback_OnResponse_Params_Data));
      new (data()) ServiceWorkerFetchResponseCallback_OnResponse_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerFetchResponseCallback_OnResponse_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerFetchResponseCallback_OnResponse_Params_Data>(index_);
    }
    ServiceWorkerFetchResponseCallback_OnResponse_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ServiceWorkerResponse_Data> response;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> dispatch_event_time;

 private:
  ServiceWorkerFetchResponseCallback_OnResponse_Params_Data();
  ~ServiceWorkerFetchResponseCallback_OnResponse_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerFetchResponseCallback_OnResponse_Params_Data) == 24,
              "Bad sizeof(ServiceWorkerFetchResponseCallback_OnResponse_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerFetchResponseCallback_OnResponseBlob_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerFetchResponseCallback_OnResponseBlob_Params_Data));
      new (data()) ServiceWorkerFetchResponseCallback_OnResponseBlob_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerFetchResponseCallback_OnResponseBlob_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerFetchResponseCallback_OnResponseBlob_Params_Data>(index_);
    }
    ServiceWorkerFetchResponseCallback_OnResponseBlob_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ServiceWorkerResponse_Data> response;
  mojo::internal::Interface_Data body_as_blob;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> dispatch_event_time;

 private:
  ServiceWorkerFetchResponseCallback_OnResponseBlob_Params_Data();
  ~ServiceWorkerFetchResponseCallback_OnResponseBlob_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerFetchResponseCallback_OnResponseBlob_Params_Data) == 32,
              "Bad sizeof(ServiceWorkerFetchResponseCallback_OnResponseBlob_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params_Data));
      new (data()) ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params_Data>(index_);
    }
    ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ServiceWorkerResponse_Data> response;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> dispatch_event_time;

 private:
  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params_Data();
  ~ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params_Data) == 24,
              "Bad sizeof(ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams_Data));
      new (data()) ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams_Data>(index_);
    }
    ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams_Data();
  ~ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams_Data) == 8,
              "Bad sizeof(ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data));
      new (data()) ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data>(index_);
    }
    ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ServiceWorkerResponse_Data> response;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerStreamHandle_Data> body_as_stream;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> dispatch_event_time;

 private:
  ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data();
  ~ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data) == 32,
              "Bad sizeof(ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ServiceWorkerFetchResponseCallback_OnFallback_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerFetchResponseCallback_OnFallback_Params_Data));
      new (data()) ServiceWorkerFetchResponseCallback_OnFallback_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerFetchResponseCallback_OnFallback_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerFetchResponseCallback_OnFallback_Params_Data>(index_);
    }
    ServiceWorkerFetchResponseCallback_OnFallback_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> dispatch_event_time;

 private:
  ServiceWorkerFetchResponseCallback_OnFallback_Params_Data();
  ~ServiceWorkerFetchResponseCallback_OnFallback_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerFetchResponseCallback_OnFallback_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerFetchResponseCallback_OnFallback_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_SHARED_INTERNAL_H_