// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_PROVIDER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_PROVIDER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/shape_detection/public/mojom/facedetection.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace shape_detection {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  FaceDetectionProvider_CreateFaceDetection_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FaceDetectionProvider_CreateFaceDetection_Params_Data));
      new (data()) FaceDetectionProvider_CreateFaceDetection_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FaceDetectionProvider_CreateFaceDetection_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FaceDetectionProvider_CreateFaceDetection_Params_Data>(index_);
    }
    FaceDetectionProvider_CreateFaceDetection_Params_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::shape_detection::mojom::internal::FaceDetectorOptions_Data> options;

 private:
  FaceDetectionProvider_CreateFaceDetection_Params_Data();
  ~FaceDetectionProvider_CreateFaceDetection_Params_Data() = delete;
};
static_assert(sizeof(FaceDetectionProvider_CreateFaceDetection_Params_Data) == 24,
              "Bad sizeof(FaceDetectionProvider_CreateFaceDetection_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace shape_detection

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_PROVIDER_MOJOM_SHARED_INTERNAL_H_