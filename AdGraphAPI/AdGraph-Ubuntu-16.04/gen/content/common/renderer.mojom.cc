// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "content/common/renderer.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "content/common/renderer.mojom-shared-message-ids.h"
#include "content/common/frame_messages.h"
#include "content/common/input/input_event_struct_traits.h"
#include "content/common/input/touch_action_optional_struct_traits.h"
#include "content/common/input_messages.h"
#include "content/common/view_messages.h"
#include "content/public/common/common_param_traits.h"
#include "content/public/common/common_param_traits_macros.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
namespace content {
namespace mojom {
CreateViewParams::CreateViewParams()
    : renderer_preferences(),
      web_preferences(),
      view_id(::IPC::mojom::kRoutingIdNone),
      main_frame_routing_id(::IPC::mojom::kRoutingIdNone),
      main_frame_interface_provider(),
      main_frame_widget_routing_id(::IPC::mojom::kRoutingIdNone),
      session_storage_namespace_id(),
      opener_frame_route_id(::IPC::mojom::kRoutingIdNone),
      swapped_out(),
      replicated_frame_state(),
      devtools_main_frame_token(),
      proxy_routing_id(::IPC::mojom::kRoutingIdNone),
      hidden(),
      never_visible(),
      window_was_created_with_opener(),
      has_committed_real_load(),
      visual_properties(),
      page_zoom_level(),
      renderer_wide_named_frame_lookup() {}

CreateViewParams::CreateViewParams(
    const content::RendererPreferences& renderer_preferences_in,
    const content::WebPreferences& web_preferences_in,
    int32_t view_id_in,
    int32_t main_frame_routing_id_in,
    ::service_manager::mojom::InterfaceProviderPtrInfo main_frame_interface_provider_in,
    int32_t main_frame_widget_routing_id_in,
    const std::string& session_storage_namespace_id_in,
    int32_t opener_frame_route_id_in,
    bool swapped_out_in,
    const content::FrameReplicationState& replicated_frame_state_in,
    const base::UnguessableToken& devtools_main_frame_token_in,
    int32_t proxy_routing_id_in,
    bool hidden_in,
    bool never_visible_in,
    bool window_was_created_with_opener_in,
    bool has_committed_real_load_in,
    const content::VisualProperties& visual_properties_in,
    double page_zoom_level_in,
    bool renderer_wide_named_frame_lookup_in)
    : renderer_preferences(std::move(renderer_preferences_in)),
      web_preferences(std::move(web_preferences_in)),
      view_id(std::move(view_id_in)),
      main_frame_routing_id(std::move(main_frame_routing_id_in)),
      main_frame_interface_provider(std::move(main_frame_interface_provider_in)),
      main_frame_widget_routing_id(std::move(main_frame_widget_routing_id_in)),
      session_storage_namespace_id(std::move(session_storage_namespace_id_in)),
      opener_frame_route_id(std::move(opener_frame_route_id_in)),
      swapped_out(std::move(swapped_out_in)),
      replicated_frame_state(std::move(replicated_frame_state_in)),
      devtools_main_frame_token(std::move(devtools_main_frame_token_in)),
      proxy_routing_id(std::move(proxy_routing_id_in)),
      hidden(std::move(hidden_in)),
      never_visible(std::move(never_visible_in)),
      window_was_created_with_opener(std::move(window_was_created_with_opener_in)),
      has_committed_real_load(std::move(has_committed_real_load_in)),
      visual_properties(std::move(visual_properties_in)),
      page_zoom_level(std::move(page_zoom_level_in)),
      renderer_wide_named_frame_lookup(std::move(renderer_wide_named_frame_lookup_in)) {}

CreateViewParams::~CreateViewParams() = default;

bool CreateViewParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CreateFrameWidgetParams::CreateFrameWidgetParams()
    : routing_id(),
      hidden() {}

CreateFrameWidgetParams::CreateFrameWidgetParams(
    int32_t routing_id_in,
    bool hidden_in)
    : routing_id(std::move(routing_id_in)),
      hidden(std::move(hidden_in)) {}

CreateFrameWidgetParams::~CreateFrameWidgetParams() = default;
size_t CreateFrameWidgetParams::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->routing_id);
  seed = mojo::internal::Hash(seed, this->hidden);
  return seed;
}

bool CreateFrameWidgetParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CreateFrameParams::CreateFrameParams()
    : routing_id(),
      proxy_routing_id(),
      opener_routing_id(),
      parent_routing_id(),
      previous_sibling_routing_id(),
      interface_provider(),
      replication_state(),
      devtools_frame_token(),
      frame_owner_properties(),
      widget_params(),
      has_committed_real_load() {}

