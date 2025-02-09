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

#include "content/common/render_message_filter.mojom.h"

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

#include "content/common/render_message_filter.mojom-shared-message-ids.h"
#include "content/common/frame_messages.h"
#include "content/common/input/input_event_struct_traits.h"
#include "content/common/input/touch_action_optional_struct_traits.h"
#include "content/common/input_messages.h"
#include "content/common/view_messages.h"
#include "content/public/common/common_param_traits.h"
#include "mojo/public/cpp/base/thread_priority_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace content {
namespace mojom {
const char RenderMessageFilter::Name_[] = "content.mojom.RenderMessageFilter";
bool RenderMessageFilter::GenerateRoutingID(int32_t* out_routing_id) {
  NOTREACHED();
  return false;
}
bool RenderMessageFilter::CreateNewWidget(int32_t opener_id, blink::WebPopupType popup_type, ::content::mojom::WidgetPtr widget, int32_t* out_route_id) {
  NOTREACHED();
  return false;
}
bool RenderMessageFilter::CreateFullscreenWidget(int32_t opener_id, ::content::mojom::WidgetPtr widget, int32_t* out_route_id) {
  NOTREACHED();
  return false;
}
bool RenderMessageFilter::HasGpuProcess(bool* out_has_gpu_process) {
  NOTREACHED();
  return false;
}
class RenderMessageFilter_GenerateRoutingID_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  RenderMessageFilter_GenerateRoutingID_HandleSyncResponse(
      bool* result, int32_t* out_routing_id)
      : result_(result), out_routing_id_(out_routing_id) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  int32_t* out_routing_id_;DISALLOW_COPY_AND_ASSIGN(RenderMessageFilter_GenerateRoutingID_HandleSyncResponse);
};

class RenderMessageFilter_GenerateRoutingID_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  RenderMessageFilter_GenerateRoutingID_ForwardToCallback(
      RenderMessageFilter::GenerateRoutingIDCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  RenderMessageFilter::GenerateRoutingIDCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(RenderMessageFilter_GenerateRoutingID_ForwardToCallback);
};
class RenderMessageFilter_CreateNewWidget_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  RenderMessageFilter_CreateNewWidget_HandleSyncResponse(
      bool* result, int32_t* out_route_id)
      : result_(result), out_route_id_(out_route_id) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  int32_t* out_route_id_;DISALLOW_COPY_AND_ASSIGN(RenderMessageFilter_CreateNewWidget_HandleSyncResponse);
};

class RenderMessageFilter_CreateNewWidget_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  RenderMessageFilter_CreateNewWidget_ForwardToCallback(
      RenderMessageFilter::CreateNewWidgetCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  RenderMessageFilter::CreateNewWidgetCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(RenderMessageFilter_CreateNewWidget_ForwardToCallback);
};
class RenderMessageFilter_CreateFullscreenWidget_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  RenderMessageFilter_CreateFullscreenWidget_HandleSyncResponse(
      bool* result, int32_t* out_route_id)
      : result_(result), out_route_id_(out_route_id) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  int32_t* out_route_id_;DISALLOW_COPY_AND_ASSIGN(RenderMessageFilter_CreateFullscreenWidget_HandleSyncResponse);
};

class RenderMessageFilter_CreateFullscreenWidget_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  RenderMessageFilter_CreateFullscreenWidget_ForwardToCallback(
      RenderMessageFilter::CreateFullscreenWidgetCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  RenderMessageFilter::CreateFullscreenWidgetCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(RenderMessageFilter_CreateFullscreenWidget_ForwardToCallback);
};
class RenderMessageFilter_HasGpuProcess_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  RenderMessageFilter_HasGpuProcess_HandleSyncResponse(
      bool* result, bool* out_has_gpu_process)
      : result_(result), out_has_gpu_process_(out_has_gpu_process) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  bool* out_has_gpu_process_;DISALLOW_COPY_AND_ASSIGN(RenderMessageFilter_HasGpuProcess_HandleSyncResponse);
};

