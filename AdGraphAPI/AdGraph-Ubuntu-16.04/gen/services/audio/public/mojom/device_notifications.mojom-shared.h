// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_AUDIO_PUBLIC_MOJOM_DEVICE_NOTIFICATIONS_MOJOM_SHARED_H_
#define SERVICES_AUDIO_PUBLIC_MOJOM_DEVICE_NOTIFICATIONS_MOJOM_SHARED_H_

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
#include "services/audio/public/mojom/device_notifications.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace audio {
namespace mojom {


}  // namespace mojom
}  // namespace audio

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace audio {
namespace mojom {
// Interface base classes. They are used for type safety check.
class DeviceListenerInterfaceBase {};

using DeviceListenerPtrDataView =
    mojo::InterfacePtrDataView<DeviceListenerInterfaceBase>;
using DeviceListenerRequestDataView =
    mojo::InterfaceRequestDataView<DeviceListenerInterfaceBase>;
using DeviceListenerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DeviceListenerInterfaceBase>;
using DeviceListenerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DeviceListenerInterfaceBase>;
class DeviceNotifierInterfaceBase {};

using DeviceNotifierPtrDataView =
    mojo::InterfacePtrDataView<DeviceNotifierInterfaceBase>;
using DeviceNotifierRequestDataView =
    mojo::InterfaceRequestDataView<DeviceNotifierInterfaceBase>;
using DeviceNotifierAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DeviceNotifierInterfaceBase>;
using DeviceNotifierAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DeviceNotifierInterfaceBase>;
class DeviceListener_DevicesChanged_ParamsDataView {
 public:
  DeviceListener_DevicesChanged_ParamsDataView() {}

  DeviceListener_DevicesChanged_ParamsDataView(
      internal::DeviceListener_DevicesChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DeviceListener_DevicesChanged_Params_Data* data_ = nullptr;
};

class DeviceNotifier_RegisterListener_ParamsDataView {
 public:
  DeviceNotifier_RegisterListener_ParamsDataView() {}

  DeviceNotifier_RegisterListener_ParamsDataView(
      internal::DeviceNotifier_RegisterListener_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeListener() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::audio::mojom::DeviceListenerPtrDataView>(
            &data_->listener, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::DeviceNotifier_RegisterListener_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace audio

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace audio {
namespace mojom {






}  // namespace mojom
}  // namespace audio

#endif  // SERVICES_AUDIO_PUBLIC_MOJOM_DEVICE_NOTIFICATIONS_MOJOM_SHARED_H_