CreateFrameParams::CreateFrameParams(
    int32_t routing_id_in,
    int32_t proxy_routing_id_in,
    int32_t opener_routing_id_in,
    int32_t parent_routing_id_in,
    int32_t previous_sibling_routing_id_in,
    ::service_manager::mojom::InterfaceProviderPtrInfo interface_provider_in,
    const content::FrameReplicationState& replication_state_in,
    const base::UnguessableToken& devtools_frame_token_in,
    const content::FrameOwnerProperties& frame_owner_properties_in,
    CreateFrameWidgetParamsPtr widget_params_in,
    bool has_committed_real_load_in)
    : routing_id(std::move(routing_id_in)),
      proxy_routing_id(std::move(proxy_routing_id_in)),
      opener_routing_id(std::move(opener_routing_id_in)),
      parent_routing_id(std::move(parent_routing_id_in)),
      previous_sibling_routing_id(std::move(previous_sibling_routing_id_in)),
      interface_provider(std::move(interface_provider_in)),
      replication_state(std::move(replication_state_in)),
      devtools_frame_token(std::move(devtools_frame_token_in)),
      frame_owner_properties(std::move(frame_owner_properties_in)),
      widget_params(std::move(widget_params_in)),
      has_committed_real_load(std::move(has_committed_real_load_in)) {}

CreateFrameParams::~CreateFrameParams() = default;

bool CreateFrameParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
UpdateScrollbarThemeParams::UpdateScrollbarThemeParams()
    : initial_button_delay(),
      autoscroll_button_delay(),
      jump_on_track_click(),
      preferred_scroller_style(),
      redraw(),
      button_placement(),
      scroll_view_rubber_banding() {}

UpdateScrollbarThemeParams::UpdateScrollbarThemeParams(
    float initial_button_delay_in,
    float autoscroll_button_delay_in,
    bool jump_on_track_click_in,
    ::content::mojom::ScrollerStyle preferred_scroller_style_in,
    bool redraw_in,
    ::content::mojom::ScrollbarButtonsPlacement button_placement_in,
    bool scroll_view_rubber_banding_in)
    : initial_button_delay(std::move(initial_button_delay_in)),
      autoscroll_button_delay(std::move(autoscroll_button_delay_in)),
      jump_on_track_click(std::move(jump_on_track_click_in)),
      preferred_scroller_style(std::move(preferred_scroller_style_in)),
      redraw(std::move(redraw_in)),
      button_placement(std::move(button_placement_in)),
      scroll_view_rubber_banding(std::move(scroll_view_rubber_banding_in)) {}

UpdateScrollbarThemeParams::~UpdateScrollbarThemeParams() = default;
size_t UpdateScrollbarThemeParams::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->initial_button_delay);
  seed = mojo::internal::Hash(seed, this->autoscroll_button_delay);
  seed = mojo::internal::Hash(seed, this->jump_on_track_click);
  seed = mojo::internal::Hash(seed, this->preferred_scroller_style);
  seed = mojo::internal::Hash(seed, this->redraw);
  seed = mojo::internal::Hash(seed, this->button_placement);
  seed = mojo::internal::Hash(seed, this->scroll_view_rubber_banding);
  return seed;
}

bool UpdateScrollbarThemeParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char Renderer::Name_[] = "content.mojom.Renderer";