class RenderMessageFilter_HasGpuProcess_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  RenderMessageFilter_HasGpuProcess_ForwardToCallback(
      RenderMessageFilter::HasGpuProcessCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  RenderMessageFilter::HasGpuProcessCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(RenderMessageFilter_HasGpuProcess_ForwardToCallback);
};

RenderMessageFilterProxy::RenderMessageFilterProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool RenderMessageFilterProxy::GenerateRoutingID(
    int32_t* out_param_routing_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RenderMessageFilter::GenerateRoutingID");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderMessageFilter_GenerateRoutingID_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RenderMessageFilter_GenerateRoutingID_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RenderMessageFilter_GenerateRoutingID_HandleSyncResponse(
          &result, out_param_routing_id));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void RenderMessageFilterProxy::GenerateRoutingID(
    GenerateRoutingIDCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RenderMessageFilter::GenerateRoutingID");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderMessageFilter_GenerateRoutingID_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RenderMessageFilter_GenerateRoutingID_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RenderMessageFilter_GenerateRoutingID_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool RenderMessageFilterProxy::CreateNewWidget(
    int32_t param_opener_id, blink::WebPopupType param_popup_type, ::content::mojom::WidgetPtr param_widget, int32_t* out_param_route_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RenderMessageFilter::CreateNewWidget");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderMessageFilter_CreateNewWidget_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RenderMessageFilter_CreateNewWidget_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->opener_id = param_opener_id;
  mojo::internal::Serialize<::content::mojom::WebPopupType>(
      param_popup_type, &params->popup_type);
  mojo::internal::Serialize<::content::mojom::WidgetPtrDataView>(
      param_widget, &params->widget, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->widget),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid widget in RenderMessageFilter.CreateNewWidget request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RenderMessageFilter_CreateNewWidget_HandleSyncResponse(
          &result, out_param_route_id));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void RenderMessageFilterProxy::CreateNewWidget(
    int32_t in_opener_id, blink::WebPopupType in_popup_type, ::content::mojom::WidgetPtr in_widget, CreateNewWidgetCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RenderMessageFilter::CreateNewWidget");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderMessageFilter_CreateNewWidget_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RenderMessageFilter_CreateNewWidget_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->opener_id = in_opener_id;
  mojo::internal::Serialize<::content::mojom::WebPopupType>(
      in_popup_type, &params->popup_type);
  mojo::internal::Serialize<::content::mojom::WidgetPtrDataView>(
      in_widget, &params->widget, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->widget),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid widget in RenderMessageFilter.CreateNewWidget request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RenderMessageFilter_CreateNewWidget_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool RenderMessageFilterProxy::CreateFullscreenWidget(
    int32_t param_opener_id, ::content::mojom::WidgetPtr param_widget, int32_t* out_param_route_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RenderMessageFilter::CreateFullscreenWidget");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderMessageFilter_CreateFullscreenWidget_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RenderMessageFilter_CreateFullscreenWidget_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->opener_id = param_opener_id;
  mojo::internal::Serialize<::content::mojom::WidgetPtrDataView>(
      param_widget, &params->widget, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->widget),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid widget in RenderMessageFilter.CreateFullscreenWidget request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RenderMessageFilter_CreateFullscreenWidget_HandleSyncResponse(
          &result, out_param_route_id));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void RenderMessageFilterProxy::CreateFullscreenWidget(
    int32_t in_opener_id, ::content::mojom::WidgetPtr in_widget, CreateFullscreenWidgetCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RenderMessageFilter::CreateFullscreenWidget");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderMessageFilter_CreateFullscreenWidget_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RenderMessageFilter_CreateFullscreenWidget_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->opener_id = in_opener_id;
  mojo::internal::Serialize<::content::mojom::WidgetPtrDataView>(
      in_widget, &params->widget, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->widget),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid widget in RenderMessageFilter.CreateFullscreenWidget request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RenderMessageFilter_CreateFullscreenWidget_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void RenderMessageFilterProxy::DidGenerateCacheableMetadata(
    const GURL& in_url, base::Time in_expected_response_time, const std::vector<uint8_t>& in_data) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RenderMessageFilter::DidGenerateCacheableMetadata");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderMessageFilter_DidGenerateCacheableMetadata_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RenderMessageFilter_DidGenerateCacheableMetadata_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in RenderMessageFilter.DidGenerateCacheableMetadata request");
  typename decltype(params->expected_response_time)::BaseType::BufferWriter
      expected_response_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_expected_response_time, buffer, &expected_response_time_writer, &serialization_context);
  params->expected_response_time.Set(
      expected_response_time_writer.is_null() ? nullptr : expected_response_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->expected_response_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null expected_response_time in RenderMessageFilter.DidGenerateCacheableMetadata request");
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in RenderMessageFilter.DidGenerateCacheableMetadata request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RenderMessageFilterProxy::DidGenerateCacheableMetadataInCacheStorage(
    const GURL& in_url, base::Time in_expected_response_time, const std::vector<uint8_t>& in_data, const url::Origin& in_cache_storage_origin, const std::string& in_cache_storage_cache_name) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RenderMessageFilter::DidGenerateCacheableMetadataInCacheStorage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in RenderMessageFilter.DidGenerateCacheableMetadataInCacheStorage request");
  typename decltype(params->expected_response_time)::BaseType::BufferWriter
      expected_response_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_expected_response_time, buffer, &expected_response_time_writer, &serialization_context);
  params->expected_response_time.Set(
      expected_response_time_writer.is_null() ? nullptr : expected_response_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->expected_response_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null expected_response_time in RenderMessageFilter.DidGenerateCacheableMetadataInCacheStorage request");
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in RenderMessageFilter.DidGenerateCacheableMetadataInCacheStorage request");
  typename decltype(params->cache_storage_origin)::BaseType::BufferWriter
      cache_storage_origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_cache_storage_origin, buffer, &cache_storage_origin_writer, &serialization_context);
  params->cache_storage_origin.Set(
      cache_storage_origin_writer.is_null() ? nullptr : cache_storage_origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cache_storage_origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cache_storage_origin in RenderMessageFilter.DidGenerateCacheableMetadataInCacheStorage request");
  typename decltype(params->cache_storage_cache_name)::BaseType::BufferWriter
      cache_storage_cache_name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_cache_storage_cache_name, buffer, &cache_storage_cache_name_writer, &serialization_context);
  params->cache_storage_cache_name.Set(
      cache_storage_cache_name_writer.is_null() ? nullptr : cache_storage_cache_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cache_storage_cache_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cache_storage_cache_name in RenderMessageFilter.DidGenerateCacheableMetadataInCacheStorage request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
bool RenderMessageFilterProxy::HasGpuProcess(
    bool* out_param_has_gpu_process) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RenderMessageFilter::HasGpuProcess");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderMessageFilter_HasGpuProcess_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RenderMessageFilter_HasGpuProcess_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RenderMessageFilter_HasGpuProcess_HandleSyncResponse(
          &result, out_param_has_gpu_process));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void RenderMessageFilterProxy::HasGpuProcess(
    HasGpuProcessCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RenderMessageFilter::HasGpuProcess");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderMessageFilter_HasGpuProcess_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RenderMessageFilter_HasGpuProcess_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RenderMessageFilter_HasGpuProcess_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void RenderMessageFilterProxy::SetThreadPriority(
    int32_t in_platform_thread_id, base::ThreadPriority in_thread_priority) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RenderMessageFilter::SetThreadPriority");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderMessageFilter_SetThreadPriority_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RenderMessageFilter_SetThreadPriority_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->platform_thread_id = in_platform_thread_id;
  mojo::internal::Serialize<::mojo_base::mojom::ThreadPriority>(
      in_thread_priority, &params->thread_priority);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class RenderMessageFilter_GenerateRoutingID_ProxyToResponder {
 public:
  static RenderMessageFilter::GenerateRoutingIDCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<RenderMessageFilter_GenerateRoutingID_ProxyToResponder> proxy(
        new RenderMessageFilter_GenerateRoutingID_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&RenderMessageFilter_GenerateRoutingID_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~RenderMessageFilter_GenerateRoutingID_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  RenderMessageFilter_GenerateRoutingID_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "RenderMessageFilter::GenerateRoutingIDCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_routing_id);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(RenderMessageFilter_GenerateRoutingID_ProxyToResponder);
};

bool RenderMessageFilter_GenerateRoutingID_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::RenderMessageFilter::GenerateRoutingIDCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::RenderMessageFilter_GenerateRoutingID_ResponseParams_Data* params =
      reinterpret_cast<
          internal::RenderMessageFilter_GenerateRoutingID_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_routing_id{};
  RenderMessageFilter_GenerateRoutingID_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_routing_id = input_data_view.routing_id();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "RenderMessageFilter::GenerateRoutingID response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_routing_id));
  return true;
}

