// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDER_WIDGET_WINDOW_TREE_CLIENT_FACTORY_MOJOM_SHARED_H_
#define CONTENT_COMMON_RENDER_WIDGET_WINDOW_TREE_CLIENT_FACTORY_MOJOM_SHARED_H_

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
#include "content/common/render_widget_window_tree_client_factory.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"
#include "services/ui/public/interfaces/window_tree.mojom-shared.h"

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
class RenderWidgetWindowTreeClientInterfaceBase {};

using RenderWidgetWindowTreeClientPtrDataView =
    mojo::InterfacePtrDataView<RenderWidgetWindowTreeClientInterfaceBase>;
using RenderWidgetWindowTreeClientRequestDataView =
    mojo::InterfaceRequestDataView<RenderWidgetWindowTreeClientInterfaceBase>;
using RenderWidgetWindowTreeClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RenderWidgetWindowTreeClientInterfaceBase>;
using RenderWidgetWindowTreeClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RenderWidgetWindowTreeClientInterfaceBase>;
class RenderWidgetWindowTreeClientFactoryInterfaceBase {};

using RenderWidgetWindowTreeClientFactoryPtrDataView =
    mojo::InterfacePtrDataView<RenderWidgetWindowTreeClientFactoryInterfaceBase>;
using RenderWidgetWindowTreeClientFactoryRequestDataView =
    mojo::InterfaceRequestDataView<RenderWidgetWindowTreeClientFactoryInterfaceBase>;
using RenderWidgetWindowTreeClientFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RenderWidgetWindowTreeClientFactoryInterfaceBase>;
using RenderWidgetWindowTreeClientFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RenderWidgetWindowTreeClientFactoryInterfaceBase>;
class RenderWidgetWindowTreeClient_Embed_ParamsDataView {
 public:
  RenderWidgetWindowTreeClient_Embed_ParamsDataView() {}

  RenderWidgetWindowTreeClient_Embed_ParamsDataView(
      internal::RenderWidgetWindowTreeClient_Embed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t frame_routing_id() const {
    return data_->frame_routing_id;
  }
  inline void GetTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadToken(UserType* output) {
    auto* pointer = data_->token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::RenderWidgetWindowTreeClient_Embed_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RenderWidgetWindowTreeClient_DestroyFrame_ParamsDataView {
 public:
  RenderWidgetWindowTreeClient_DestroyFrame_ParamsDataView() {}

  RenderWidgetWindowTreeClient_DestroyFrame_ParamsDataView(
      internal::RenderWidgetWindowTreeClient_DestroyFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t frame_routing_id() const {
    return data_->frame_routing_id;
  }
 private:
  internal::RenderWidgetWindowTreeClient_DestroyFrame_Params_Data* data_ = nullptr;
};

class RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_ParamsDataView {
 public:
  RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_ParamsDataView() {}

  RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_ParamsDataView(
      internal::RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t render_widget_host_routing_id() const {
    return data_->render_widget_host_routing_id;
  }
  template <typename UserType>
  UserType TakeWindowTreeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::ui::mojom::WindowTreeClientRequestDataView>(
            &data_->window_tree_client, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeRenderWidgetWindowTreeClientRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::RenderWidgetWindowTreeClientRequestDataView>(
            &data_->render_widget_window_tree_client_request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params_Data* data_ = nullptr;
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

inline void RenderWidgetWindowTreeClient_Embed_ParamsDataView::GetTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}







}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_RENDER_WIDGET_WINDOW_TREE_CLIENT_FACTORY_MOJOM_SHARED_H_
