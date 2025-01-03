// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDERER_MOJOM_SHARED_H_
#define CONTENT_COMMON_RENDERER_MOJOM_SHARED_H_

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
#include "content/common/renderer.mojom-shared-internal.h"
#include "content/common/native_types.mojom-shared.h"
#include "content/common/service_worker/embedded_worker.mojom-shared.h"
#include "ipc/constants.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"
#include "services/network/public/mojom/network_types.mojom-shared.h"
#include "services/service_manager/public/mojom/interface_provider.mojom-shared.h"
#include "services/service_manager/public/mojom/service.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "ui/gfx/mojo/icc_profile.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {
class CreateViewParamsDataView;

class CreateFrameWidgetParamsDataView;

class CreateFrameParamsDataView;

class UpdateScrollbarThemeParamsDataView;



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::content::mojom::CreateViewParamsDataView> {
  using Data = ::content::mojom::internal::CreateViewParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::CreateFrameWidgetParamsDataView> {
  using Data = ::content::mojom::internal::CreateFrameWidgetParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::CreateFrameParamsDataView> {
  using Data = ::content::mojom::internal::CreateFrameParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::UpdateScrollbarThemeParamsDataView> {
  using Data = ::content::mojom::internal::UpdateScrollbarThemeParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {
// Interface base classes. They are used for type safety check.
class RendererInterfaceBase {};

using RendererPtrDataView =
    mojo::InterfacePtrDataView<RendererInterfaceBase>;
using RendererRequestDataView =
    mojo::InterfaceRequestDataView<RendererInterfaceBase>;
using RendererAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RendererInterfaceBase>;
using RendererAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RendererInterfaceBase>;
class CreateViewParamsDataView {
 public:
  CreateViewParamsDataView() {}

  CreateViewParamsDataView(
      internal::CreateViewParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRendererPreferencesDataView(
      ::content::mojom::RendererPreferencesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRendererPreferences(UserType* output) {
    auto* pointer = data_->renderer_preferences.Get();
    return mojo::internal::Deserialize<::content::mojom::RendererPreferencesDataView>(
        pointer, output, context_);
  }
  inline void GetWebPreferencesDataView(
      ::content::mojom::WebPreferencesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWebPreferences(UserType* output) {
    auto* pointer = data_->web_preferences.Get();
    return mojo::internal::Deserialize<::content::mojom::WebPreferencesDataView>(
        pointer, output, context_);
  }
  int32_t view_id() const {
    return data_->view_id;
  }
  int32_t main_frame_routing_id() const {
    return data_->main_frame_routing_id;
  }
  template <typename UserType>
  UserType TakeMainFrameInterfaceProvider() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::service_manager::mojom::InterfaceProviderPtrDataView>(
            &data_->main_frame_interface_provider, &result, context_);
    DCHECK(ret);
    return result;
  }
  int32_t main_frame_widget_routing_id() const {
    return data_->main_frame_widget_routing_id;
  }
  inline void GetSessionStorageNamespaceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionStorageNamespaceId(UserType* output) {
    auto* pointer = data_->session_storage_namespace_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t opener_frame_route_id() const {
    return data_->opener_frame_route_id;
  }
  bool swapped_out() const {
    return data_->swapped_out;
  }
  inline void GetReplicatedFrameStateDataView(
      ::content::mojom::FrameReplicationStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReplicatedFrameState(UserType* output) {
    auto* pointer = data_->replicated_frame_state.Get();
    return mojo::internal::Deserialize<::content::mojom::FrameReplicationStateDataView>(
        pointer, output, context_);
  }
  inline void GetDevtoolsMainFrameTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevtoolsMainFrameToken(UserType* output) {
    auto* pointer = data_->devtools_main_frame_token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  int32_t proxy_routing_id() const {
    return data_->proxy_routing_id;
  }
  bool hidden() const {
    return data_->hidden;
  }
  bool never_visible() const {
    return data_->never_visible;
  }
  bool window_was_created_with_opener() const {
    return data_->window_was_created_with_opener;
  }
  bool has_committed_real_load() const {
    return data_->has_committed_real_load;
  }
  inline void GetVisualPropertiesDataView(
      ::content::mojom::VisualPropertiesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVisualProperties(UserType* output) {
    auto* pointer = data_->visual_properties.Get();
    return mojo::internal::Deserialize<::content::mojom::VisualPropertiesDataView>(
        pointer, output, context_);
  }
  double page_zoom_level() const {
    return data_->page_zoom_level;
  }
  bool renderer_wide_named_frame_lookup() const {
    return data_->renderer_wide_named_frame_lookup;
  }
 private:
  internal::CreateViewParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CreateFrameWidgetParamsDataView {
 public:
  CreateFrameWidgetParamsDataView() {}

  CreateFrameWidgetParamsDataView(
      internal::CreateFrameWidgetParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t routing_id() const {
    return data_->routing_id;
  }
  bool hidden() const {
    return data_->hidden;
  }
 private:
  internal::CreateFrameWidgetParams_Data* data_ = nullptr;
};

class CreateFrameParamsDataView {
 public:
  CreateFrameParamsDataView() {}

  CreateFrameParamsDataView(
      internal::CreateFrameParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t routing_id() const {
    return data_->routing_id;
  }
  int32_t proxy_routing_id() const {
    return data_->proxy_routing_id;
  }
  int32_t opener_routing_id() const {
    return data_->opener_routing_id;
  }
  int32_t parent_routing_id() const {
    return data_->parent_routing_id;
  }
  int32_t previous_sibling_routing_id() const {
    return data_->previous_sibling_routing_id;
  }
  template <typename UserType>
  UserType TakeInterfaceProvider() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::service_manager::mojom::InterfaceProviderPtrDataView>(
            &data_->interface_provider, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetReplicationStateDataView(
      ::content::mojom::FrameReplicationStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReplicationState(UserType* output) {
    auto* pointer = data_->replication_state.Get();
    return mojo::internal::Deserialize<::content::mojom::FrameReplicationStateDataView>(
        pointer, output, context_);
  }
  inline void GetDevtoolsFrameTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevtoolsFrameToken(UserType* output) {
    auto* pointer = data_->devtools_frame_token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  inline void GetFrameOwnerPropertiesDataView(
      ::content::mojom::FrameOwnerPropertiesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameOwnerProperties(UserType* output) {
    auto* pointer = data_->frame_owner_properties.Get();
    return mojo::internal::Deserialize<::content::mojom::FrameOwnerPropertiesDataView>(
        pointer, output, context_);
  }
  inline void GetWidgetParamsDataView(
      CreateFrameWidgetParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWidgetParams(UserType* output) {
    auto* pointer = data_->widget_params.Get();
    return mojo::internal::Deserialize<::content::mojom::CreateFrameWidgetParamsDataView>(
        pointer, output, context_);
  }
  bool has_committed_real_load() const {
    return data_->has_committed_real_load;
  }
 private:
  internal::CreateFrameParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UpdateScrollbarThemeParamsDataView {
 public:
  UpdateScrollbarThemeParamsDataView() {}

  UpdateScrollbarThemeParamsDataView(
      internal::UpdateScrollbarThemeParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float initial_button_delay() const {
    return data_->initial_button_delay;
  }
  float autoscroll_button_delay() const {
    return data_->autoscroll_button_delay;
  }
  bool jump_on_track_click() const {
    return data_->jump_on_track_click;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPreferredScrollerStyle(UserType* output) const {
    auto data_value = data_->preferred_scroller_style;
    return mojo::internal::Deserialize<::content::mojom::ScrollerStyle>(
        data_value, output);
  }

  ::content::mojom::ScrollerStyle preferred_scroller_style() const {
    return static_cast<::content::mojom::ScrollerStyle>(data_->preferred_scroller_style);
  }
  bool redraw() const {
    return data_->redraw;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadButtonPlacement(UserType* output) const {
    auto data_value = data_->button_placement;
    return mojo::internal::Deserialize<::content::mojom::ScrollbarButtonsPlacement>(
        data_value, output);
  }

  ::content::mojom::ScrollbarButtonsPlacement button_placement() const {
    return static_cast<::content::mojom::ScrollbarButtonsPlacement>(data_->button_placement);
  }
  bool scroll_view_rubber_banding() const {
    return data_->scroll_view_rubber_banding;
  }
 private:
  internal::UpdateScrollbarThemeParams_Data* data_ = nullptr;
};

class Renderer_CreateEmbedderRendererService_ParamsDataView {
 public:
  Renderer_CreateEmbedderRendererService_ParamsDataView() {}

  Renderer_CreateEmbedderRendererService_ParamsDataView(
      internal::Renderer_CreateEmbedderRendererService_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeServiceRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::service_manager::mojom::ServiceRequestDataView>(
            &data_->service_request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Renderer_CreateEmbedderRendererService_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Renderer_CreateView_ParamsDataView {
 public:
  Renderer_CreateView_ParamsDataView() {}

  Renderer_CreateView_ParamsDataView(
      internal::Renderer_CreateView_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      CreateViewParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::content::mojom::CreateViewParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::Renderer_CreateView_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Renderer_CreateFrame_ParamsDataView {
 public:
  Renderer_CreateFrame_ParamsDataView() {}

  Renderer_CreateFrame_ParamsDataView(
      internal::Renderer_CreateFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      CreateFrameParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::content::mojom::CreateFrameParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::Renderer_CreateFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Renderer_CreateFrameProxy_ParamsDataView {
 public:
  Renderer_CreateFrameProxy_ParamsDataView() {}

  Renderer_CreateFrameProxy_ParamsDataView(
      internal::Renderer_CreateFrameProxy_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t routing_id() const {
    return data_->routing_id;
  }
  int32_t render_view_routing_id() const {
    return data_->render_view_routing_id;
  }
  int32_t opener_routing_id() const {
    return data_->opener_routing_id;
  }
  int32_t parent_routing_id() const {
    return data_->parent_routing_id;
  }
  inline void GetReplicationStateDataView(
      ::content::mojom::FrameReplicationStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReplicationState(UserType* output) {
    auto* pointer = data_->replication_state.Get();
    return mojo::internal::Deserialize<::content::mojom::FrameReplicationStateDataView>(
        pointer, output, context_);
  }
  inline void GetDevtoolsFrameTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevtoolsFrameToken(UserType* output) {
    auto* pointer = data_->devtools_frame_token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::Renderer_CreateFrameProxy_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_ParamsDataView {
 public:
  Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_ParamsDataView() {}

  Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_ParamsDataView(
      internal::Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClientRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::EmbeddedWorkerInstanceClientRequestDataView>(
            &data_->client_request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Renderer_OnNetworkConnectionChanged_ParamsDataView {
 public:
  Renderer_OnNetworkConnectionChanged_ParamsDataView() {}

  Renderer_OnNetworkConnectionChanged_ParamsDataView(
      internal::Renderer_OnNetworkConnectionChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConnectionType(UserType* output) const {
    auto data_value = data_->connection_type;
    return mojo::internal::Deserialize<::content::mojom::NetworkConnectionType>(
        data_value, output);
  }

  ::content::mojom::NetworkConnectionType connection_type() const {
    return static_cast<::content::mojom::NetworkConnectionType>(data_->connection_type);
  }
  double max_bandwidth_mbps() const {
    return data_->max_bandwidth_mbps;
  }
 private:
  internal::Renderer_OnNetworkConnectionChanged_Params_Data* data_ = nullptr;
};

class Renderer_OnNetworkQualityChanged_ParamsDataView {
 public:
  Renderer_OnNetworkQualityChanged_ParamsDataView() {}

  Renderer_OnNetworkQualityChanged_ParamsDataView(
      internal::Renderer_OnNetworkQualityChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEffectiveConnectionType(UserType* output) const {
    auto data_value = data_->effective_connection_type;
    return mojo::internal::Deserialize<::network::mojom::EffectiveConnectionType>(
        data_value, output);
  }

  ::network::mojom::EffectiveConnectionType effective_connection_type() const {
    return static_cast<::network::mojom::EffectiveConnectionType>(data_->effective_connection_type);
  }
  inline void GetHttpRttDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHttpRtt(UserType* output) {
    auto* pointer = data_->http_rtt.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetTransportRttDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTransportRtt(UserType* output) {
    auto* pointer = data_->transport_rtt.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  double bandwidth_kbps() const {
    return data_->bandwidth_kbps;
  }
 private:
  internal::Renderer_OnNetworkQualityChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Renderer_SetWebKitSharedTimersSuspended_ParamsDataView {
 public:
  Renderer_SetWebKitSharedTimersSuspended_ParamsDataView() {}

  Renderer_SetWebKitSharedTimersSuspended_ParamsDataView(
      internal::Renderer_SetWebKitSharedTimersSuspended_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool suspend() const {
    return data_->suspend;
  }
 private:
  internal::Renderer_SetWebKitSharedTimersSuspended_Params_Data* data_ = nullptr;
};

class Renderer_SetUserAgent_ParamsDataView {
 public:
  Renderer_SetUserAgent_ParamsDataView() {}

  Renderer_SetUserAgent_ParamsDataView(
      internal::Renderer_SetUserAgent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUserAgentDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUserAgent(UserType* output) {
    auto* pointer = data_->user_agent.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Renderer_SetUserAgent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Renderer_UpdateScrollbarTheme_ParamsDataView {
 public:
  Renderer_UpdateScrollbarTheme_ParamsDataView() {}

  Renderer_UpdateScrollbarTheme_ParamsDataView(
      internal::Renderer_UpdateScrollbarTheme_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      UpdateScrollbarThemeParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::content::mojom::UpdateScrollbarThemeParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::Renderer_UpdateScrollbarTheme_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Renderer_OnSystemColorsChanged_ParamsDataView {
 public:
  Renderer_OnSystemColorsChanged_ParamsDataView() {}

  Renderer_OnSystemColorsChanged_ParamsDataView(
      internal::Renderer_OnSystemColorsChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t aqua_color_variant() const {
    return data_->aqua_color_variant;
  }
  inline void GetHighlightTextColorDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHighlightTextColor(UserType* output) {
    auto* pointer = data_->highlight_text_color.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetHighlightColorDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHighlightColor(UserType* output) {
    auto* pointer = data_->highlight_color.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Renderer_OnSystemColorsChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Renderer_PurgePluginListCache_ParamsDataView {
 public:
  Renderer_PurgePluginListCache_ParamsDataView() {}

  Renderer_PurgePluginListCache_ParamsDataView(
      internal::Renderer_PurgePluginListCache_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool reload_pages() const {
    return data_->reload_pages;
  }
 private:
  internal::Renderer_PurgePluginListCache_Params_Data* data_ = nullptr;
};

class Renderer_SetProcessBackgrounded_ParamsDataView {
 public:
  Renderer_SetProcessBackgrounded_ParamsDataView() {}

  Renderer_SetProcessBackgrounded_ParamsDataView(
      internal::Renderer_SetProcessBackgrounded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool background() const {
    return data_->background;
  }
 private:
  internal::Renderer_SetProcessBackgrounded_Params_Data* data_ = nullptr;
};

class Renderer_SetSchedulerKeepActive_ParamsDataView {
 public:
  Renderer_SetSchedulerKeepActive_ParamsDataView() {}

  Renderer_SetSchedulerKeepActive_ParamsDataView(
      internal::Renderer_SetSchedulerKeepActive_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool keep_active() const {
    return data_->keep_active;
  }
 private:
  internal::Renderer_SetSchedulerKeepActive_Params_Data* data_ = nullptr;
};

class Renderer_ProcessPurgeAndSuspend_ParamsDataView {
 public:
  Renderer_ProcessPurgeAndSuspend_ParamsDataView() {}

  Renderer_ProcessPurgeAndSuspend_ParamsDataView(
      internal::Renderer_ProcessPurgeAndSuspend_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Renderer_ProcessPurgeAndSuspend_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::CreateViewParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::CreateViewParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::CreateViewParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::renderer_preferences, input, custom_context)) in_renderer_preferences = CallWithContext(Traits::renderer_preferences, input, custom_context);
    typename decltype((*output)->renderer_preferences)::BaseType::BufferWriter
        renderer_preferences_writer;
    mojo::internal::Serialize<::content::mojom::RendererPreferencesDataView>(
        in_renderer_preferences, buffer, &renderer_preferences_writer, context);
    (*output)->renderer_preferences.Set(
        renderer_preferences_writer.is_null() ? nullptr : renderer_preferences_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->renderer_preferences.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null renderer_preferences in CreateViewParams struct");
    decltype(CallWithContext(Traits::web_preferences, input, custom_context)) in_web_preferences = CallWithContext(Traits::web_preferences, input, custom_context);
    typename decltype((*output)->web_preferences)::BaseType::BufferWriter
        web_preferences_writer;
    mojo::internal::Serialize<::content::mojom::WebPreferencesDataView>(
        in_web_preferences, buffer, &web_preferences_writer, context);
    (*output)->web_preferences.Set(
        web_preferences_writer.is_null() ? nullptr : web_preferences_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->web_preferences.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null web_preferences in CreateViewParams struct");
    (*output)->view_id = CallWithContext(Traits::view_id, input, custom_context);
    (*output)->main_frame_routing_id = CallWithContext(Traits::main_frame_routing_id, input, custom_context);
    decltype(CallWithContext(Traits::main_frame_interface_provider, input, custom_context)) in_main_frame_interface_provider = CallWithContext(Traits::main_frame_interface_provider, input, custom_context);
    mojo::internal::Serialize<::service_manager::mojom::InterfaceProviderPtrDataView>(
        in_main_frame_interface_provider, &(*output)->main_frame_interface_provider, context);
    (*output)->main_frame_widget_routing_id = CallWithContext(Traits::main_frame_widget_routing_id, input, custom_context);
    decltype(CallWithContext(Traits::session_storage_namespace_id, input, custom_context)) in_session_storage_namespace_id = CallWithContext(Traits::session_storage_namespace_id, input, custom_context);
    typename decltype((*output)->session_storage_namespace_id)::BaseType::BufferWriter
        session_storage_namespace_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_session_storage_namespace_id, buffer, &session_storage_namespace_id_writer, context);
    (*output)->session_storage_namespace_id.Set(
        session_storage_namespace_id_writer.is_null() ? nullptr : session_storage_namespace_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->session_storage_namespace_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null session_storage_namespace_id in CreateViewParams struct");
    (*output)->opener_frame_route_id = CallWithContext(Traits::opener_frame_route_id, input, custom_context);
    (*output)->swapped_out = CallWithContext(Traits::swapped_out, input, custom_context);
    decltype(CallWithContext(Traits::replicated_frame_state, input, custom_context)) in_replicated_frame_state = CallWithContext(Traits::replicated_frame_state, input, custom_context);
    typename decltype((*output)->replicated_frame_state)::BaseType::BufferWriter
        replicated_frame_state_writer;
    mojo::internal::Serialize<::content::mojom::FrameReplicationStateDataView>(
        in_replicated_frame_state, buffer, &replicated_frame_state_writer, context);
    (*output)->replicated_frame_state.Set(
        replicated_frame_state_writer.is_null() ? nullptr : replicated_frame_state_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->replicated_frame_state.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null replicated_frame_state in CreateViewParams struct");
    decltype(CallWithContext(Traits::devtools_main_frame_token, input, custom_context)) in_devtools_main_frame_token = CallWithContext(Traits::devtools_main_frame_token, input, custom_context);
    typename decltype((*output)->devtools_main_frame_token)::BaseType::BufferWriter
        devtools_main_frame_token_writer;
    mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
        in_devtools_main_frame_token, buffer, &devtools_main_frame_token_writer, context);
    (*output)->devtools_main_frame_token.Set(
        devtools_main_frame_token_writer.is_null() ? nullptr : devtools_main_frame_token_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->devtools_main_frame_token.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null devtools_main_frame_token in CreateViewParams struct");
    (*output)->proxy_routing_id = CallWithContext(Traits::proxy_routing_id, input, custom_context);
    (*output)->hidden = CallWithContext(Traits::hidden, input, custom_context);
    (*output)->never_visible = CallWithContext(Traits::never_visible, input, custom_context);
    (*output)->window_was_created_with_opener = CallWithContext(Traits::window_was_created_with_opener, input, custom_context);
    (*output)->has_committed_real_load = CallWithContext(Traits::has_committed_real_load, input, custom_context);
    decltype(CallWithContext(Traits::visual_properties, input, custom_context)) in_visual_properties = CallWithContext(Traits::visual_properties, input, custom_context);
    typename decltype((*output)->visual_properties)::BaseType::BufferWriter
        visual_properties_writer;
    mojo::internal::Serialize<::content::mojom::VisualPropertiesDataView>(
        in_visual_properties, buffer, &visual_properties_writer, context);
    (*output)->visual_properties.Set(
        visual_properties_writer.is_null() ? nullptr : visual_properties_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->visual_properties.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null visual_properties in CreateViewParams struct");
    (*output)->page_zoom_level = CallWithContext(Traits::page_zoom_level, input, custom_context);
    (*output)->renderer_wide_named_frame_lookup = CallWithContext(Traits::renderer_wide_named_frame_lookup, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::CreateViewParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::CreateViewParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::CreateFrameWidgetParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::CreateFrameWidgetParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::CreateFrameWidgetParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->routing_id = CallWithContext(Traits::routing_id, input, custom_context);
    (*output)->hidden = CallWithContext(Traits::hidden, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::CreateFrameWidgetParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::CreateFrameWidgetParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::CreateFrameParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::CreateFrameParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::CreateFrameParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->routing_id = CallWithContext(Traits::routing_id, input, custom_context);
    (*output)->proxy_routing_id = CallWithContext(Traits::proxy_routing_id, input, custom_context);
    (*output)->opener_routing_id = CallWithContext(Traits::opener_routing_id, input, custom_context);
    (*output)->parent_routing_id = CallWithContext(Traits::parent_routing_id, input, custom_context);
    (*output)->previous_sibling_routing_id = CallWithContext(Traits::previous_sibling_routing_id, input, custom_context);
    decltype(CallWithContext(Traits::interface_provider, input, custom_context)) in_interface_provider = CallWithContext(Traits::interface_provider, input, custom_context);
    mojo::internal::Serialize<::service_manager::mojom::InterfaceProviderPtrDataView>(
        in_interface_provider, &(*output)->interface_provider, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->interface_provider),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid interface_provider in CreateFrameParams struct");
    decltype(CallWithContext(Traits::replication_state, input, custom_context)) in_replication_state = CallWithContext(Traits::replication_state, input, custom_context);
    typename decltype((*output)->replication_state)::BaseType::BufferWriter
        replication_state_writer;
    mojo::internal::Serialize<::content::mojom::FrameReplicationStateDataView>(
        in_replication_state, buffer, &replication_state_writer, context);
    (*output)->replication_state.Set(
        replication_state_writer.is_null() ? nullptr : replication_state_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->replication_state.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null replication_state in CreateFrameParams struct");
    decltype(CallWithContext(Traits::devtools_frame_token, input, custom_context)) in_devtools_frame_token = CallWithContext(Traits::devtools_frame_token, input, custom_context);
    typename decltype((*output)->devtools_frame_token)::BaseType::BufferWriter
        devtools_frame_token_writer;
    mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
        in_devtools_frame_token, buffer, &devtools_frame_token_writer, context);
    (*output)->devtools_frame_token.Set(
        devtools_frame_token_writer.is_null() ? nullptr : devtools_frame_token_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->devtools_frame_token.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null devtools_frame_token in CreateFrameParams struct");
    decltype(CallWithContext(Traits::frame_owner_properties, input, custom_context)) in_frame_owner_properties = CallWithContext(Traits::frame_owner_properties, input, custom_context);
    typename decltype((*output)->frame_owner_properties)::BaseType::BufferWriter
        frame_owner_properties_writer;
    mojo::internal::Serialize<::content::mojom::FrameOwnerPropertiesDataView>(
        in_frame_owner_properties, buffer, &frame_owner_properties_writer, context);
    (*output)->frame_owner_properties.Set(
        frame_owner_properties_writer.is_null() ? nullptr : frame_owner_properties_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->frame_owner_properties.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null frame_owner_properties in CreateFrameParams struct");
    decltype(CallWithContext(Traits::widget_params, input, custom_context)) in_widget_params = CallWithContext(Traits::widget_params, input, custom_context);
    typename decltype((*output)->widget_params)::BaseType::BufferWriter
        widget_params_writer;
    mojo::internal::Serialize<::content::mojom::CreateFrameWidgetParamsDataView>(
        in_widget_params, buffer, &widget_params_writer, context);
    (*output)->widget_params.Set(
        widget_params_writer.is_null() ? nullptr : widget_params_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->widget_params.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null widget_params in CreateFrameParams struct");
    (*output)->has_committed_real_load = CallWithContext(Traits::has_committed_real_load, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::CreateFrameParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::CreateFrameParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::UpdateScrollbarThemeParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::UpdateScrollbarThemeParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::UpdateScrollbarThemeParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->initial_button_delay = CallWithContext(Traits::initial_button_delay, input, custom_context);
    (*output)->autoscroll_button_delay = CallWithContext(Traits::autoscroll_button_delay, input, custom_context);
    (*output)->jump_on_track_click = CallWithContext(Traits::jump_on_track_click, input, custom_context);
    mojo::internal::Serialize<::content::mojom::ScrollerStyle>(
        CallWithContext(Traits::preferred_scroller_style, input, custom_context), &(*output)->preferred_scroller_style);
    (*output)->redraw = CallWithContext(Traits::redraw, input, custom_context);
    mojo::internal::Serialize<::content::mojom::ScrollbarButtonsPlacement>(
        CallWithContext(Traits::button_placement, input, custom_context), &(*output)->button_placement);
    (*output)->scroll_view_rubber_banding = CallWithContext(Traits::scroll_view_rubber_banding, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::UpdateScrollbarThemeParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::UpdateScrollbarThemeParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content {
namespace mojom {

inline void CreateViewParamsDataView::GetRendererPreferencesDataView(
    ::content::mojom::RendererPreferencesDataView* output) {
  auto pointer = data_->renderer_preferences.Get();
  *output = ::content::mojom::RendererPreferencesDataView(pointer, context_);
}
inline void CreateViewParamsDataView::GetWebPreferencesDataView(
    ::content::mojom::WebPreferencesDataView* output) {
  auto pointer = data_->web_preferences.Get();
  *output = ::content::mojom::WebPreferencesDataView(pointer, context_);
}
inline void CreateViewParamsDataView::GetSessionStorageNamespaceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_storage_namespace_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CreateViewParamsDataView::GetReplicatedFrameStateDataView(
    ::content::mojom::FrameReplicationStateDataView* output) {
  auto pointer = data_->replicated_frame_state.Get();
  *output = ::content::mojom::FrameReplicationStateDataView(pointer, context_);
}
inline void CreateViewParamsDataView::GetDevtoolsMainFrameTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->devtools_main_frame_token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}
inline void CreateViewParamsDataView::GetVisualPropertiesDataView(
    ::content::mojom::VisualPropertiesDataView* output) {
  auto pointer = data_->visual_properties.Get();
  *output = ::content::mojom::VisualPropertiesDataView(pointer, context_);
}




inline void CreateFrameParamsDataView::GetReplicationStateDataView(
    ::content::mojom::FrameReplicationStateDataView* output) {
  auto pointer = data_->replication_state.Get();
  *output = ::content::mojom::FrameReplicationStateDataView(pointer, context_);
}
inline void CreateFrameParamsDataView::GetDevtoolsFrameTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->devtools_frame_token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}
inline void CreateFrameParamsDataView::GetFrameOwnerPropertiesDataView(
    ::content::mojom::FrameOwnerPropertiesDataView* output) {
  auto pointer = data_->frame_owner_properties.Get();
  *output = ::content::mojom::FrameOwnerPropertiesDataView(pointer, context_);
}
inline void CreateFrameParamsDataView::GetWidgetParamsDataView(
    CreateFrameWidgetParamsDataView* output) {
  auto pointer = data_->widget_params.Get();
  *output = CreateFrameWidgetParamsDataView(pointer, context_);
}






inline void Renderer_CreateView_ParamsDataView::GetParamsDataView(
    CreateViewParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = CreateViewParamsDataView(pointer, context_);
}


inline void Renderer_CreateFrame_ParamsDataView::GetParamsDataView(
    CreateFrameParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = CreateFrameParamsDataView(pointer, context_);
}


inline void Renderer_CreateFrameProxy_ParamsDataView::GetReplicationStateDataView(
    ::content::mojom::FrameReplicationStateDataView* output) {
  auto pointer = data_->replication_state.Get();
  *output = ::content::mojom::FrameReplicationStateDataView(pointer, context_);
}
inline void Renderer_CreateFrameProxy_ParamsDataView::GetDevtoolsFrameTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->devtools_frame_token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}






inline void Renderer_OnNetworkQualityChanged_ParamsDataView::GetHttpRttDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->http_rtt.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void Renderer_OnNetworkQualityChanged_ParamsDataView::GetTransportRttDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->transport_rtt.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}




inline void Renderer_SetUserAgent_ParamsDataView::GetUserAgentDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->user_agent.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Renderer_UpdateScrollbarTheme_ParamsDataView::GetParamsDataView(
    UpdateScrollbarThemeParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = UpdateScrollbarThemeParamsDataView(pointer, context_);
}


inline void Renderer_OnSystemColorsChanged_ParamsDataView::GetHighlightTextColorDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->highlight_text_color.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Renderer_OnSystemColorsChanged_ParamsDataView::GetHighlightColorDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->highlight_color.Get();
  *output = mojo::StringDataView(pointer, context_);
}











}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_RENDERER_MOJOM_SHARED_H_