void RenderMessageFilter_GenerateRoutingID_ProxyToResponder::Run(
    int32_t in_routing_id) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderMessageFilter_GenerateRoutingID_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RenderMessageFilter_GenerateRoutingID_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->routing_id = in_routing_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderMessageFilter::GenerateRoutingIDCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool RenderMessageFilter_GenerateRoutingID_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::RenderMessageFilter_GenerateRoutingID_ResponseParams_Data* params =
      reinterpret_cast<internal::RenderMessageFilter_GenerateRoutingID_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_routing_id{};
  RenderMessageFilter_GenerateRoutingID_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_routing_id = input_data_view.routing_id();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "RenderMessageFilter::GenerateRoutingID response deserializer");
    return false;
  }
  *out_routing_id_ = std::move(p_routing_id);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class RenderMessageFilter_CreateNewWidget_ProxyToResponder {
 public:
  static RenderMessageFilter::CreateNewWidgetCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<RenderMessageFilter_CreateNewWidget_ProxyToResponder> proxy(
        new RenderMessageFilter_CreateNewWidget_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&RenderMessageFilter_CreateNewWidget_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~RenderMessageFilter_CreateNewWidget_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  RenderMessageFilter_CreateNewWidget_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "RenderMessageFilter::CreateNewWidgetCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_route_id);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(RenderMessageFilter_CreateNewWidget_ProxyToResponder);
};

bool RenderMessageFilter_CreateNewWidget_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::RenderMessageFilter::CreateNewWidgetCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::RenderMessageFilter_CreateNewWidget_ResponseParams_Data* params =
      reinterpret_cast<
          internal::RenderMessageFilter_CreateNewWidget_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_route_id{};
  RenderMessageFilter_CreateNewWidget_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_route_id = input_data_view.route_id();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "RenderMessageFilter::CreateNewWidget response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_route_id));
  return true;
}