RendererProxy::RendererProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void RendererProxy::CreateEmbedderRendererService(
    ::service_manager::mojom::ServiceRequest in_service_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::Renderer::CreateEmbedderRendererService");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderer_CreateEmbedderRendererService_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::Renderer_CreateEmbedderRendererService_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::service_manager::mojom::ServiceRequestDataView>(
      in_service_request, &params->service_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->service_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid service_request in Renderer.CreateEmbedderRendererService request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererProxy::CreateView(
    CreateViewParamsPtr in_params) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::Renderer::CreateView");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderer_CreateView_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::Renderer_CreateView_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::content::mojom::CreateViewParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in Renderer.CreateView request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererProxy::CreateFrame(
    CreateFrameParamsPtr in_params) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::Renderer::CreateFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderer_CreateFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::Renderer_CreateFrame_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::content::mojom::CreateFrameParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in Renderer.CreateFrame request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererProxy::CreateFrameProxy(
    int32_t in_routing_id, int32_t in_render_view_routing_id, int32_t in_opener_routing_id, int32_t in_parent_routing_id, const content::FrameReplicationState& in_replication_state, const base::UnguessableToken& in_devtools_frame_token) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::Renderer::CreateFrameProxy");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderer_CreateFrameProxy_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::Renderer_CreateFrameProxy_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->routing_id = in_routing_id;
  params->render_view_routing_id = in_render_view_routing_id;
  params->opener_routing_id = in_opener_routing_id;
  params->parent_routing_id = in_parent_routing_id;
  typename decltype(params->replication_state)::BaseType::BufferWriter
      replication_state_writer;
  mojo::internal::Serialize<::content::mojom::FrameReplicationStateDataView>(
      in_replication_state, buffer, &replication_state_writer, &serialization_context);
  params->replication_state.Set(
      replication_state_writer.is_null() ? nullptr : replication_state_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->replication_state.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null replication_state in Renderer.CreateFrameProxy request");
  typename decltype(params->devtools_frame_token)::BaseType::BufferWriter
      devtools_frame_token_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_devtools_frame_token, buffer, &devtools_frame_token_writer, &serialization_context);
  params->devtools_frame_token.Set(
      devtools_frame_token_writer.is_null() ? nullptr : devtools_frame_token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->devtools_frame_token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null devtools_frame_token in Renderer.CreateFrameProxy request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererProxy::SetUpEmbeddedWorkerChannelForServiceWorker(
    ::content::mojom::EmbeddedWorkerInstanceClientRequest in_client_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::Renderer::SetUpEmbeddedWorkerChannelForServiceWorker");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderer_SetUpEmbeddedWorkerChannelForServiceWorker_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::content::mojom::EmbeddedWorkerInstanceClientRequestDataView>(
      in_client_request, &params->client_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client_request in Renderer.SetUpEmbeddedWorkerChannelForServiceWorker request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererProxy::OnNetworkConnectionChanged(
    net::NetworkChangeNotifier::ConnectionType in_connection_type, double in_max_bandwidth_mbps) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::Renderer::OnNetworkConnectionChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderer_OnNetworkConnectionChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::Renderer_OnNetworkConnectionChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::content::mojom::NetworkConnectionType>(
      in_connection_type, &params->connection_type);
  params->max_bandwidth_mbps = in_max_bandwidth_mbps;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererProxy::OnNetworkQualityChanged(
    net::EffectiveConnectionType in_effective_connection_type, base::TimeDelta in_http_rtt, base::TimeDelta in_transport_rtt, double in_bandwidth_kbps) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::Renderer::OnNetworkQualityChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderer_OnNetworkQualityChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::Renderer_OnNetworkQualityChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::EffectiveConnectionType>(
      in_effective_connection_type, &params->effective_connection_type);
  typename decltype(params->http_rtt)::BaseType::BufferWriter
      http_rtt_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_http_rtt, buffer, &http_rtt_writer, &serialization_context);
  params->http_rtt.Set(
      http_rtt_writer.is_null() ? nullptr : http_rtt_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->http_rtt.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null http_rtt in Renderer.OnNetworkQualityChanged request");
  typename decltype(params->transport_rtt)::BaseType::BufferWriter
      transport_rtt_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_transport_rtt, buffer, &transport_rtt_writer, &serialization_context);
  params->transport_rtt.Set(
      transport_rtt_writer.is_null() ? nullptr : transport_rtt_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->transport_rtt.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null transport_rtt in Renderer.OnNetworkQualityChanged request");
  params->bandwidth_kbps = in_bandwidth_kbps;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererProxy::SetWebKitSharedTimersSuspended(
    bool in_suspend) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::Renderer::SetWebKitSharedTimersSuspended");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderer_SetWebKitSharedTimersSuspended_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::Renderer_SetWebKitSharedTimersSuspended_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->suspend = in_suspend;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererProxy::SetUserAgent(
    const std::string& in_user_agent) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::Renderer::SetUserAgent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderer_SetUserAgent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::Renderer_SetUserAgent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->user_agent)::BaseType::BufferWriter
      user_agent_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_user_agent, buffer, &user_agent_writer, &serialization_context);
  params->user_agent.Set(
      user_agent_writer.is_null() ? nullptr : user_agent_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->user_agent.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null user_agent in Renderer.SetUserAgent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererProxy::UpdateScrollbarTheme(
    UpdateScrollbarThemeParamsPtr in_params) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::Renderer::UpdateScrollbarTheme");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderer_UpdateScrollbarTheme_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::Renderer_UpdateScrollbarTheme_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::content::mojom::UpdateScrollbarThemeParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in Renderer.UpdateScrollbarTheme request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererProxy::OnSystemColorsChanged(
    int32_t in_aqua_color_variant, const std::string& in_highlight_text_color, const std::string& in_highlight_color) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::Renderer::OnSystemColorsChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderer_OnSystemColorsChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::Renderer_OnSystemColorsChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->aqua_color_variant = in_aqua_color_variant;
  typename decltype(params->highlight_text_color)::BaseType::BufferWriter
      highlight_text_color_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_highlight_text_color, buffer, &highlight_text_color_writer, &serialization_context);
  params->highlight_text_color.Set(
      highlight_text_color_writer.is_null() ? nullptr : highlight_text_color_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->highlight_text_color.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null highlight_text_color in Renderer.OnSystemColorsChanged request");
  typename decltype(params->highlight_color)::BaseType::BufferWriter
      highlight_color_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_highlight_color, buffer, &highlight_color_writer, &serialization_context);
  params->highlight_color.Set(
      highlight_color_writer.is_null() ? nullptr : highlight_color_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->highlight_color.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null highlight_color in Renderer.OnSystemColorsChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererProxy::PurgePluginListCache(
    bool in_reload_pages) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::Renderer::PurgePluginListCache");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderer_PurgePluginListCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::Renderer_PurgePluginListCache_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->reload_pages = in_reload_pages;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererProxy::SetProcessBackgrounded(
    bool in_background) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::Renderer::SetProcessBackgrounded");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderer_SetProcessBackgrounded_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::Renderer_SetProcessBackgrounded_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->background = in_background;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererProxy::SetSchedulerKeepActive(
    bool in_keep_active) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::Renderer::SetSchedulerKeepActive");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderer_SetSchedulerKeepActive_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::Renderer_SetSchedulerKeepActive_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->keep_active = in_keep_active;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererProxy::ProcessPurgeAndSuspend(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::Renderer::ProcessPurgeAndSuspend");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderer_ProcessPurgeAndSuspend_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::Renderer_ProcessPurgeAndSuspend_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool RendererStubDispatch::Accept(
    Renderer* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRenderer_CreateEmbedderRendererService_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::CreateEmbedderRendererService",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Renderer_CreateEmbedderRendererService_Params_Data* params =
          reinterpret_cast<internal::Renderer_CreateEmbedderRendererService_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::service_manager::mojom::ServiceRequest p_service_request{};
      Renderer_CreateEmbedderRendererService_ParamsDataView input_data_view(params, &serialization_context);
      
      p_service_request =
          input_data_view.TakeServiceRequest<decltype(p_service_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Renderer::CreateEmbedderRendererService deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateEmbedderRendererService(
std::move(p_service_request));
      return true;
    }
    case internal::kRenderer_CreateView_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::CreateView",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Renderer_CreateView_Params_Data* params =
          reinterpret_cast<internal::Renderer_CreateView_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CreateViewParamsPtr p_params{};
      Renderer_CreateView_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Renderer::CreateView deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateView(
std::move(p_params));
      return true;
    }
    case internal::kRenderer_CreateFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::CreateFrame",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Renderer_CreateFrame_Params_Data* params =
          reinterpret_cast<internal::Renderer_CreateFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CreateFrameParamsPtr p_params{};
      Renderer_CreateFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Renderer::CreateFrame deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateFrame(
std::move(p_params));
      return true;
    }
    case internal::kRenderer_CreateFrameProxy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::CreateFrameProxy",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Renderer_CreateFrameProxy_Params_Data* params =
          reinterpret_cast<internal::Renderer_CreateFrameProxy_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_routing_id{};
      int32_t p_render_view_routing_id{};
      int32_t p_opener_routing_id{};
      int32_t p_parent_routing_id{};
      content::FrameReplicationState p_replication_state{};
      base::UnguessableToken p_devtools_frame_token{};
      Renderer_CreateFrameProxy_ParamsDataView input_data_view(params, &serialization_context);
      
      p_routing_id = input_data_view.routing_id();
      p_render_view_routing_id = input_data_view.render_view_routing_id();
      p_opener_routing_id = input_data_view.opener_routing_id();
      p_parent_routing_id = input_data_view.parent_routing_id();
      if (!input_data_view.ReadReplicationState(&p_replication_state))
        success = false;
      if (!input_data_view.ReadDevtoolsFrameToken(&p_devtools_frame_token))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Renderer::CreateFrameProxy deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateFrameProxy(
std::move(p_routing_id), 
std::move(p_render_view_routing_id), 
std::move(p_opener_routing_id), 
std::move(p_parent_routing_id), 
std::move(p_replication_state), 
std::move(p_devtools_frame_token));
      return true;
    }
    case internal::kRenderer_SetUpEmbeddedWorkerChannelForServiceWorker_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::SetUpEmbeddedWorkerChannelForServiceWorker",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params_Data* params =
          reinterpret_cast<internal::Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::content::mojom::EmbeddedWorkerInstanceClientRequest p_client_request{};
      Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client_request =
          input_data_view.TakeClientRequest<decltype(p_client_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Renderer::SetUpEmbeddedWorkerChannelForServiceWorker deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetUpEmbeddedWorkerChannelForServiceWorker(
std::move(p_client_request));
      return true;
    }
    case internal::kRenderer_OnNetworkConnectionChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::OnNetworkConnectionChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Renderer_OnNetworkConnectionChanged_Params_Data* params =
          reinterpret_cast<internal::Renderer_OnNetworkConnectionChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::NetworkChangeNotifier::ConnectionType p_connection_type{};
      double p_max_bandwidth_mbps{};
      Renderer_OnNetworkConnectionChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadConnectionType(&p_connection_type))
        success = false;
      p_max_bandwidth_mbps = input_data_view.max_bandwidth_mbps();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Renderer::OnNetworkConnectionChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnNetworkConnectionChanged(
std::move(p_connection_type), 
std::move(p_max_bandwidth_mbps));
      return true;
    }
    case internal::kRenderer_OnNetworkQualityChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::OnNetworkQualityChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Renderer_OnNetworkQualityChanged_Params_Data* params =
          reinterpret_cast<internal::Renderer_OnNetworkQualityChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::EffectiveConnectionType p_effective_connection_type{};
      base::TimeDelta p_http_rtt{};
      base::TimeDelta p_transport_rtt{};
      double p_bandwidth_kbps{};
      Renderer_OnNetworkQualityChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadEffectiveConnectionType(&p_effective_connection_type))
        success = false;
      if (!input_data_view.ReadHttpRtt(&p_http_rtt))
        success = false;
      if (!input_data_view.ReadTransportRtt(&p_transport_rtt))
        success = false;
      p_bandwidth_kbps = input_data_view.bandwidth_kbps();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Renderer::OnNetworkQualityChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnNetworkQualityChanged(
std::move(p_effective_connection_type), 
std::move(p_http_rtt), 
std::move(p_transport_rtt), 
std::move(p_bandwidth_kbps));
      return true;
    }
    case internal::kRenderer_SetWebKitSharedTimersSuspended_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::SetWebKitSharedTimersSuspended",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Renderer_SetWebKitSharedTimersSuspended_Params_Data* params =
          reinterpret_cast<internal::Renderer_SetWebKitSharedTimersSuspended_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_suspend{};
      Renderer_SetWebKitSharedTimersSuspended_ParamsDataView input_data_view(params, &serialization_context);
      
      p_suspend = input_data_view.suspend();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Renderer::SetWebKitSharedTimersSuspended deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetWebKitSharedTimersSuspended(
std::move(p_suspend));
      return true;
    }
    case internal::kRenderer_SetUserAgent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::SetUserAgent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Renderer_SetUserAgent_Params_Data* params =
          reinterpret_cast<internal::Renderer_SetUserAgent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_user_agent{};
      Renderer_SetUserAgent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUserAgent(&p_user_agent))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Renderer::SetUserAgent deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetUserAgent(
std::move(p_user_agent));
      return true;
    }
    case internal::kRenderer_UpdateScrollbarTheme_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::UpdateScrollbarTheme",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Renderer_UpdateScrollbarTheme_Params_Data* params =
          reinterpret_cast<internal::Renderer_UpdateScrollbarTheme_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      UpdateScrollbarThemeParamsPtr p_params{};
      Renderer_UpdateScrollbarTheme_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Renderer::UpdateScrollbarTheme deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UpdateScrollbarTheme(
std::move(p_params));
      return true;
    }
    case internal::kRenderer_OnSystemColorsChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::OnSystemColorsChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Renderer_OnSystemColorsChanged_Params_Data* params =
          reinterpret_cast<internal::Renderer_OnSystemColorsChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_aqua_color_variant{};
      std::string p_highlight_text_color{};
      std::string p_highlight_color{};
      Renderer_OnSystemColorsChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_aqua_color_variant = input_data_view.aqua_color_variant();
      if (!input_data_view.ReadHighlightTextColor(&p_highlight_text_color))
        success = false;
      if (!input_data_view.ReadHighlightColor(&p_highlight_color))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Renderer::OnSystemColorsChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnSystemColorsChanged(
std::move(p_aqua_color_variant), 
std::move(p_highlight_text_color), 
std::move(p_highlight_color));
      return true;
    }
    case internal::kRenderer_PurgePluginListCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::PurgePluginListCache",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Renderer_PurgePluginListCache_Params_Data* params =
          reinterpret_cast<internal::Renderer_PurgePluginListCache_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_reload_pages{};
      Renderer_PurgePluginListCache_ParamsDataView input_data_view(params, &serialization_context);
      
      p_reload_pages = input_data_view.reload_pages();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Renderer::PurgePluginListCache deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PurgePluginListCache(
std::move(p_reload_pages));
      return true;
    }
    case internal::kRenderer_SetProcessBackgrounded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::SetProcessBackgrounded",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Renderer_SetProcessBackgrounded_Params_Data* params =
          reinterpret_cast<internal::Renderer_SetProcessBackgrounded_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_background{};
      Renderer_SetProcessBackgrounded_ParamsDataView input_data_view(params, &serialization_context);
      
      p_background = input_data_view.background();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Renderer::SetProcessBackgrounded deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetProcessBackgrounded(
std::move(p_background));
      return true;
    }
    case internal::kRenderer_SetSchedulerKeepActive_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::SetSchedulerKeepActive",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Renderer_SetSchedulerKeepActive_Params_Data* params =
          reinterpret_cast<internal::Renderer_SetSchedulerKeepActive_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_keep_active{};
      Renderer_SetSchedulerKeepActive_ParamsDataView input_data_view(params, &serialization_context);
      
      p_keep_active = input_data_view.keep_active();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Renderer::SetSchedulerKeepActive deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetSchedulerKeepActive(
std::move(p_keep_active));
      return true;
    }
    case internal::kRenderer_ProcessPurgeAndSuspend_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::ProcessPurgeAndSuspend",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Renderer_ProcessPurgeAndSuspend_Params_Data* params =
          reinterpret_cast<internal::Renderer_ProcessPurgeAndSuspend_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Renderer_ProcessPurgeAndSuspend_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Renderer::ProcessPurgeAndSuspend deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ProcessPurgeAndSuspend();
      return true;
    }
  }
  return false;
}

