// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_EXTERNAL_BEGIN_FRAME_CONTROLLER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_EXTERNAL_BEGIN_FRAME_CONTROLLER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/viz/public/interfaces/compositing/begin_frame_args.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace viz {
namespace mojom {
namespace internal {

#pragma pack(push, 1)
class  ExternalBeginFrameController_IssueExternalBeginFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ExternalBeginFrameController_IssueExternalBeginFrame_Params_Data));
      new (data()) ExternalBeginFrameController_IssueExternalBeginFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ExternalBeginFrameController_IssueExternalBeginFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ExternalBeginFrameController_IssueExternalBeginFrame_Params_Data>(index_);
    }
    ExternalBeginFrameController_IssueExternalBeginFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::BeginFrameArgs_Data> args;

 private:
  ExternalBeginFrameController_IssueExternalBeginFrame_Params_Data();
  ~ExternalBeginFrameController_IssueExternalBeginFrame_Params_Data() = delete;
};
static_assert(sizeof(ExternalBeginFrameController_IssueExternalBeginFrame_Params_Data) == 16,
              "Bad sizeof(ExternalBeginFrameController_IssueExternalBeginFrame_Params_Data)");
class  ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params_Data));
      new (data()) ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params_Data>(index_);
    }
    ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t needs_begin_frames : 1;
  uint8_t padfinal_[7];

 private:
  ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params_Data();
  ~ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params_Data() = delete;
};
static_assert(sizeof(ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params_Data) == 16,
              "Bad sizeof(ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params_Data)");
class  ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params_Data));
      new (data()) ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params_Data>(index_);
    }
    ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::BeginFrameAck_Data> ack;

 private:
  ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params_Data();
  ~ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params_Data() = delete;
};
static_assert(sizeof(ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params_Data) == 16,
              "Bad sizeof(ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_EXTERNAL_BEGIN_FRAME_CONTROLLER_MOJOM_SHARED_INTERNAL_H_