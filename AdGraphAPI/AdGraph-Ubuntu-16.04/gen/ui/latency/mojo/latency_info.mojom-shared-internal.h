// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_LATENCY_MOJO_LATENCY_INFO_MOJOM_SHARED_INTERNAL_H_
#define UI_LATENCY_MOJO_LATENCY_INFO_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace ui {
namespace mojom {
namespace internal {
class LatencyComponentId_Data;
class LatencyComponent_Data;
class LatencyComponentPair_Data;
class LatencyInfo_Data;

struct LatencyComponentType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
      case 22:
      case 23:
      case 24:
      case 25:
      case 26:
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

struct SourceEventType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
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
class  LatencyComponentId_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LatencyComponentId_Data));
      new (data()) LatencyComponentId_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LatencyComponentId_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LatencyComponentId_Data>(index_);
    }
    LatencyComponentId_Data* operator->() { return data(); }

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
  LatencyComponentId_Data();
  ~LatencyComponentId_Data() = delete;
};
static_assert(sizeof(LatencyComponentId_Data) == 24,
              "Bad sizeof(LatencyComponentId_Data)");
// Used by LatencyComponentId::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct LatencyComponentId_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  LatencyComponentId_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~LatencyComponentId_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    LatencyComponentId_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    LatencyComponentId_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  LatencyComponent_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LatencyComponent_Data));
      new (data()) LatencyComponent_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LatencyComponent_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LatencyComponent_Data>(index_);
    }
    LatencyComponent_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> event_time;
  uint32_t event_count;
  uint8_t pad1_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> first_event_time;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> last_event_time;

 private:
  LatencyComponent_Data();
  ~LatencyComponent_Data() = delete;
};
static_assert(sizeof(LatencyComponent_Data) == 40,
              "Bad sizeof(LatencyComponent_Data)");
// Used by LatencyComponent::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct LatencyComponent_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  LatencyComponent_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~LatencyComponent_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    LatencyComponent_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    LatencyComponent_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  LatencyComponentPair_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LatencyComponentPair_Data));
      new (data()) LatencyComponentPair_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LatencyComponentPair_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LatencyComponentPair_Data>(index_);
    }
    LatencyComponentPair_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::LatencyComponentId_Data> key;
  mojo::internal::Pointer<internal::LatencyComponent_Data> value;

 private:
  LatencyComponentPair_Data();
  ~LatencyComponentPair_Data() = delete;
};
static_assert(sizeof(LatencyComponentPair_Data) == 24,
              "Bad sizeof(LatencyComponentPair_Data)");
// Used by LatencyComponentPair::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct LatencyComponentPair_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  LatencyComponentPair_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~LatencyComponentPair_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    LatencyComponentPair_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    LatencyComponentPair_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  LatencyInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LatencyInfo_Data));
      new (data()) LatencyInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LatencyInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LatencyInfo_Data>(index_);
    }
    LatencyInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> trace_name;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::LatencyComponentPair_Data>>> latency_components;
  int64_t trace_id;
  mojo::internal::Pointer<mojo::internal::Map_Data<int64_t, int64_t>> snapshots;
  int64_t ukm_source_id;
  uint8_t coalesced : 1;
  uint8_t began : 1;
  uint8_t terminated : 1;
  uint8_t pad7_[3];
  int32_t source_event_type;

 private:
  LatencyInfo_Data();
  ~LatencyInfo_Data() = delete;
};
static_assert(sizeof(LatencyInfo_Data) == 56,
              "Bad sizeof(LatencyInfo_Data)");
// Used by LatencyInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct LatencyInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  LatencyInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~LatencyInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    LatencyInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    LatencyInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // UI_LATENCY_MOJO_LATENCY_INFO_MOJOM_SHARED_INTERNAL_H_