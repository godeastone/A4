// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_FRAME_SINK_PROVIDER_MOJOM_SHARED_H_
#define CONTENT_COMMON_FRAME_SINK_PROVIDER_MOJOM_SHARED_H_

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
#include "content/common/frame_sink_provider.mojom-shared-internal.h"
#include "content/common/render_frame_metadata.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {


}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {
// Interface base classes. They are used for type safety check.
class FrameSinkProviderInterfaceBase {};

using FrameSinkProviderPtrDataView =
    mojo::InterfacePtrDataView<FrameSinkProviderInterfaceBase>;
using FrameSinkProviderRequestDataView =
    mojo::InterfaceRequestDataView<FrameSinkProviderInterfaceBase>;
using FrameSinkProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FrameSinkProviderInterfaceBase>;
using FrameSinkProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FrameSinkProviderInterfaceBase>;
class FrameSinkProvider_CreateForWidget_ParamsDataView {
 public:
  FrameSinkProvider_CreateForWidget_ParamsDataView() {}

  FrameSinkProvider_CreateForWidget_ParamsDataView(
      internal::FrameSinkProvider_CreateForWidget_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t widget_id() const {
    return data_->widget_id;
  }
  template <typename UserType>
  UserType TakeCompositorFrameSinkRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::CompositorFrameSinkRequestDataView>(
            &data_->compositor_frame_sink_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeCompositorFrameSinkClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::CompositorFrameSinkClientPtrDataView>(
            &data_->compositor_frame_sink_client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FrameSinkProvider_CreateForWidget_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameSinkProvider_RegisterRenderFrameMetadataObserver_ParamsDataView {
 public:
  FrameSinkProvider_RegisterRenderFrameMetadataObserver_ParamsDataView() {}

  FrameSinkProvider_RegisterRenderFrameMetadataObserver_ParamsDataView(
      internal::FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t widget_id() const {
    return data_->widget_id;
  }
  template <typename UserType>
  UserType TakeRenderFrameMetadataObserverClientRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::RenderFrameMetadataObserverClientRequestDataView>(
            &data_->render_frame_metadata_observer_client_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeRenderFrameMetadataObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::RenderFrameMetadataObserverPtrDataView>(
            &data_->render_frame_metadata_observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace content {
namespace mojom {






}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_FRAME_SINK_PROVIDER_MOJOM_SHARED_H_
