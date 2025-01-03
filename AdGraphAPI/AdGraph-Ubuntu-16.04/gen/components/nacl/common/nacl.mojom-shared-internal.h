// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_NACL_COMMON_NACL_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_NACL_COMMON_NACL_MOJOM_SHARED_INTERNAL_H_

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
namespace nacl {
namespace mojom {
namespace internal {
using NaClErrorCode_Data =
    mojo::internal::NativeEnum_Data;

#pragma pack(push, 1)
class  NaClRendererHost_ReportExitStatus_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NaClRendererHost_ReportExitStatus_Params_Data));
      new (data()) NaClRendererHost_ReportExitStatus_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NaClRendererHost_ReportExitStatus_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NaClRendererHost_ReportExitStatus_Params_Data>(index_);
    }
    NaClRendererHost_ReportExitStatus_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t exit_status;
  uint8_t padfinal_[4];

 private:
  NaClRendererHost_ReportExitStatus_Params_Data();
  ~NaClRendererHost_ReportExitStatus_Params_Data() = delete;
};
static_assert(sizeof(NaClRendererHost_ReportExitStatus_Params_Data) == 16,
              "Bad sizeof(NaClRendererHost_ReportExitStatus_Params_Data)");
class  NaClRendererHost_ReportExitStatus_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NaClRendererHost_ReportExitStatus_ResponseParams_Data));
      new (data()) NaClRendererHost_ReportExitStatus_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NaClRendererHost_ReportExitStatus_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NaClRendererHost_ReportExitStatus_ResponseParams_Data>(index_);
    }
    NaClRendererHost_ReportExitStatus_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NaClRendererHost_ReportExitStatus_ResponseParams_Data();
  ~NaClRendererHost_ReportExitStatus_ResponseParams_Data() = delete;
};
static_assert(sizeof(NaClRendererHost_ReportExitStatus_ResponseParams_Data) == 8,
              "Bad sizeof(NaClRendererHost_ReportExitStatus_ResponseParams_Data)");
class  NaClRendererHost_ReportLoadStatus_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NaClRendererHost_ReportLoadStatus_Params_Data));
      new (data()) NaClRendererHost_ReportLoadStatus_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NaClRendererHost_ReportLoadStatus_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NaClRendererHost_ReportLoadStatus_Params_Data>(index_);
    }
    NaClRendererHost_ReportLoadStatus_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t load_status;
  uint8_t padfinal_[4];

 private:
  NaClRendererHost_ReportLoadStatus_Params_Data();
  ~NaClRendererHost_ReportLoadStatus_Params_Data() = delete;
};
static_assert(sizeof(NaClRendererHost_ReportLoadStatus_Params_Data) == 16,
              "Bad sizeof(NaClRendererHost_ReportLoadStatus_Params_Data)");
class  NaClRendererHost_ReportLoadStatus_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NaClRendererHost_ReportLoadStatus_ResponseParams_Data));
      new (data()) NaClRendererHost_ReportLoadStatus_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NaClRendererHost_ReportLoadStatus_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NaClRendererHost_ReportLoadStatus_ResponseParams_Data>(index_);
    }
    NaClRendererHost_ReportLoadStatus_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NaClRendererHost_ReportLoadStatus_ResponseParams_Data();
  ~NaClRendererHost_ReportLoadStatus_ResponseParams_Data() = delete;
};
static_assert(sizeof(NaClRendererHost_ReportLoadStatus_ResponseParams_Data) == 8,
              "Bad sizeof(NaClRendererHost_ReportLoadStatus_ResponseParams_Data)");
class  NaClRendererHost_ProvideExitControl_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NaClRendererHost_ProvideExitControl_Params_Data));
      new (data()) NaClRendererHost_ProvideExitControl_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NaClRendererHost_ProvideExitControl_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NaClRendererHost_ProvideExitControl_Params_Data>(index_);
    }
    NaClRendererHost_ProvideExitControl_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data exit_control;

 private:
  NaClRendererHost_ProvideExitControl_Params_Data();
  ~NaClRendererHost_ProvideExitControl_Params_Data() = delete;
};
static_assert(sizeof(NaClRendererHost_ProvideExitControl_Params_Data) == 16,
              "Bad sizeof(NaClRendererHost_ProvideExitControl_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace nacl

#endif  // COMPONENTS_NACL_COMMON_NACL_MOJOM_SHARED_INTERNAL_H_