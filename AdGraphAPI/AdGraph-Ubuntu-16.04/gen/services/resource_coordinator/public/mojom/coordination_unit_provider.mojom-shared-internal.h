// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_PROVIDER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_PROVIDER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/resource_coordinator/public/mojom/coordination_unit.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace resource_coordinator {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) CoordinationUnitProvider_CreateFrameCoordinationUnit_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CoordinationUnitProvider_CreateFrameCoordinationUnit_Params_Data));
      new (data()) CoordinationUnitProvider_CreateFrameCoordinationUnit_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CoordinationUnitProvider_CreateFrameCoordinationUnit_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CoordinationUnitProvider_CreateFrameCoordinationUnit_Params_Data>(index_);
    }
    CoordinationUnitProvider_CreateFrameCoordinationUnit_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::resource_coordinator::mojom::internal::CoordinationUnitID_Data> id;

 private:
  CoordinationUnitProvider_CreateFrameCoordinationUnit_Params_Data();
  ~CoordinationUnitProvider_CreateFrameCoordinationUnit_Params_Data() = delete;
};
static_assert(sizeof(CoordinationUnitProvider_CreateFrameCoordinationUnit_Params_Data) == 24,
              "Bad sizeof(CoordinationUnitProvider_CreateFrameCoordinationUnit_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) CoordinationUnitProvider_CreatePageCoordinationUnit_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CoordinationUnitProvider_CreatePageCoordinationUnit_Params_Data));
      new (data()) CoordinationUnitProvider_CreatePageCoordinationUnit_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CoordinationUnitProvider_CreatePageCoordinationUnit_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CoordinationUnitProvider_CreatePageCoordinationUnit_Params_Data>(index_);
    }
    CoordinationUnitProvider_CreatePageCoordinationUnit_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::resource_coordinator::mojom::internal::CoordinationUnitID_Data> id;

 private:
  CoordinationUnitProvider_CreatePageCoordinationUnit_Params_Data();
  ~CoordinationUnitProvider_CreatePageCoordinationUnit_Params_Data() = delete;
};
static_assert(sizeof(CoordinationUnitProvider_CreatePageCoordinationUnit_Params_Data) == 24,
              "Bad sizeof(CoordinationUnitProvider_CreatePageCoordinationUnit_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) CoordinationUnitProvider_CreateProcessCoordinationUnit_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CoordinationUnitProvider_CreateProcessCoordinationUnit_Params_Data));
      new (data()) CoordinationUnitProvider_CreateProcessCoordinationUnit_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CoordinationUnitProvider_CreateProcessCoordinationUnit_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CoordinationUnitProvider_CreateProcessCoordinationUnit_Params_Data>(index_);
    }
    CoordinationUnitProvider_CreateProcessCoordinationUnit_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::resource_coordinator::mojom::internal::CoordinationUnitID_Data> id;

 private:
  CoordinationUnitProvider_CreateProcessCoordinationUnit_Params_Data();
  ~CoordinationUnitProvider_CreateProcessCoordinationUnit_Params_Data() = delete;
};
static_assert(sizeof(CoordinationUnitProvider_CreateProcessCoordinationUnit_Params_Data) == 24,
              "Bad sizeof(CoordinationUnitProvider_CreateProcessCoordinationUnit_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) CoordinationUnitProvider_GetSystemCoordinationUnit_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CoordinationUnitProvider_GetSystemCoordinationUnit_Params_Data));
      new (data()) CoordinationUnitProvider_GetSystemCoordinationUnit_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CoordinationUnitProvider_GetSystemCoordinationUnit_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CoordinationUnitProvider_GetSystemCoordinationUnit_Params_Data>(index_);
    }
    CoordinationUnitProvider_GetSystemCoordinationUnit_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  uint8_t padfinal_[4];

 private:
  CoordinationUnitProvider_GetSystemCoordinationUnit_Params_Data();
  ~CoordinationUnitProvider_GetSystemCoordinationUnit_Params_Data() = delete;
};
static_assert(sizeof(CoordinationUnitProvider_GetSystemCoordinationUnit_Params_Data) == 16,
              "Bad sizeof(CoordinationUnitProvider_GetSystemCoordinationUnit_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace resource_coordinator

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_PROVIDER_MOJOM_SHARED_INTERNAL_H_