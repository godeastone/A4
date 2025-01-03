// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_DEVICES_MOJO_TOUCH_DEVICE_TRANSFORM_MOJOM_SHARED_INTERNAL_H_
#define UI_EVENTS_DEVICES_MOJO_TOUCH_DEVICE_TRANSFORM_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "ui/gfx/mojo/transform.mojom-shared-internal.h"
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
class TouchDeviceTransform_Data;

#pragma pack(push, 1)
class  TouchDeviceTransform_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TouchDeviceTransform_Data));
      new (data()) TouchDeviceTransform_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TouchDeviceTransform_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TouchDeviceTransform_Data>(index_);
    }
    TouchDeviceTransform_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t display_id;
  int32_t device_id;
  uint8_t pad1_[4];
  mojo::internal::Pointer<::gfx::mojom::internal::Transform_Data> transform;
  double radius_scale;

 private:
  TouchDeviceTransform_Data();
  ~TouchDeviceTransform_Data() = delete;
};
static_assert(sizeof(TouchDeviceTransform_Data) == 40,
              "Bad sizeof(TouchDeviceTransform_Data)");
// Used by TouchDeviceTransform::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TouchDeviceTransform_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TouchDeviceTransform_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TouchDeviceTransform_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    TouchDeviceTransform_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TouchDeviceTransform_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // UI_EVENTS_DEVICES_MOJO_TOUCH_DEVICE_TRANSFORM_MOJOM_SHARED_INTERNAL_H_