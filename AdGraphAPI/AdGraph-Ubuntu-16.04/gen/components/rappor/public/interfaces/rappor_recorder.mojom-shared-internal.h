// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_RAPPOR_PUBLIC_INTERFACES_RAPPOR_RECORDER_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_RAPPOR_PUBLIC_INTERFACES_RAPPOR_RECORDER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace rappor {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  RapporRecorder_RecordRappor_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RapporRecorder_RecordRappor_Params_Data));
      new (data()) RapporRecorder_RecordRappor_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RapporRecorder_RecordRappor_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RapporRecorder_RecordRappor_Params_Data>(index_);
    }
    RapporRecorder_RecordRappor_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> metric;
  mojo::internal::Pointer<mojo::internal::String_Data> sample;

 private:
  RapporRecorder_RecordRappor_Params_Data();
  ~RapporRecorder_RecordRappor_Params_Data() = delete;
};
static_assert(sizeof(RapporRecorder_RecordRappor_Params_Data) == 24,
              "Bad sizeof(RapporRecorder_RecordRappor_Params_Data)");
class  RapporRecorder_RecordRapporURL_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RapporRecorder_RecordRapporURL_Params_Data));
      new (data()) RapporRecorder_RecordRapporURL_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RapporRecorder_RecordRapporURL_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RapporRecorder_RecordRapporURL_Params_Data>(index_);
    }
    RapporRecorder_RecordRapporURL_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> metric;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;

 private:
  RapporRecorder_RecordRapporURL_Params_Data();
  ~RapporRecorder_RecordRapporURL_Params_Data() = delete;
};
static_assert(sizeof(RapporRecorder_RecordRapporURL_Params_Data) == 24,
              "Bad sizeof(RapporRecorder_RecordRapporURL_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace rappor

#endif  // COMPONENTS_RAPPOR_PUBLIC_INTERFACES_RAPPOR_RECORDER_MOJOM_SHARED_INTERNAL_H_