// static
bool RendererStubDispatch::AcceptWithResponder(
    Renderer* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRenderer_CreateEmbedderRendererService_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::CreateEmbedderRendererService",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderer_CreateView_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::CreateView",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderer_CreateFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::CreateFrame",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderer_CreateFrameProxy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::CreateFrameProxy",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderer_SetUpEmbeddedWorkerChannelForServiceWorker_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::SetUpEmbeddedWorkerChannelForServiceWorker",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderer_OnNetworkConnectionChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::OnNetworkConnectionChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderer_OnNetworkQualityChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::OnNetworkQualityChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderer_SetWebKitSharedTimersSuspended_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::SetWebKitSharedTimersSuspended",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderer_SetUserAgent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::SetUserAgent",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderer_UpdateScrollbarTheme_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::UpdateScrollbarTheme",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderer_OnSystemColorsChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::OnSystemColorsChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderer_PurgePluginListCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::PurgePluginListCache",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderer_SetProcessBackgrounded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::SetProcessBackgrounded",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderer_SetSchedulerKeepActive_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::SetSchedulerKeepActive",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderer_ProcessPurgeAndSuspend_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Renderer::ProcessPurgeAndSuspend",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool RendererRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Renderer RequestValidator");

  switch (message->header()->name) {
    case internal::kRenderer_CreateEmbedderRendererService_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Renderer_CreateEmbedderRendererService_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderer_CreateView_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Renderer_CreateView_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderer_CreateFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Renderer_CreateFrame_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderer_CreateFrameProxy_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Renderer_CreateFrameProxy_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderer_SetUpEmbeddedWorkerChannelForServiceWorker_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderer_OnNetworkConnectionChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Renderer_OnNetworkConnectionChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderer_OnNetworkQualityChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Renderer_OnNetworkQualityChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderer_SetWebKitSharedTimersSuspended_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Renderer_SetWebKitSharedTimersSuspended_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderer_SetUserAgent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Renderer_SetUserAgent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderer_UpdateScrollbarTheme_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Renderer_UpdateScrollbarTheme_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderer_OnSystemColorsChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Renderer_OnSystemColorsChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderer_PurgePluginListCache_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Renderer_PurgePluginListCache_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderer_SetProcessBackgrounded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Renderer_SetProcessBackgrounded_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderer_SetSchedulerKeepActive_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Renderer_SetSchedulerKeepActive_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderer_ProcessPurgeAndSuspend_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Renderer_ProcessPurgeAndSuspend_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

void RendererInterceptorForTesting::CreateEmbedderRendererService(::service_manager::mojom::ServiceRequest service_request) {
  GetForwardingInterface()->CreateEmbedderRendererService(std::move(service_request));
}
void RendererInterceptorForTesting::CreateView(CreateViewParamsPtr params) {
  GetForwardingInterface()->CreateView(std::move(params));
}
void RendererInterceptorForTesting::CreateFrame(CreateFrameParamsPtr params) {
  GetForwardingInterface()->CreateFrame(std::move(params));
}
void RendererInterceptorForTesting::CreateFrameProxy(int32_t routing_id, int32_t render_view_routing_id, int32_t opener_routing_id, int32_t parent_routing_id, const content::FrameReplicationState& replication_state, const base::UnguessableToken& devtools_frame_token) {
  GetForwardingInterface()->CreateFrameProxy(std::move(routing_id), std::move(render_view_routing_id), std::move(opener_routing_id), std::move(parent_routing_id), std::move(replication_state), std::move(devtools_frame_token));
}
void RendererInterceptorForTesting::SetUpEmbeddedWorkerChannelForServiceWorker(::content::mojom::EmbeddedWorkerInstanceClientRequest client_request) {
  GetForwardingInterface()->SetUpEmbeddedWorkerChannelForServiceWorker(std::move(client_request));
}
void RendererInterceptorForTesting::OnNetworkConnectionChanged(net::NetworkChangeNotifier::ConnectionType connection_type, double max_bandwidth_mbps) {
  GetForwardingInterface()->OnNetworkConnectionChanged(std::move(connection_type), std::move(max_bandwidth_mbps));
}
void RendererInterceptorForTesting::OnNetworkQualityChanged(net::EffectiveConnectionType effective_connection_type, base::TimeDelta http_rtt, base::TimeDelta transport_rtt, double bandwidth_kbps) {
  GetForwardingInterface()->OnNetworkQualityChanged(std::move(effective_connection_type), std::move(http_rtt), std::move(transport_rtt), std::move(bandwidth_kbps));
}
void RendererInterceptorForTesting::SetWebKitSharedTimersSuspended(bool suspend) {
  GetForwardingInterface()->SetWebKitSharedTimersSuspended(std::move(suspend));
}
void RendererInterceptorForTesting::SetUserAgent(const std::string& user_agent) {
  GetForwardingInterface()->SetUserAgent(std::move(user_agent));
}
void RendererInterceptorForTesting::UpdateScrollbarTheme(UpdateScrollbarThemeParamsPtr params) {
  GetForwardingInterface()->UpdateScrollbarTheme(std::move(params));
}
void RendererInterceptorForTesting::OnSystemColorsChanged(int32_t aqua_color_variant, const std::string& highlight_text_color, const std::string& highlight_color) {
  GetForwardingInterface()->OnSystemColorsChanged(std::move(aqua_color_variant), std::move(highlight_text_color), std::move(highlight_color));
}
void RendererInterceptorForTesting::PurgePluginListCache(bool reload_pages) {
  GetForwardingInterface()->PurgePluginListCache(std::move(reload_pages));
}
void RendererInterceptorForTesting::SetProcessBackgrounded(bool background) {
  GetForwardingInterface()->SetProcessBackgrounded(std::move(background));
}
void RendererInterceptorForTesting::SetSchedulerKeepActive(bool keep_active) {
  GetForwardingInterface()->SetSchedulerKeepActive(std::move(keep_active));
}
void RendererInterceptorForTesting::ProcessPurgeAndSuspend() {
  GetForwardingInterface()->ProcessPurgeAndSuspend();
}
RendererAsyncWaiter::RendererAsyncWaiter(
    Renderer* proxy) : proxy_(proxy) {}

RendererAsyncWaiter::~RendererAsyncWaiter() = default;


}  // namespace mojom
}  // namespace content

