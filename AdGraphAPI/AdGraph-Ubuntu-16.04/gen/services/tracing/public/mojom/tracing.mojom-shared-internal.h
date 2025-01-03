// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "mojo/public/mojom/base/values.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace tracing {
namespace mojom {
namespace internal {

struct TraceDataType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) AgentRegistry_RegisterAgent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AgentRegistry_RegisterAgent_Params_Data));
      new (data()) AgentRegistry_RegisterAgent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AgentRegistry_RegisterAgent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AgentRegistry_RegisterAgent_Params_Data>(index_);
    }
    AgentRegistry_RegisterAgent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data agent;
  mojo::internal::Pointer<mojo::internal::String_Data> label;
  int32_t type;
  uint8_t supports_explicit_clock_sync_ : 1;
  uint8_t padfinal_[3];

 private:
  AgentRegistry_RegisterAgent_Params_Data();
  ~AgentRegistry_RegisterAgent_Params_Data() = delete;
};
static_assert(sizeof(AgentRegistry_RegisterAgent_Params_Data) == 32,
              "Bad sizeof(AgentRegistry_RegisterAgent_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Agent_StartTracing_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Agent_StartTracing_Params_Data));
      new (data()) Agent_StartTracing_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Agent_StartTracing_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Agent_StartTracing_Params_Data>(index_);
    }
    Agent_StartTracing_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> config;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> coordinator_time;

 private:
  Agent_StartTracing_Params_Data();
  ~Agent_StartTracing_Params_Data() = delete;
};
static_assert(sizeof(Agent_StartTracing_Params_Data) == 24,
              "Bad sizeof(Agent_StartTracing_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Agent_StartTracing_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Agent_StartTracing_ResponseParams_Data));
      new (data()) Agent_StartTracing_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Agent_StartTracing_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Agent_StartTracing_ResponseParams_Data>(index_);
    }
    Agent_StartTracing_ResponseParams_Data* operator->() { return data(); }

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
  Agent_StartTracing_ResponseParams_Data();
  ~Agent_StartTracing_ResponseParams_Data() = delete;
};
static_assert(sizeof(Agent_StartTracing_ResponseParams_Data) == 16,
              "Bad sizeof(Agent_StartTracing_ResponseParams_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Agent_StopAndFlush_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Agent_StopAndFlush_Params_Data));
      new (data()) Agent_StopAndFlush_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Agent_StopAndFlush_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Agent_StopAndFlush_Params_Data>(index_);
    }
    Agent_StopAndFlush_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data recorder;

 private:
  Agent_StopAndFlush_Params_Data();
  ~Agent_StopAndFlush_Params_Data() = delete;
};
static_assert(sizeof(Agent_StopAndFlush_Params_Data) == 16,
              "Bad sizeof(Agent_StopAndFlush_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Agent_RequestClockSyncMarker_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Agent_RequestClockSyncMarker_Params_Data));
      new (data()) Agent_RequestClockSyncMarker_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Agent_RequestClockSyncMarker_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Agent_RequestClockSyncMarker_Params_Data>(index_);
    }
    Agent_RequestClockSyncMarker_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> sync_id;

 private:
  Agent_RequestClockSyncMarker_Params_Data();
  ~Agent_RequestClockSyncMarker_Params_Data() = delete;
};
static_assert(sizeof(Agent_RequestClockSyncMarker_Params_Data) == 16,
              "Bad sizeof(Agent_RequestClockSyncMarker_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Agent_RequestClockSyncMarker_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Agent_RequestClockSyncMarker_ResponseParams_Data));
      new (data()) Agent_RequestClockSyncMarker_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Agent_RequestClockSyncMarker_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Agent_RequestClockSyncMarker_ResponseParams_Data>(index_);
    }
    Agent_RequestClockSyncMarker_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> issue_ts;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> issue_end_ts;

 private:
  Agent_RequestClockSyncMarker_ResponseParams_Data();
  ~Agent_RequestClockSyncMarker_ResponseParams_Data() = delete;
};
static_assert(sizeof(Agent_RequestClockSyncMarker_ResponseParams_Data) == 24,
              "Bad sizeof(Agent_RequestClockSyncMarker_ResponseParams_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Agent_RequestBufferStatus_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Agent_RequestBufferStatus_Params_Data));
      new (data()) Agent_RequestBufferStatus_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Agent_RequestBufferStatus_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Agent_RequestBufferStatus_Params_Data>(index_);
    }
    Agent_RequestBufferStatus_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Agent_RequestBufferStatus_Params_Data();
  ~Agent_RequestBufferStatus_Params_Data() = delete;
};
static_assert(sizeof(Agent_RequestBufferStatus_Params_Data) == 8,
              "Bad sizeof(Agent_RequestBufferStatus_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Agent_RequestBufferStatus_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Agent_RequestBufferStatus_ResponseParams_Data));
      new (data()) Agent_RequestBufferStatus_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Agent_RequestBufferStatus_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Agent_RequestBufferStatus_ResponseParams_Data>(index_);
    }
    Agent_RequestBufferStatus_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t capacity;
  uint32_t count;

 private:
  Agent_RequestBufferStatus_ResponseParams_Data();
  ~Agent_RequestBufferStatus_ResponseParams_Data() = delete;
};
static_assert(sizeof(Agent_RequestBufferStatus_ResponseParams_Data) == 16,
              "Bad sizeof(Agent_RequestBufferStatus_ResponseParams_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Agent_GetCategories_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Agent_GetCategories_Params_Data));
      new (data()) Agent_GetCategories_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Agent_GetCategories_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Agent_GetCategories_Params_Data>(index_);
    }
    Agent_GetCategories_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Agent_GetCategories_Params_Data();
  ~Agent_GetCategories_Params_Data() = delete;
};
static_assert(sizeof(Agent_GetCategories_Params_Data) == 8,
              "Bad sizeof(Agent_GetCategories_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Agent_GetCategories_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Agent_GetCategories_ResponseParams_Data));
      new (data()) Agent_GetCategories_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Agent_GetCategories_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Agent_GetCategories_ResponseParams_Data>(index_);
    }
    Agent_GetCategories_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> categories;

 private:
  Agent_GetCategories_ResponseParams_Data();
  ~Agent_GetCategories_ResponseParams_Data() = delete;
};
static_assert(sizeof(Agent_GetCategories_ResponseParams_Data) == 16,
              "Bad sizeof(Agent_GetCategories_ResponseParams_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Recorder_AddChunk_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Recorder_AddChunk_Params_Data));
      new (data()) Recorder_AddChunk_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Recorder_AddChunk_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Recorder_AddChunk_Params_Data>(index_);
    }
    Recorder_AddChunk_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> chunk;

 private:
  Recorder_AddChunk_Params_Data();
  ~Recorder_AddChunk_Params_Data() = delete;
};
static_assert(sizeof(Recorder_AddChunk_Params_Data) == 16,
              "Bad sizeof(Recorder_AddChunk_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Recorder_AddMetadata_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Recorder_AddMetadata_Params_Data));
      new (data()) Recorder_AddMetadata_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Recorder_AddMetadata_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Recorder_AddMetadata_Params_Data>(index_);
    }
    Recorder_AddMetadata_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::DictionaryValue_Data> metadata;

 private:
  Recorder_AddMetadata_Params_Data();
  ~Recorder_AddMetadata_Params_Data() = delete;
};
static_assert(sizeof(Recorder_AddMetadata_Params_Data) == 16,
              "Bad sizeof(Recorder_AddMetadata_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Coordinator_StartTracing_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_StartTracing_Params_Data));
      new (data()) Coordinator_StartTracing_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_StartTracing_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_StartTracing_Params_Data>(index_);
    }
    Coordinator_StartTracing_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> config;

 private:
  Coordinator_StartTracing_Params_Data();
  ~Coordinator_StartTracing_Params_Data() = delete;
};
static_assert(sizeof(Coordinator_StartTracing_Params_Data) == 16,
              "Bad sizeof(Coordinator_StartTracing_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Coordinator_StartTracing_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_StartTracing_ResponseParams_Data));
      new (data()) Coordinator_StartTracing_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_StartTracing_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_StartTracing_ResponseParams_Data>(index_);
    }
    Coordinator_StartTracing_ResponseParams_Data* operator->() { return data(); }

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
  Coordinator_StartTracing_ResponseParams_Data();
  ~Coordinator_StartTracing_ResponseParams_Data() = delete;
};
static_assert(sizeof(Coordinator_StartTracing_ResponseParams_Data) == 16,
              "Bad sizeof(Coordinator_StartTracing_ResponseParams_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Coordinator_StopAndFlush_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_StopAndFlush_Params_Data));
      new (data()) Coordinator_StopAndFlush_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_StopAndFlush_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_StopAndFlush_Params_Data>(index_);
    }
    Coordinator_StopAndFlush_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data stream;
  uint8_t padfinal_[4];

 private:
  Coordinator_StopAndFlush_Params_Data();
  ~Coordinator_StopAndFlush_Params_Data() = delete;
};
static_assert(sizeof(Coordinator_StopAndFlush_Params_Data) == 16,
              "Bad sizeof(Coordinator_StopAndFlush_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Coordinator_StopAndFlush_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_StopAndFlush_ResponseParams_Data));
      new (data()) Coordinator_StopAndFlush_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_StopAndFlush_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_StopAndFlush_ResponseParams_Data>(index_);
    }
    Coordinator_StopAndFlush_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::DictionaryValue_Data> metadata;

 private:
  Coordinator_StopAndFlush_ResponseParams_Data();
  ~Coordinator_StopAndFlush_ResponseParams_Data() = delete;
};
static_assert(sizeof(Coordinator_StopAndFlush_ResponseParams_Data) == 16,
              "Bad sizeof(Coordinator_StopAndFlush_ResponseParams_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Coordinator_StopAndFlushAgent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_StopAndFlushAgent_Params_Data));
      new (data()) Coordinator_StopAndFlushAgent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_StopAndFlushAgent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_StopAndFlushAgent_Params_Data>(index_);
    }
    Coordinator_StopAndFlushAgent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data stream;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> agent_label;

 private:
  Coordinator_StopAndFlushAgent_Params_Data();
  ~Coordinator_StopAndFlushAgent_Params_Data() = delete;
};
static_assert(sizeof(Coordinator_StopAndFlushAgent_Params_Data) == 24,
              "Bad sizeof(Coordinator_StopAndFlushAgent_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Coordinator_StopAndFlushAgent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_StopAndFlushAgent_ResponseParams_Data));
      new (data()) Coordinator_StopAndFlushAgent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_StopAndFlushAgent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_StopAndFlushAgent_ResponseParams_Data>(index_);
    }
    Coordinator_StopAndFlushAgent_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::DictionaryValue_Data> metadata;

 private:
  Coordinator_StopAndFlushAgent_ResponseParams_Data();
  ~Coordinator_StopAndFlushAgent_ResponseParams_Data() = delete;
};
static_assert(sizeof(Coordinator_StopAndFlushAgent_ResponseParams_Data) == 16,
              "Bad sizeof(Coordinator_StopAndFlushAgent_ResponseParams_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Coordinator_IsTracing_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_IsTracing_Params_Data));
      new (data()) Coordinator_IsTracing_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_IsTracing_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_IsTracing_Params_Data>(index_);
    }
    Coordinator_IsTracing_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Coordinator_IsTracing_Params_Data();
  ~Coordinator_IsTracing_Params_Data() = delete;
};
static_assert(sizeof(Coordinator_IsTracing_Params_Data) == 8,
              "Bad sizeof(Coordinator_IsTracing_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Coordinator_IsTracing_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_IsTracing_ResponseParams_Data));
      new (data()) Coordinator_IsTracing_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_IsTracing_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_IsTracing_ResponseParams_Data>(index_);
    }
    Coordinator_IsTracing_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t is_tracing : 1;
  uint8_t padfinal_[7];

 private:
  Coordinator_IsTracing_ResponseParams_Data();
  ~Coordinator_IsTracing_ResponseParams_Data() = delete;
};
static_assert(sizeof(Coordinator_IsTracing_ResponseParams_Data) == 16,
              "Bad sizeof(Coordinator_IsTracing_ResponseParams_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Coordinator_RequestBufferUsage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_RequestBufferUsage_Params_Data));
      new (data()) Coordinator_RequestBufferUsage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_RequestBufferUsage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_RequestBufferUsage_Params_Data>(index_);
    }
    Coordinator_RequestBufferUsage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Coordinator_RequestBufferUsage_Params_Data();
  ~Coordinator_RequestBufferUsage_Params_Data() = delete;
};
static_assert(sizeof(Coordinator_RequestBufferUsage_Params_Data) == 8,
              "Bad sizeof(Coordinator_RequestBufferUsage_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Coordinator_RequestBufferUsage_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_RequestBufferUsage_ResponseParams_Data));
      new (data()) Coordinator_RequestBufferUsage_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_RequestBufferUsage_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_RequestBufferUsage_ResponseParams_Data>(index_);
    }
    Coordinator_RequestBufferUsage_ResponseParams_Data* operator->() { return data(); }

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
  float percent_full;
  uint32_t approximate_count;
  uint8_t padfinal_[4];

 private:
  Coordinator_RequestBufferUsage_ResponseParams_Data();
  ~Coordinator_RequestBufferUsage_ResponseParams_Data() = delete;
};
static_assert(sizeof(Coordinator_RequestBufferUsage_ResponseParams_Data) == 24,
              "Bad sizeof(Coordinator_RequestBufferUsage_ResponseParams_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Coordinator_GetCategories_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_GetCategories_Params_Data));
      new (data()) Coordinator_GetCategories_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_GetCategories_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_GetCategories_Params_Data>(index_);
    }
    Coordinator_GetCategories_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Coordinator_GetCategories_Params_Data();
  ~Coordinator_GetCategories_Params_Data() = delete;
};
static_assert(sizeof(Coordinator_GetCategories_Params_Data) == 8,
              "Bad sizeof(Coordinator_GetCategories_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) Coordinator_GetCategories_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Coordinator_GetCategories_ResponseParams_Data));
      new (data()) Coordinator_GetCategories_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Coordinator_GetCategories_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Coordinator_GetCategories_ResponseParams_Data>(index_);
    }
    Coordinator_GetCategories_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::String_Data> categories;

 private:
  Coordinator_GetCategories_ResponseParams_Data();
  ~Coordinator_GetCategories_ResponseParams_Data() = delete;
};
static_assert(sizeof(Coordinator_GetCategories_ResponseParams_Data) == 24,
              "Bad sizeof(Coordinator_GetCategories_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace tracing

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_SHARED_INTERNAL_H_