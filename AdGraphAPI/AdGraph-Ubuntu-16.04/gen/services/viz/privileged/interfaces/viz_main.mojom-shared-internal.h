// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_VIZ_MAIN_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_VIZ_MAIN_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "components/discardable_memory/public/interfaces/discardable_shared_memory_manager.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/compositing_mode_watcher.mojom-shared-internal.h"
#include "services/viz/privileged/interfaces/compositing/frame_sink_manager.mojom-shared-internal.h"
#include "services/viz/privileged/interfaces/gl/gpu_host.mojom-shared-internal.h"
#include "services/viz/privileged/interfaces/gl/gpu_service.mojom-shared-internal.h"
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
class FrameSinkManagerParams_Data;

#pragma pack(push, 1)
class  FrameSinkManagerParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameSinkManagerParams_Data));
      new (data()) FrameSinkManagerParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameSinkManagerParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameSinkManagerParams_Data>(index_);
    }
    FrameSinkManagerParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t restart_id;
  uint8_t use_activation_deadline : 1;
  uint8_t pad1_[3];
  uint32_t activation_deadline_in_frames;
  mojo::internal::Handle_Data frame_sink_manager;
  mojo::internal::Interface_Data frame_sink_manager_client;

 private:
  FrameSinkManagerParams_Data();
  ~FrameSinkManagerParams_Data() = delete;
};
static_assert(sizeof(FrameSinkManagerParams_Data) == 32,
              "Bad sizeof(FrameSinkManagerParams_Data)");
// Used by FrameSinkManagerParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct FrameSinkManagerParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  FrameSinkManagerParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~FrameSinkManagerParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    FrameSinkManagerParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    FrameSinkManagerParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  VizMain_CreateFrameSinkManager_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VizMain_CreateFrameSinkManager_Params_Data));
      new (data()) VizMain_CreateFrameSinkManager_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VizMain_CreateFrameSinkManager_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VizMain_CreateFrameSinkManager_Params_Data>(index_);
    }
    VizMain_CreateFrameSinkManager_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::FrameSinkManagerParams_Data> params;

 private:
  VizMain_CreateFrameSinkManager_Params_Data();
  ~VizMain_CreateFrameSinkManager_Params_Data() = delete;
};
static_assert(sizeof(VizMain_CreateFrameSinkManager_Params_Data) == 16,
              "Bad sizeof(VizMain_CreateFrameSinkManager_Params_Data)");
class  VizMain_CreateGpuService_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VizMain_CreateGpuService_Params_Data));
      new (data()) VizMain_CreateGpuService_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VizMain_CreateGpuService_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VizMain_CreateGpuService_Params_Data>(index_);
    }
    VizMain_CreateGpuService_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data gpu_service;
  mojo::internal::Interface_Data gpu_host;
  mojo::internal::Interface_Data discardable_memory_manager;
  mojo::internal::Handle_Data activity_flags;

 private:
  VizMain_CreateGpuService_Params_Data();
  ~VizMain_CreateGpuService_Params_Data() = delete;
};
static_assert(sizeof(VizMain_CreateGpuService_Params_Data) == 32,
              "Bad sizeof(VizMain_CreateGpuService_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_VIZ_MAIN_MOJOM_SHARED_INTERNAL_H_