void RenderMessageFilter_CreateNewWidget_ProxyToResponder::Run(
    int32_t in_route_id) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderMessageFilter_CreateNewWidget_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RenderMessageFilter_CreateNewWidget_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->route_id = in_route_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderMessageFilter::CreateNewWidgetCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool RenderMessageFilter_CreateNewWidget_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::RenderMessageFilter_CreateNewWidget_ResponseParams_Data* params =
      reinterpret_cast<internal::RenderMessageFilter_CreateNewWidget_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_route_id{};
  RenderMessageFilter_CreateNewWidget_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_route_id = input_data_view.route_id();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "RenderMessageFilter::CreateNewWidget response deserializer");
    return false;
  }
  *out_route_id_ = std::move(p_route_id);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class RenderMessageFilter_CreateFullscreenWidget_ProxyToResponder {
 public:
  static RenderMessageFilter::CreateFullscreenWidgetCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<RenderMessageFilter_CreateFullscreenWidget_ProxyToResponder> proxy(
        new RenderMessageFilter_CreateFullscreenWidget_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&RenderMessageFilter_CreateFullscreenWidget_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~RenderMessageFilter_CreateFullscreenWidget_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  RenderMessageFilter_CreateFullscreenWidget_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "RenderMessageFilter::CreateFullscreenWidgetCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_route_id);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(RenderMessageFilter_CreateFullscreenWidget_ProxyToResponder);
};

bool RenderMessageFilter_CreateFullscreenWidget_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::RenderMessageFilter::CreateFullscreenWidgetCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::RenderMessageFilter_CreateFullscreenWidget_ResponseParams_Data* params =
      reinterpret_cast<
          internal::RenderMessageFilter_CreateFullscreenWidget_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_route_id{};
  RenderMessageFilter_CreateFullscreenWidget_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_route_id = input_data_view.route_id();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "RenderMessageFilter::CreateFullscreenWidget response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_route_id));
  return true;
}

