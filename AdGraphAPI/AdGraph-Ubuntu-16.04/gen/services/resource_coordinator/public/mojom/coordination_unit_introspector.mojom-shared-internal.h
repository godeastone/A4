// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_INTROSPECTOR_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_INTROSPECTOR_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/resource_coordinator/public/mojom/coordination_unit.mojom-shared-internal.h"
#include "mojo/public/mojom/base/process_id.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace resource_coordinator {
namespace mojom {
namespace internal {
class PageInfo_Data;
class ProcessInfo_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) PageInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PageInfo_Data));
      new (data()) PageInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PageInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PageInfo_Data>(index_);
    }
    PageInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t ukm_source_id;
  uint8_t is_visible : 1;
  uint8_t pad1_[7];
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> time_since_last_navigation;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> time_since_last_visibility_change;

 private:
  PageInfo_Data();
  ~PageInfo_Data() = delete;
};
static_assert(sizeof(PageInfo_Data) == 40,
              "Bad sizeof(PageInfo_Data)");
// Used by PageInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PageInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PageInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PageInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PageInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PageInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) ProcessInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProcessInfo_Data));
      new (data()) ProcessInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProcessInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProcessInfo_Data>(index_);
    }
    ProcessInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::ProcessId_Data> pid;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PageInfo_Data>>> page_infos;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> launch_time;

 private:
  ProcessInfo_Data();
  ~ProcessInfo_Data() = delete;
};
static_assert(sizeof(ProcessInfo_Data) == 32,
              "Bad sizeof(ProcessInfo_Data)");
// Used by ProcessInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ProcessInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ProcessInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ProcessInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ProcessInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ProcessInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) CoordinationUnitIntrospector_GetProcessToURLMap_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CoordinationUnitIntrospector_GetProcessToURLMap_Params_Data));
      new (data()) CoordinationUnitIntrospector_GetProcessToURLMap_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CoordinationUnitIntrospector_GetProcessToURLMap_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CoordinationUnitIntrospector_GetProcessToURLMap_Params_Data>(index_);
    }
    CoordinationUnitIntrospector_GetProcessToURLMap_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CoordinationUnitIntrospector_GetProcessToURLMap_Params_Data();
  ~CoordinationUnitIntrospector_GetProcessToURLMap_Params_Data() = delete;
};
static_assert(sizeof(CoordinationUnitIntrospector_GetProcessToURLMap_Params_Data) == 8,
              "Bad sizeof(CoordinationUnitIntrospector_GetProcessToURLMap_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams_Data));
      new (data()) CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams_Data>(index_);
    }
    CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ProcessInfo_Data>>> process_infos;

 private:
  CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams_Data();
  ~CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams_Data() = delete;
};
static_assert(sizeof(CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams_Data) == 16,
              "Bad sizeof(CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace resource_coordinator

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_INTROSPECTOR_MOJOM_SHARED_INTERNAL_H_