// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
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
class ChunksToMove_Data;
class ChunkPatch_Data;
class ChunksToPatch_Data;
class CommitDataRequest_Data;
class DataSourceConfig_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) ChunksToMove_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ChunksToMove_Data));
      new (data()) ChunksToMove_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ChunksToMove_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ChunksToMove_Data>(index_);
    }
    ChunksToMove_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t page;
  uint32_t chunk;
  uint32_t target_buffer;
  uint8_t padfinal_[4];

 private:
  ChunksToMove_Data();
  ~ChunksToMove_Data() = delete;
};
static_assert(sizeof(ChunksToMove_Data) == 24,
              "Bad sizeof(ChunksToMove_Data)");
// Used by ChunksToMove::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ChunksToMove_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ChunksToMove_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ChunksToMove_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ChunksToMove_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ChunksToMove_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) ChunkPatch_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ChunkPatch_Data));
      new (data()) ChunkPatch_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ChunkPatch_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ChunkPatch_Data>(index_);
    }
    ChunkPatch_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t offset;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> data;

 private:
  ChunkPatch_Data();
  ~ChunkPatch_Data() = delete;
};
static_assert(sizeof(ChunkPatch_Data) == 24,
              "Bad sizeof(ChunkPatch_Data)");
// Used by ChunkPatch::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ChunkPatch_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ChunkPatch_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ChunkPatch_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ChunkPatch_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ChunkPatch_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) ChunksToPatch_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ChunksToPatch_Data));
      new (data()) ChunksToPatch_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ChunksToPatch_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ChunksToPatch_Data>(index_);
    }
    ChunksToPatch_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t target_buffer;
  uint32_t writer_id;
  uint32_t chunk_id;
  uint8_t has_more_patches : 1;
  uint8_t pad3_[3];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ChunkPatch_Data>>> patches;

 private:
  ChunksToPatch_Data();
  ~ChunksToPatch_Data() = delete;
};
static_assert(sizeof(ChunksToPatch_Data) == 32,
              "Bad sizeof(ChunksToPatch_Data)");
// Used by ChunksToPatch::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ChunksToPatch_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ChunksToPatch_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ChunksToPatch_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ChunksToPatch_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ChunksToPatch_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) CommitDataRequest_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CommitDataRequest_Data));
      new (data()) CommitDataRequest_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CommitDataRequest_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CommitDataRequest_Data>(index_);
    }
    CommitDataRequest_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ChunksToMove_Data>>> chunks_to_move;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ChunksToPatch_Data>>> chunks_to_patch;

 private:
  CommitDataRequest_Data();
  ~CommitDataRequest_Data() = delete;
};
static_assert(sizeof(CommitDataRequest_Data) == 24,
              "Bad sizeof(CommitDataRequest_Data)");
// Used by CommitDataRequest::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CommitDataRequest_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CommitDataRequest_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CommitDataRequest_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CommitDataRequest_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CommitDataRequest_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) DataSourceConfig_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DataSourceConfig_Data));
      new (data()) DataSourceConfig_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DataSourceConfig_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DataSourceConfig_Data>(index_);
    }
    DataSourceConfig_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::String_Data> trace_config;
  uint32_t target_buffer;
  uint8_t padfinal_[4];

 private:
  DataSourceConfig_Data();
  ~DataSourceConfig_Data() = delete;
};
static_assert(sizeof(DataSourceConfig_Data) == 32,
              "Bad sizeof(DataSourceConfig_Data)");
