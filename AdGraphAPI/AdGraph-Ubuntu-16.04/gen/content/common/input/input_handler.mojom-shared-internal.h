// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_INPUT_INPUT_HANDLER_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_INPUT_INPUT_HANDLER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "content/common/input/synchronous_compositor.mojom-shared-internal.h"
#include "content/common/native_types.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "services/ui/public/interfaces/ime/ime.mojom-shared-internal.h"
#include "third_party/blink/public/web/selection_menu_behavior.mojom-shared-internal.h"
#include "ui/events/mojo/event.mojom-shared-internal.h"
#include "ui/events/mojo/event_constants.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "ui/gfx/range/mojo/range.mojom-shared-internal.h"
#include "ui/latency/mojo/latency_info.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace content {
namespace mojom {
namespace internal {
class KeyData_Data;
class PointerData_Data;
class WheelData_Data;
class MouseData_Data;
class ScrollUpdate_Data;
class ScrollData_Data;
class PinchData_Data;
class FlingData_Data;
class TapData_Data;
class GestureData_Data;
class TouchPoint_Data;
class TouchData_Data;
class Event_Data;
class TouchActionOptional_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) KeyData_Data {
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
  int32_t dom_key;
  int32_t dom_code;
  int32_t windows_key_code;
  int32_t native_key_code;
  uint8_t is_system_key : 1;
  uint8_t is_browser_shortcut : 1;
  uint8_t pad5_[7];
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> text;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> unmodified_text;

 private:
  KeyData_Data();
  ~KeyData_Data() = delete;
};
static_assert(sizeof(KeyData_Data) == 48,
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PointerData_Data {
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
  float force;
  int32_t tilt_x;
  int32_t tilt_y;
  float tangential_pressure;
  int32_t twist;
  int32_t button;
  int32_t pointer_type;
  int32_t movement_x;
  int32_t movement_y;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> widget_position;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> screen_position;
  mojo::internal::Pointer<internal::MouseData_Data> mouse_data;

 private:
  PointerData_Data();
  ~PointerData_Data() = delete;
};
static_assert(sizeof(PointerData_Data) == 72,
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WheelData_Data {
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
  float delta_x;
  float delta_y;
  float wheel_ticks_x;
  float wheel_ticks_y;
  float acceleration_ratio_x;
  float acceleration_ratio_y;
  int32_t resending_plugin_id;
  uint8_t phase;
  uint8_t momentum_phase;
  uint8_t scroll_by_page : 1;
  uint8_t has_precise_scrolling_deltas : 1;
  uint8_t pad10_[1];
  int32_t cancelable;
  uint8_t padfinal_[4];

 private:
  WheelData_Data();
  ~WheelData_Data() = delete;
};
static_assert(sizeof(WheelData_Data) == 48,
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) MouseData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MouseData_Data));
      new (data()) MouseData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MouseData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MouseData_Data>(index_);
    }
    MouseData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t click_count;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::WheelData_Data> wheel_data;

 private:
  MouseData_Data();
  ~MouseData_Data() = delete;
};
static_assert(sizeof(MouseData_Data) == 24,
              "Bad sizeof(MouseData_Data)");
// Used by MouseData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MouseData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MouseData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MouseData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MouseData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MouseData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ScrollUpdate_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ScrollUpdate_Data));
      new (data()) ScrollUpdate_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ScrollUpdate_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ScrollUpdate_Data>(index_);
    }
    ScrollUpdate_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float velocity_x;
  float velocity_y;
  uint8_t previous_update_in_sequence_prevented : 1;
  uint8_t padfinal_[7];

 private:
  ScrollUpdate_Data();
  ~ScrollUpdate_Data() = delete;
};
static_assert(sizeof(ScrollUpdate_Data) == 24,
              "Bad sizeof(ScrollUpdate_Data)");
// Used by ScrollUpdate::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ScrollUpdate_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ScrollUpdate_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ScrollUpdate_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ScrollUpdate_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ScrollUpdate_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ScrollData_Data {
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
  float delta_x;
  float delta_y;
  int32_t delta_units;
  uint8_t target_viewport : 1;
  uint8_t synthetic : 1;
  uint8_t pad4_[3];
  int32_t inertial_phase;
  int32_t pointer_count;
  mojo::internal::Pointer<internal::ScrollUpdate_Data> update_details;

 private:
  ScrollData_Data();
  ~ScrollData_Data() = delete;
};
static_assert(sizeof(ScrollData_Data) == 40,
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) PinchData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PinchData_Data));
      new (data()) PinchData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PinchData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PinchData_Data>(index_);
    }
    PinchData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t zoom_disabled : 1;
  uint8_t pad0_[3];
  float scale;

 private:
  PinchData_Data();
  ~PinchData_Data() = delete;
};
static_assert(sizeof(PinchData_Data) == 16,
              "Bad sizeof(PinchData_Data)");
// Used by PinchData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PinchData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PinchData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PinchData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PinchData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PinchData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FlingData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FlingData_Data));
      new (data()) FlingData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FlingData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FlingData_Data>(index_);
    }
    FlingData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float velocity_x;
  float velocity_y;
  uint8_t target_viewport : 1;
  uint8_t prevent_boosting : 1;
  uint8_t padfinal_[7];

 private:
  FlingData_Data();
  ~FlingData_Data() = delete;
};
static_assert(sizeof(FlingData_Data) == 24,
              "Bad sizeof(FlingData_Data)");