void RenderMessageFilter_CreateFullscreenWidget_ProxyToResponder::Run(
    int32_t in_route_id) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderMessageFilter_CreateFullscreenWidget_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RenderMessageFilter_CreateFullscreenWidget_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->route_id = in_route_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderMessageFilter::CreateFullscreenWidgetCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool RenderMessageFilter_CreateFullscreenWidget_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::RenderMessageFilter_CreateFullscreenWidget_ResponseParams_Data* params =
      reinterpret_cast<internal::RenderMessageFilter_CreateFullscreenWidget_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_route_id{};
  RenderMessageFilter_CreateFullscreenWidget_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_route_id = input_data_view.route_id();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "RenderMessageFilter::CreateFullscreenWidget response deserializer");
    return false;
  }
  *out_route_id_ = std::move(p_route_id);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class RenderMessageFilter_HasGpuProcess_ProxyToResponder {
 public:
  static RenderMessageFilter::HasGpuProcessCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<RenderMessageFilter_HasGpuProcess_ProxyToResponder> proxy(
        new RenderMessageFilter_HasGpuProcess_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&RenderMessageFilter_HasGpuProcess_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~RenderMessageFilter_HasGpuProcess_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  RenderMessageFilter_HasGpuProcess_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "RenderMessageFilter::HasGpuProcessCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_has_gpu_process);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(RenderMessageFilter_HasGpuProcess_ProxyToResponder);
};

bool RenderMessageFilter_HasGpuProcess_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::RenderMessageFilter::HasGpuProcessCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::RenderMessageFilter_HasGpuProcess_ResponseParams_Data* params =
      reinterpret_cast<
          internal::RenderMessageFilter_HasGpuProcess_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_has_gpu_process{};
  RenderMessageFilter_HasGpuProcess_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_has_gpu_process = input_data_view.has_gpu_process();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "RenderMessageFilter::HasGpuProcess response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_has_gpu_process));
  return true;
}

void RenderMessageFilter_HasGpuProcess_ProxyToResponder::Run(
    bool in_has_gpu_process) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderMessageFilter_HasGpuProcess_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RenderMessageFilter_HasGpuProcess_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->has_gpu_process = in_has_gpu_process;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderMessageFilter::HasGpuProcessCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool RenderMessageFilter_HasGpuProcess_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::RenderMessageFilter_HasGpuProcess_ResponseParams_Data* params =
      reinterpret_cast<internal::RenderMessageFilter_HasGpuProcess_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_has_gpu_process{};
  RenderMessageFilter_HasGpuProcess_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_has_gpu_process = input_data_view.has_gpu_process();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "RenderMessageFilter::HasGpuProcess response deserializer");
    return false;
  }
  *out_has_gpu_process_ = std::move(p_has_gpu_process);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool RenderMessageFilterStubDispatch::Accept(
    RenderMessageFilter* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRenderMessageFilter_GenerateRoutingID_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderMessageFilter::GenerateRoutingID",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderMessageFilter_CreateNewWidget_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderMessageFilter::CreateNewWidget",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderMessageFilter_CreateFullscreenWidget_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderMessageFilter::CreateFullscreenWidget",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderMessageFilter_DidGenerateCacheableMetadata_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderMessageFilter::DidGenerateCacheableMetadata",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RenderMessageFilter_DidGenerateCacheableMetadata_Params_Data* params =
          reinterpret_cast<internal::RenderMessageFilter_DidGenerateCacheableMetadata_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      base::Time p_expected_response_time{};
      std::vector<uint8_t> p_data{};
      RenderMessageFilter_DidGenerateCacheableMetadata_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadExpectedResponseTime(&p_expected_response_time))
        success = false;
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RenderMessageFilter::DidGenerateCacheableMetadata deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DidGenerateCacheableMetadata(
std::move(p_url), 
std::move(p_expected_response_time), 
std::move(p_data));
      return true;
    }
    case internal::kRenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderMessageFilter::DidGenerateCacheableMetadataInCacheStorage",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params_Data* params =
          reinterpret_cast<internal::RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      base::Time p_expected_response_time{};
      std::vector<uint8_t> p_data{};
      url::Origin p_cache_storage_origin{};
      std::string p_cache_storage_cache_name{};
      RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadExpectedResponseTime(&p_expected_response_time))
        success = false;
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!input_data_view.ReadCacheStorageOrigin(&p_cache_storage_origin))
        success = false;
      if (!input_data_view.ReadCacheStorageCacheName(&p_cache_storage_cache_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RenderMessageFilter::DidGenerateCacheableMetadataInCacheStorage deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DidGenerateCacheableMetadataInCacheStorage(
std::move(p_url), 
std::move(p_expected_response_time), 
std::move(p_data), 
std::move(p_cache_storage_origin), 
std::move(p_cache_storage_cache_name));
      return true;
    }
    case internal::kRenderMessageFilter_HasGpuProcess_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderMessageFilter::HasGpuProcess",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderMessageFilter_SetThreadPriority_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderMessageFilter::SetThreadPriority",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RenderMessageFilter_SetThreadPriority_Params_Data* params =
          reinterpret_cast<internal::RenderMessageFilter_SetThreadPriority_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_platform_thread_id{};
      base::ThreadPriority p_thread_priority{};
      RenderMessageFilter_SetThreadPriority_ParamsDataView input_data_view(params, &serialization_context);
      
      p_platform_thread_id = input_data_view.platform_thread_id();
      if (!input_data_view.ReadThreadPriority(&p_thread_priority))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RenderMessageFilter::SetThreadPriority deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetThreadPriority(
std::move(p_platform_thread_id), 
std::move(p_thread_priority));
      return true;
    }
  }
  return false;
}

// static
bool RenderMessageFilterStubDispatch::AcceptWithResponder(
    RenderMessageFilter* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRenderMessageFilter_GenerateRoutingID_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderMessageFilter::GenerateRoutingID",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::RenderMessageFilter_GenerateRoutingID_Params_Data* params =
          reinterpret_cast<
              internal::RenderMessageFilter_GenerateRoutingID_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      RenderMessageFilter_GenerateRoutingID_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RenderMessageFilter::GenerateRoutingID deserializer");
        return false;
      }
      RenderMessageFilter::GenerateRoutingIDCallback callback =
          RenderMessageFilter_GenerateRoutingID_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GenerateRoutingID(std::move(callback));
      return true;
    }
    case internal::kRenderMessageFilter_CreateNewWidget_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderMessageFilter::CreateNewWidget",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::RenderMessageFilter_CreateNewWidget_Params_Data* params =
          reinterpret_cast<
              internal::RenderMessageFilter_CreateNewWidget_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_opener_id{};
      blink::WebPopupType p_popup_type{};
      ::content::mojom::WidgetPtr p_widget{};
      RenderMessageFilter_CreateNewWidget_ParamsDataView input_data_view(params, &serialization_context);
      
      p_opener_id = input_data_view.opener_id();
      if (!input_data_view.ReadPopupType(&p_popup_type))
        success = false;
      p_widget =
          input_data_view.TakeWidget<decltype(p_widget)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RenderMessageFilter::CreateNewWidget deserializer");
        return false;
      }
      RenderMessageFilter::CreateNewWidgetCallback callback =
          RenderMessageFilter_CreateNewWidget_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateNewWidget(
std::move(p_opener_id), 
std::move(p_popup_type), 
std::move(p_widget), std::move(callback));
      return true;
    }
    case internal::kRenderMessageFilter_CreateFullscreenWidget_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderMessageFilter::CreateFullscreenWidget",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::RenderMessageFilter_CreateFullscreenWidget_Params_Data* params =
          reinterpret_cast<
              internal::RenderMessageFilter_CreateFullscreenWidget_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_opener_id{};
      ::content::mojom::WidgetPtr p_widget{};
      RenderMessageFilter_CreateFullscreenWidget_ParamsDataView input_data_view(params, &serialization_context);
      
      p_opener_id = input_data_view.opener_id();
      p_widget =
          input_data_view.TakeWidget<decltype(p_widget)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RenderMessageFilter::CreateFullscreenWidget deserializer");
        return false;
      }
      RenderMessageFilter::CreateFullscreenWidgetCallback callback =
          RenderMessageFilter_CreateFullscreenWidget_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateFullscreenWidget(
std::move(p_opener_id), 
std::move(p_widget), std::move(callback));
      return true;
    }
    case internal::kRenderMessageFilter_DidGenerateCacheableMetadata_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderMessageFilter::DidGenerateCacheableMetadata",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderMessageFilter::DidGenerateCacheableMetadataInCacheStorage",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderMessageFilter_HasGpuProcess_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderMessageFilter::HasGpuProcess",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::RenderMessageFilter_HasGpuProcess_Params_Data* params =
          reinterpret_cast<
              internal::RenderMessageFilter_HasGpuProcess_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      RenderMessageFilter_HasGpuProcess_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RenderMessageFilter::HasGpuProcess deserializer");
        return false;
      }
      RenderMessageFilter::HasGpuProcessCallback callback =
          RenderMessageFilter_HasGpuProcess_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->HasGpuProcess(std::move(callback));
      return true;
    }
    case internal::kRenderMessageFilter_SetThreadPriority_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderMessageFilter::SetThreadPriority",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool RenderMessageFilterRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RenderMessageFilter RequestValidator");

  switch (message->header()->name) {
    case internal::kRenderMessageFilter_GenerateRoutingID_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RenderMessageFilter_GenerateRoutingID_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderMessageFilter_CreateNewWidget_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RenderMessageFilter_CreateNewWidget_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderMessageFilter_CreateFullscreenWidget_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RenderMessageFilter_CreateFullscreenWidget_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderMessageFilter_DidGenerateCacheableMetadata_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RenderMessageFilter_DidGenerateCacheableMetadata_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderMessageFilter_HasGpuProcess_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RenderMessageFilter_HasGpuProcess_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderMessageFilter_SetThreadPriority_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RenderMessageFilter_SetThreadPriority_Params_Data>(
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

bool RenderMessageFilterResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RenderMessageFilter ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kRenderMessageFilter_GenerateRoutingID_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::RenderMessageFilter_GenerateRoutingID_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderMessageFilter_CreateNewWidget_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::RenderMessageFilter_CreateNewWidget_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderMessageFilter_CreateFullscreenWidget_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::RenderMessageFilter_CreateFullscreenWidget_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderMessageFilter_HasGpuProcess_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::RenderMessageFilter_HasGpuProcess_ResponseParams_Data>(
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
void RenderMessageFilterInterceptorForTesting::GenerateRoutingID(GenerateRoutingIDCallback callback) {
  GetForwardingInterface()->GenerateRoutingID(std::move(callback));
}
void RenderMessageFilterInterceptorForTesting::CreateNewWidget(int32_t opener_id, blink::WebPopupType popup_type, ::content::mojom::WidgetPtr widget, CreateNewWidgetCallback callback) {
  GetForwardingInterface()->CreateNewWidget(std::move(opener_id), std::move(popup_type), std::move(widget), std::move(callback));
}
void RenderMessageFilterInterceptorForTesting::CreateFullscreenWidget(int32_t opener_id, ::content::mojom::WidgetPtr widget, CreateFullscreenWidgetCallback callback) {
  GetForwardingInterface()->CreateFullscreenWidget(std::move(opener_id), std::move(widget), std::move(callback));
}
void RenderMessageFilterInterceptorForTesting::DidGenerateCacheableMetadata(const GURL& url, base::Time expected_response_time, const std::vector<uint8_t>& data) {
  GetForwardingInterface()->DidGenerateCacheableMetadata(std::move(url), std::move(expected_response_time), std::move(data));
}
void RenderMessageFilterInterceptorForTesting::DidGenerateCacheableMetadataInCacheStorage(const GURL& url, base::Time expected_response_time, const std::vector<uint8_t>& data, const url::Origin& cache_storage_origin, const std::string& cache_storage_cache_name) {
  GetForwardingInterface()->DidGenerateCacheableMetadataInCacheStorage(std::move(url), std::move(expected_response_time), std::move(data), std::move(cache_storage_origin), std::move(cache_storage_cache_name));
}
void RenderMessageFilterInterceptorForTesting::HasGpuProcess(HasGpuProcessCallback callback) {
  GetForwardingInterface()->HasGpuProcess(std::move(callback));
}
void RenderMessageFilterInterceptorForTesting::SetThreadPriority(int32_t platform_thread_id, base::ThreadPriority thread_priority) {
  GetForwardingInterface()->SetThreadPriority(std::move(platform_thread_id), std::move(thread_priority));
}
RenderMessageFilterAsyncWaiter::RenderMessageFilterAsyncWaiter(
    RenderMessageFilter* proxy) : proxy_(proxy) {}

RenderMessageFilterAsyncWaiter::~RenderMessageFilterAsyncWaiter() = default;

void RenderMessageFilterAsyncWaiter::GenerateRoutingID(
    int32_t* out_routing_id) {
  base::RunLoop loop;
  proxy_->GenerateRoutingID(
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_routing_id
,
             int32_t routing_id) {*out_routing_id = std::move(routing_id);
            loop->Quit();
          },
          &loop,
          out_routing_id));
  loop.Run();
}
void RenderMessageFilterAsyncWaiter::CreateNewWidget(
    int32_t opener_id, blink::WebPopupType popup_type, ::content::mojom::WidgetPtr widget, int32_t* out_route_id) {
  base::RunLoop loop;
  proxy_->CreateNewWidget(std::move(opener_id),std::move(popup_type),std::move(widget),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_route_id
,
             int32_t route_id) {*out_route_id = std::move(route_id);
            loop->Quit();
          },
          &loop,
          out_route_id));
  loop.Run();
}
void RenderMessageFilterAsyncWaiter::CreateFullscreenWidget(
    int32_t opener_id, ::content::mojom::WidgetPtr widget, int32_t* out_route_id) {
  base::RunLoop loop;
  proxy_->CreateFullscreenWidget(std::move(opener_id),std::move(widget),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_route_id
,
             int32_t route_id) {*out_route_id = std::move(route_id);
            loop->Quit();
          },
          &loop,
          out_route_id));
  loop.Run();
}
void RenderMessageFilterAsyncWaiter::HasGpuProcess(
    bool* out_has_gpu_process) {
  base::RunLoop loop;
  proxy_->HasGpuProcess(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_has_gpu_process
,
             bool has_gpu_process) {*out_has_gpu_process = std::move(has_gpu_process);
            loop->Quit();
          },
          &loop,
          out_has_gpu_process));
  loop.Run();
}

}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif