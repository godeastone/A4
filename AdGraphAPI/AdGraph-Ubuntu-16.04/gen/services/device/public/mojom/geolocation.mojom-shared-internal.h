// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/device/public/mojom/geoposition.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace device {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  Geolocation_SetHighAccuracy_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Geolocation_SetHighAccuracy_Params_Data));
      new (data()) Geolocation_SetHighAccuracy_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Geolocation_SetHighAccuracy_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Geolocation_SetHighAccuracy_Params_Data>(index_);
    }
    Geolocation_SetHighAccuracy_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t high_accuracy : 1;
  uint8_t padfinal_[7];

 private:
  Geolocation_SetHighAccuracy_Params_Data();
  ~Geolocation_SetHighAccuracy_Params_Data() = delete;
};
static_assert(sizeof(Geolocation_SetHighAccuracy_Params_Data) == 16,
              "Bad sizeof(Geolocation_SetHighAccuracy_Params_Data)");
class  Geolocation_QueryNextPosition_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Geolocation_QueryNextPosition_Params_Data));
      new (data()) Geolocation_QueryNextPosition_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Geolocation_QueryNextPosition_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Geolocation_QueryNextPosition_Params_Data>(index_);
    }
    Geolocation_QueryNextPosition_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Geolocation_QueryNextPosition_Params_Data();
  ~Geolocation_QueryNextPosition_Params_Data() = delete;
};
static_assert(sizeof(Geolocation_QueryNextPosition_Params_Data) == 8,
              "Bad sizeof(Geolocation_QueryNextPosition_Params_Data)");
class  Geolocation_QueryNextPosition_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Geolocation_QueryNextPosition_ResponseParams_Data));
      new (data()) Geolocation_QueryNextPosition_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Geolocation_QueryNextPosition_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Geolocation_QueryNextPosition_ResponseParams_Data>(index_);
    }
    Geolocation_QueryNextPosition_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::device::mojom::internal::Geoposition_Data> geoposition;

 private:
  Geolocation_QueryNextPosition_ResponseParams_Data();
  ~Geolocation_QueryNextPosition_ResponseParams_Data() = delete;
};
static_assert(sizeof(Geolocation_QueryNextPosition_ResponseParams_Data) == 16,
              "Bad sizeof(Geolocation_QueryNextPosition_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_SHARED_INTERNAL_H_