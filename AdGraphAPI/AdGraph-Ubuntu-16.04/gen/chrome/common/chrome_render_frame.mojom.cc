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

#include "chrome/common/chrome_render_frame.mojom.h"

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

#include "chrome/common/chrome_render_frame.mojom-shared-message-ids.h"
#include "chrome/common/web_application_info_provider_param_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace chrome {
namespace mojom {
const char ChromeRenderFrame::Name_[] = "chrome.mojom.ChromeRenderFrame";

class ChromeRenderFrame_RequestThumbnailForContextNode_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ChromeRenderFrame_RequestThumbnailForContextNode_ForwardToCallback(
      const ChromeRenderFrame::RequestThumbnailForContextNodeCallback& callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ChromeRenderFrame::RequestThumbnailForContextNodeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ChromeRenderFrame_RequestThumbnailForContextNode_ForwardToCallback);
};

class ChromeRenderFrame_GetWebApplicationInfo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ChromeRenderFrame_GetWebApplicationInfo_ForwardToCallback(
      const ChromeRenderFrame::GetWebApplicationInfoCallback& callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ChromeRenderFrame::GetWebApplicationInfoCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ChromeRenderFrame_GetWebApplicationInfo_ForwardToCallback);
};

ChromeRenderFrameProxy::ChromeRenderFrameProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ChromeRenderFrameProxy::SetWindowFeatures(
    ::blink::mojom::WindowFeaturesPtr in_window_features) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ChromeRenderFrame::SetWindowFeatures");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kChromeRenderFrame_SetWindowFeatures_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ChromeRenderFrame_SetWindowFeatures_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->window_features)::BaseType::BufferWriter
      window_features_writer;
  mojo::internal::Serialize<::blink::mojom::WindowFeaturesDataView>(
      in_window_features, buffer, &window_features_writer, &serialization_context);
  params->window_features.Set(
      window_features_writer.is_null() ? nullptr : window_features_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->window_features.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null window_features in ChromeRenderFrame.SetWindowFeatures request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ChromeRenderFrameProxy::RequestReloadImageForContextNode(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ChromeRenderFrame::RequestReloadImageForContextNode");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kChromeRenderFrame_RequestReloadImageForContextNode_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ChromeRenderFrame_RequestReloadImageForContextNode_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ChromeRenderFrameProxy::RequestThumbnailForContextNode(
    int32_t in_thumbnail_min_area_pixels, const gfx::Size& in_thumbnail_max_size_pixels, ImageFormat in_image_format, const RequestThumbnailForContextNodeCallback& callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ChromeRenderFrame::RequestThumbnailForContextNode");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kChromeRenderFrame_RequestThumbnailForContextNode_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ChromeRenderFrame_RequestThumbnailForContextNode_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->thumbnail_min_area_pixels = in_thumbnail_min_area_pixels;
  typename decltype(params->thumbnail_max_size_pixels)::BaseType::BufferWriter
      thumbnail_max_size_pixels_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_thumbnail_max_size_pixels, buffer, &thumbnail_max_size_pixels_writer, &serialization_context);
  params->thumbnail_max_size_pixels.Set(
      thumbnail_max_size_pixels_writer.is_null() ? nullptr : thumbnail_max_size_pixels_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->thumbnail_max_size_pixels.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null thumbnail_max_size_pixels in ChromeRenderFrame.RequestThumbnailForContextNode request");
  mojo::internal::Serialize<::chrome::mojom::ImageFormat>(
      in_image_format, &params->image_format);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ChromeRenderFrame_RequestThumbnailForContextNode_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ChromeRenderFrameProxy::ExecuteWebUIJavaScript(
    const base::string16& in_javascript) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ChromeRenderFrame::ExecuteWebUIJavaScript");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kChromeRenderFrame_ExecuteWebUIJavaScript_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ChromeRenderFrame_ExecuteWebUIJavaScript_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->javascript)::BaseType::BufferWriter
      javascript_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_javascript, buffer, &javascript_writer, &serialization_context);
  params->javascript.Set(
      javascript_writer.is_null() ? nullptr : javascript_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->javascript.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null javascript in ChromeRenderFrame.ExecuteWebUIJavaScript request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ChromeRenderFrameProxy::SetClientSidePhishingDetection(
    bool in_enable_phishing_detection) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ChromeRenderFrame::SetClientSidePhishingDetection");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kChromeRenderFrame_SetClientSidePhishingDetection_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ChromeRenderFrame_SetClientSidePhishingDetection_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->enable_phishing_detection = in_enable_phishing_detection;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ChromeRenderFrameProxy::GetWebApplicationInfo(
    const GetWebApplicationInfoCallback& callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ChromeRenderFrame::GetWebApplicationInfo");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kChromeRenderFrame_GetWebApplicationInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ChromeRenderFrame_GetWebApplicationInfo_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ChromeRenderFrame_GetWebApplicationInfo_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ChromeRenderFrame_RequestThumbnailForContextNode_ProxyToResponder {
 public:
  static ChromeRenderFrame::RequestThumbnailForContextNodeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ChromeRenderFrame_RequestThumbnailForContextNode_ProxyToResponder> proxy(
        new ChromeRenderFrame_RequestThumbnailForContextNode_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::Bind(&ChromeRenderFrame_RequestThumbnailForContextNode_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~ChromeRenderFrame_RequestThumbnailForContextNode_ProxyToResponder() {
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
  ChromeRenderFrame_RequestThumbnailForContextNode_ProxyToResponder(
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
        << "ChromeRenderFrame::RequestThumbnailForContextNodeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::vector<uint8_t>& in_thumbnail_data, const gfx::Size& in_original_size);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ChromeRenderFrame_RequestThumbnailForContextNode_ProxyToResponder);
};

bool ChromeRenderFrame_RequestThumbnailForContextNode_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "chrome::mojom::ChromeRenderFrame::RequestThumbnailForContextNodeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<uint8_t> p_thumbnail_data{};
  gfx::Size p_original_size{};
  ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadThumbnailData(&p_thumbnail_data))
    success = false;
  if (!input_data_view.ReadOriginalSize(&p_original_size))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ChromeRenderFrame::RequestThumbnailForContextNode response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_thumbnail_data), 
std::move(p_original_size));
  return true;
}

void ChromeRenderFrame_RequestThumbnailForContextNode_ProxyToResponder::Run(
    const std::vector<uint8_t>& in_thumbnail_data, const gfx::Size& in_original_size) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kChromeRenderFrame_RequestThumbnailForContextNode_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->thumbnail_data)::BaseType::BufferWriter
      thumbnail_data_writer;
  const mojo::internal::ContainerValidateParams thumbnail_data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_thumbnail_data, buffer, &thumbnail_data_writer, &thumbnail_data_validate_params,
      &serialization_context);
  params->thumbnail_data.Set(
      thumbnail_data_writer.is_null() ? nullptr : thumbnail_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->thumbnail_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null thumbnail_data in ");
  typename decltype(params->original_size)::BaseType::BufferWriter
      original_size_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_original_size, buffer, &original_size_writer, &serialization_context);
  params->original_size.Set(
      original_size_writer.is_null() ? nullptr : original_size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->original_size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null original_size in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ChromeRenderFrame::RequestThumbnailForContextNodeCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ChromeRenderFrame_GetWebApplicationInfo_ProxyToResponder {
 public:
  static ChromeRenderFrame::GetWebApplicationInfoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ChromeRenderFrame_GetWebApplicationInfo_ProxyToResponder> proxy(
        new ChromeRenderFrame_GetWebApplicationInfo_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::Bind(&ChromeRenderFrame_GetWebApplicationInfo_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~ChromeRenderFrame_GetWebApplicationInfo_ProxyToResponder() {
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
  ChromeRenderFrame_GetWebApplicationInfo_ProxyToResponder(
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
        << "ChromeRenderFrame::GetWebApplicationInfoCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const ::WebApplicationInfo& in_web_application_info);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ChromeRenderFrame_GetWebApplicationInfo_ProxyToResponder);
};

bool ChromeRenderFrame_GetWebApplicationInfo_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "chrome::mojom::ChromeRenderFrame::GetWebApplicationInfoCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ChromeRenderFrame_GetWebApplicationInfo_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ChromeRenderFrame_GetWebApplicationInfo_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::WebApplicationInfo p_web_application_info{};
  ChromeRenderFrame_GetWebApplicationInfo_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadWebApplicationInfo(&p_web_application_info))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ChromeRenderFrame::GetWebApplicationInfo response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_web_application_info));
  return true;
}

void ChromeRenderFrame_GetWebApplicationInfo_ProxyToResponder::Run(
    const ::WebApplicationInfo& in_web_application_info) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kChromeRenderFrame_GetWebApplicationInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ChromeRenderFrame_GetWebApplicationInfo_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->web_application_info)::BaseType::BufferWriter
      web_application_info_writer;
  mojo::internal::Serialize<::chrome::mojom::WebApplicationInfoDataView>(
      in_web_application_info, buffer, &web_application_info_writer, &serialization_context);
  params->web_application_info.Set(
      web_application_info_writer.is_null() ? nullptr : web_application_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->web_application_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null web_application_info in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ChromeRenderFrame::GetWebApplicationInfoCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ChromeRenderFrameStubDispatch::Accept(
    ChromeRenderFrame* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kChromeRenderFrame_SetWindowFeatures_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ChromeRenderFrame::SetWindowFeatures",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ChromeRenderFrame_SetWindowFeatures_Params_Data* params =
          reinterpret_cast<internal::ChromeRenderFrame_SetWindowFeatures_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::WindowFeaturesPtr p_window_features{};
      ChromeRenderFrame_SetWindowFeatures_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadWindowFeatures(&p_window_features))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ChromeRenderFrame::SetWindowFeatures deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetWindowFeatures(
std::move(p_window_features));
      return true;
    }
    case internal::kChromeRenderFrame_RequestReloadImageForContextNode_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ChromeRenderFrame::RequestReloadImageForContextNode",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ChromeRenderFrame_RequestReloadImageForContextNode_Params_Data* params =
          reinterpret_cast<internal::ChromeRenderFrame_RequestReloadImageForContextNode_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ChromeRenderFrame_RequestReloadImageForContextNode_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ChromeRenderFrame::RequestReloadImageForContextNode deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RequestReloadImageForContextNode();
      return true;
    }
    case internal::kChromeRenderFrame_RequestThumbnailForContextNode_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ChromeRenderFrame::RequestThumbnailForContextNode",
               "message", message->name());
