// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_DEVICES_MOJO_INPUT_DEVICES_MOJOM_SHARED_INTERNAL_H_
#define UI_EVENTS_DEVICES_MOJO_INPUT_DEVICES_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
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
class InputDevice_Data;
class TouchscreenDevice_Data;

struct InputDeviceType_Data {
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

struct StylusState_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
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
class  InputDevice_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputDevice_Data));
      new (data()) InputDevice_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputDevice_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputDevice_Data>(index_);
    }
    InputDevice_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t id;
  int32_t type;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  uint8_t enabled : 1;
  uint8_t pad3_[1];
  uint16_t vendor_id;
  uint16_t product_id;
  uint8_t pad5_[2];
  mojo::internal::Pointer<mojo::internal::String_Data> sys_path;

 private:
  InputDevice_Data();
  ~InputDevice_Data() = delete;
};
static_assert(sizeof(InputDevice_Data) == 40,
              "Bad sizeof(InputDevice_Data)");
// Used by InputDevice::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct InputDevice_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  InputDevice_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~InputDevice_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    InputDevice_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    InputDevice_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  TouchscreenDevice_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TouchscreenDevice_Data));
      new (data()) TouchscreenDevice_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TouchscreenDevice_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TouchscreenDevice_Data>(index_);
    }
    TouchscreenDevice_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::InputDevice_Data> input_device;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> size;
  int32_t touch_points;
  uint8_t has_stylus : 1;
  uint8_t padfinal_[3];

 private:
  TouchscreenDevice_Data();
  ~TouchscreenDevice_Data() = delete;
};
static_assert(sizeof(TouchscreenDevice_Data) == 32,
              "Bad sizeof(TouchscreenDevice_Data)");
// Used by TouchscreenDevice::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TouchscreenDevice_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TouchscreenDevice_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TouchscreenDevice_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    TouchscreenDevice_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TouchscreenDevice_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // UI_EVENTS_DEVICES_MOJO_INPUT_DEVICES_MOJOM_SHARED_INTERNAL_H_