// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_INPUT_DEVICES_INPUT_DEVICE_SERVER_MOJOM_SHARED_H_
#define SERVICES_UI_PUBLIC_INTERFACES_INPUT_DEVICES_INPUT_DEVICE_SERVER_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "services/ui/public/interfaces/input_devices/input_device_server.mojom-shared-internal.h"
#include "ui/events/devices/mojo/input_devices.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace ui {
namespace mojom {


}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace ui {
namespace mojom {
// Interface base classes. They are used for type safety check.
class InputDeviceObserverMojoInterfaceBase {};

using InputDeviceObserverMojoPtrDataView =
    mojo::InterfacePtrDataView<InputDeviceObserverMojoInterfaceBase>;
using InputDeviceObserverMojoRequestDataView =
    mojo::InterfaceRequestDataView<InputDeviceObserverMojoInterfaceBase>;
using InputDeviceObserverMojoAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<InputDeviceObserverMojoInterfaceBase>;
using InputDeviceObserverMojoAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<InputDeviceObserverMojoInterfaceBase>;
class InputDeviceServerInterfaceBase {};

using InputDeviceServerPtrDataView =
    mojo::InterfacePtrDataView<InputDeviceServerInterfaceBase>;
using InputDeviceServerRequestDataView =
    mojo::InterfaceRequestDataView<InputDeviceServerInterfaceBase>;
using InputDeviceServerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<InputDeviceServerInterfaceBase>;
using InputDeviceServerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<InputDeviceServerInterfaceBase>;
class InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_ParamsDataView {
 public:
  InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_ParamsDataView() {}

  InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_ParamsDataView(
      internal::InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDevicesDataView(
      mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevices(UserType* output) {
    auto* pointer = data_->devices.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>>(
        pointer, output, context_);
  }
 private:
  internal::InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_ParamsDataView {
 public:
  InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_ParamsDataView() {}

  InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_ParamsDataView(
      internal::InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDevicesDataView(
      mojo::ArrayDataView<::ui::mojom::TouchscreenDeviceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevices(UserType* output) {
    auto* pointer = data_->devices.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::ui::mojom::TouchscreenDeviceDataView>>(
        pointer, output, context_);
  }
  bool touchscreen_target_display_ids_changed() const {
    return data_->touchscreen_target_display_ids_changed;
  }
 private:
  internal::InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_ParamsDataView {
 public:
  InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_ParamsDataView() {}

  InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_ParamsDataView(
      internal::InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDevicesDataView(
      mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevices(UserType* output) {
    auto* pointer = data_->devices.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>>(
        pointer, output, context_);
  }
 private:
  internal::InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_ParamsDataView {
 public:
  InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_ParamsDataView() {}

  InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_ParamsDataView(
      internal::InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDevicesDataView(
      mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevices(UserType* output) {
    auto* pointer = data_->devices.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>>(
        pointer, output, context_);
  }
 private:
  internal::InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InputDeviceObserverMojo_OnDeviceListsComplete_ParamsDataView {
 public:
  InputDeviceObserverMojo_OnDeviceListsComplete_ParamsDataView() {}

  InputDeviceObserverMojo_OnDeviceListsComplete_ParamsDataView(
      internal::InputDeviceObserverMojo_OnDeviceListsComplete_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyboardDevicesDataView(
      mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyboardDevices(UserType* output) {
    auto* pointer = data_->keyboard_devices.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>>(
        pointer, output, context_);
  }
  inline void GetTouchscreenDevicesDataView(
      mojo::ArrayDataView<::ui::mojom::TouchscreenDeviceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTouchscreenDevices(UserType* output) {
    auto* pointer = data_->touchscreen_devices.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::ui::mojom::TouchscreenDeviceDataView>>(
        pointer, output, context_);
  }
  inline void GetMouseDevicesDataView(
      mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMouseDevices(UserType* output) {
    auto* pointer = data_->mouse_devices.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>>(
        pointer, output, context_);
  }
  inline void GetTouchpadDevicesDataView(
      mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTouchpadDevices(UserType* output) {
    auto* pointer = data_->touchpad_devices.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>>(
        pointer, output, context_);
  }
  bool are_touchscreen_target_displays_valid() const {
    return data_->are_touchscreen_target_displays_valid;
  }
 private:
  internal::InputDeviceObserverMojo_OnDeviceListsComplete_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InputDeviceObserverMojo_OnStylusStateChanged_ParamsDataView {
 public:
  InputDeviceObserverMojo_OnStylusStateChanged_ParamsDataView() {}

  InputDeviceObserverMojo_OnStylusStateChanged_ParamsDataView(
      internal::InputDeviceObserverMojo_OnStylusStateChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::ui::mojom::StylusState>(
        data_value, output);
  }

  ::ui::mojom::StylusState state() const {
    return static_cast<::ui::mojom::StylusState>(data_->state);
  }
 private:
  internal::InputDeviceObserverMojo_OnStylusStateChanged_Params_Data* data_ = nullptr;
};

class InputDeviceServer_AddObserver_ParamsDataView {
 public:
  InputDeviceServer_AddObserver_ParamsDataView() {}

  InputDeviceServer_AddObserver_ParamsDataView(
      internal::InputDeviceServer_AddObserver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::ui::mojom::InputDeviceObserverMojoPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::InputDeviceServer_AddObserver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace ui {
namespace mojom {

inline void InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_ParamsDataView::GetDevicesDataView(
    mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>* output) {
  auto pointer = data_->devices.Get();
  *output = mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>(pointer, context_);
}


inline void InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_ParamsDataView::GetDevicesDataView(
    mojo::ArrayDataView<::ui::mojom::TouchscreenDeviceDataView>* output) {
  auto pointer = data_->devices.Get();
  *output = mojo::ArrayDataView<::ui::mojom::TouchscreenDeviceDataView>(pointer, context_);
}


inline void InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_ParamsDataView::GetDevicesDataView(
    mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>* output) {
  auto pointer = data_->devices.Get();
  *output = mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>(pointer, context_);
}


inline void InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_ParamsDataView::GetDevicesDataView(
    mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>* output) {
  auto pointer = data_->devices.Get();
  *output = mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>(pointer, context_);
}


inline void InputDeviceObserverMojo_OnDeviceListsComplete_ParamsDataView::GetKeyboardDevicesDataView(
    mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>* output) {
  auto pointer = data_->keyboard_devices.Get();
  *output = mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>(pointer, context_);
}
inline void InputDeviceObserverMojo_OnDeviceListsComplete_ParamsDataView::GetTouchscreenDevicesDataView(
    mojo::ArrayDataView<::ui::mojom::TouchscreenDeviceDataView>* output) {
  auto pointer = data_->touchscreen_devices.Get();
  *output = mojo::ArrayDataView<::ui::mojom::TouchscreenDeviceDataView>(pointer, context_);
}
inline void InputDeviceObserverMojo_OnDeviceListsComplete_ParamsDataView::GetMouseDevicesDataView(
    mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>* output) {
  auto pointer = data_->mouse_devices.Get();
  *output = mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>(pointer, context_);
}
inline void InputDeviceObserverMojo_OnDeviceListsComplete_ParamsDataView::GetTouchpadDevicesDataView(
    mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>* output) {
  auto pointer = data_->touchpad_devices.Get();
  *output = mojo::ArrayDataView<::ui::mojom::InputDeviceDataView>(pointer, context_);
}







}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_INPUT_DEVICES_INPUT_DEVICE_SERVER_MOJOM_SHARED_H_