#endif
      break;
    }
    case internal::kChromeRenderFrame_ExecuteWebUIJavaScript_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ChromeRenderFrame::ExecuteWebUIJavaScript",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ChromeRenderFrame_ExecuteWebUIJavaScript_Params_Data* params =
          reinterpret_cast<internal::ChromeRenderFrame_ExecuteWebUIJavaScript_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_javascript{};
      ChromeRenderFrame_ExecuteWebUIJavaScript_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadJavascript(&p_javascript))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ChromeRenderFrame::ExecuteWebUIJavaScript deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ExecuteWebUIJavaScript(
std::move(p_javascript));
      return true;
    }
    case internal::kChromeRenderFrame_SetClientSidePhishingDetection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ChromeRenderFrame::SetClientSidePhishingDetection",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ChromeRenderFrame_SetClientSidePhishingDetection_Params_Data* params =
          reinterpret_cast<internal::ChromeRenderFrame_SetClientSidePhishingDetection_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_enable_phishing_detection{};
      ChromeRenderFrame_SetClientSidePhishingDetection_ParamsDataView input_data_view(params, &serialization_context);
      
      p_enable_phishing_detection = input_data_view.enable_phishing_detection();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ChromeRenderFrame::SetClientSidePhishingDetection deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetClientSidePhishingDetection(
std::move(p_enable_phishing_detection));
      return true;
    }
    case internal::kChromeRenderFrame_GetWebApplicationInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ChromeRenderFrame::GetWebApplicationInfo",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool ChromeRenderFrameStubDispatch::AcceptWithResponder(
    ChromeRenderFrame* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kChromeRenderFrame_SetWindowFeatures_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ChromeRenderFrame::SetWindowFeatures",
               "message", message->name());
