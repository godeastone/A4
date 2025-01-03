// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_SHARED_INTERNAL_H_

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
namespace heap_profiling {
namespace mojom {
namespace internal {
class ProfilingParams_Data;

struct StackMode_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
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
class  ProfilingParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfilingParams_Data));
      new (data()) ProfilingParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfilingParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfilingParams_Data>(index_);
    }
    ProfilingParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data sender_pipe;
  int32_t stack_mode;
  uint32_t sampling_rate;
  uint8_t padfinal_[4];

 private:
  ProfilingParams_Data();
  ~ProfilingParams_Data() = delete;
};
static_assert(sizeof(ProfilingParams_Data) == 24,
              "Bad sizeof(ProfilingParams_Data)");
// Used by ProfilingParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ProfilingParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ProfilingParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ProfilingParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ProfilingParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ProfilingParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ProfilingClient_StartProfiling_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfilingClient_StartProfiling_Params_Data));
      new (data()) ProfilingClient_StartProfiling_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfilingClient_StartProfiling_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfilingClient_StartProfiling_Params_Data>(index_);
    }
    ProfilingClient_StartProfiling_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ProfilingParams_Data> params;

 private:
  ProfilingClient_StartProfiling_Params_Data();
  ~ProfilingClient_StartProfiling_Params_Data() = delete;
};
static_assert(sizeof(ProfilingClient_StartProfiling_Params_Data) == 16,
              "Bad sizeof(ProfilingClient_StartProfiling_Params_Data)");
class  ProfilingClient_FlushMemlogPipe_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfilingClient_FlushMemlogPipe_Params_Data));
      new (data()) ProfilingClient_FlushMemlogPipe_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfilingClient_FlushMemlogPipe_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfilingClient_FlushMemlogPipe_Params_Data>(index_);
    }
    ProfilingClient_FlushMemlogPipe_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t barrier_id;
  uint8_t padfinal_[4];

 private:
  ProfilingClient_FlushMemlogPipe_Params_Data();
  ~ProfilingClient_FlushMemlogPipe_Params_Data() = delete;
};
static_assert(sizeof(ProfilingClient_FlushMemlogPipe_Params_Data) == 16,
              "Bad sizeof(ProfilingClient_FlushMemlogPipe_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace heap_profiling

#endif  // COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_SHARED_INTERNAL_H_