namespace mojo {


// static
bool StructTraits<::content::mojom::CreateViewParams::DataView, ::content::mojom::CreateViewParamsPtr>::Read(
    ::content::mojom::CreateViewParams::DataView input,
    ::content::mojom::CreateViewParamsPtr* output) {
  bool success = true;
  ::content::mojom::CreateViewParamsPtr result(::content::mojom::CreateViewParams::New());
  
      if (!input.ReadRendererPreferences(&result->renderer_preferences))
        success = false;
      if (!input.ReadWebPreferences(&result->web_preferences))
        success = false;
      result->view_id = input.view_id();
      result->main_frame_routing_id = input.main_frame_routing_id();
      result->main_frame_interface_provider =
          input.TakeMainFrameInterfaceProvider<decltype(result->main_frame_interface_provider)>();
      result->main_frame_widget_routing_id = input.main_frame_widget_routing_id();
      if (!input.ReadSessionStorageNamespaceId(&result->session_storage_namespace_id))
        success = false;
      result->opener_frame_route_id = input.opener_frame_route_id();
      result->swapped_out = input.swapped_out();
      if (!input.ReadReplicatedFrameState(&result->replicated_frame_state))
        success = false;
      if (!input.ReadDevtoolsMainFrameToken(&result->devtools_main_frame_token))
        success = false;
      result->proxy_routing_id = input.proxy_routing_id();
      result->hidden = input.hidden();
      result->never_visible = input.never_visible();
      result->window_was_created_with_opener = input.window_was_created_with_opener();
      result->has_committed_real_load = input.has_committed_real_load();
      if (!input.ReadVisualProperties(&result->visual_properties))
        success = false;
      result->page_zoom_level = input.page_zoom_level();
      result->renderer_wide_named_frame_lookup = input.renderer_wide_named_frame_lookup();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::CreateFrameWidgetParams::DataView, ::content::mojom::CreateFrameWidgetParamsPtr>::Read(
    ::content::mojom::CreateFrameWidgetParams::DataView input,
    ::content::mojom::CreateFrameWidgetParamsPtr* output) {
  bool success = true;
  ::content::mojom::CreateFrameWidgetParamsPtr result(::content::mojom::CreateFrameWidgetParams::New());
  
      result->routing_id = input.routing_id();
      result->hidden = input.hidden();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::CreateFrameParams::DataView, ::content::mojom::CreateFrameParamsPtr>::Read(
    ::content::mojom::CreateFrameParams::DataView input,
    ::content::mojom::CreateFrameParamsPtr* output) {
  bool success = true;
  ::content::mojom::CreateFrameParamsPtr result(::content::mojom::CreateFrameParams::New());
  
      result->routing_id = input.routing_id();
      result->proxy_routing_id = input.proxy_routing_id();
      result->opener_routing_id = input.opener_routing_id();
      result->parent_routing_id = input.parent_routing_id();
      result->previous_sibling_routing_id = input.previous_sibling_routing_id();
      result->interface_provider =
          input.TakeInterfaceProvider<decltype(result->interface_provider)>();
      if (!input.ReadReplicationState(&result->replication_state))
        success = false;
      if (!input.ReadDevtoolsFrameToken(&result->devtools_frame_token))
        success = false;
      if (!input.ReadFrameOwnerProperties(&result->frame_owner_properties))
        success = false;
      if (!input.ReadWidgetParams(&result->widget_params))
        success = false;
      result->has_committed_real_load = input.has_committed_real_load();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::UpdateScrollbarThemeParams::DataView, ::content::mojom::UpdateScrollbarThemeParamsPtr>::Read(
    ::content::mojom::UpdateScrollbarThemeParams::DataView input,
    ::content::mojom::UpdateScrollbarThemeParamsPtr* output) {
  bool success = true;
  ::content::mojom::UpdateScrollbarThemeParamsPtr result(::content::mojom::UpdateScrollbarThemeParams::New());
  
      result->initial_button_delay = input.initial_button_delay();
      result->autoscroll_button_delay = input.autoscroll_button_delay();
      result->jump_on_track_click = input.jump_on_track_click();
      if (!input.ReadPreferredScrollerStyle(&result->preferred_scroller_style))
        success = false;
      result->redraw = input.redraw();
      if (!input.ReadButtonPlacement(&result->button_placement))
        success = false;
      result->scroll_view_rubber_banding = input.scroll_view_rubber_banding();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif