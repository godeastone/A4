// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_MOJO_EVENT_MOJOM_SHARED_INTERNAL_H_
#define UI_EVENTS_MOJO_EVENT_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "ui/events/mojo/event_constants.mojom-shared-internal.h"
#include "ui/events/mojo/keyboard_codes.mojom-shared-internal.h"
#include "ui/latency/mojo/latency_info.mojom-shared-internal.h"
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
class KeyData_Data;
class LocationData_Data;
class PointerData_Data;
class WheelData_Data;
class BrushData_Data;
class GestureData_Data;
class ScrollData_Data;
class Event_Data;

#pragma pack(push, 1)
class  KeyData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(KeyData_Data));
      new (data()) KeyData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    KeyData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<KeyData_Data>(index_);
    }
    KeyData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t key_code;
  uint8_t is_char : 1;
  uint8_t pad1_[1];
  uint16_t character;
  int32_t windows_key_code;
  int32_t native_key_code;
  uint16_t text;
  uint16_t unmodified_text;
  uint8_t pad6_[4];
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>>>> properties;

 private:
  KeyData_Data();
  ~KeyData_Data() = delete;
};
static_assert(sizeof(KeyData_Data) == 40,
              "Bad sizeof(KeyData_Data)");
// Used by KeyData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct KeyData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  KeyData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~KeyData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    KeyData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    KeyData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  LocationData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LocationData_Data));
      new (data()) LocationData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LocationData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LocationData_Data>(index_);
    }
    LocationData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float x;
  float y;
  float screen_x;
  float screen_y;

 private:
  LocationData_Data();
  ~LocationData_Data() = delete;
};
static_assert(sizeof(LocationData_Data) == 24,
              "Bad sizeof(LocationData_Data)");
// Used by LocationData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct LocationData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  LocationData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~LocationData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    LocationData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    LocationData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PointerData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PointerData_Data));
      new (data()) PointerData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PointerData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PointerData_Data>(index_);
    }
    PointerData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t pointer_id;
  int32_t changed_button_flags;
  int32_t kind;
  uint8_t pad2_[4];
  mojo::internal::Pointer<internal::LocationData_Data> location;
  mojo::internal::Pointer<internal::BrushData_Data> brush_data;
  mojo::internal::Pointer<internal::WheelData_Data> wheel_data;

 private:
  PointerData_Data();
  ~PointerData_Data() = delete;
};
static_assert(sizeof(PointerData_Data) == 48,
              "Bad sizeof(PointerData_Data)");
// Used by PointerData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PointerData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PointerData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PointerData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PointerData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PointerData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  WheelData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WheelData_Data));
      new (data()) WheelData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WheelData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WheelData_Data>(index_);
    }
    WheelData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t mode;
  float delta_x;
  float delta_y;
  float delta_z;

 private:
  WheelData_Data();
  ~WheelData_Data() = delete;
};
static_assert(sizeof(WheelData_Data) == 24,
              "Bad sizeof(WheelData_Data)");
// Used by WheelData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct WheelData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  WheelData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~WheelData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    WheelData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    WheelData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  BrushData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BrushData_Data));
      new (data()) BrushData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BrushData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BrushData_Data>(index_);
    }
    BrushData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float width;
  float height;
  float pressure;
  float tilt_x;
  float tilt_y;
  float tangential_pressure;
  int32_t twist;
  uint8_t padfinal_[4];

 private:
  BrushData_Data();
  ~BrushData_Data() = delete;
};
static_assert(sizeof(BrushData_Data) == 40,
              "Bad sizeof(BrushData_Data)");
// Used by BrushData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct BrushData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  BrushData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~BrushData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    BrushData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    BrushData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  GestureData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GestureData_Data));
      new (data()) GestureData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GestureData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GestureData_Data>(index_);
    }
    GestureData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::LocationData_Data> location;

 private:
  GestureData_Data();
  ~GestureData_Data() = delete;
};
static_assert(sizeof(GestureData_Data) == 16,
              "Bad sizeof(GestureData_Data)");
// Used by GestureData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct GestureData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  GestureData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~GestureData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    GestureData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    GestureData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ScrollData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ScrollData_Data));
      new (data()) ScrollData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ScrollData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ScrollData_Data>(index_);
    }
    ScrollData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::LocationData_Data> location;
  float x_offset;
  float y_offset;
  float x_offset_ordinal;
  float y_offset_ordinal;
  int32_t finger_count;
  int32_t momentum_phase;
  int32_t scroll_event_phase;
  uint8_t padfinal_[4];

 private:
  ScrollData_Data();
  ~ScrollData_Data() = delete;
};
static_assert(sizeof(ScrollData_Data) == 48,
              "Bad sizeof(ScrollData_Data)");
// Used by ScrollData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ScrollData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ScrollData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ScrollData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ScrollData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ScrollData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Event_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Event_Data));
      new (data()) Event_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Event_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Event_Data>(index_);
    }
    Event_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t action;
  int32_t flags;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> time_stamp;
  mojo::internal::Pointer<::ui::mojom::internal::LatencyInfo_Data> latency;
  mojo::internal::Pointer<internal::KeyData_Data> key_data;
  mojo::internal::Pointer<internal::PointerData_Data> pointer_data;
  mojo::internal::Pointer<internal::GestureData_Data> gesture_data;
  mojo::internal::Pointer<internal::ScrollData_Data> scroll_data;

 private:
  Event_Data();
  ~Event_Data() = delete;
};
static_assert(sizeof(Event_Data) == 64,
              "Bad sizeof(Event_Data)");
// Used by Event::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Event_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Event_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Event_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Event_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Event_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // UI_EVENTS_MOJO_EVENT_MOJOM_SHARED_INTERNAL_H_