// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_SERVICE_PROCESS_MOJOM_SHARED_INTERNAL_H_
#define CHROME_COMMON_SERVICE_PROCESS_MOJOM_SHARED_INTERNAL_H_

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
namespace chrome {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  ServiceProcess_Hello_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceProcess_Hello_Params_Data));
      new (data()) ServiceProcess_Hello_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceProcess_Hello_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceProcess_Hello_Params_Data>(index_);
    }
    ServiceProcess_Hello_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceProcess_Hello_Params_Data();
  ~ServiceProcess_Hello_Params_Data() = delete;
};
static_assert(sizeof(ServiceProcess_Hello_Params_Data) == 8,
              "Bad sizeof(ServiceProcess_Hello_Params_Data)");
class  ServiceProcess_Hello_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceProcess_Hello_ResponseParams_Data));
      new (data()) ServiceProcess_Hello_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceProcess_Hello_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceProcess_Hello_ResponseParams_Data>(index_);
    }
    ServiceProcess_Hello_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceProcess_Hello_ResponseParams_Data();
  ~ServiceProcess_Hello_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceProcess_Hello_ResponseParams_Data) == 8,
              "Bad sizeof(ServiceProcess_Hello_ResponseParams_Data)");
class  ServiceProcess_GetHistograms_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceProcess_GetHistograms_Params_Data));
      new (data()) ServiceProcess_GetHistograms_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceProcess_GetHistograms_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceProcess_GetHistograms_Params_Data>(index_);
    }
    ServiceProcess_GetHistograms_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceProcess_GetHistograms_Params_Data();
  ~ServiceProcess_GetHistograms_Params_Data() = delete;
};
static_assert(sizeof(ServiceProcess_GetHistograms_Params_Data) == 8,
              "Bad sizeof(ServiceProcess_GetHistograms_Params_Data)");
class  ServiceProcess_GetHistograms_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceProcess_GetHistograms_ResponseParams_Data));
      new (data()) ServiceProcess_GetHistograms_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceProcess_GetHistograms_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceProcess_GetHistograms_ResponseParams_Data>(index_);
    }
    ServiceProcess_GetHistograms_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> histograms;

 private:
  ServiceProcess_GetHistograms_ResponseParams_Data();
  ~ServiceProcess_GetHistograms_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceProcess_GetHistograms_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceProcess_GetHistograms_ResponseParams_Data)");
class  ServiceProcess_UpdateAvailable_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceProcess_UpdateAvailable_Params_Data));
      new (data()) ServiceProcess_UpdateAvailable_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceProcess_UpdateAvailable_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceProcess_UpdateAvailable_Params_Data>(index_);
    }
    ServiceProcess_UpdateAvailable_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceProcess_UpdateAvailable_Params_Data();
  ~ServiceProcess_UpdateAvailable_Params_Data() = delete;
};
static_assert(sizeof(ServiceProcess_UpdateAvailable_Params_Data) == 8,
              "Bad sizeof(ServiceProcess_UpdateAvailable_Params_Data)");
class  ServiceProcess_ShutDown_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceProcess_ShutDown_Params_Data));
      new (data()) ServiceProcess_ShutDown_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceProcess_ShutDown_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceProcess_ShutDown_Params_Data>(index_);
    }
    ServiceProcess_ShutDown_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceProcess_ShutDown_Params_Data();
  ~ServiceProcess_ShutDown_Params_Data() = delete;
};
static_assert(sizeof(ServiceProcess_ShutDown_Params_Data) == 8,
              "Bad sizeof(ServiceProcess_ShutDown_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_SERVICE_PROCESS_MOJOM_SHARED_INTERNAL_H_