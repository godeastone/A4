// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_SHARED_INTERNAL_H_

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
namespace metrics {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data));
      new (data()) SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data>(index_);
    }
    SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> histogram_name;
  int32_t min;
  int32_t max;
  uint32_t bucket_count;
  int32_t flags;
  mojo::internal::Handle_Data request;
  uint8_t padfinal_[4];

 private:
  SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data();
  ~SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data() = delete;
};
static_assert(sizeof(SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data) == 40,
              "Bad sizeof(SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data)");
class  SingleSampleMetric_SetSample_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SingleSampleMetric_SetSample_Params_Data));
      new (data()) SingleSampleMetric_SetSample_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SingleSampleMetric_SetSample_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SingleSampleMetric_SetSample_Params_Data>(index_);
    }
    SingleSampleMetric_SetSample_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t sample;
  uint8_t padfinal_[4];

 private:
  SingleSampleMetric_SetSample_Params_Data();
  ~SingleSampleMetric_SetSample_Params_Data() = delete;
};
static_assert(sizeof(SingleSampleMetric_SetSample_Params_Data) == 16,
              "Bad sizeof(SingleSampleMetric_SetSample_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace metrics

#endif  // COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_SHARED_INTERNAL_H_