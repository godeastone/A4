// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_FACTORY_PROVIDER_MOJOM_SHARED_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_FACTORY_PROVIDER_MOJOM_SHARED_H_

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
#include "services/video_capture/public/mojom/device_factory_provider.mojom-shared-internal.h"
#include "services/video_capture/public/mojom/device_factory.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace video_capture {
namespace mojom {


}  // namespace mojom
}  // namespace video_capture

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace video_capture {
namespace mojom {
// Interface base classes. They are used for type safety check.
class DeviceFactoryProviderInterfaceBase {};

using DeviceFactoryProviderPtrDataView =
    mojo::InterfacePtrDataView<DeviceFactoryProviderInterfaceBase>;
using DeviceFactoryProviderRequestDataView =
    mojo::InterfaceRequestDataView<DeviceFactoryProviderInterfaceBase>;
using DeviceFactoryProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DeviceFactoryProviderInterfaceBase>;
using DeviceFactoryProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DeviceFactoryProviderInterfaceBase>;
class DeviceFactoryProvider_ConnectToDeviceFactory_ParamsDataView {
 public:
  DeviceFactoryProvider_ConnectToDeviceFactory_ParamsDataView() {}

  DeviceFactoryProvider_ConnectToDeviceFactory_ParamsDataView(
      internal::DeviceFactoryProvider_ConnectToDeviceFactory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::video_capture::mojom::DeviceFactoryRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::DeviceFactoryProvider_ConnectToDeviceFactory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DeviceFactoryProvider_SetShutdownDelayInSeconds_ParamsDataView {
 public:
  DeviceFactoryProvider_SetShutdownDelayInSeconds_ParamsDataView() {}

  DeviceFactoryProvider_SetShutdownDelayInSeconds_ParamsDataView(
      internal::DeviceFactoryProvider_SetShutdownDelayInSeconds_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float seconds() const {
    return data_->seconds;
  }
 private:
  internal::DeviceFactoryProvider_SetShutdownDelayInSeconds_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace video_capture

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace video_capture {
namespace mojom {






}  // namespace mojom
}  // namespace video_capture

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_FACTORY_PROVIDER_MOJOM_SHARED_H_