// Used by FlingData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct FlingData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  FlingData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~FlingData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    FlingData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    FlingData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) TapData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TapData_Data));
      new (data()) TapData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TapData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TapData_Data>(index_);
    }
    TapData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t tap_count;
  uint8_t padfinal_[4];

 private:
  TapData_Data();
  ~TapData_Data() = delete;
};
static_assert(sizeof(TapData_Data) == 16,
              "Bad sizeof(TapData_Data)");
// Used by TapData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TapData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TapData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TapData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    TapData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TapData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) GestureData_Data {
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
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> screen_position;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> widget_position;
  int32_t source_device;
  uint8_t is_source_touch_event_set_non_blocking : 1;
  uint8_t pad3_[3];
  int32_t primary_pointer_type;
  int32_t unique_touch_event_id;
  int32_t resending_plugin_id;
  uint8_t pad6_[4];
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> contact_size;
  mojo::internal::Pointer<internal::ScrollData_Data> scroll_data;
  mojo::internal::Pointer<internal::PinchData_Data> pinch_data;
  mojo::internal::Pointer<internal::TapData_Data> tap_data;
  mojo::internal::Pointer<internal::FlingData_Data> fling_data;

 private:
  GestureData_Data();
  ~GestureData_Data() = delete;
};
static_assert(sizeof(GestureData_Data) == 88,
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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) TouchPoint_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TouchPoint_Data));
      new (data()) TouchPoint_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TouchPoint_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TouchPoint_Data>(index_);
    }
    TouchPoint_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t state;
  float radius_x;
  float radius_y;
  float rotation_angle;
  mojo::internal::Pointer<internal::PointerData_Data> pointer_data;

 private:
  TouchPoint_Data();
  ~TouchPoint_Data() = delete;
};
static_assert(sizeof(TouchPoint_Data) == 32,
              "Bad sizeof(TouchPoint_Data)");
// Used by TouchPoint::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TouchPoint_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TouchPoint_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TouchPoint_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    TouchPoint_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TouchPoint_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) TouchData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TouchData_Data));
      new (data()) TouchData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TouchData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TouchData_Data>(index_);
    }
    TouchData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t cancelable;
  uint8_t moved_beyond_slop_region : 1;
  uint8_t touch_start_or_first_move : 1;
  uint8_t hovering : 1;
  uint8_t pad3_[3];
  uint32_t unique_touch_event_id;
  uint8_t pad4_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::TouchPoint_Data>>> touches;

 private:
  TouchData_Data();
  ~TouchData_Data() = delete;
};
static_assert(sizeof(TouchData_Data) == 32,
              "Bad sizeof(TouchData_Data)");
// Used by TouchData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TouchData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TouchData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TouchData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    TouchData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TouchData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) Event_Data {
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
  int32_t type;
  int32_t modifiers;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> timestamp;
  mojo::internal::Pointer<::ui::mojom::internal::LatencyInfo_Data> latency;
  mojo::internal::Pointer<internal::KeyData_Data> key_data;
  mojo::internal::Pointer<internal::PointerData_Data> pointer_data;
  mojo::internal::Pointer<internal::GestureData_Data> gesture_data;
  mojo::internal::Pointer<internal::TouchData_Data> touch_data;

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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) TouchActionOptional_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TouchActionOptional_Data));
      new (data()) TouchActionOptional_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TouchActionOptional_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TouchActionOptional_Data>(index_);
    }
    TouchActionOptional_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t touch_action;
  uint8_t padfinal_[4];

 private:
  TouchActionOptional_Data();
  ~TouchActionOptional_Data() = delete;
};
static_assert(sizeof(TouchActionOptional_Data) == 16,
              "Bad sizeof(TouchActionOptional_Data)");
// Used by TouchActionOptional::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TouchActionOptional_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TouchActionOptional_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TouchActionOptional_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    TouchActionOptional_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TouchActionOptional_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WidgetInputHandlerHost_CancelTouchTimeout_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WidgetInputHandlerHost_CancelTouchTimeout_Params_Data));
      new (data()) WidgetInputHandlerHost_CancelTouchTimeout_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WidgetInputHandlerHost_CancelTouchTimeout_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WidgetInputHandlerHost_CancelTouchTimeout_Params_Data>(index_);
    }
    WidgetInputHandlerHost_CancelTouchTimeout_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WidgetInputHandlerHost_CancelTouchTimeout_Params_Data();
  ~WidgetInputHandlerHost_CancelTouchTimeout_Params_Data() = delete;
};
static_assert(sizeof(WidgetInputHandlerHost_CancelTouchTimeout_Params_Data) == 8,
              "Bad sizeof(WidgetInputHandlerHost_CancelTouchTimeout_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WidgetInputHandlerHost_SetWhiteListedTouchAction_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WidgetInputHandlerHost_SetWhiteListedTouchAction_Params_Data));
      new (data()) WidgetInputHandlerHost_SetWhiteListedTouchAction_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WidgetInputHandlerHost_SetWhiteListedTouchAction_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WidgetInputHandlerHost_SetWhiteListedTouchAction_Params_Data>(index_);
    }
    WidgetInputHandlerHost_SetWhiteListedTouchAction_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t touch_action;
  uint32_t unique_touch_event_id;
  int32_t state;
  uint8_t padfinal_[4];

 private:
  WidgetInputHandlerHost_SetWhiteListedTouchAction_Params_Data();
  ~WidgetInputHandlerHost_SetWhiteListedTouchAction_Params_Data() = delete;
};
static_assert(sizeof(WidgetInputHandlerHost_SetWhiteListedTouchAction_Params_Data) == 24,
              "Bad sizeof(WidgetInputHandlerHost_SetWhiteListedTouchAction_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WidgetInputHandlerHost_DidOverscroll_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WidgetInputHandlerHost_DidOverscroll_Params_Data));
      new (data()) WidgetInputHandlerHost_DidOverscroll_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WidgetInputHandlerHost_DidOverscroll_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WidgetInputHandlerHost_DidOverscroll_Params_Data>(index_);
    }
    WidgetInputHandlerHost_DidOverscroll_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::content::mojom::internal::DidOverscrollParams_Data> params;

 private:
  WidgetInputHandlerHost_DidOverscroll_Params_Data();
  ~WidgetInputHandlerHost_DidOverscroll_Params_Data() = delete;
};
static_assert(sizeof(WidgetInputHandlerHost_DidOverscroll_Params_Data) == 16,
              "Bad sizeof(WidgetInputHandlerHost_DidOverscroll_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WidgetInputHandlerHost_DidStopFlinging_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WidgetInputHandlerHost_DidStopFlinging_Params_Data));
      new (data()) WidgetInputHandlerHost_DidStopFlinging_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WidgetInputHandlerHost_DidStopFlinging_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WidgetInputHandlerHost_DidStopFlinging_Params_Data>(index_);
    }
    WidgetInputHandlerHost_DidStopFlinging_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WidgetInputHandlerHost_DidStopFlinging_Params_Data();
  ~WidgetInputHandlerHost_DidStopFlinging_Params_Data() = delete;
};
static_assert(sizeof(WidgetInputHandlerHost_DidStopFlinging_Params_Data) == 8,
              "Bad sizeof(WidgetInputHandlerHost_DidStopFlinging_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WidgetInputHandlerHost_DidStartScrollingViewport_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WidgetInputHandlerHost_DidStartScrollingViewport_Params_Data));
      new (data()) WidgetInputHandlerHost_DidStartScrollingViewport_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WidgetInputHandlerHost_DidStartScrollingViewport_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WidgetInputHandlerHost_DidStartScrollingViewport_Params_Data>(index_);
    }
    WidgetInputHandlerHost_DidStartScrollingViewport_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WidgetInputHandlerHost_DidStartScrollingViewport_Params_Data();
  ~WidgetInputHandlerHost_DidStartScrollingViewport_Params_Data() = delete;
};
static_assert(sizeof(WidgetInputHandlerHost_DidStartScrollingViewport_Params_Data) == 8,
              "Bad sizeof(WidgetInputHandlerHost_DidStartScrollingViewport_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WidgetInputHandlerHost_ImeCancelComposition_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WidgetInputHandlerHost_ImeCancelComposition_Params_Data));
      new (data()) WidgetInputHandlerHost_ImeCancelComposition_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WidgetInputHandlerHost_ImeCancelComposition_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WidgetInputHandlerHost_ImeCancelComposition_Params_Data>(index_);
    }
    WidgetInputHandlerHost_ImeCancelComposition_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WidgetInputHandlerHost_ImeCancelComposition_Params_Data();
  ~WidgetInputHandlerHost_ImeCancelComposition_Params_Data() = delete;
};
static_assert(sizeof(WidgetInputHandlerHost_ImeCancelComposition_Params_Data) == 8,
              "Bad sizeof(WidgetInputHandlerHost_ImeCancelComposition_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WidgetInputHandlerHost_ImeCompositionRangeChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WidgetInputHandlerHost_ImeCompositionRangeChanged_Params_Data));
      new (data()) WidgetInputHandlerHost_ImeCompositionRangeChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WidgetInputHandlerHost_ImeCompositionRangeChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WidgetInputHandlerHost_ImeCompositionRangeChanged_Params_Data>(index_);
    }
    WidgetInputHandlerHost_ImeCompositionRangeChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Range_Data> range;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data>>> bounds;

 private:
  WidgetInputHandlerHost_ImeCompositionRangeChanged_Params_Data();
  ~WidgetInputHandlerHost_ImeCompositionRangeChanged_Params_Data() = delete;
};
static_assert(sizeof(WidgetInputHandlerHost_ImeCompositionRangeChanged_Params_Data) == 24,
              "Bad sizeof(WidgetInputHandlerHost_ImeCompositionRangeChanged_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WidgetInputHandler_SetFocus_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WidgetInputHandler_SetFocus_Params_Data));
      new (data()) WidgetInputHandler_SetFocus_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WidgetInputHandler_SetFocus_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WidgetInputHandler_SetFocus_Params_Data>(index_);
    }
    WidgetInputHandler_SetFocus_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t focused : 1;
  uint8_t padfinal_[7];

 private:
  WidgetInputHandler_SetFocus_Params_Data();
  ~WidgetInputHandler_SetFocus_Params_Data() = delete;
};
static_assert(sizeof(WidgetInputHandler_SetFocus_Params_Data) == 16,
              "Bad sizeof(WidgetInputHandler_SetFocus_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WidgetInputHandler_MouseCaptureLost_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WidgetInputHandler_MouseCaptureLost_Params_Data));
      new (data()) WidgetInputHandler_MouseCaptureLost_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WidgetInputHandler_MouseCaptureLost_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WidgetInputHandler_MouseCaptureLost_Params_Data>(index_);
    }
    WidgetInputHandler_MouseCaptureLost_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WidgetInputHandler_MouseCaptureLost_Params_Data();
  ~WidgetInputHandler_MouseCaptureLost_Params_Data() = delete;
};
static_assert(sizeof(WidgetInputHandler_MouseCaptureLost_Params_Data) == 8,
              "Bad sizeof(WidgetInputHandler_MouseCaptureLost_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params_Data));
      new (data()) WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params_Data>(index_);
    }
    WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::content::mojom::internal::EditCommand_Data>>> commands;

 private:
  WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params_Data();
  ~WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params_Data() = delete;
};
static_assert(sizeof(WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params_Data) == 16,
              "Bad sizeof(WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WidgetInputHandler_CursorVisibilityChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WidgetInputHandler_CursorVisibilityChanged_Params_Data));
      new (data()) WidgetInputHandler_CursorVisibilityChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WidgetInputHandler_CursorVisibilityChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WidgetInputHandler_CursorVisibilityChanged_Params_Data>(index_);
    }
    WidgetInputHandler_CursorVisibilityChanged_Params_Data* operator->() { return data(); }

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
  WidgetInputHandler_CursorVisibilityChanged_Params_Data();
  ~WidgetInputHandler_CursorVisibilityChanged_Params_Data() = delete;
};
static_assert(sizeof(WidgetInputHandler_CursorVisibilityChanged_Params_Data) == 16,
              "Bad sizeof(WidgetInputHandler_CursorVisibilityChanged_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WidgetInputHandler_ImeSetComposition_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WidgetInputHandler_ImeSetComposition_Params_Data));
      new (data()) WidgetInputHandler_ImeSetComposition_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WidgetInputHandler_ImeSetComposition_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WidgetInputHandler_ImeSetComposition_Params_Data>(index_);
    }
    WidgetInputHandler_ImeSetComposition_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> text;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::ui::mojom::internal::ImeTextSpan_Data>>> ime_text_spans;
  mojo::internal::Pointer<::gfx::mojom::internal::Range_Data> range;
  int32_t start;
  int32_t end;

 private:
  WidgetInputHandler_ImeSetComposition_Params_Data();
  ~WidgetInputHandler_ImeSetComposition_Params_Data() = delete;
};
static_assert(sizeof(WidgetInputHandler_ImeSetComposition_Params_Data) == 40,
              "Bad sizeof(WidgetInputHandler_ImeSetComposition_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WidgetInputHandler_ImeCommitText_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WidgetInputHandler_ImeCommitText_Params_Data));
      new (data()) WidgetInputHandler_ImeCommitText_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WidgetInputHandler_ImeCommitText_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WidgetInputHandler_ImeCommitText_Params_Data>(index_);
    }
    WidgetInputHandler_ImeCommitText_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> text;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::ui::mojom::internal::ImeTextSpan_Data>>> ime_text_spans;
  mojo::internal::Pointer<::gfx::mojom::internal::Range_Data> range;
  int32_t relative_cursor_position;
  uint8_t padfinal_[4];

 private:
  WidgetInputHandler_ImeCommitText_Params_Data();
  ~WidgetInputHandler_ImeCommitText_Params_Data() = delete;
};
static_assert(sizeof(WidgetInputHandler_ImeCommitText_Params_Data) == 40,
              "Bad sizeof(WidgetInputHandler_ImeCommitText_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WidgetInputHandler_ImeFinishComposingText_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WidgetInputHandler_ImeFinishComposingText_Params_Data));
      new (data()) WidgetInputHandler_ImeFinishComposingText_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WidgetInputHandler_ImeFinishComposingText_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WidgetInputHandler_ImeFinishComposingText_Params_Data>(index_);
    }
    WidgetInputHandler_ImeFinishComposingText_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t keep_selection : 1;
  uint8_t padfinal_[7];

 private:
  WidgetInputHandler_ImeFinishComposingText_Params_Data();
  ~WidgetInputHandler_ImeFinishComposingText_Params_Data() = delete;
};
static_assert(sizeof(WidgetInputHandler_ImeFinishComposingText_Params_Data) == 16,
              "Bad sizeof(WidgetInputHandler_ImeFinishComposingText_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WidgetInputHandler_RequestTextInputStateUpdate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WidgetInputHandler_RequestTextInputStateUpdate_Params_Data));
      new (data()) WidgetInputHandler_RequestTextInputStateUpdate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WidgetInputHandler_RequestTextInputStateUpdate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WidgetInputHandler_RequestTextInputStateUpdate_Params_Data>(index_);
    }
    WidgetInputHandler_RequestTextInputStateUpdate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WidgetInputHandler_RequestTextInputStateUpdate_Params_Data();
  ~WidgetInputHandler_RequestTextInputStateUpdate_Params_Data() = delete;
};
static_assert(sizeof(WidgetInputHandler_RequestTextInputStateUpdate_Params_Data) == 8,
              "Bad sizeof(WidgetInputHandler_RequestTextInputStateUpdate_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WidgetInputHandler_RequestCompositionUpdates_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WidgetInputHandler_RequestCompositionUpdates_Params_Data));
      new (data()) WidgetInputHandler_RequestCompositionUpdates_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WidgetInputHandler_RequestCompositionUpdates_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WidgetInputHandler_RequestCompositionUpdates_Params_Data>(index_);
    }
    WidgetInputHandler_RequestCompositionUpdates_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t immediate_request : 1;
  uint8_t monitor_request : 1;
  uint8_t padfinal_[7];

 private:
  WidgetInputHandler_RequestCompositionUpdates_Params_Data();
  ~WidgetInputHandler_RequestCompositionUpdates_Params_Data() = delete;
};
static_assert(sizeof(WidgetInputHandler_RequestCompositionUpdates_Params_Data) == 16,
              "Bad sizeof(WidgetInputHandler_RequestCompositionUpdates_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WidgetInputHandler_DispatchEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WidgetInputHandler_DispatchEvent_Params_Data));
      new (data()) WidgetInputHandler_DispatchEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WidgetInputHandler_DispatchEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WidgetInputHandler_DispatchEvent_Params_Data>(index_);
    }
    WidgetInputHandler_DispatchEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::Event_Data> event;

 private:
  WidgetInputHandler_DispatchEvent_Params_Data();
  ~WidgetInputHandler_DispatchEvent_Params_Data() = delete;
};
static_assert(sizeof(WidgetInputHandler_DispatchEvent_Params_Data) == 16,
              "Bad sizeof(WidgetInputHandler_DispatchEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WidgetInputHandler_DispatchEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WidgetInputHandler_DispatchEvent_ResponseParams_Data));
      new (data()) WidgetInputHandler_DispatchEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WidgetInputHandler_DispatchEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WidgetInputHandler_DispatchEvent_ResponseParams_Data>(index_);
    }
    WidgetInputHandler_DispatchEvent_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t source;
  int32_t state;
  mojo::internal::Pointer<::ui::mojom::internal::LatencyInfo_Data> updated_latency;
  mojo::internal::Pointer<::content::mojom::internal::DidOverscrollParams_Data> overscroll;
  mojo::internal::Pointer<internal::TouchActionOptional_Data> touch_action;

 private:
  WidgetInputHandler_DispatchEvent_ResponseParams_Data();
  ~WidgetInputHandler_DispatchEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(WidgetInputHandler_DispatchEvent_ResponseParams_Data) == 40,
              "Bad sizeof(WidgetInputHandler_DispatchEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WidgetInputHandler_DispatchNonBlockingEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WidgetInputHandler_DispatchNonBlockingEvent_Params_Data));
      new (data()) WidgetInputHandler_DispatchNonBlockingEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WidgetInputHandler_DispatchNonBlockingEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WidgetInputHandler_DispatchNonBlockingEvent_Params_Data>(index_);
    }
    WidgetInputHandler_DispatchNonBlockingEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::Event_Data> event;

 private:
  WidgetInputHandler_DispatchNonBlockingEvent_Params_Data();
  ~WidgetInputHandler_DispatchNonBlockingEvent_Params_Data() = delete;
};
static_assert(sizeof(WidgetInputHandler_DispatchNonBlockingEvent_Params_Data) == 16,
              "Bad sizeof(WidgetInputHandler_DispatchNonBlockingEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WidgetInputHandler_AttachSynchronousCompositor_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WidgetInputHandler_AttachSynchronousCompositor_Params_Data));
      new (data()) WidgetInputHandler_AttachSynchronousCompositor_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WidgetInputHandler_AttachSynchronousCompositor_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WidgetInputHandler_AttachSynchronousCompositor_Params_Data>(index_);
    }
    WidgetInputHandler_AttachSynchronousCompositor_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data control_host;
  mojo::internal::AssociatedInterface_Data host;
  mojo::internal::AssociatedEndpointHandle_Data compositor_request;
  uint8_t padfinal_[4];

 private:
  WidgetInputHandler_AttachSynchronousCompositor_Params_Data();
  ~WidgetInputHandler_AttachSynchronousCompositor_Params_Data() = delete;
};
static_assert(sizeof(WidgetInputHandler_AttachSynchronousCompositor_Params_Data) == 32,
              "Bad sizeof(WidgetInputHandler_AttachSynchronousCompositor_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameInputHandler_SetCompositionFromExistingText_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameInputHandler_SetCompositionFromExistingText_Params_Data));
      new (data()) FrameInputHandler_SetCompositionFromExistingText_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameInputHandler_SetCompositionFromExistingText_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameInputHandler_SetCompositionFromExistingText_Params_Data>(index_);
    }
    FrameInputHandler_SetCompositionFromExistingText_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t start;
  int32_t end;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::ui::mojom::internal::ImeTextSpan_Data>>> ime_text_spans;

 private:
  FrameInputHandler_SetCompositionFromExistingText_Params_Data();
  ~FrameInputHandler_SetCompositionFromExistingText_Params_Data() = delete;
};
static_assert(sizeof(FrameInputHandler_SetCompositionFromExistingText_Params_Data) == 24,
              "Bad sizeof(FrameInputHandler_SetCompositionFromExistingText_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameInputHandler_ExtendSelectionAndDelete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameInputHandler_ExtendSelectionAndDelete_Params_Data));
      new (data()) FrameInputHandler_ExtendSelectionAndDelete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameInputHandler_ExtendSelectionAndDelete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameInputHandler_ExtendSelectionAndDelete_Params_Data>(index_);
    }
    FrameInputHandler_ExtendSelectionAndDelete_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t before;
  int32_t after;

 private:
  FrameInputHandler_ExtendSelectionAndDelete_Params_Data();
  ~FrameInputHandler_ExtendSelectionAndDelete_Params_Data() = delete;
};
static_assert(sizeof(FrameInputHandler_ExtendSelectionAndDelete_Params_Data) == 16,
              "Bad sizeof(FrameInputHandler_ExtendSelectionAndDelete_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameInputHandler_DeleteSurroundingText_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameInputHandler_DeleteSurroundingText_Params_Data));
      new (data()) FrameInputHandler_DeleteSurroundingText_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameInputHandler_DeleteSurroundingText_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameInputHandler_DeleteSurroundingText_Params_Data>(index_);
    }
    FrameInputHandler_DeleteSurroundingText_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t before;
  int32_t after;

 private:
  FrameInputHandler_DeleteSurroundingText_Params_Data();
  ~FrameInputHandler_DeleteSurroundingText_Params_Data() = delete;
};
static_assert(sizeof(FrameInputHandler_DeleteSurroundingText_Params_Data) == 16,
              "Bad sizeof(FrameInputHandler_DeleteSurroundingText_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameInputHandler_DeleteSurroundingTextInCodePoints_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameInputHandler_DeleteSurroundingTextInCodePoints_Params_Data));
      new (data()) FrameInputHandler_DeleteSurroundingTextInCodePoints_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameInputHandler_DeleteSurroundingTextInCodePoints_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameInputHandler_DeleteSurroundingTextInCodePoints_Params_Data>(index_);
    }
    FrameInputHandler_DeleteSurroundingTextInCodePoints_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t before;
  int32_t after;

 private:
  FrameInputHandler_DeleteSurroundingTextInCodePoints_Params_Data();
  ~FrameInputHandler_DeleteSurroundingTextInCodePoints_Params_Data() = delete;
};
static_assert(sizeof(FrameInputHandler_DeleteSurroundingTextInCodePoints_Params_Data) == 16,
              "Bad sizeof(FrameInputHandler_DeleteSurroundingTextInCodePoints_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameInputHandler_SetEditableSelectionOffsets_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameInputHandler_SetEditableSelectionOffsets_Params_Data));
      new (data()) FrameInputHandler_SetEditableSelectionOffsets_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameInputHandler_SetEditableSelectionOffsets_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameInputHandler_SetEditableSelectionOffsets_Params_Data>(index_);
    }
    FrameInputHandler_SetEditableSelectionOffsets_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t start;
  int32_t end;

 private:
  FrameInputHandler_SetEditableSelectionOffsets_Params_Data();
  ~FrameInputHandler_SetEditableSelectionOffsets_Params_Data() = delete;
};
static_assert(sizeof(FrameInputHandler_SetEditableSelectionOffsets_Params_Data) == 16,
              "Bad sizeof(FrameInputHandler_SetEditableSelectionOffsets_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameInputHandler_ExecuteEditCommand_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameInputHandler_ExecuteEditCommand_Params_Data));
      new (data()) FrameInputHandler_ExecuteEditCommand_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameInputHandler_ExecuteEditCommand_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameInputHandler_ExecuteEditCommand_Params_Data>(index_);
    }
    FrameInputHandler_ExecuteEditCommand_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> command;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> value;

 private:
  FrameInputHandler_ExecuteEditCommand_Params_Data();
  ~FrameInputHandler_ExecuteEditCommand_Params_Data() = delete;
};
static_assert(sizeof(FrameInputHandler_ExecuteEditCommand_Params_Data) == 24,
              "Bad sizeof(FrameInputHandler_ExecuteEditCommand_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameInputHandler_Undo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameInputHandler_Undo_Params_Data));
      new (data()) FrameInputHandler_Undo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameInputHandler_Undo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameInputHandler_Undo_Params_Data>(index_);
    }
    FrameInputHandler_Undo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FrameInputHandler_Undo_Params_Data();
  ~FrameInputHandler_Undo_Params_Data() = delete;
};
static_assert(sizeof(FrameInputHandler_Undo_Params_Data) == 8,
              "Bad sizeof(FrameInputHandler_Undo_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameInputHandler_Redo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameInputHandler_Redo_Params_Data));
      new (data()) FrameInputHandler_Redo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameInputHandler_Redo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameInputHandler_Redo_Params_Data>(index_);
    }
    FrameInputHandler_Redo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FrameInputHandler_Redo_Params_Data();
  ~FrameInputHandler_Redo_Params_Data() = delete;
};
static_assert(sizeof(FrameInputHandler_Redo_Params_Data) == 8,
              "Bad sizeof(FrameInputHandler_Redo_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameInputHandler_Cut_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameInputHandler_Cut_Params_Data));
      new (data()) FrameInputHandler_Cut_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameInputHandler_Cut_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameInputHandler_Cut_Params_Data>(index_);
    }
    FrameInputHandler_Cut_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FrameInputHandler_Cut_Params_Data();
  ~FrameInputHandler_Cut_Params_Data() = delete;
};
static_assert(sizeof(FrameInputHandler_Cut_Params_Data) == 8,
              "Bad sizeof(FrameInputHandler_Cut_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameInputHandler_Copy_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameInputHandler_Copy_Params_Data));
      new (data()) FrameInputHandler_Copy_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameInputHandler_Copy_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameInputHandler_Copy_Params_Data>(index_);
    }
    FrameInputHandler_Copy_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FrameInputHandler_Copy_Params_Data();
  ~FrameInputHandler_Copy_Params_Data() = delete;
};
static_assert(sizeof(FrameInputHandler_Copy_Params_Data) == 8,
              "Bad sizeof(FrameInputHandler_Copy_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameInputHandler_CopyToFindPboard_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameInputHandler_CopyToFindPboard_Params_Data));
      new (data()) FrameInputHandler_CopyToFindPboard_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameInputHandler_CopyToFindPboard_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameInputHandler_CopyToFindPboard_Params_Data>(index_);
    }
    FrameInputHandler_CopyToFindPboard_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FrameInputHandler_CopyToFindPboard_Params_Data();
  ~FrameInputHandler_CopyToFindPboard_Params_Data() = delete;
};
static_assert(sizeof(FrameInputHandler_CopyToFindPboard_Params_Data) == 8,
              "Bad sizeof(FrameInputHandler_CopyToFindPboard_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameInputHandler_Paste_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameInputHandler_Paste_Params_Data));
      new (data()) FrameInputHandler_Paste_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameInputHandler_Paste_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameInputHandler_Paste_Params_Data>(index_);
    }
    FrameInputHandler_Paste_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FrameInputHandler_Paste_Params_Data();
  ~FrameInputHandler_Paste_Params_Data() = delete;
};
static_assert(sizeof(FrameInputHandler_Paste_Params_Data) == 8,
              "Bad sizeof(FrameInputHandler_Paste_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameInputHandler_PasteAndMatchStyle_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameInputHandler_PasteAndMatchStyle_Params_Data));
      new (data()) FrameInputHandler_PasteAndMatchStyle_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameInputHandler_PasteAndMatchStyle_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameInputHandler_PasteAndMatchStyle_Params_Data>(index_);
    }
    FrameInputHandler_PasteAndMatchStyle_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FrameInputHandler_PasteAndMatchStyle_Params_Data();
  ~FrameInputHandler_PasteAndMatchStyle_Params_Data() = delete;
};
static_assert(sizeof(FrameInputHandler_PasteAndMatchStyle_Params_Data) == 8,
              "Bad sizeof(FrameInputHandler_PasteAndMatchStyle_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameInputHandler_Delete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameInputHandler_Delete_Params_Data));
      new (data()) FrameInputHandler_Delete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameInputHandler_Delete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameInputHandler_Delete_Params_Data>(index_);
    }
    FrameInputHandler_Delete_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FrameInputHandler_Delete_Params_Data();
  ~FrameInputHandler_Delete_Params_Data() = delete;
};
static_assert(sizeof(FrameInputHandler_Delete_Params_Data) == 8,
              "Bad sizeof(FrameInputHandler_Delete_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameInputHandler_SelectAll_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameInputHandler_SelectAll_Params_Data));
      new (data()) FrameInputHandler_SelectAll_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameInputHandler_SelectAll_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameInputHandler_SelectAll_Params_Data>(index_);
    }
    FrameInputHandler_SelectAll_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FrameInputHandler_SelectAll_Params_Data();
  ~FrameInputHandler_SelectAll_Params_Data() = delete;
};
static_assert(sizeof(FrameInputHandler_SelectAll_Params_Data) == 8,
              "Bad sizeof(FrameInputHandler_SelectAll_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameInputHandler_CollapseSelection_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameInputHandler_CollapseSelection_Params_Data));
      new (data()) FrameInputHandler_CollapseSelection_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameInputHandler_CollapseSelection_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameInputHandler_CollapseSelection_Params_Data>(index_);
    }
    FrameInputHandler_CollapseSelection_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FrameInputHandler_CollapseSelection_Params_Data();
  ~FrameInputHandler_CollapseSelection_Params_Data() = delete;
};
static_assert(sizeof(FrameInputHandler_CollapseSelection_Params_Data) == 8,
              "Bad sizeof(FrameInputHandler_CollapseSelection_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameInputHandler_Replace_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameInputHandler_Replace_Params_Data));
      new (data()) FrameInputHandler_Replace_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameInputHandler_Replace_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameInputHandler_Replace_Params_Data>(index_);
    }
    FrameInputHandler_Replace_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> word;

 private:
  FrameInputHandler_Replace_Params_Data();
  ~FrameInputHandler_Replace_Params_Data() = delete;
};
static_assert(sizeof(FrameInputHandler_Replace_Params_Data) == 16,
              "Bad sizeof(FrameInputHandler_Replace_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameInputHandler_ReplaceMisspelling_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameInputHandler_ReplaceMisspelling_Params_Data));
      new (data()) FrameInputHandler_ReplaceMisspelling_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameInputHandler_ReplaceMisspelling_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameInputHandler_ReplaceMisspelling_Params_Data>(index_);
    }
    FrameInputHandler_ReplaceMisspelling_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> word;

 private:
  FrameInputHandler_ReplaceMisspelling_Params_Data();
  ~FrameInputHandler_ReplaceMisspelling_Params_Data() = delete;
};
static_assert(sizeof(FrameInputHandler_ReplaceMisspelling_Params_Data) == 16,
              "Bad sizeof(FrameInputHandler_ReplaceMisspelling_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameInputHandler_SelectRange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameInputHandler_SelectRange_Params_Data));
      new (data()) FrameInputHandler_SelectRange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameInputHandler_SelectRange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameInputHandler_SelectRange_Params_Data>(index_);
    }
    FrameInputHandler_SelectRange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Point_Data> base;
  mojo::internal::Pointer<::gfx::mojom::internal::Point_Data> extent;

 private:
  FrameInputHandler_SelectRange_Params_Data();
  ~FrameInputHandler_SelectRange_Params_Data() = delete;
};
static_assert(sizeof(FrameInputHandler_SelectRange_Params_Data) == 24,
              "Bad sizeof(FrameInputHandler_SelectRange_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameInputHandler_AdjustSelectionByCharacterOffset_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameInputHandler_AdjustSelectionByCharacterOffset_Params_Data));
      new (data()) FrameInputHandler_AdjustSelectionByCharacterOffset_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameInputHandler_AdjustSelectionByCharacterOffset_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameInputHandler_AdjustSelectionByCharacterOffset_Params_Data>(index_);
    }
    FrameInputHandler_AdjustSelectionByCharacterOffset_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t start;
  int32_t end;
  int32_t behavior;
  uint8_t padfinal_[4];

 private:
  FrameInputHandler_AdjustSelectionByCharacterOffset_Params_Data();
  ~FrameInputHandler_AdjustSelectionByCharacterOffset_Params_Data() = delete;
};
static_assert(sizeof(FrameInputHandler_AdjustSelectionByCharacterOffset_Params_Data) == 24,
              "Bad sizeof(FrameInputHandler_AdjustSelectionByCharacterOffset_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameInputHandler_MoveRangeSelectionExtent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameInputHandler_MoveRangeSelectionExtent_Params_Data));
      new (data()) FrameInputHandler_MoveRangeSelectionExtent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameInputHandler_MoveRangeSelectionExtent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameInputHandler_MoveRangeSelectionExtent_Params_Data>(index_);
    }
    FrameInputHandler_MoveRangeSelectionExtent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Point_Data> extent;

 private:
  FrameInputHandler_MoveRangeSelectionExtent_Params_Data();
  ~FrameInputHandler_MoveRangeSelectionExtent_Params_Data() = delete;
};
static_assert(sizeof(FrameInputHandler_MoveRangeSelectionExtent_Params_Data) == 16,
              "Bad sizeof(FrameInputHandler_MoveRangeSelectionExtent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params_Data));
      new (data()) FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params_Data>(index_);
    }
    FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> rect;

 private:
  FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params_Data();
  ~FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params_Data() = delete;
};
static_assert(sizeof(FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params_Data) == 16,
              "Bad sizeof(FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameInputHandler_MoveCaret_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameInputHandler_MoveCaret_Params_Data));
      new (data()) FrameInputHandler_MoveCaret_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameInputHandler_MoveCaret_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameInputHandler_MoveCaret_Params_Data>(index_);
    }
    FrameInputHandler_MoveCaret_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Point_Data> point;

 private:
  FrameInputHandler_MoveCaret_Params_Data();
  ~FrameInputHandler_MoveCaret_Params_Data() = delete;
};
static_assert(sizeof(FrameInputHandler_MoveCaret_Params_Data) == 16,
              "Bad sizeof(FrameInputHandler_MoveCaret_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) FrameInputHandler_GetWidgetInputHandler_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FrameInputHandler_GetWidgetInputHandler_Params_Data));
      new (data()) FrameInputHandler_GetWidgetInputHandler_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FrameInputHandler_GetWidgetInputHandler_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FrameInputHandler_GetWidgetInputHandler_Params_Data>(index_);
    }
    FrameInputHandler_GetWidgetInputHandler_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedEndpointHandle_Data interface_request;
  mojo::internal::Interface_Data host;
  uint8_t padfinal_[4];

 private:
  FrameInputHandler_GetWidgetInputHandler_Params_Data();
  ~FrameInputHandler_GetWidgetInputHandler_Params_Data() = delete;
};
static_assert(sizeof(FrameInputHandler_GetWidgetInputHandler_Params_Data) == 24,
              "Bad sizeof(FrameInputHandler_GetWidgetInputHandler_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_INPUT_INPUT_HANDLER_MOJOM_SHARED_INTERNAL_H_