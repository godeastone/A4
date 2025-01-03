// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/modules/frame_sinks/embedded_frame_sink.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/surface_info.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class EmbeddedFrameSinkClientInterfaceBase {};

using EmbeddedFrameSinkClientPtrDataView =
    mojo::InterfacePtrDataView<EmbeddedFrameSinkClientInterfaceBase>;
using EmbeddedFrameSinkClientRequestDataView =
    mojo::InterfaceRequestDataView<EmbeddedFrameSinkClientInterfaceBase>;
using EmbeddedFrameSinkClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<EmbeddedFrameSinkClientInterfaceBase>;
using EmbeddedFrameSinkClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<EmbeddedFrameSinkClientInterfaceBase>;
class EmbeddedFrameSinkProviderInterfaceBase {};

using EmbeddedFrameSinkProviderPtrDataView =
    mojo::InterfacePtrDataView<EmbeddedFrameSinkProviderInterfaceBase>;
using EmbeddedFrameSinkProviderRequestDataView =
    mojo::InterfaceRequestDataView<EmbeddedFrameSinkProviderInterfaceBase>;
using EmbeddedFrameSinkProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<EmbeddedFrameSinkProviderInterfaceBase>;
using EmbeddedFrameSinkProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<EmbeddedFrameSinkProviderInterfaceBase>;
class EmbeddedFrameSinkClient_OnFirstSurfaceActivation_ParamsDataView {
 public:
  EmbeddedFrameSinkClient_OnFirstSurfaceActivation_ParamsDataView() {}

  EmbeddedFrameSinkClient_OnFirstSurfaceActivation_ParamsDataView(
      internal::EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSurfaceInfoDataView(
      ::viz::mojom::SurfaceInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSurfaceInfo(UserType* output) {
    auto* pointer = data_->surface_info.Get();
    return mojo::internal::Deserialize<::viz::mojom::SurfaceInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_ParamsDataView {
 public:
  EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_ParamsDataView() {}

  EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_ParamsDataView(
      internal::EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParentFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParentFrameSinkId(UserType* output) {
    auto* pointer = data_->parent_frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
  inline void GetFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameSinkId(UserType* output) {
    auto* pointer = data_->frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::EmbeddedFrameSinkClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedFrameSinkProvider_CreateCompositorFrameSink_ParamsDataView {
 public:
  EmbeddedFrameSinkProvider_CreateCompositorFrameSink_ParamsDataView() {}

  EmbeddedFrameSinkProvider_CreateCompositorFrameSink_ParamsDataView(
      internal::EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameSinkId(UserType* output) {
    auto* pointer = data_->frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::CompositorFrameSinkClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeSink() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::CompositorFrameSinkRequestDataView>(
            &data_->sink, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_ParamsDataView {
 public:
  EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_ParamsDataView() {}

  EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_ParamsDataView(
      internal::EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParentFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParentFrameSinkId(UserType* output) {
    auto* pointer = data_->parent_frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
  inline void GetFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameSinkId(UserType* output) {
    auto* pointer = data_->frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeSurfaceClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::EmbeddedFrameSinkClientPtrDataView>(
            &data_->surface_client, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::CompositorFrameSinkClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeSink() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::CompositorFrameSinkRequestDataView>(
            &data_->sink, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace blink {
namespace mojom {

inline void EmbeddedFrameSinkClient_OnFirstSurfaceActivation_ParamsDataView::GetSurfaceInfoDataView(
    ::viz::mojom::SurfaceInfoDataView* output) {
  auto pointer = data_->surface_info.Get();
  *output = ::viz::mojom::SurfaceInfoDataView(pointer, context_);
}


inline void EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_ParamsDataView::GetParentFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->parent_frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}
inline void EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_ParamsDataView::GetFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}


inline void EmbeddedFrameSinkProvider_CreateCompositorFrameSink_ParamsDataView::GetFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}


inline void EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_ParamsDataView::GetParentFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->parent_frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}
inline void EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_ParamsDataView::GetFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_SHARED_H_
