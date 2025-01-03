// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "components/services/heap_profiling/public/mojom/heap_profiling_client.mojom-shared-internal.h"
#include "mojo/public/mojom/base/process_id.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace heap_profiling {
namespace mojom {
namespace internal {

struct ProcessType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)
class  ProfilingService_AddProfilingClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfilingService_AddProfilingClient_Params_Data));
      new (data()) ProfilingService_AddProfilingClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfilingService_AddProfilingClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfilingService_AddProfilingClient_Params_Data>(index_);
    }
    ProfilingService_AddProfilingClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::ProcessId_Data> pid;
  mojo::internal::Interface_Data client;
  mojo::internal::Handle_Data memlog_pipe_receiver;
  int32_t process_type;
  mojo::internal::Pointer<::heap_profiling::mojom::internal::ProfilingParams_Data> params;

 private:
  ProfilingService_AddProfilingClient_Params_Data();
  ~ProfilingService_AddProfilingClient_Params_Data() = delete;
};
static_assert(sizeof(ProfilingService_AddProfilingClient_Params_Data) == 40,
              "Bad sizeof(ProfilingService_AddProfilingClient_Params_Data)");
class  ProfilingService_SetKeepSmallAllocations_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfilingService_SetKeepSmallAllocations_Params_Data));
      new (data()) ProfilingService_SetKeepSmallAllocations_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfilingService_SetKeepSmallAllocations_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfilingService_SetKeepSmallAllocations_Params_Data>(index_);
    }
    ProfilingService_SetKeepSmallAllocations_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t keep_small_allocations : 1;
  uint8_t padfinal_[7];

 private:
  ProfilingService_SetKeepSmallAllocations_Params_Data();
  ~ProfilingService_SetKeepSmallAllocations_Params_Data() = delete;
};
static_assert(sizeof(ProfilingService_SetKeepSmallAllocations_Params_Data) == 16,
              "Bad sizeof(ProfilingService_SetKeepSmallAllocations_Params_Data)");
class  ProfilingService_GetProfiledPids_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfilingService_GetProfiledPids_Params_Data));
      new (data()) ProfilingService_GetProfiledPids_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfilingService_GetProfiledPids_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfilingService_GetProfiledPids_Params_Data>(index_);
    }
    ProfilingService_GetProfiledPids_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ProfilingService_GetProfiledPids_Params_Data();
  ~ProfilingService_GetProfiledPids_Params_Data() = delete;
};
static_assert(sizeof(ProfilingService_GetProfiledPids_Params_Data) == 8,
              "Bad sizeof(ProfilingService_GetProfiledPids_Params_Data)");
class  ProfilingService_GetProfiledPids_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfilingService_GetProfiledPids_ResponseParams_Data));
      new (data()) ProfilingService_GetProfiledPids_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfilingService_GetProfiledPids_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfilingService_GetProfiledPids_ResponseParams_Data>(index_);
    }
    ProfilingService_GetProfiledPids_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::mojo_base::mojom::internal::ProcessId_Data>>> pids;

 private:
  ProfilingService_GetProfiledPids_ResponseParams_Data();
  ~ProfilingService_GetProfiledPids_ResponseParams_Data() = delete;
};
static_assert(sizeof(ProfilingService_GetProfiledPids_ResponseParams_Data) == 16,
              "Bad sizeof(ProfilingService_GetProfiledPids_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace heap_profiling

#endif  // COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_SHARED_INTERNAL_H_