// Used by DataSourceConfig::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DataSourceConfig_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DataSourceConfig_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DataSourceConfig_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DataSourceConfig_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DataSourceConfig_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) ProducerHost_CommitData_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProducerHost_CommitData_Params_Data));
      new (data()) ProducerHost_CommitData_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProducerHost_CommitData_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProducerHost_CommitData_Params_Data>(index_);
    }
    ProducerHost_CommitData_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CommitDataRequest_Data> data_request;

 private:
  ProducerHost_CommitData_Params_Data();
  ~ProducerHost_CommitData_Params_Data() = delete;
};
static_assert(sizeof(ProducerHost_CommitData_Params_Data) == 16,
              "Bad sizeof(ProducerHost_CommitData_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) ProducerClient_OnTracingStart_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProducerClient_OnTracingStart_Params_Data));
      new (data()) ProducerClient_OnTracingStart_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProducerClient_OnTracingStart_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProducerClient_OnTracingStart_Params_Data>(index_);
    }
    ProducerClient_OnTracingStart_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data shared_memory;
  uint8_t padfinal_[4];

 private:
  ProducerClient_OnTracingStart_Params_Data();
  ~ProducerClient_OnTracingStart_Params_Data() = delete;
};
static_assert(sizeof(ProducerClient_OnTracingStart_Params_Data) == 16,
              "Bad sizeof(ProducerClient_OnTracingStart_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) ProducerClient_CreateDataSourceInstance_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProducerClient_CreateDataSourceInstance_Params_Data));
      new (data()) ProducerClient_CreateDataSourceInstance_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProducerClient_CreateDataSourceInstance_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProducerClient_CreateDataSourceInstance_Params_Data>(index_);
    }
    ProducerClient_CreateDataSourceInstance_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t id;
  mojo::internal::Pointer<internal::DataSourceConfig_Data> data_source_config;

 private:
  ProducerClient_CreateDataSourceInstance_Params_Data();
  ~ProducerClient_CreateDataSourceInstance_Params_Data() = delete;
};
static_assert(sizeof(ProducerClient_CreateDataSourceInstance_Params_Data) == 24,
              "Bad sizeof(ProducerClient_CreateDataSourceInstance_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) ProducerClient_TearDownDataSourceInstance_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProducerClient_TearDownDataSourceInstance_Params_Data));
      new (data()) ProducerClient_TearDownDataSourceInstance_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProducerClient_TearDownDataSourceInstance_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProducerClient_TearDownDataSourceInstance_Params_Data>(index_);
    }
    ProducerClient_TearDownDataSourceInstance_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t id;

 private:
  ProducerClient_TearDownDataSourceInstance_Params_Data();
  ~ProducerClient_TearDownDataSourceInstance_Params_Data() = delete;
};
static_assert(sizeof(ProducerClient_TearDownDataSourceInstance_Params_Data) == 16,
              "Bad sizeof(ProducerClient_TearDownDataSourceInstance_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) ProducerClient_Flush_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProducerClient_Flush_Params_Data));
      new (data()) ProducerClient_Flush_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProducerClient_Flush_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProducerClient_Flush_Params_Data>(index_);
    }
    ProducerClient_Flush_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t flush_request_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint64_t>> data_source_ids;

 private:
  ProducerClient_Flush_Params_Data();
  ~ProducerClient_Flush_Params_Data() = delete;
};
static_assert(sizeof(ProducerClient_Flush_Params_Data) == 24,
              "Bad sizeof(ProducerClient_Flush_Params_Data)");
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) PerfettoService_ConnectToProducerHost_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PerfettoService_ConnectToProducerHost_Params_Data));
      new (data()) PerfettoService_ConnectToProducerHost_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PerfettoService_ConnectToProducerHost_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PerfettoService_ConnectToProducerHost_Params_Data>(index_);
    }
    PerfettoService_ConnectToProducerHost_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data producer_client;
  mojo::internal::Handle_Data producer_host;
  uint8_t padfinal_[4];

 private:
  PerfettoService_ConnectToProducerHost_Params_Data();
  ~PerfettoService_ConnectToProducerHost_Params_Data() = delete;
};
static_assert(sizeof(PerfettoService_ConnectToProducerHost_Params_Data) == 24,
              "Bad sizeof(PerfettoService_ConnectToProducerHost_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace tracing

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_SHARED_INTERNAL_H_