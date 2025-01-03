// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_OUTPUT_PROTECTION_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_OUTPUT_PROTECTION_MOJOM_SHARED_INTERNAL_H_

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
namespace display {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  OutputProtection_QueryContentProtectionStatus_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(OutputProtection_QueryContentProtectionStatus_Params_Data));
      new (data()) OutputProtection_QueryContentProtectionStatus_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    OutputProtection_QueryContentProtectionStatus_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<OutputProtection_QueryContentProtectionStatus_Params_Data>(index_);
    }
    OutputProtection_QueryContentProtectionStatus_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t display_id;

 private:
  OutputProtection_QueryContentProtectionStatus_Params_Data();
  ~OutputProtection_QueryContentProtectionStatus_Params_Data() = delete;
};
static_assert(sizeof(OutputProtection_QueryContentProtectionStatus_Params_Data) == 16,
              "Bad sizeof(OutputProtection_QueryContentProtectionStatus_Params_Data)");
class  OutputProtection_QueryContentProtectionStatus_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(OutputProtection_QueryContentProtectionStatus_ResponseParams_Data));
      new (data()) OutputProtection_QueryContentProtectionStatus_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    OutputProtection_QueryContentProtectionStatus_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<OutputProtection_QueryContentProtectionStatus_ResponseParams_Data>(index_);
    }
    OutputProtection_QueryContentProtectionStatus_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[3];
  uint32_t link_mask;
  uint32_t protection_mask;
  uint8_t padfinal_[4];

 private:
  OutputProtection_QueryContentProtectionStatus_ResponseParams_Data();
  ~OutputProtection_QueryContentProtectionStatus_ResponseParams_Data() = delete;
};
static_assert(sizeof(OutputProtection_QueryContentProtectionStatus_ResponseParams_Data) == 24,
              "Bad sizeof(OutputProtection_QueryContentProtectionStatus_ResponseParams_Data)");
class  OutputProtection_SetContentProtection_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(OutputProtection_SetContentProtection_Params_Data));
      new (data()) OutputProtection_SetContentProtection_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    OutputProtection_SetContentProtection_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<OutputProtection_SetContentProtection_Params_Data>(index_);
    }
    OutputProtection_SetContentProtection_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t display_id;
  uint32_t desired_method_mask;
  uint8_t padfinal_[4];

 private:
  OutputProtection_SetContentProtection_Params_Data();
  ~OutputProtection_SetContentProtection_Params_Data() = delete;
};
static_assert(sizeof(OutputProtection_SetContentProtection_Params_Data) == 24,
              "Bad sizeof(OutputProtection_SetContentProtection_Params_Data)");
class  OutputProtection_SetContentProtection_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(OutputProtection_SetContentProtection_ResponseParams_Data));
      new (data()) OutputProtection_SetContentProtection_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    OutputProtection_SetContentProtection_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<OutputProtection_SetContentProtection_ResponseParams_Data>(index_);
    }
    OutputProtection_SetContentProtection_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  OutputProtection_SetContentProtection_ResponseParams_Data();
  ~OutputProtection_SetContentProtection_ResponseParams_Data() = delete;
};
static_assert(sizeof(OutputProtection_SetContentProtection_ResponseParams_Data) == 16,
              "Bad sizeof(OutputProtection_SetContentProtection_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace display

#endif  // SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_OUTPUT_PROTECTION_MOJOM_SHARED_INTERNAL_H_