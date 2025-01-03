// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_CONTROLLER_MOJOM_SHARED_H_
#define CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_CONTROLLER_MOJOM_SHARED_H_

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
#include "chrome/common/media_router/mojo/media_controller.mojom-shared-internal.h"
#include "chrome/common/media_router/mojo/media_status.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace media_router {
namespace mojom {


}  // namespace mojom
}  // namespace media_router

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace media_router {
namespace mojom {
// Interface base classes. They are used for type safety check.
class MediaControllerInterfaceBase {};

using MediaControllerPtrDataView =
    mojo::InterfacePtrDataView<MediaControllerInterfaceBase>;
using MediaControllerRequestDataView =
    mojo::InterfaceRequestDataView<MediaControllerInterfaceBase>;
using MediaControllerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaControllerInterfaceBase>;
using MediaControllerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaControllerInterfaceBase>;
class HangoutsMediaRouteControllerInterfaceBase {};

using HangoutsMediaRouteControllerPtrDataView =
    mojo::InterfacePtrDataView<HangoutsMediaRouteControllerInterfaceBase>;
using HangoutsMediaRouteControllerRequestDataView =
    mojo::InterfaceRequestDataView<HangoutsMediaRouteControllerInterfaceBase>;
using HangoutsMediaRouteControllerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<HangoutsMediaRouteControllerInterfaceBase>;
using HangoutsMediaRouteControllerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<HangoutsMediaRouteControllerInterfaceBase>;
class MediaController_Play_ParamsDataView {
 public:
  MediaController_Play_ParamsDataView() {}

  MediaController_Play_ParamsDataView(
      internal::MediaController_Play_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaController_Play_Params_Data* data_ = nullptr;
};

class MediaController_Pause_ParamsDataView {
 public:
  MediaController_Pause_ParamsDataView() {}

  MediaController_Pause_ParamsDataView(
      internal::MediaController_Pause_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaController_Pause_Params_Data* data_ = nullptr;
};

class MediaController_SetMute_ParamsDataView {
 public:
  MediaController_SetMute_ParamsDataView() {}

  MediaController_SetMute_ParamsDataView(
      internal::MediaController_SetMute_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool mute() const {
    return data_->mute;
  }
 private:
  internal::MediaController_SetMute_Params_Data* data_ = nullptr;
};

class MediaController_SetVolume_ParamsDataView {
 public:
  MediaController_SetVolume_ParamsDataView() {}

  MediaController_SetVolume_ParamsDataView(
      internal::MediaController_SetVolume_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float volume() const {
    return data_->volume;
  }
 private:
  internal::MediaController_SetVolume_Params_Data* data_ = nullptr;
};

class MediaController_Seek_ParamsDataView {
 public:
  MediaController_Seek_ParamsDataView() {}

  MediaController_Seek_ParamsDataView(
      internal::MediaController_Seek_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTimeDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTime(UserType* output) {
    auto* pointer = data_->time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaController_Seek_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaController_ConnectHangoutsMediaRouteController_ParamsDataView {
 public:
  MediaController_ConnectHangoutsMediaRouteController_ParamsDataView() {}

  MediaController_ConnectHangoutsMediaRouteController_ParamsDataView(
      internal::MediaController_ConnectHangoutsMediaRouteController_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeControllerRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media_router::mojom::HangoutsMediaRouteControllerRequestDataView>(
            &data_->controller_request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::MediaController_ConnectHangoutsMediaRouteController_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HangoutsMediaRouteController_SetLocalPresent_ParamsDataView {
 public:
  HangoutsMediaRouteController_SetLocalPresent_ParamsDataView() {}

  HangoutsMediaRouteController_SetLocalPresent_ParamsDataView(
      internal::HangoutsMediaRouteController_SetLocalPresent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool local_present() const {
    return data_->local_present;
  }
 private:
  internal::HangoutsMediaRouteController_SetLocalPresent_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace media_router

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace media_router {
namespace mojom {









inline void MediaController_Seek_ParamsDataView::GetTimeDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->time.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}







}  // namespace mojom
}  // namespace media_router

#endif  // CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_CONTROLLER_MOJOM_SHARED_H_