#endif
      break;
    }
    case internal::kChromeRenderFrame_RequestReloadImageForContextNode_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ChromeRenderFrame::RequestReloadImageForContextNode",
               "message", message->name());
#endif
      break;
    }
    case internal::kChromeRenderFrame_RequestThumbnailForContextNode_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ChromeRenderFrame::RequestThumbnailForContextNode",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ChromeRenderFrame_RequestThumbnailForContextNode_Params_Data* params =
          reinterpret_cast<
              internal::ChromeRenderFrame_RequestThumbnailForContextNode_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_thumbnail_min_area_pixels{};
      gfx::Size p_thumbnail_max_size_pixels{};
      ImageFormat p_image_format{};
      ChromeRenderFrame_RequestThumbnailForContextNode_ParamsDataView input_data_view(params, &serialization_context);
      
      p_thumbnail_min_area_pixels = input_data_view.thumbnail_min_area_pixels();
      if (!input_data_view.ReadThumbnailMaxSizePixels(&p_thumbnail_max_size_pixels))
        success = false;
      if (!input_data_view.ReadImageFormat(&p_image_format))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ChromeRenderFrame::RequestThumbnailForContextNode deserializer");
        return false;
      }
      ChromeRenderFrame::RequestThumbnailForContextNodeCallback callback =
          ChromeRenderFrame_RequestThumbnailForContextNode_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RequestThumbnailForContextNode(
std::move(p_thumbnail_min_area_pixels), 
std::move(p_thumbnail_max_size_pixels), 
std::move(p_image_format), std::move(callback));
      return true;
    }
    case internal::kChromeRenderFrame_ExecuteWebUIJavaScript_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ChromeRenderFrame::ExecuteWebUIJavaScript",
               "message", message->name());
