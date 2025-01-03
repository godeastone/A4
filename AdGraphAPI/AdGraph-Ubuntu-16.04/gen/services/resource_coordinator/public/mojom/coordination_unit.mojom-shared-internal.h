// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/process_id.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "services/resource_coordinator/public/mojom/lifecycle.mojom-shared-internal.h"
#include "services/resource_coordinator/public/mojom/signals.mojom-shared-internal.h"
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
class CoordinationUnitID_Data;
class ProcessResourceMeasurement_Data;
class ProcessResourceMeasurementBatch_Data;

struct CoordinationUnitType_Data {
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
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) CoordinationUnitID_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CoordinationUnitID_Data));
      new (data()) CoordinationUnitID_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CoordinationUnitID_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CoordinationUnitID_Data>(index_);
    }
    CoordinationUnitID_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t pad0_[4];
  int64_t id;

 private:
  CoordinationUnitID_Data();
  ~CoordinationUnitID_Data() = delete;
};
static_assert(sizeof(CoordinationUnitID_Data) == 24,
              "Bad sizeof(CoordinationUnitID_Data)");
// Used by CoordinationUnitID::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CoordinationUnitID_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CoordinationUnitID_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CoordinationUnitID_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CoordinationUnitID_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CoordinationUnitID_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) ProcessResourceMeasurement_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProcessResourceMeasurement_Data));
      new (data()) ProcessResourceMeasurement_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProcessResourceMeasurement_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProcessResourceMeasurement_Data>(index_);
    }
    ProcessResourceMeasurement_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::ProcessId_Data> pid;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> cpu_usage;
  uint32_t private_footprint_kb;
  uint8_t padfinal_[4];

 private:
  ProcessResourceMeasurement_Data();
  ~ProcessResourceMeasurement_Data() = delete;
};
static_assert(sizeof(ProcessResourceMeasurement_Data) == 32,
              "Bad sizeof(ProcessResourceMeasurement_Data)");
// Used by ProcessResourceMeasurement::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ProcessResourceMeasurement_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ProcessResourceMeasurement_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ProcessResourceMeasurement_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ProcessResourceMeasurement_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ProcessResourceMeasurement_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) ProcessResourceMeasurementBatch_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProcessResourceMeasurementBatch_Data));
      new (data()) ProcessResourceMeasurementBatch_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProcessResourceMeasurementBatch_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProcessResourceMeasurementBatch_Data>(index_);
    }
    ProcessResourceMeasurementBatch_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> batch_started_time;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> batch_ended_time;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ProcessResourceMeasurement_Data>>> measurements;

 private:
  ProcessResourceMeasurementBatch_Data();
  ~ProcessResourceMeasurementBatch_Data() = delete;
};
static_assert(sizeof(ProcessResourceMeasurementBatch_Data) == 32,
              "Bad sizeof(ProcessResourceMeasurementBatch_Data)");
// Used by ProcessResourceMeasurementBatch::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ProcessResourceMeasurementBatch_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ProcessResourceMeasurementBatch_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ProcessResourceMeasurementBatch_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ProcessResourceMeasurementBatch_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ProcessResourceMeasurementBatch_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) FrameCoordinationUnit_GetID_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameCoordinationUnit_GetID_Params_Data));
      new (data()) FrameCoordinationUnit_GetID_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameCoordinationUnit_GetID_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameCoordinationUnit_GetID_Params_Data>(index_);
    }
    FrameCoordinationUnit_GetID_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FrameCoordinationUnit_GetID_Params_Data();
  ~FrameCoordinationUnit_GetID_Params_Data() = delete;
};
static_assert(sizeof(FrameCoordinationUnit_GetID_Params_Data) == 8,
              "Bad sizeof(FrameCoordinationUnit_GetID_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) FrameCoordinationUnit_GetID_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameCoordinationUnit_GetID_ResponseParams_Data));
      new (data()) FrameCoordinationUnit_GetID_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameCoordinationUnit_GetID_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameCoordinationUnit_GetID_ResponseParams_Data>(index_);
    }
    FrameCoordinationUnit_GetID_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CoordinationUnitID_Data> id;

 private:
  FrameCoordinationUnit_GetID_ResponseParams_Data();
  ~FrameCoordinationUnit_GetID_ResponseParams_Data() = delete;
};
static_assert(sizeof(FrameCoordinationUnit_GetID_ResponseParams_Data) == 16,
              "Bad sizeof(FrameCoordinationUnit_GetID_ResponseParams_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) FrameCoordinationUnit_AddBinding_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameCoordinationUnit_AddBinding_Params_Data));
      new (data()) FrameCoordinationUnit_AddBinding_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameCoordinationUnit_AddBinding_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameCoordinationUnit_AddBinding_Params_Data>(index_);
    }
    FrameCoordinationUnit_AddBinding_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  uint8_t padfinal_[4];

 private:
  FrameCoordinationUnit_AddBinding_Params_Data();
  ~FrameCoordinationUnit_AddBinding_Params_Data() = delete;
};
static_assert(sizeof(FrameCoordinationUnit_AddBinding_Params_Data) == 16,
              "Bad sizeof(FrameCoordinationUnit_AddBinding_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) FrameCoordinationUnit_AddChildFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameCoordinationUnit_AddChildFrame_Params_Data));
      new (data()) FrameCoordinationUnit_AddChildFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameCoordinationUnit_AddChildFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameCoordinationUnit_AddChildFrame_Params_Data>(index_);
    }
    FrameCoordinationUnit_AddChildFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CoordinationUnitID_Data> cu_id;

 private:
  FrameCoordinationUnit_AddChildFrame_Params_Data();
  ~FrameCoordinationUnit_AddChildFrame_Params_Data() = delete;
};
static_assert(sizeof(FrameCoordinationUnit_AddChildFrame_Params_Data) == 16,
              "Bad sizeof(FrameCoordinationUnit_AddChildFrame_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) FrameCoordinationUnit_RemoveChildFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameCoordinationUnit_RemoveChildFrame_Params_Data));
      new (data()) FrameCoordinationUnit_RemoveChildFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameCoordinationUnit_RemoveChildFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameCoordinationUnit_RemoveChildFrame_Params_Data>(index_);
    }
    FrameCoordinationUnit_RemoveChildFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CoordinationUnitID_Data> cu_id;

 private:
  FrameCoordinationUnit_RemoveChildFrame_Params_Data();
  ~FrameCoordinationUnit_RemoveChildFrame_Params_Data() = delete;
};
static_assert(sizeof(FrameCoordinationUnit_RemoveChildFrame_Params_Data) == 16,
              "Bad sizeof(FrameCoordinationUnit_RemoveChildFrame_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) FrameCoordinationUnit_SetAudibility_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameCoordinationUnit_SetAudibility_Params_Data));
      new (data()) FrameCoordinationUnit_SetAudibility_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameCoordinationUnit_SetAudibility_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameCoordinationUnit_SetAudibility_Params_Data>(index_);
    }
    FrameCoordinationUnit_SetAudibility_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t audible : 1;
  uint8_t padfinal_[7];

 private:
  FrameCoordinationUnit_SetAudibility_Params_Data();
  ~FrameCoordinationUnit_SetAudibility_Params_Data() = delete;
};
static_assert(sizeof(FrameCoordinationUnit_SetAudibility_Params_Data) == 16,
              "Bad sizeof(FrameCoordinationUnit_SetAudibility_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) FrameCoordinationUnit_SetNetworkAlmostIdle_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameCoordinationUnit_SetNetworkAlmostIdle_Params_Data));
      new (data()) FrameCoordinationUnit_SetNetworkAlmostIdle_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameCoordinationUnit_SetNetworkAlmostIdle_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameCoordinationUnit_SetNetworkAlmostIdle_Params_Data>(index_);
    }
    FrameCoordinationUnit_SetNetworkAlmostIdle_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t idle : 1;
  uint8_t padfinal_[7];

 private:
  FrameCoordinationUnit_SetNetworkAlmostIdle_Params_Data();
  ~FrameCoordinationUnit_SetNetworkAlmostIdle_Params_Data() = delete;
};
static_assert(sizeof(FrameCoordinationUnit_SetNetworkAlmostIdle_Params_Data) == 16,
              "Bad sizeof(FrameCoordinationUnit_SetNetworkAlmostIdle_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) FrameCoordinationUnit_SetLifecycleState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameCoordinationUnit_SetLifecycleState_Params_Data));
      new (data()) FrameCoordinationUnit_SetLifecycleState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameCoordinationUnit_SetLifecycleState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameCoordinationUnit_SetLifecycleState_Params_Data>(index_);
    }
    FrameCoordinationUnit_SetLifecycleState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t state;
  uint8_t padfinal_[4];

 private:
  FrameCoordinationUnit_SetLifecycleState_Params_Data();
  ~FrameCoordinationUnit_SetLifecycleState_Params_Data() = delete;
};
static_assert(sizeof(FrameCoordinationUnit_SetLifecycleState_Params_Data) == 16,
              "Bad sizeof(FrameCoordinationUnit_SetLifecycleState_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) FrameCoordinationUnit_OnAlertFired_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameCoordinationUnit_OnAlertFired_Params_Data));
      new (data()) FrameCoordinationUnit_OnAlertFired_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameCoordinationUnit_OnAlertFired_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameCoordinationUnit_OnAlertFired_Params_Data>(index_);
    }
    FrameCoordinationUnit_OnAlertFired_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FrameCoordinationUnit_OnAlertFired_Params_Data();
  ~FrameCoordinationUnit_OnAlertFired_Params_Data() = delete;
};
static_assert(sizeof(FrameCoordinationUnit_OnAlertFired_Params_Data) == 8,
              "Bad sizeof(FrameCoordinationUnit_OnAlertFired_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data));
      new (data()) FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data>(index_);
    }
    FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data();
  ~FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data() = delete;
};
static_assert(sizeof(FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data) == 8,
              "Bad sizeof(FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) PageCoordinationUnit_GetID_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PageCoordinationUnit_GetID_Params_Data));
      new (data()) PageCoordinationUnit_GetID_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PageCoordinationUnit_GetID_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PageCoordinationUnit_GetID_Params_Data>(index_);
    }
    PageCoordinationUnit_GetID_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PageCoordinationUnit_GetID_Params_Data();
  ~PageCoordinationUnit_GetID_Params_Data() = delete;
};
static_assert(sizeof(PageCoordinationUnit_GetID_Params_Data) == 8,
              "Bad sizeof(PageCoordinationUnit_GetID_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) PageCoordinationUnit_GetID_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PageCoordinationUnit_GetID_ResponseParams_Data));
      new (data()) PageCoordinationUnit_GetID_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PageCoordinationUnit_GetID_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PageCoordinationUnit_GetID_ResponseParams_Data>(index_);
    }
    PageCoordinationUnit_GetID_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CoordinationUnitID_Data> id;

 private:
  PageCoordinationUnit_GetID_ResponseParams_Data();
  ~PageCoordinationUnit_GetID_ResponseParams_Data() = delete;
};
static_assert(sizeof(PageCoordinationUnit_GetID_ResponseParams_Data) == 16,
              "Bad sizeof(PageCoordinationUnit_GetID_ResponseParams_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) PageCoordinationUnit_AddBinding_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PageCoordinationUnit_AddBinding_Params_Data));
      new (data()) PageCoordinationUnit_AddBinding_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PageCoordinationUnit_AddBinding_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PageCoordinationUnit_AddBinding_Params_Data>(index_);
    }
    PageCoordinationUnit_AddBinding_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  uint8_t padfinal_[4];

 private:
  PageCoordinationUnit_AddBinding_Params_Data();
  ~PageCoordinationUnit_AddBinding_Params_Data() = delete;
};
static_assert(sizeof(PageCoordinationUnit_AddBinding_Params_Data) == 16,
              "Bad sizeof(PageCoordinationUnit_AddBinding_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) PageCoordinationUnit_AddFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PageCoordinationUnit_AddFrame_Params_Data));
      new (data()) PageCoordinationUnit_AddFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PageCoordinationUnit_AddFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PageCoordinationUnit_AddFrame_Params_Data>(index_);
    }
    PageCoordinationUnit_AddFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CoordinationUnitID_Data> cu_id;

 private:
  PageCoordinationUnit_AddFrame_Params_Data();
  ~PageCoordinationUnit_AddFrame_Params_Data() = delete;
};
static_assert(sizeof(PageCoordinationUnit_AddFrame_Params_Data) == 16,
              "Bad sizeof(PageCoordinationUnit_AddFrame_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) PageCoordinationUnit_RemoveFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PageCoordinationUnit_RemoveFrame_Params_Data));
      new (data()) PageCoordinationUnit_RemoveFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PageCoordinationUnit_RemoveFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PageCoordinationUnit_RemoveFrame_Params_Data>(index_);
    }
    PageCoordinationUnit_RemoveFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CoordinationUnitID_Data> cu_id;

 private:
  PageCoordinationUnit_RemoveFrame_Params_Data();
  ~PageCoordinationUnit_RemoveFrame_Params_Data() = delete;
};
static_assert(sizeof(PageCoordinationUnit_RemoveFrame_Params_Data) == 16,
              "Bad sizeof(PageCoordinationUnit_RemoveFrame_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) PageCoordinationUnit_SetIsLoading_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PageCoordinationUnit_SetIsLoading_Params_Data));
      new (data()) PageCoordinationUnit_SetIsLoading_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PageCoordinationUnit_SetIsLoading_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PageCoordinationUnit_SetIsLoading_Params_Data>(index_);
    }
    PageCoordinationUnit_SetIsLoading_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t is_loading : 1;
  uint8_t padfinal_[7];

 private:
  PageCoordinationUnit_SetIsLoading_Params_Data();
  ~PageCoordinationUnit_SetIsLoading_Params_Data() = delete;
};
static_assert(sizeof(PageCoordinationUnit_SetIsLoading_Params_Data) == 16,
              "Bad sizeof(PageCoordinationUnit_SetIsLoading_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) PageCoordinationUnit_SetVisibility_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PageCoordinationUnit_SetVisibility_Params_Data));
      new (data()) PageCoordinationUnit_SetVisibility_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PageCoordinationUnit_SetVisibility_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PageCoordinationUnit_SetVisibility_Params_Data>(index_);
    }
    PageCoordinationUnit_SetVisibility_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t visible : 1;
  uint8_t padfinal_[7];

 private:
  PageCoordinationUnit_SetVisibility_Params_Data();
  ~PageCoordinationUnit_SetVisibility_Params_Data() = delete;
};
static_assert(sizeof(PageCoordinationUnit_SetVisibility_Params_Data) == 16,
              "Bad sizeof(PageCoordinationUnit_SetVisibility_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) PageCoordinationUnit_SetUKMSourceId_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PageCoordinationUnit_SetUKMSourceId_Params_Data));
      new (data()) PageCoordinationUnit_SetUKMSourceId_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PageCoordinationUnit_SetUKMSourceId_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PageCoordinationUnit_SetUKMSourceId_Params_Data>(index_);
    }
    PageCoordinationUnit_SetUKMSourceId_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t ukm_source_id;

 private:
  PageCoordinationUnit_SetUKMSourceId_Params_Data();
  ~PageCoordinationUnit_SetUKMSourceId_Params_Data() = delete;
};
static_assert(sizeof(PageCoordinationUnit_SetUKMSourceId_Params_Data) == 16,
              "Bad sizeof(PageCoordinationUnit_SetUKMSourceId_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) PageCoordinationUnit_OnFaviconUpdated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PageCoordinationUnit_OnFaviconUpdated_Params_Data));
      new (data()) PageCoordinationUnit_OnFaviconUpdated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PageCoordinationUnit_OnFaviconUpdated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PageCoordinationUnit_OnFaviconUpdated_Params_Data>(index_);
    }
    PageCoordinationUnit_OnFaviconUpdated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PageCoordinationUnit_OnFaviconUpdated_Params_Data();
  ~PageCoordinationUnit_OnFaviconUpdated_Params_Data() = delete;
};
static_assert(sizeof(PageCoordinationUnit_OnFaviconUpdated_Params_Data) == 8,
              "Bad sizeof(PageCoordinationUnit_OnFaviconUpdated_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) PageCoordinationUnit_OnTitleUpdated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PageCoordinationUnit_OnTitleUpdated_Params_Data));
      new (data()) PageCoordinationUnit_OnTitleUpdated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PageCoordinationUnit_OnTitleUpdated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PageCoordinationUnit_OnTitleUpdated_Params_Data>(index_);
    }
    PageCoordinationUnit_OnTitleUpdated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PageCoordinationUnit_OnTitleUpdated_Params_Data();
  ~PageCoordinationUnit_OnTitleUpdated_Params_Data() = delete;
};
static_assert(sizeof(PageCoordinationUnit_OnTitleUpdated_Params_Data) == 8,
              "Bad sizeof(PageCoordinationUnit_OnTitleUpdated_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) PageCoordinationUnit_OnMainFrameNavigationCommitted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PageCoordinationUnit_OnMainFrameNavigationCommitted_Params_Data));
      new (data()) PageCoordinationUnit_OnMainFrameNavigationCommitted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PageCoordinationUnit_OnMainFrameNavigationCommitted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PageCoordinationUnit_OnMainFrameNavigationCommitted_Params_Data>(index_);
    }
    PageCoordinationUnit_OnMainFrameNavigationCommitted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PageCoordinationUnit_OnMainFrameNavigationCommitted_Params_Data();
  ~PageCoordinationUnit_OnMainFrameNavigationCommitted_Params_Data() = delete;
};
static_assert(sizeof(PageCoordinationUnit_OnMainFrameNavigationCommitted_Params_Data) == 8,
              "Bad sizeof(PageCoordinationUnit_OnMainFrameNavigationCommitted_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) ProcessCoordinationUnit_GetID_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProcessCoordinationUnit_GetID_Params_Data));
      new (data()) ProcessCoordinationUnit_GetID_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProcessCoordinationUnit_GetID_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProcessCoordinationUnit_GetID_Params_Data>(index_);
    }
    ProcessCoordinationUnit_GetID_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ProcessCoordinationUnit_GetID_Params_Data();
  ~ProcessCoordinationUnit_GetID_Params_Data() = delete;
};
static_assert(sizeof(ProcessCoordinationUnit_GetID_Params_Data) == 8,
              "Bad sizeof(ProcessCoordinationUnit_GetID_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) ProcessCoordinationUnit_GetID_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProcessCoordinationUnit_GetID_ResponseParams_Data));
      new (data()) ProcessCoordinationUnit_GetID_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProcessCoordinationUnit_GetID_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProcessCoordinationUnit_GetID_ResponseParams_Data>(index_);
    }
    ProcessCoordinationUnit_GetID_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CoordinationUnitID_Data> id;

 private:
  ProcessCoordinationUnit_GetID_ResponseParams_Data();
  ~ProcessCoordinationUnit_GetID_ResponseParams_Data() = delete;
};
static_assert(sizeof(ProcessCoordinationUnit_GetID_ResponseParams_Data) == 16,
              "Bad sizeof(ProcessCoordinationUnit_GetID_ResponseParams_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) ProcessCoordinationUnit_AddBinding_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProcessCoordinationUnit_AddBinding_Params_Data));
      new (data()) ProcessCoordinationUnit_AddBinding_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProcessCoordinationUnit_AddBinding_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProcessCoordinationUnit_AddBinding_Params_Data>(index_);
    }
    ProcessCoordinationUnit_AddBinding_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  uint8_t padfinal_[4];

 private:
  ProcessCoordinationUnit_AddBinding_Params_Data();
  ~ProcessCoordinationUnit_AddBinding_Params_Data() = delete;
};
static_assert(sizeof(ProcessCoordinationUnit_AddBinding_Params_Data) == 16,
              "Bad sizeof(ProcessCoordinationUnit_AddBinding_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) ProcessCoordinationUnit_AddFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProcessCoordinationUnit_AddFrame_Params_Data));
      new (data()) ProcessCoordinationUnit_AddFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProcessCoordinationUnit_AddFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProcessCoordinationUnit_AddFrame_Params_Data>(index_);
    }
    ProcessCoordinationUnit_AddFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CoordinationUnitID_Data> cu_id;

 private:
  ProcessCoordinationUnit_AddFrame_Params_Data();
  ~ProcessCoordinationUnit_AddFrame_Params_Data() = delete;
};
static_assert(sizeof(ProcessCoordinationUnit_AddFrame_Params_Data) == 16,
              "Bad sizeof(ProcessCoordinationUnit_AddFrame_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) ProcessCoordinationUnit_RemoveFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProcessCoordinationUnit_RemoveFrame_Params_Data));
      new (data()) ProcessCoordinationUnit_RemoveFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProcessCoordinationUnit_RemoveFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProcessCoordinationUnit_RemoveFrame_Params_Data>(index_);
    }
    ProcessCoordinationUnit_RemoveFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CoordinationUnitID_Data> cu_id;

 private:
  ProcessCoordinationUnit_RemoveFrame_Params_Data();
  ~ProcessCoordinationUnit_RemoveFrame_Params_Data() = delete;
};
static_assert(sizeof(ProcessCoordinationUnit_RemoveFrame_Params_Data) == 16,
              "Bad sizeof(ProcessCoordinationUnit_RemoveFrame_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) ProcessCoordinationUnit_SetCPUUsage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProcessCoordinationUnit_SetCPUUsage_Params_Data));
      new (data()) ProcessCoordinationUnit_SetCPUUsage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProcessCoordinationUnit_SetCPUUsage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProcessCoordinationUnit_SetCPUUsage_Params_Data>(index_);
    }
    ProcessCoordinationUnit_SetCPUUsage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double cpu_usage;

 private:
  ProcessCoordinationUnit_SetCPUUsage_Params_Data();
  ~ProcessCoordinationUnit_SetCPUUsage_Params_Data() = delete;
};
static_assert(sizeof(ProcessCoordinationUnit_SetCPUUsage_Params_Data) == 16,
              "Bad sizeof(ProcessCoordinationUnit_SetCPUUsage_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data));
      new (data()) ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data>(index_);
    }
    ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> duration;

 private:
  ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data();
  ~ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data() = delete;
};
static_assert(sizeof(ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data) == 16,
              "Bad sizeof(ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) ProcessCoordinationUnit_SetLaunchTime_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProcessCoordinationUnit_SetLaunchTime_Params_Data));
      new (data()) ProcessCoordinationUnit_SetLaunchTime_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProcessCoordinationUnit_SetLaunchTime_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProcessCoordinationUnit_SetLaunchTime_Params_Data>(index_);
    }
    ProcessCoordinationUnit_SetLaunchTime_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> launch_time;

 private:
  ProcessCoordinationUnit_SetLaunchTime_Params_Data();
  ~ProcessCoordinationUnit_SetLaunchTime_Params_Data() = delete;
};
static_assert(sizeof(ProcessCoordinationUnit_SetLaunchTime_Params_Data) == 16,
              "Bad sizeof(ProcessCoordinationUnit_SetLaunchTime_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data));
      new (data()) ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data>(index_);
    }
    ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t main_thread_task_load_is_low : 1;
  uint8_t padfinal_[7];

 private:
  ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data();
  ~ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data() = delete;
};
static_assert(sizeof(ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data) == 16,
              "Bad sizeof(ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) ProcessCoordinationUnit_SetPID_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProcessCoordinationUnit_SetPID_Params_Data));
      new (data()) ProcessCoordinationUnit_SetPID_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProcessCoordinationUnit_SetPID_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProcessCoordinationUnit_SetPID_Params_Data>(index_);
    }
    ProcessCoordinationUnit_SetPID_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t pid;

 private:
  ProcessCoordinationUnit_SetPID_Params_Data();
  ~ProcessCoordinationUnit_SetPID_Params_Data() = delete;
};
static_assert(sizeof(ProcessCoordinationUnit_SetPID_Params_Data) == 16,
              "Bad sizeof(ProcessCoordinationUnit_SetPID_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) SystemCoordinationUnit_GetID_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SystemCoordinationUnit_GetID_Params_Data));
      new (data()) SystemCoordinationUnit_GetID_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SystemCoordinationUnit_GetID_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SystemCoordinationUnit_GetID_Params_Data>(index_);
    }
    SystemCoordinationUnit_GetID_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SystemCoordinationUnit_GetID_Params_Data();
  ~SystemCoordinationUnit_GetID_Params_Data() = delete;
};
static_assert(sizeof(SystemCoordinationUnit_GetID_Params_Data) == 8,
              "Bad sizeof(SystemCoordinationUnit_GetID_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) SystemCoordinationUnit_GetID_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SystemCoordinationUnit_GetID_ResponseParams_Data));
      new (data()) SystemCoordinationUnit_GetID_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SystemCoordinationUnit_GetID_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SystemCoordinationUnit_GetID_ResponseParams_Data>(index_);
    }
    SystemCoordinationUnit_GetID_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CoordinationUnitID_Data> id;

 private:
  SystemCoordinationUnit_GetID_ResponseParams_Data();
  ~SystemCoordinationUnit_GetID_ResponseParams_Data() = delete;
};
static_assert(sizeof(SystemCoordinationUnit_GetID_ResponseParams_Data) == 16,
              "Bad sizeof(SystemCoordinationUnit_GetID_ResponseParams_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) SystemCoordinationUnit_AddBinding_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SystemCoordinationUnit_AddBinding_Params_Data));
      new (data()) SystemCoordinationUnit_AddBinding_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SystemCoordinationUnit_AddBinding_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SystemCoordinationUnit_AddBinding_Params_Data>(index_);
    }
    SystemCoordinationUnit_AddBinding_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  uint8_t padfinal_[4];

 private:
  SystemCoordinationUnit_AddBinding_Params_Data();
  ~SystemCoordinationUnit_AddBinding_Params_Data() = delete;
};
static_assert(sizeof(SystemCoordinationUnit_AddBinding_Params_Data) == 16,
              "Bad sizeof(SystemCoordinationUnit_AddBinding_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) SystemCoordinationUnit_OnProcessCPUUsageReady_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SystemCoordinationUnit_OnProcessCPUUsageReady_Params_Data));
      new (data()) SystemCoordinationUnit_OnProcessCPUUsageReady_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SystemCoordinationUnit_OnProcessCPUUsageReady_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SystemCoordinationUnit_OnProcessCPUUsageReady_Params_Data>(index_);
    }
    SystemCoordinationUnit_OnProcessCPUUsageReady_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SystemCoordinationUnit_OnProcessCPUUsageReady_Params_Data();
  ~SystemCoordinationUnit_OnProcessCPUUsageReady_Params_Data() = delete;
};
static_assert(sizeof(SystemCoordinationUnit_OnProcessCPUUsageReady_Params_Data) == 8,
              "Bad sizeof(SystemCoordinationUnit_OnProcessCPUUsageReady_Params_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) SystemCoordinationUnit_DistributeMeasurementBatch_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SystemCoordinationUnit_DistributeMeasurementBatch_Params_Data));
      new (data()) SystemCoordinationUnit_DistributeMeasurementBatch_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SystemCoordinationUnit_DistributeMeasurementBatch_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SystemCoordinationUnit_DistributeMeasurementBatch_Params_Data>(index_);
    }
    SystemCoordinationUnit_DistributeMeasurementBatch_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ProcessResourceMeasurementBatch_Data> measurement_batch;

 private:
  SystemCoordinationUnit_DistributeMeasurementBatch_Params_Data();
  ~SystemCoordinationUnit_DistributeMeasurementBatch_Params_Data() = delete;
};
static_assert(sizeof(SystemCoordinationUnit_DistributeMeasurementBatch_Params_Data) == 16,
              "Bad sizeof(SystemCoordinationUnit_DistributeMeasurementBatch_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace resource_coordinator

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_SHARED_INTERNAL_H_