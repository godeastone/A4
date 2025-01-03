// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_INPUT_DEVICES_INPUT_DEVICE_SERVER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_UI_PUBLIC_INTERFACES_INPUT_DEVICES_INPUT_DEVICE_SERVER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "ui/events/devices/mojo/input_devices.mojom-shared-internal.h"
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

#pragma pack(push, 1)
class  InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params_Data));
      new (data()) InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params_Data>(index_);
    }
    InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::ui::mojom::internal::InputDevice_Data>>> devices;

 private:
  InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params_Data();
  ~InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params_Data() = delete;
};
static_assert(sizeof(InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params_Data) == 16,
              "Bad sizeof(InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params_Data)");
class  InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params_Data));
      new (data()) InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params_Data>(index_);
    }
    InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::ui::mojom::internal::TouchscreenDevice_Data>>> devices;
  uint8_t touchscreen_target_display_ids_changed : 1;
  uint8_t padfinal_[7];

 private:
  InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params_Data();
  ~InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params_Data() = delete;
};
static_assert(sizeof(InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params_Data) == 24,
              "Bad sizeof(InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params_Data)");
class  InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params_Data));
      new (data()) InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params_Data>(index_);
    }
    InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::ui::mojom::internal::InputDevice_Data>>> devices;

 private:
  InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params_Data();
  ~InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params_Data() = delete;
};
static_assert(sizeof(InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params_Data) == 16,
              "Bad sizeof(InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params_Data)");
class  InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params_Data));
      new (data()) InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params_Data>(index_);
    }
    InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::ui::mojom::internal::InputDevice_Data>>> devices;

 private:
  InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params_Data();
  ~InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params_Data() = delete;
};
static_assert(sizeof(InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params_Data) == 16,
              "Bad sizeof(InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params_Data)");
class  InputDeviceObserverMojo_OnDeviceListsComplete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputDeviceObserverMojo_OnDeviceListsComplete_Params_Data));
      new (data()) InputDeviceObserverMojo_OnDeviceListsComplete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputDeviceObserverMojo_OnDeviceListsComplete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputDeviceObserverMojo_OnDeviceListsComplete_Params_Data>(index_);
    }
    InputDeviceObserverMojo_OnDeviceListsComplete_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::ui::mojom::internal::InputDevice_Data>>> keyboard_devices;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::ui::mojom::internal::TouchscreenDevice_Data>>> touchscreen_devices;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::ui::mojom::internal::InputDevice_Data>>> mouse_devices;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::ui::mojom::internal::InputDevice_Data>>> touchpad_devices;
  uint8_t are_touchscreen_target_displays_valid : 1;
  uint8_t padfinal_[7];

 private:
  InputDeviceObserverMojo_OnDeviceListsComplete_Params_Data();
  ~InputDeviceObserverMojo_OnDeviceListsComplete_Params_Data() = delete;
};
static_assert(sizeof(InputDeviceObserverMojo_OnDeviceListsComplete_Params_Data) == 48,
              "Bad sizeof(InputDeviceObserverMojo_OnDeviceListsComplete_Params_Data)");
class  InputDeviceObserverMojo_OnStylusStateChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputDeviceObserverMojo_OnStylusStateChanged_Params_Data));
      new (data()) InputDeviceObserverMojo_OnStylusStateChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputDeviceObserverMojo_OnStylusStateChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputDeviceObserverMojo_OnStylusStateChanged_Params_Data>(index_);
    }
    InputDeviceObserverMojo_OnStylusStateChanged_Params_Data* operator->() { return data(); }

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
  InputDeviceObserverMojo_OnStylusStateChanged_Params_Data();
  ~InputDeviceObserverMojo_OnStylusStateChanged_Params_Data() = delete;
};
static_assert(sizeof(InputDeviceObserverMojo_OnStylusStateChanged_Params_Data) == 16,
              "Bad sizeof(InputDeviceObserverMojo_OnStylusStateChanged_Params_Data)");
class  InputDeviceServer_AddObserver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputDeviceServer_AddObserver_Params_Data));
      new (data()) InputDeviceServer_AddObserver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputDeviceServer_AddObserver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputDeviceServer_AddObserver_Params_Data>(index_);
    }
    InputDeviceServer_AddObserver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data observer;

 private:
  InputDeviceServer_AddObserver_Params_Data();
  ~InputDeviceServer_AddObserver_Params_Data() = delete;
};
static_assert(sizeof(InputDeviceServer_AddObserver_Params_Data) == 16,
              "Bad sizeof(InputDeviceServer_AddObserver_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_INPUT_DEVICES_INPUT_DEVICE_SERVER_MOJOM_SHARED_INTERNAL_H_