#endif
      break;
    }
    case internal::kChromeRenderFrame_SetClientSidePhishingDetection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ChromeRenderFrame::SetClientSidePhishingDetection",
               "message", message->name());
#endif
      break;
    }
    case internal::kChromeRenderFrame_GetWebApplicationInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ChromeRenderFrame::GetWebApplicationInfo",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ChromeRenderFrame_GetWebApplicationInfo_Params_Data* params =
          reinterpret_cast<
              internal::ChromeRenderFrame_GetWebApplicationInfo_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ChromeRenderFrame_GetWebApplicationInfo_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ChromeRenderFrame::GetWebApplicationInfo deserializer");
        return false;
      }
      ChromeRenderFrame::GetWebApplicationInfoCallback callback =
          ChromeRenderFrame_GetWebApplicationInfo_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetWebApplicationInfo(std::move(callback));
      return true;
    }
  }
  return false;
}

bool ChromeRenderFrameRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ChromeRenderFrame RequestValidator");

  switch (message->header()->name) {
    case internal::kChromeRenderFrame_SetWindowFeatures_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ChromeRenderFrame_SetWindowFeatures_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kChromeRenderFrame_RequestReloadImageForContextNode_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ChromeRenderFrame_RequestReloadImageForContextNode_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kChromeRenderFrame_RequestThumbnailForContextNode_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ChromeRenderFrame_RequestThumbnailForContextNode_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kChromeRenderFrame_ExecuteWebUIJavaScript_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ChromeRenderFrame_ExecuteWebUIJavaScript_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kChromeRenderFrame_SetClientSidePhishingDetection_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ChromeRenderFrame_SetClientSidePhishingDetection_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kChromeRenderFrame_GetWebApplicationInfo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ChromeRenderFrame_GetWebApplicationInfo_Params_Data>(
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

bool ChromeRenderFrameResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ChromeRenderFrame ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kChromeRenderFrame_RequestThumbnailForContextNode_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kChromeRenderFrame_GetWebApplicationInfo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ChromeRenderFrame_GetWebApplicationInfo_ResponseParams_Data>(
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
void ChromeRenderFrameInterceptorForTesting::SetWindowFeatures(::blink::mojom::WindowFeaturesPtr window_features) {
  GetForwardingInterface()->SetWindowFeatures(std::move(window_features));
}
void ChromeRenderFrameInterceptorForTesting::RequestReloadImageForContextNode() {
  GetForwardingInterface()->RequestReloadImageForContextNode();
}
void ChromeRenderFrameInterceptorForTesting::RequestThumbnailForContextNode(int32_t thumbnail_min_area_pixels, const gfx::Size& thumbnail_max_size_pixels, ImageFormat image_format, const RequestThumbnailForContextNodeCallback& callback) {
  GetForwardingInterface()->RequestThumbnailForContextNode(std::move(thumbnail_min_area_pixels), std::move(thumbnail_max_size_pixels), std::move(image_format), std::move(callback));
}
void ChromeRenderFrameInterceptorForTesting::ExecuteWebUIJavaScript(const base::string16& javascript) {
  GetForwardingInterface()->ExecuteWebUIJavaScript(std::move(javascript));
}
void ChromeRenderFrameInterceptorForTesting::SetClientSidePhishingDetection(bool enable_phishing_detection) {
  GetForwardingInterface()->SetClientSidePhishingDetection(std::move(enable_phishing_detection));
}
void ChromeRenderFrameInterceptorForTesting::GetWebApplicationInfo(const GetWebApplicationInfoCallback& callback) {
  GetForwardingInterface()->GetWebApplicationInfo(std::move(callback));
}
ChromeRenderFrameAsyncWaiter::ChromeRenderFrameAsyncWaiter(
    ChromeRenderFrame* proxy) : proxy_(proxy) {}

ChromeRenderFrameAsyncWaiter::~ChromeRenderFrameAsyncWaiter() = default;

void ChromeRenderFrameAsyncWaiter::RequestThumbnailForContextNode(
    int32_t thumbnail_min_area_pixels, const gfx::Size& thumbnail_max_size_pixels, ImageFormat image_format, std::vector<uint8_t>* out_thumbnail_data, gfx::Size* out_original_size) {
  base::RunLoop loop;
  proxy_->RequestThumbnailForContextNode(std::move(thumbnail_min_area_pixels),std::move(thumbnail_max_size_pixels),std::move(image_format),
      base::Bind(
          [](base::RunLoop* loop,
             std::vector<uint8_t>* out_thumbnail_data
,
             gfx::Size* out_original_size
,
             const std::vector<uint8_t>& thumbnail_data,
             const gfx::Size& original_size) {*out_thumbnail_data = std::move(thumbnail_data);*out_original_size = std::move(original_size);
            loop->Quit();
          },
          &loop,
          out_thumbnail_data,
          out_original_size));
  loop.Run();
}
void ChromeRenderFrameAsyncWaiter::GetWebApplicationInfo(
    ::WebApplicationInfo* out_web_application_info) {
  base::RunLoop loop;
  proxy_->GetWebApplicationInfo(
      base::Bind(
          [](base::RunLoop* loop,
             ::WebApplicationInfo* out_web_application_info
,
             const ::WebApplicationInfo& web_application_info) {*out_web_application_info = std::move(web_application_info);
            loop->Quit();
          },
          &loop,
          out_web_application_info));
  loop.Run();
}

}  // namespace mojom
}  // namespace chrome

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif