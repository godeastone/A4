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

#include "content/common/frame.mojom.h"

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

#include "content/common/frame.mojom-shared-message-ids.h"
#include "content/common/frame_messages.h"
#include "content/common/resource_messages.h"
#include "content/common/service_worker/service_worker_fetch_request_mojom_traits.h"
#include "content/common/url_loader_factory_bundle_struct_traits.h"
#include "content/public/common/load_timing_info_struct_traits.h"
#include "content/public/common/referrer_struct_traits.h"
#include "content/public/common/resource_type_struct_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "mojo/public/cpp/base/values_mojom_traits.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
#include "third_party/blink/common/feature_policy/feature_policy_mojom_traits.h"
#include "third_party/blink/public/platform/referrer_policy_enum_traits.h"
#include "ui/base/mojo/window_open_disposition_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace content {
namespace mojom {
const char kNavigation_FrameSpec[] = "navigation:frame";
CreateNewWindowParams::CreateNewWindowParams()
    : user_gesture(),
      window_container_type(),
      session_storage_namespace_id(),
      clone_from_session_storage_namespace_id(),
      frame_name(),
      opener_suppressed(),
      disposition(),
      target_url(),
      referrer(),
      features() {}

CreateNewWindowParams::CreateNewWindowParams(
    bool user_gesture_in,
    ::content::mojom::WindowContainerType window_container_type_in,
    const std::string& session_storage_namespace_id_in,
    const std::string& clone_from_session_storage_namespace_id_in,
    const std::string& frame_name_in,
    bool opener_suppressed_in,
    WindowOpenDisposition disposition_in,
    const GURL& target_url_in,
    const content::Referrer& referrer_in,
    ::blink::mojom::WindowFeaturesPtr features_in)
    : user_gesture(std::move(user_gesture_in)),
      window_container_type(std::move(window_container_type_in)),
      session_storage_namespace_id(std::move(session_storage_namespace_id_in)),
      clone_from_session_storage_namespace_id(std::move(clone_from_session_storage_namespace_id_in)),
      frame_name(std::move(frame_name_in)),
      opener_suppressed(std::move(opener_suppressed_in)),
      disposition(std::move(disposition_in)),
      target_url(std::move(target_url_in)),
      referrer(std::move(referrer_in)),
      features(std::move(features_in)) {}

CreateNewWindowParams::~CreateNewWindowParams() = default;

bool CreateNewWindowParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CreateNewWindowReply::CreateNewWindowReply()
    : route_id(),
      main_frame_route_id(),
      main_frame_widget_route_id(),
      main_frame_interface_provider(),
      cloned_session_storage_namespace_id(),
      devtools_main_frame_token() {}

CreateNewWindowReply::CreateNewWindowReply(
    int32_t route_id_in,
    int32_t main_frame_route_id_in,
    int32_t main_frame_widget_route_id_in,
    ::service_manager::mojom::InterfaceProviderPtrInfo main_frame_interface_provider_in,
    const std::string& cloned_session_storage_namespace_id_in,
    const base::UnguessableToken& devtools_main_frame_token_in)
    : route_id(std::move(route_id_in)),
      main_frame_route_id(std::move(main_frame_route_id_in)),
      main_frame_widget_route_id(std::move(main_frame_widget_route_id_in)),
      main_frame_interface_provider(std::move(main_frame_interface_provider_in)),
      cloned_session_storage_namespace_id(std::move(cloned_session_storage_namespace_id_in)),
      devtools_main_frame_token(std::move(devtools_main_frame_token_in)) {}

CreateNewWindowReply::~CreateNewWindowReply() = default;

bool CreateNewWindowReply::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char Frame::Name_[] = "content.mojom.Frame";

class Frame_GetCanonicalUrlForSharing_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Frame_GetCanonicalUrlForSharing_ForwardToCallback(
      Frame::GetCanonicalUrlForSharingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Frame::GetCanonicalUrlForSharingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Frame_GetCanonicalUrlForSharing_ForwardToCallback);
};

FrameProxy::FrameProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FrameProxy::GetInterfaceProvider(
    ::service_manager::mojom::InterfaceProviderRequest in_interfaces) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::Frame::GetInterfaceProvider");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrame_GetInterfaceProvider_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::Frame_GetInterfaceProvider_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::service_manager::mojom::InterfaceProviderRequestDataView>(
      in_interfaces, &params->interfaces, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->interfaces),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid interfaces in Frame.GetInterfaceProvider request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameProxy::GetCanonicalUrlForSharing(
    GetCanonicalUrlForSharingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::Frame::GetCanonicalUrlForSharing");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrame_GetCanonicalUrlForSharing_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::Frame_GetCanonicalUrlForSharing_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Frame_GetCanonicalUrlForSharing_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class Frame_GetCanonicalUrlForSharing_ProxyToResponder {
 public:
  static Frame::GetCanonicalUrlForSharingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Frame_GetCanonicalUrlForSharing_ProxyToResponder> proxy(
        new Frame_GetCanonicalUrlForSharing_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Frame_GetCanonicalUrlForSharing_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Frame_GetCanonicalUrlForSharing_ProxyToResponder() {
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
  Frame_GetCanonicalUrlForSharing_ProxyToResponder(
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
        << "Frame::GetCanonicalUrlForSharingCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::Optional<GURL>& in_canonical_url);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Frame_GetCanonicalUrlForSharing_ProxyToResponder);
};

bool Frame_GetCanonicalUrlForSharing_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::Frame::GetCanonicalUrlForSharingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Frame_GetCanonicalUrlForSharing_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Frame_GetCanonicalUrlForSharing_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Optional<GURL> p_canonical_url{};
  Frame_GetCanonicalUrlForSharing_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadCanonicalUrl(&p_canonical_url))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Frame::GetCanonicalUrlForSharing response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_canonical_url));
  return true;
}

void Frame_GetCanonicalUrlForSharing_ProxyToResponder::Run(
    const base::Optional<GURL>& in_canonical_url) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrame_GetCanonicalUrlForSharing_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::Frame_GetCanonicalUrlForSharing_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->canonical_url)::BaseType::BufferWriter
      canonical_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_canonical_url, buffer, &canonical_url_writer, &serialization_context);
  params->canonical_url.Set(
      canonical_url_writer.is_null() ? nullptr : canonical_url_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Frame::GetCanonicalUrlForSharingCallback",
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
bool FrameStubDispatch::Accept(
    Frame* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFrame_GetInterfaceProvider_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Frame::GetInterfaceProvider",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Frame_GetInterfaceProvider_Params_Data* params =
          reinterpret_cast<internal::Frame_GetInterfaceProvider_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::service_manager::mojom::InterfaceProviderRequest p_interfaces{};
      Frame_GetInterfaceProvider_ParamsDataView input_data_view(params, &serialization_context);
      
      p_interfaces =
          input_data_view.TakeInterfaces<decltype(p_interfaces)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Frame::GetInterfaceProvider deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetInterfaceProvider(
std::move(p_interfaces));
      return true;
    }
    case internal::kFrame_GetCanonicalUrlForSharing_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Frame::GetCanonicalUrlForSharing",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool FrameStubDispatch::AcceptWithResponder(
    Frame* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFrame_GetInterfaceProvider_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Frame::GetInterfaceProvider",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrame_GetCanonicalUrlForSharing_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Frame::GetCanonicalUrlForSharing",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Frame_GetCanonicalUrlForSharing_Params_Data* params =
          reinterpret_cast<
              internal::Frame_GetCanonicalUrlForSharing_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Frame_GetCanonicalUrlForSharing_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Frame::GetCanonicalUrlForSharing deserializer");
        return false;
      }
      Frame::GetCanonicalUrlForSharingCallback callback =
          Frame_GetCanonicalUrlForSharing_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetCanonicalUrlForSharing(std::move(callback));
      return true;
    }
  }
  return false;
}

bool FrameRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Frame RequestValidator");

  switch (message->header()->name) {
    case internal::kFrame_GetInterfaceProvider_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Frame_GetInterfaceProvider_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrame_GetCanonicalUrlForSharing_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Frame_GetCanonicalUrlForSharing_Params_Data>(
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

bool FrameResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Frame ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kFrame_GetCanonicalUrlForSharing_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Frame_GetCanonicalUrlForSharing_ResponseParams_Data>(
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
void FrameInterceptorForTesting::GetInterfaceProvider(::service_manager::mojom::InterfaceProviderRequest interfaces) {
  GetForwardingInterface()->GetInterfaceProvider(std::move(interfaces));
}
void FrameInterceptorForTesting::GetCanonicalUrlForSharing(GetCanonicalUrlForSharingCallback callback) {
  GetForwardingInterface()->GetCanonicalUrlForSharing(std::move(callback));
}
FrameAsyncWaiter::FrameAsyncWaiter(
    Frame* proxy) : proxy_(proxy) {}

FrameAsyncWaiter::~FrameAsyncWaiter() = default;

void FrameAsyncWaiter::GetCanonicalUrlForSharing(
    base::Optional<GURL>* out_canonical_url) {
  base::RunLoop loop;
  proxy_->GetCanonicalUrlForSharing(
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Optional<GURL>* out_canonical_url
,
             const base::Optional<GURL>& canonical_url) {*out_canonical_url = std::move(canonical_url);
            loop->Quit();
          },
          &loop,
          out_canonical_url));
  loop.Run();
}

const char FrameNavigationControl::Name_[] = "content.mojom.FrameNavigationControl";

class FrameNavigationControl_CommitSameDocumentNavigation_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FrameNavigationControl_CommitSameDocumentNavigation_ForwardToCallback(
      FrameNavigationControl::CommitSameDocumentNavigationCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FrameNavigationControl::CommitSameDocumentNavigationCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FrameNavigationControl_CommitSameDocumentNavigation_ForwardToCallback);
};

FrameNavigationControlProxy::FrameNavigationControlProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FrameNavigationControlProxy::CommitNavigation(
    const network::ResourceResponseHead& in_head, const content::CommonNavigationParams& in_common_params, const content::RequestNavigationParams& in_request_params, ::network::mojom::URLLoaderClientEndpointsPtr in_url_loader_client_endpoints, std::unique_ptr<content::URLLoaderFactoryBundleInfo> in_subresource_loader_factories, base::Optional<std::vector<::content::mojom::TransferrableURLLoaderPtr>> in_subresource_overrides, ::content::mojom::ControllerServiceWorkerInfoPtr in_controller_service_worker_info, const base::UnguessableToken& in_devtools_navigation_token) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameNavigationControl::CommitNavigation");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameNavigationControl_CommitNavigation_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameNavigationControl_CommitNavigation_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->head)::BaseType::BufferWriter
      head_writer;
  mojo::internal::Serialize<::network::mojom::URLResponseHeadDataView>(
      in_head, buffer, &head_writer, &serialization_context);
  params->head.Set(
      head_writer.is_null() ? nullptr : head_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->head.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null head in FrameNavigationControl.CommitNavigation request");
  typename decltype(params->common_params)::BaseType::BufferWriter
      common_params_writer;
  mojo::internal::Serialize<::content::mojom::CommonNavigationParamsDataView>(
      in_common_params, buffer, &common_params_writer, &serialization_context);
  params->common_params.Set(
      common_params_writer.is_null() ? nullptr : common_params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->common_params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null common_params in FrameNavigationControl.CommitNavigation request");
  typename decltype(params->request_params)::BaseType::BufferWriter
      request_params_writer;
  mojo::internal::Serialize<::content::mojom::RequestNavigationParamsDataView>(
      in_request_params, buffer, &request_params_writer, &serialization_context);
  params->request_params.Set(
      request_params_writer.is_null() ? nullptr : request_params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request_params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request_params in FrameNavigationControl.CommitNavigation request");
  typename decltype(params->url_loader_client_endpoints)::BaseType::BufferWriter
      url_loader_client_endpoints_writer;
  mojo::internal::Serialize<::network::mojom::URLLoaderClientEndpointsDataView>(
      in_url_loader_client_endpoints, buffer, &url_loader_client_endpoints_writer, &serialization_context);
  params->url_loader_client_endpoints.Set(
      url_loader_client_endpoints_writer.is_null() ? nullptr : url_loader_client_endpoints_writer.data());
  typename decltype(params->subresource_loader_factories)::BaseType::BufferWriter
      subresource_loader_factories_writer;
  mojo::internal::Serialize<::content::mojom::URLLoaderFactoryBundleDataView>(
      in_subresource_loader_factories, buffer, &subresource_loader_factories_writer, &serialization_context);
  params->subresource_loader_factories.Set(
      subresource_loader_factories_writer.is_null() ? nullptr : subresource_loader_factories_writer.data());
  typename decltype(params->subresource_overrides)::BaseType::BufferWriter
      subresource_overrides_writer;
  const mojo::internal::ContainerValidateParams subresource_overrides_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::content::mojom::TransferrableURLLoaderDataView>>(
      in_subresource_overrides, buffer, &subresource_overrides_writer, &subresource_overrides_validate_params,
      &serialization_context);
  params->subresource_overrides.Set(
      subresource_overrides_writer.is_null() ? nullptr : subresource_overrides_writer.data());
  typename decltype(params->controller_service_worker_info)::BaseType::BufferWriter
      controller_service_worker_info_writer;
  mojo::internal::Serialize<::content::mojom::ControllerServiceWorkerInfoDataView>(
      in_controller_service_worker_info, buffer, &controller_service_worker_info_writer, &serialization_context);
  params->controller_service_worker_info.Set(
      controller_service_worker_info_writer.is_null() ? nullptr : controller_service_worker_info_writer.data());
  typename decltype(params->devtools_navigation_token)::BaseType::BufferWriter
      devtools_navigation_token_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_devtools_navigation_token, buffer, &devtools_navigation_token_writer, &serialization_context);
  params->devtools_navigation_token.Set(
      devtools_navigation_token_writer.is_null() ? nullptr : devtools_navigation_token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->devtools_navigation_token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null devtools_navigation_token in FrameNavigationControl.CommitNavigation request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameNavigationControlProxy::CommitFailedNavigation(
    const content::CommonNavigationParams& in_common_params, const content::RequestNavigationParams& in_request_params, bool in_has_stale_copy_in_cache, int32_t in_error_code, const base::Optional<std::string>& in_error_page_content, std::unique_ptr<content::URLLoaderFactoryBundleInfo> in_subresource_loader_factories) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameNavigationControl::CommitFailedNavigation");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameNavigationControl_CommitFailedNavigation_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameNavigationControl_CommitFailedNavigation_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->common_params)::BaseType::BufferWriter
      common_params_writer;
  mojo::internal::Serialize<::content::mojom::CommonNavigationParamsDataView>(
      in_common_params, buffer, &common_params_writer, &serialization_context);
  params->common_params.Set(
      common_params_writer.is_null() ? nullptr : common_params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->common_params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null common_params in FrameNavigationControl.CommitFailedNavigation request");
  typename decltype(params->request_params)::BaseType::BufferWriter
      request_params_writer;
  mojo::internal::Serialize<::content::mojom::RequestNavigationParamsDataView>(
      in_request_params, buffer, &request_params_writer, &serialization_context);
  params->request_params.Set(
      request_params_writer.is_null() ? nullptr : request_params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request_params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request_params in FrameNavigationControl.CommitFailedNavigation request");
  params->has_stale_copy_in_cache = in_has_stale_copy_in_cache;
  params->error_code = in_error_code;
  typename decltype(params->error_page_content)::BaseType::BufferWriter
      error_page_content_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_error_page_content, buffer, &error_page_content_writer, &serialization_context);
  params->error_page_content.Set(
      error_page_content_writer.is_null() ? nullptr : error_page_content_writer.data());
  typename decltype(params->subresource_loader_factories)::BaseType::BufferWriter
      subresource_loader_factories_writer;
  mojo::internal::Serialize<::content::mojom::URLLoaderFactoryBundleDataView>(
      in_subresource_loader_factories, buffer, &subresource_loader_factories_writer, &serialization_context);
  params->subresource_loader_factories.Set(
      subresource_loader_factories_writer.is_null() ? nullptr : subresource_loader_factories_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameNavigationControlProxy::CommitSameDocumentNavigation(
    const content::CommonNavigationParams& in_common_params, const content::RequestNavigationParams& in_request_params, CommitSameDocumentNavigationCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameNavigationControl::CommitSameDocumentNavigation");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameNavigationControl_CommitSameDocumentNavigation_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameNavigationControl_CommitSameDocumentNavigation_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->common_params)::BaseType::BufferWriter
      common_params_writer;
  mojo::internal::Serialize<::content::mojom::CommonNavigationParamsDataView>(
      in_common_params, buffer, &common_params_writer, &serialization_context);
  params->common_params.Set(
      common_params_writer.is_null() ? nullptr : common_params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->common_params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null common_params in FrameNavigationControl.CommitSameDocumentNavigation request");
  typename decltype(params->request_params)::BaseType::BufferWriter
      request_params_writer;
  mojo::internal::Serialize<::content::mojom::RequestNavigationParamsDataView>(
      in_request_params, buffer, &request_params_writer, &serialization_context);
  params->request_params.Set(
      request_params_writer.is_null() ? nullptr : request_params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request_params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request_params in FrameNavigationControl.CommitSameDocumentNavigation request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FrameNavigationControl_CommitSameDocumentNavigation_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FrameNavigationControlProxy::HandleRendererDebugURL(
    const GURL& in_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameNavigationControl::HandleRendererDebugURL");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameNavigationControl_HandleRendererDebugURL_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameNavigationControl_HandleRendererDebugURL_Params_Data::BufferWriter
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
      "null url in FrameNavigationControl.HandleRendererDebugURL request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameNavigationControlProxy::UpdateSubresourceLoaderFactories(
    std::unique_ptr<content::URLLoaderFactoryBundleInfo> in_subresource_loader_factories) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameNavigationControl::UpdateSubresourceLoaderFactories");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameNavigationControl_UpdateSubresourceLoaderFactories_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameNavigationControl_UpdateSubresourceLoaderFactories_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->subresource_loader_factories)::BaseType::BufferWriter
      subresource_loader_factories_writer;
  mojo::internal::Serialize<::content::mojom::URLLoaderFactoryBundleDataView>(
      in_subresource_loader_factories, buffer, &subresource_loader_factories_writer, &serialization_context);
  params->subresource_loader_factories.Set(
      subresource_loader_factories_writer.is_null() ? nullptr : subresource_loader_factories_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->subresource_loader_factories.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null subresource_loader_factories in FrameNavigationControl.UpdateSubresourceLoaderFactories request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class FrameNavigationControl_CommitSameDocumentNavigation_ProxyToResponder {
 public:
  static FrameNavigationControl::CommitSameDocumentNavigationCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FrameNavigationControl_CommitSameDocumentNavigation_ProxyToResponder> proxy(
        new FrameNavigationControl_CommitSameDocumentNavigation_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FrameNavigationControl_CommitSameDocumentNavigation_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FrameNavigationControl_CommitSameDocumentNavigation_ProxyToResponder() {
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
  FrameNavigationControl_CommitSameDocumentNavigation_ProxyToResponder(
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
        << "FrameNavigationControl::CommitSameDocumentNavigationCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::CommitResult in_commit_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FrameNavigationControl_CommitSameDocumentNavigation_ProxyToResponder);
};

bool FrameNavigationControl_CommitSameDocumentNavigation_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::FrameNavigationControl::CommitSameDocumentNavigationCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::CommitResult p_commit_result{};
  FrameNavigationControl_CommitSameDocumentNavigation_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadCommitResult(&p_commit_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "FrameNavigationControl::CommitSameDocumentNavigation response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_commit_result));
  return true;
}

void FrameNavigationControl_CommitSameDocumentNavigation_ProxyToResponder::Run(
    ::blink::mojom::CommitResult in_commit_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameNavigationControl_CommitSameDocumentNavigation_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::CommitResult>(
      in_commit_result, &params->commit_result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameNavigationControl::CommitSameDocumentNavigationCallback",
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
bool FrameNavigationControlStubDispatch::Accept(
    FrameNavigationControl* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFrameNavigationControl_CommitNavigation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameNavigationControl::CommitNavigation",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameNavigationControl_CommitNavigation_Params_Data* params =
          reinterpret_cast<internal::FrameNavigationControl_CommitNavigation_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      network::ResourceResponseHead p_head{};
      content::CommonNavigationParams p_common_params{};
      content::RequestNavigationParams p_request_params{};
      ::network::mojom::URLLoaderClientEndpointsPtr p_url_loader_client_endpoints{};
      std::unique_ptr<content::URLLoaderFactoryBundleInfo> p_subresource_loader_factories{};
      base::Optional<std::vector<::content::mojom::TransferrableURLLoaderPtr>> p_subresource_overrides{};
      ::content::mojom::ControllerServiceWorkerInfoPtr p_controller_service_worker_info{};
      base::UnguessableToken p_devtools_navigation_token{};
      FrameNavigationControl_CommitNavigation_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHead(&p_head))
        success = false;
      if (!input_data_view.ReadCommonParams(&p_common_params))
        success = false;
      if (!input_data_view.ReadRequestParams(&p_request_params))
        success = false;
      if (!input_data_view.ReadUrlLoaderClientEndpoints(&p_url_loader_client_endpoints))
        success = false;
      if (!input_data_view.ReadSubresourceLoaderFactories(&p_subresource_loader_factories))
        success = false;
      if (!input_data_view.ReadSubresourceOverrides(&p_subresource_overrides))
        success = false;
      if (!input_data_view.ReadControllerServiceWorkerInfo(&p_controller_service_worker_info))
        success = false;
      if (!input_data_view.ReadDevtoolsNavigationToken(&p_devtools_navigation_token))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameNavigationControl::CommitNavigation deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CommitNavigation(
std::move(p_head), 
std::move(p_common_params), 
std::move(p_request_params), 
std::move(p_url_loader_client_endpoints), 
std::move(p_subresource_loader_factories), 
std::move(p_subresource_overrides), 
std::move(p_controller_service_worker_info), 
std::move(p_devtools_navigation_token));
      return true;
    }
    case internal::kFrameNavigationControl_CommitFailedNavigation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameNavigationControl::CommitFailedNavigation",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameNavigationControl_CommitFailedNavigation_Params_Data* params =
          reinterpret_cast<internal::FrameNavigationControl_CommitFailedNavigation_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      content::CommonNavigationParams p_common_params{};
      content::RequestNavigationParams p_request_params{};
      bool p_has_stale_copy_in_cache{};
      int32_t p_error_code{};
      base::Optional<std::string> p_error_page_content{};
      std::unique_ptr<content::URLLoaderFactoryBundleInfo> p_subresource_loader_factories{};
      FrameNavigationControl_CommitFailedNavigation_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCommonParams(&p_common_params))
        success = false;
      if (!input_data_view.ReadRequestParams(&p_request_params))
        success = false;
      p_has_stale_copy_in_cache = input_data_view.has_stale_copy_in_cache();
      p_error_code = input_data_view.error_code();
      if (!input_data_view.ReadErrorPageContent(&p_error_page_content))
        success = false;
      if (!input_data_view.ReadSubresourceLoaderFactories(&p_subresource_loader_factories))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameNavigationControl::CommitFailedNavigation deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CommitFailedNavigation(
std::move(p_common_params), 
std::move(p_request_params), 
std::move(p_has_stale_copy_in_cache), 
std::move(p_error_code), 
std::move(p_error_page_content), 
std::move(p_subresource_loader_factories));
      return true;
    }
    case internal::kFrameNavigationControl_CommitSameDocumentNavigation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameNavigationControl::CommitSameDocumentNavigation",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameNavigationControl_HandleRendererDebugURL_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameNavigationControl::HandleRendererDebugURL",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameNavigationControl_HandleRendererDebugURL_Params_Data* params =
          reinterpret_cast<internal::FrameNavigationControl_HandleRendererDebugURL_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      FrameNavigationControl_HandleRendererDebugURL_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameNavigationControl::HandleRendererDebugURL deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->HandleRendererDebugURL(
std::move(p_url));
      return true;
    }
    case internal::kFrameNavigationControl_UpdateSubresourceLoaderFactories_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameNavigationControl::UpdateSubresourceLoaderFactories",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameNavigationControl_UpdateSubresourceLoaderFactories_Params_Data* params =
          reinterpret_cast<internal::FrameNavigationControl_UpdateSubresourceLoaderFactories_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::unique_ptr<content::URLLoaderFactoryBundleInfo> p_subresource_loader_factories{};
      FrameNavigationControl_UpdateSubresourceLoaderFactories_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSubresourceLoaderFactories(&p_subresource_loader_factories))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameNavigationControl::UpdateSubresourceLoaderFactories deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UpdateSubresourceLoaderFactories(
std::move(p_subresource_loader_factories));
      return true;
    }
  }
  return false;
}

// static
bool FrameNavigationControlStubDispatch::AcceptWithResponder(
    FrameNavigationControl* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFrameNavigationControl_CommitNavigation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameNavigationControl::CommitNavigation",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameNavigationControl_CommitFailedNavigation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameNavigationControl::CommitFailedNavigation",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameNavigationControl_CommitSameDocumentNavigation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameNavigationControl::CommitSameDocumentNavigation",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::FrameNavigationControl_CommitSameDocumentNavigation_Params_Data* params =
          reinterpret_cast<
              internal::FrameNavigationControl_CommitSameDocumentNavigation_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      content::CommonNavigationParams p_common_params{};
      content::RequestNavigationParams p_request_params{};
      FrameNavigationControl_CommitSameDocumentNavigation_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCommonParams(&p_common_params))
        success = false;
      if (!input_data_view.ReadRequestParams(&p_request_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameNavigationControl::CommitSameDocumentNavigation deserializer");
        return false;
      }
      FrameNavigationControl::CommitSameDocumentNavigationCallback callback =
          FrameNavigationControl_CommitSameDocumentNavigation_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CommitSameDocumentNavigation(
std::move(p_common_params), 
std::move(p_request_params), std::move(callback));
      return true;
    }
    case internal::kFrameNavigationControl_HandleRendererDebugURL_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameNavigationControl::HandleRendererDebugURL",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameNavigationControl_UpdateSubresourceLoaderFactories_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameNavigationControl::UpdateSubresourceLoaderFactories",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool FrameNavigationControlRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FrameNavigationControl RequestValidator");

  switch (message->header()->name) {
    case internal::kFrameNavigationControl_CommitNavigation_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameNavigationControl_CommitNavigation_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameNavigationControl_CommitFailedNavigation_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameNavigationControl_CommitFailedNavigation_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameNavigationControl_CommitSameDocumentNavigation_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameNavigationControl_CommitSameDocumentNavigation_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameNavigationControl_HandleRendererDebugURL_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameNavigationControl_HandleRendererDebugURL_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameNavigationControl_UpdateSubresourceLoaderFactories_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameNavigationControl_UpdateSubresourceLoaderFactories_Params_Data>(
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

bool FrameNavigationControlResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FrameNavigationControl ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kFrameNavigationControl_CommitSameDocumentNavigation_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams_Data>(
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
void FrameNavigationControlInterceptorForTesting::CommitNavigation(const network::ResourceResponseHead& head, const content::CommonNavigationParams& common_params, const content::RequestNavigationParams& request_params, ::network::mojom::URLLoaderClientEndpointsPtr url_loader_client_endpoints, std::unique_ptr<content::URLLoaderFactoryBundleInfo> subresource_loader_factories, base::Optional<std::vector<::content::mojom::TransferrableURLLoaderPtr>> subresource_overrides, ::content::mojom::ControllerServiceWorkerInfoPtr controller_service_worker_info, const base::UnguessableToken& devtools_navigation_token) {
  GetForwardingInterface()->CommitNavigation(std::move(head), std::move(common_params), std::move(request_params), std::move(url_loader_client_endpoints), std::move(subresource_loader_factories), std::move(subresource_overrides), std::move(controller_service_worker_info), std::move(devtools_navigation_token));
}
void FrameNavigationControlInterceptorForTesting::CommitFailedNavigation(const content::CommonNavigationParams& common_params, const content::RequestNavigationParams& request_params, bool has_stale_copy_in_cache, int32_t error_code, const base::Optional<std::string>& error_page_content, std::unique_ptr<content::URLLoaderFactoryBundleInfo> subresource_loader_factories) {
  GetForwardingInterface()->CommitFailedNavigation(std::move(common_params), std::move(request_params), std::move(has_stale_copy_in_cache), std::move(error_code), std::move(error_page_content), std::move(subresource_loader_factories));
}
void FrameNavigationControlInterceptorForTesting::CommitSameDocumentNavigation(const content::CommonNavigationParams& common_params, const content::RequestNavigationParams& request_params, CommitSameDocumentNavigationCallback callback) {
  GetForwardingInterface()->CommitSameDocumentNavigation(std::move(common_params), std::move(request_params), std::move(callback));
}
void FrameNavigationControlInterceptorForTesting::HandleRendererDebugURL(const GURL& url) {
  GetForwardingInterface()->HandleRendererDebugURL(std::move(url));
}
void FrameNavigationControlInterceptorForTesting::UpdateSubresourceLoaderFactories(std::unique_ptr<content::URLLoaderFactoryBundleInfo> subresource_loader_factories) {
  GetForwardingInterface()->UpdateSubresourceLoaderFactories(std::move(subresource_loader_factories));
}
FrameNavigationControlAsyncWaiter::FrameNavigationControlAsyncWaiter(
    FrameNavigationControl* proxy) : proxy_(proxy) {}

FrameNavigationControlAsyncWaiter::~FrameNavigationControlAsyncWaiter() = default;

void FrameNavigationControlAsyncWaiter::CommitSameDocumentNavigation(
    const content::CommonNavigationParams& common_params, const content::RequestNavigationParams& request_params, ::blink::mojom::CommitResult* out_commit_result) {
  base::RunLoop loop;
  proxy_->CommitSameDocumentNavigation(std::move(common_params),std::move(request_params),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::CommitResult* out_commit_result
,
             ::blink::mojom::CommitResult commit_result) {*out_commit_result = std::move(commit_result);
            loop->Quit();
          },
          &loop,
          out_commit_result));
  loop.Run();
}

const char FrameBindingsControl::Name_[] = "content.mojom.FrameBindingsControl";

FrameBindingsControlProxy::FrameBindingsControlProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FrameBindingsControlProxy::AllowBindings(
    int32_t in_enabled_bindings_flags) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameBindingsControl::AllowBindings");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameBindingsControl_AllowBindings_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameBindingsControl_AllowBindings_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->enabled_bindings_flags = in_enabled_bindings_flags;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool FrameBindingsControlStubDispatch::Accept(
    FrameBindingsControl* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFrameBindingsControl_AllowBindings_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameBindingsControl::AllowBindings",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameBindingsControl_AllowBindings_Params_Data* params =
          reinterpret_cast<internal::FrameBindingsControl_AllowBindings_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_enabled_bindings_flags{};
      FrameBindingsControl_AllowBindings_ParamsDataView input_data_view(params, &serialization_context);
      
      p_enabled_bindings_flags = input_data_view.enabled_bindings_flags();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameBindingsControl::AllowBindings deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AllowBindings(
std::move(p_enabled_bindings_flags));
      return true;
    }
  }
  return false;
}

// static
bool FrameBindingsControlStubDispatch::AcceptWithResponder(
    FrameBindingsControl* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFrameBindingsControl_AllowBindings_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameBindingsControl::AllowBindings",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool FrameBindingsControlRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FrameBindingsControl RequestValidator");

  switch (message->header()->name) {
    case internal::kFrameBindingsControl_AllowBindings_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameBindingsControl_AllowBindings_Params_Data>(
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

void FrameBindingsControlInterceptorForTesting::AllowBindings(int32_t enabled_bindings_flags) {
  GetForwardingInterface()->AllowBindings(std::move(enabled_bindings_flags));
}
FrameBindingsControlAsyncWaiter::FrameBindingsControlAsyncWaiter(
    FrameBindingsControl* proxy) : proxy_(proxy) {}

FrameBindingsControlAsyncWaiter::~FrameBindingsControlAsyncWaiter() = default;


const char FrameFactory::Name_[] = "content.mojom.FrameFactory";

FrameFactoryProxy::FrameFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FrameFactoryProxy::CreateFrame(
    int32_t in_frame_routing_id, FrameRequest in_frame) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameFactory::CreateFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameFactory_CreateFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameFactory_CreateFrame_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->frame_routing_id = in_frame_routing_id;
  mojo::internal::Serialize<::content::mojom::FrameRequestDataView>(
      in_frame, &params->frame, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->frame),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid frame in FrameFactory.CreateFrame request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool FrameFactoryStubDispatch::Accept(
    FrameFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFrameFactory_CreateFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameFactory::CreateFrame",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameFactory_CreateFrame_Params_Data* params =
          reinterpret_cast<internal::FrameFactory_CreateFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_frame_routing_id{};
      FrameRequest p_frame{};
      FrameFactory_CreateFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      p_frame_routing_id = input_data_view.frame_routing_id();
      p_frame =
          input_data_view.TakeFrame<decltype(p_frame)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameFactory::CreateFrame deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateFrame(
std::move(p_frame_routing_id), 
std::move(p_frame));
      return true;
    }
  }
  return false;
}

// static
bool FrameFactoryStubDispatch::AcceptWithResponder(
    FrameFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFrameFactory_CreateFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameFactory::CreateFrame",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool FrameFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FrameFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kFrameFactory_CreateFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameFactory_CreateFrame_Params_Data>(
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

void FrameFactoryInterceptorForTesting::CreateFrame(int32_t frame_routing_id, FrameRequest frame) {
  GetForwardingInterface()->CreateFrame(std::move(frame_routing_id), std::move(frame));
}
FrameFactoryAsyncWaiter::FrameFactoryAsyncWaiter(
    FrameFactory* proxy) : proxy_(proxy) {}

FrameFactoryAsyncWaiter::~FrameFactoryAsyncWaiter() = default;


const char KeepAliveHandle::Name_[] = "content.mojom.KeepAliveHandle";

KeepAliveHandleProxy::KeepAliveHandleProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

// static
bool KeepAliveHandleStubDispatch::Accept(
    KeepAliveHandle* impl,
    mojo::Message* message) {
  return false;
}

// static
bool KeepAliveHandleStubDispatch::AcceptWithResponder(
    KeepAliveHandle* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  return false;
}

bool KeepAliveHandleRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "KeepAliveHandle RequestValidator");

  switch (message->header()->name) {
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

KeepAliveHandleAsyncWaiter::KeepAliveHandleAsyncWaiter(
    KeepAliveHandle* proxy) : proxy_(proxy) {}

KeepAliveHandleAsyncWaiter::~KeepAliveHandleAsyncWaiter() = default;


const char FrameHost::Name_[] = "content.mojom.FrameHost";
bool FrameHost::CreateNewWindow(CreateNewWindowParamsPtr params, CreateNewWindowStatus* out_status, CreateNewWindowReplyPtr* out_reply) {
  NOTREACHED();
  return false;
}
class FrameHost_CreateNewWindow_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  FrameHost_CreateNewWindow_HandleSyncResponse(
      bool* result, CreateNewWindowStatus* out_status, CreateNewWindowReplyPtr* out_reply)
      : result_(result), out_status_(out_status), out_reply_(out_reply) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  CreateNewWindowStatus* out_status_;
  CreateNewWindowReplyPtr* out_reply_;DISALLOW_COPY_AND_ASSIGN(FrameHost_CreateNewWindow_HandleSyncResponse);
};

class FrameHost_CreateNewWindow_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FrameHost_CreateNewWindow_ForwardToCallback(
      FrameHost::CreateNewWindowCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FrameHost::CreateNewWindowCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FrameHost_CreateNewWindow_ForwardToCallback);
};

FrameHostProxy::FrameHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool FrameHostProxy::CreateNewWindow(
    CreateNewWindowParamsPtr param_params, CreateNewWindowStatus* out_param_status, CreateNewWindowReplyPtr* out_param_reply) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameHost::CreateNewWindow");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameHost_CreateNewWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameHost_CreateNewWindow_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::content::mojom::CreateNewWindowParamsDataView>(
      param_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in FrameHost.CreateNewWindow request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FrameHost_CreateNewWindow_HandleSyncResponse(
          &result, out_param_status, out_param_reply));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FrameHostProxy::CreateNewWindow(
    CreateNewWindowParamsPtr in_params, CreateNewWindowCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameHost::CreateNewWindow");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameHost_CreateNewWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameHost_CreateNewWindow_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::content::mojom::CreateNewWindowParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in FrameHost.CreateNewWindow request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FrameHost_CreateNewWindow_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FrameHostProxy::IssueKeepAliveHandle(
    KeepAliveHandleRequest in_keep_alive_handle) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameHost::IssueKeepAliveHandle");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameHost_IssueKeepAliveHandle_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameHost_IssueKeepAliveHandle_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::content::mojom::KeepAliveHandleRequestDataView>(
      in_keep_alive_handle, &params->keep_alive_handle, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->keep_alive_handle),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid keep_alive_handle in FrameHost.IssueKeepAliveHandle request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameHostProxy::DidCommitProvisionalLoad(
    std::unique_ptr<::FrameHostMsg_DidCommitProvisionalLoad_Params> in_params, ::service_manager::mojom::InterfaceProviderRequest in_interface_provider_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameHost::DidCommitProvisionalLoad");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameHost_DidCommitProvisionalLoad_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameHost_DidCommitProvisionalLoad_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::content::mojom::DidCommitProvisionalLoadParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in FrameHost.DidCommitProvisionalLoad request");
  mojo::internal::Serialize<::service_manager::mojom::InterfaceProviderRequestDataView>(
      in_interface_provider_request, &params->interface_provider_request, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameHostProxy::DidCommitSameDocumentNavigation(
    std::unique_ptr<::FrameHostMsg_DidCommitProvisionalLoad_Params> in_params) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameHost::DidCommitSameDocumentNavigation");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameHost_DidCommitSameDocumentNavigation_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameHost_DidCommitSameDocumentNavigation_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::content::mojom::DidCommitProvisionalLoadParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in FrameHost.DidCommitSameDocumentNavigation request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameHostProxy::BeginNavigation(
    const content::CommonNavigationParams& in_common_params, ::content::mojom::BeginNavigationParamsPtr in_begin_params, ::blink::mojom::BlobURLTokenPtr in_blob_url_token) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameHost::BeginNavigation");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameHost_BeginNavigation_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameHost_BeginNavigation_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->common_params)::BaseType::BufferWriter
      common_params_writer;
  mojo::internal::Serialize<::content::mojom::CommonNavigationParamsDataView>(
      in_common_params, buffer, &common_params_writer, &serialization_context);
  params->common_params.Set(
      common_params_writer.is_null() ? nullptr : common_params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->common_params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null common_params in FrameHost.BeginNavigation request");
  typename decltype(params->begin_params)::BaseType::BufferWriter
      begin_params_writer;
  mojo::internal::Serialize<::content::mojom::BeginNavigationParamsDataView>(
      in_begin_params, buffer, &begin_params_writer, &serialization_context);
  params->begin_params.Set(
      begin_params_writer.is_null() ? nullptr : begin_params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->begin_params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null begin_params in FrameHost.BeginNavigation request");
  mojo::internal::Serialize<::blink::mojom::BlobURLTokenPtrDataView>(
      in_blob_url_token, &params->blob_url_token, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameHostProxy::SubresourceResponseStarted(
    const GURL& in_url, uint32_t in_cert_status) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameHost::SubresourceResponseStarted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameHost_SubresourceResponseStarted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameHost_SubresourceResponseStarted_Params_Data::BufferWriter
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
      "null url in FrameHost.SubresourceResponseStarted request");
  params->cert_status = in_cert_status;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameHostProxy::ResourceLoadComplete(
    ::content::mojom::ResourceLoadInfoPtr in_url_load_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameHost::ResourceLoadComplete");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameHost_ResourceLoadComplete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameHost_ResourceLoadComplete_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url_load_info)::BaseType::BufferWriter
      url_load_info_writer;
  mojo::internal::Serialize<::content::mojom::ResourceLoadInfoDataView>(
      in_url_load_info, buffer, &url_load_info_writer, &serialization_context);
  params->url_load_info.Set(
      url_load_info_writer.is_null() ? nullptr : url_load_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url_load_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url_load_info in FrameHost.ResourceLoadComplete request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameHostProxy::DidChangeName(
    const std::string& in_name, const std::string& in_unique_name) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameHost::DidChangeName");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameHost_DidChangeName_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameHost_DidChangeName_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in FrameHost.DidChangeName request");
  typename decltype(params->unique_name)::BaseType::BufferWriter
      unique_name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_unique_name, buffer, &unique_name_writer, &serialization_context);
  params->unique_name.Set(
      unique_name_writer.is_null() ? nullptr : unique_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->unique_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null unique_name in FrameHost.DidChangeName request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameHostProxy::EnforceInsecureRequestPolicy(
    uint8_t in_policy_bitmap) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameHost::EnforceInsecureRequestPolicy");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameHost_EnforceInsecureRequestPolicy_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameHost_EnforceInsecureRequestPolicy_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->policy_bitmap = in_policy_bitmap;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameHostProxy::EnforceInsecureNavigationsSet(
    const std::vector<uint32_t>& in_set) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameHost::EnforceInsecureNavigationsSet");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameHost_EnforceInsecureNavigationsSet_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameHost_EnforceInsecureNavigationsSet_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->set)::BaseType::BufferWriter
      set_writer;
  const mojo::internal::ContainerValidateParams set_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint32_t>>(
      in_set, buffer, &set_writer, &set_validate_params,
      &serialization_context);
  params->set.Set(
      set_writer.is_null() ? nullptr : set_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->set.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null set in FrameHost.EnforceInsecureNavigationsSet request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameHostProxy::DidSetFramePolicyHeaders(
    blink::WebSandboxFlags in_sandbox_flags, const std::vector<blink::ParsedFeaturePolicyDeclaration>& in_parsed_header) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameHost::DidSetFramePolicyHeaders");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameHost_DidSetFramePolicyHeaders_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameHost_DidSetFramePolicyHeaders_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::WebSandboxFlags>(
      in_sandbox_flags, &params->sandbox_flags);
  typename decltype(params->parsed_header)::BaseType::BufferWriter
      parsed_header_writer;
  const mojo::internal::ContainerValidateParams parsed_header_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::ParsedFeaturePolicyDeclarationDataView>>(
      in_parsed_header, buffer, &parsed_header_writer, &parsed_header_validate_params,
      &serialization_context);
  params->parsed_header.Set(
      parsed_header_writer.is_null() ? nullptr : parsed_header_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->parsed_header.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null parsed_header in FrameHost.DidSetFramePolicyHeaders request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameHostProxy::CancelInitialHistoryLoad(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameHost::CancelInitialHistoryLoad");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameHost_CancelInitialHistoryLoad_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameHost_CancelInitialHistoryLoad_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameHostProxy::UpdateEncoding(
    const std::string& in_encoding_name) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameHost::UpdateEncoding");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameHost_UpdateEncoding_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameHost_UpdateEncoding_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->encoding_name)::BaseType::BufferWriter
      encoding_name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_encoding_name, buffer, &encoding_name_writer, &serialization_context);
  params->encoding_name.Set(
      encoding_name_writer.is_null() ? nullptr : encoding_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->encoding_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null encoding_name in FrameHost.UpdateEncoding request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameHostProxy::FrameSizeChanged(
    const gfx::Size& in_size) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameHost::FrameSizeChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameHost_FrameSizeChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameHost_FrameSizeChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->size)::BaseType::BufferWriter
      size_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_size, buffer, &size_writer, &serialization_context);
  params->size.Set(
      size_writer.is_null() ? nullptr : size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null size in FrameHost.FrameSizeChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class FrameHost_CreateNewWindow_ProxyToResponder {
 public:
  static FrameHost::CreateNewWindowCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FrameHost_CreateNewWindow_ProxyToResponder> proxy(
        new FrameHost_CreateNewWindow_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FrameHost_CreateNewWindow_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FrameHost_CreateNewWindow_ProxyToResponder() {
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
  FrameHost_CreateNewWindow_ProxyToResponder(
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
        << "FrameHost::CreateNewWindowCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      CreateNewWindowStatus in_status, CreateNewWindowReplyPtr in_reply);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FrameHost_CreateNewWindow_ProxyToResponder);
};

bool FrameHost_CreateNewWindow_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::FrameHost::CreateNewWindowCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FrameHost_CreateNewWindow_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FrameHost_CreateNewWindow_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CreateNewWindowStatus p_status{};
  CreateNewWindowReplyPtr p_reply{};
  FrameHost_CreateNewWindow_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadReply(&p_reply))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "FrameHost::CreateNewWindow response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_reply));
  return true;
}

void FrameHost_CreateNewWindow_ProxyToResponder::Run(
    CreateNewWindowStatus in_status, CreateNewWindowReplyPtr in_reply) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameHost_CreateNewWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameHost_CreateNewWindow_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::content::mojom::CreateNewWindowStatus>(
      in_status, &params->status);
  typename decltype(params->reply)::BaseType::BufferWriter
      reply_writer;
  mojo::internal::Serialize<::content::mojom::CreateNewWindowReplyDataView>(
      in_reply, buffer, &reply_writer, &serialization_context);
  params->reply.Set(
      reply_writer.is_null() ? nullptr : reply_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::CreateNewWindowCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool FrameHost_CreateNewWindow_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::FrameHost_CreateNewWindow_ResponseParams_Data* params =
      reinterpret_cast<internal::FrameHost_CreateNewWindow_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CreateNewWindowStatus p_status{};
  CreateNewWindowReplyPtr p_reply{};
  FrameHost_CreateNewWindow_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadReply(&p_reply))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "FrameHost::CreateNewWindow response deserializer");
    return false;
  }
  *out_status_ = std::move(p_status);
  *out_reply_ = std::move(p_reply);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool FrameHostStubDispatch::Accept(
    FrameHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFrameHost_CreateNewWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::CreateNewWindow",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameHost_IssueKeepAliveHandle_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::IssueKeepAliveHandle",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameHost_IssueKeepAliveHandle_Params_Data* params =
          reinterpret_cast<internal::FrameHost_IssueKeepAliveHandle_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      KeepAliveHandleRequest p_keep_alive_handle{};
      FrameHost_IssueKeepAliveHandle_ParamsDataView input_data_view(params, &serialization_context);
      
      p_keep_alive_handle =
          input_data_view.TakeKeepAliveHandle<decltype(p_keep_alive_handle)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameHost::IssueKeepAliveHandle deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->IssueKeepAliveHandle(
std::move(p_keep_alive_handle));
      return true;
    }
    case internal::kFrameHost_DidCommitProvisionalLoad_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::DidCommitProvisionalLoad",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameHost_DidCommitProvisionalLoad_Params_Data* params =
          reinterpret_cast<internal::FrameHost_DidCommitProvisionalLoad_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::unique_ptr<::FrameHostMsg_DidCommitProvisionalLoad_Params> p_params{};
      ::service_manager::mojom::InterfaceProviderRequest p_interface_provider_request{};
      FrameHost_DidCommitProvisionalLoad_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      p_interface_provider_request =
          input_data_view.TakeInterfaceProviderRequest<decltype(p_interface_provider_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameHost::DidCommitProvisionalLoad deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DidCommitProvisionalLoad(
std::move(p_params), 
std::move(p_interface_provider_request));
      return true;
    }
    case internal::kFrameHost_DidCommitSameDocumentNavigation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::DidCommitSameDocumentNavigation",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameHost_DidCommitSameDocumentNavigation_Params_Data* params =
          reinterpret_cast<internal::FrameHost_DidCommitSameDocumentNavigation_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::unique_ptr<::FrameHostMsg_DidCommitProvisionalLoad_Params> p_params{};
      FrameHost_DidCommitSameDocumentNavigation_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameHost::DidCommitSameDocumentNavigation deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DidCommitSameDocumentNavigation(
std::move(p_params));
      return true;
    }
    case internal::kFrameHost_BeginNavigation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::BeginNavigation",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameHost_BeginNavigation_Params_Data* params =
          reinterpret_cast<internal::FrameHost_BeginNavigation_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      content::CommonNavigationParams p_common_params{};
      ::content::mojom::BeginNavigationParamsPtr p_begin_params{};
      ::blink::mojom::BlobURLTokenPtr p_blob_url_token{};
      FrameHost_BeginNavigation_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCommonParams(&p_common_params))
        success = false;
      if (!input_data_view.ReadBeginParams(&p_begin_params))
        success = false;
      p_blob_url_token =
          input_data_view.TakeBlobUrlToken<decltype(p_blob_url_token)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameHost::BeginNavigation deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->BeginNavigation(
std::move(p_common_params), 
std::move(p_begin_params), 
std::move(p_blob_url_token));
      return true;
    }
    case internal::kFrameHost_SubresourceResponseStarted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::SubresourceResponseStarted",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameHost_SubresourceResponseStarted_Params_Data* params =
          reinterpret_cast<internal::FrameHost_SubresourceResponseStarted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      uint32_t p_cert_status{};
      FrameHost_SubresourceResponseStarted_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      p_cert_status = input_data_view.cert_status();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameHost::SubresourceResponseStarted deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SubresourceResponseStarted(
std::move(p_url), 
std::move(p_cert_status));
      return true;
    }
    case internal::kFrameHost_ResourceLoadComplete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::ResourceLoadComplete",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameHost_ResourceLoadComplete_Params_Data* params =
          reinterpret_cast<internal::FrameHost_ResourceLoadComplete_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::content::mojom::ResourceLoadInfoPtr p_url_load_info{};
      FrameHost_ResourceLoadComplete_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrlLoadInfo(&p_url_load_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameHost::ResourceLoadComplete deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ResourceLoadComplete(
std::move(p_url_load_info));
      return true;
    }
    case internal::kFrameHost_DidChangeName_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::DidChangeName",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameHost_DidChangeName_Params_Data* params =
          reinterpret_cast<internal::FrameHost_DidChangeName_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_name{};
      std::string p_unique_name{};
      FrameHost_DidChangeName_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!input_data_view.ReadUniqueName(&p_unique_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameHost::DidChangeName deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DidChangeName(
std::move(p_name), 
std::move(p_unique_name));
      return true;
    }
    case internal::kFrameHost_EnforceInsecureRequestPolicy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::EnforceInsecureRequestPolicy",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameHost_EnforceInsecureRequestPolicy_Params_Data* params =
          reinterpret_cast<internal::FrameHost_EnforceInsecureRequestPolicy_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint8_t p_policy_bitmap{};
      FrameHost_EnforceInsecureRequestPolicy_ParamsDataView input_data_view(params, &serialization_context);
      
      p_policy_bitmap = input_data_view.policy_bitmap();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameHost::EnforceInsecureRequestPolicy deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->EnforceInsecureRequestPolicy(
std::move(p_policy_bitmap));
      return true;
    }
    case internal::kFrameHost_EnforceInsecureNavigationsSet_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::EnforceInsecureNavigationsSet",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameHost_EnforceInsecureNavigationsSet_Params_Data* params =
          reinterpret_cast<internal::FrameHost_EnforceInsecureNavigationsSet_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<uint32_t> p_set{};
      FrameHost_EnforceInsecureNavigationsSet_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSet(&p_set))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameHost::EnforceInsecureNavigationsSet deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->EnforceInsecureNavigationsSet(
std::move(p_set));
      return true;
    }
    case internal::kFrameHost_DidSetFramePolicyHeaders_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::DidSetFramePolicyHeaders",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameHost_DidSetFramePolicyHeaders_Params_Data* params =
          reinterpret_cast<internal::FrameHost_DidSetFramePolicyHeaders_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      blink::WebSandboxFlags p_sandbox_flags{};
      std::vector<blink::ParsedFeaturePolicyDeclaration> p_parsed_header{};
      FrameHost_DidSetFramePolicyHeaders_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSandboxFlags(&p_sandbox_flags))
        success = false;
      if (!input_data_view.ReadParsedHeader(&p_parsed_header))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameHost::DidSetFramePolicyHeaders deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DidSetFramePolicyHeaders(
std::move(p_sandbox_flags), 
std::move(p_parsed_header));
      return true;
    }
    case internal::kFrameHost_CancelInitialHistoryLoad_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::CancelInitialHistoryLoad",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameHost_CancelInitialHistoryLoad_Params_Data* params =
          reinterpret_cast<internal::FrameHost_CancelInitialHistoryLoad_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FrameHost_CancelInitialHistoryLoad_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameHost::CancelInitialHistoryLoad deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CancelInitialHistoryLoad();
      return true;
    }
    case internal::kFrameHost_UpdateEncoding_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::UpdateEncoding",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameHost_UpdateEncoding_Params_Data* params =
          reinterpret_cast<internal::FrameHost_UpdateEncoding_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_encoding_name{};
      FrameHost_UpdateEncoding_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadEncodingName(&p_encoding_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameHost::UpdateEncoding deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UpdateEncoding(
std::move(p_encoding_name));
      return true;
    }
    case internal::kFrameHost_FrameSizeChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::FrameSizeChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameHost_FrameSizeChanged_Params_Data* params =
          reinterpret_cast<internal::FrameHost_FrameSizeChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::Size p_size{};
      FrameHost_FrameSizeChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSize(&p_size))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameHost::FrameSizeChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->FrameSizeChanged(
std::move(p_size));
      return true;
    }
  }
  return false;
}

// static
bool FrameHostStubDispatch::AcceptWithResponder(
    FrameHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFrameHost_CreateNewWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::CreateNewWindow",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::FrameHost_CreateNewWindow_Params_Data* params =
          reinterpret_cast<
              internal::FrameHost_CreateNewWindow_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CreateNewWindowParamsPtr p_params{};
      FrameHost_CreateNewWindow_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameHost::CreateNewWindow deserializer");
        return false;
      }
      FrameHost::CreateNewWindowCallback callback =
          FrameHost_CreateNewWindow_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateNewWindow(
std::move(p_params), std::move(callback));
      return true;
    }
    case internal::kFrameHost_IssueKeepAliveHandle_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::IssueKeepAliveHandle",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameHost_DidCommitProvisionalLoad_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::DidCommitProvisionalLoad",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameHost_DidCommitSameDocumentNavigation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::DidCommitSameDocumentNavigation",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameHost_BeginNavigation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::BeginNavigation",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameHost_SubresourceResponseStarted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::SubresourceResponseStarted",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameHost_ResourceLoadComplete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::ResourceLoadComplete",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameHost_DidChangeName_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::DidChangeName",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameHost_EnforceInsecureRequestPolicy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::EnforceInsecureRequestPolicy",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameHost_EnforceInsecureNavigationsSet_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::EnforceInsecureNavigationsSet",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameHost_DidSetFramePolicyHeaders_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::DidSetFramePolicyHeaders",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameHost_CancelInitialHistoryLoad_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::CancelInitialHistoryLoad",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameHost_UpdateEncoding_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::UpdateEncoding",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameHost_FrameSizeChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameHost::FrameSizeChanged",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool FrameHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FrameHost RequestValidator");

  switch (message->header()->name) {
    case internal::kFrameHost_CreateNewWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameHost_CreateNewWindow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameHost_IssueKeepAliveHandle_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameHost_IssueKeepAliveHandle_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameHost_DidCommitProvisionalLoad_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameHost_DidCommitProvisionalLoad_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameHost_DidCommitSameDocumentNavigation_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameHost_DidCommitSameDocumentNavigation_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameHost_BeginNavigation_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameHost_BeginNavigation_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameHost_SubresourceResponseStarted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameHost_SubresourceResponseStarted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameHost_ResourceLoadComplete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameHost_ResourceLoadComplete_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameHost_DidChangeName_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameHost_DidChangeName_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameHost_EnforceInsecureRequestPolicy_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameHost_EnforceInsecureRequestPolicy_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameHost_EnforceInsecureNavigationsSet_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameHost_EnforceInsecureNavigationsSet_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameHost_DidSetFramePolicyHeaders_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameHost_DidSetFramePolicyHeaders_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameHost_CancelInitialHistoryLoad_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameHost_CancelInitialHistoryLoad_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameHost_UpdateEncoding_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameHost_UpdateEncoding_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameHost_FrameSizeChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameHost_FrameSizeChanged_Params_Data>(
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

bool FrameHostResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FrameHost ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kFrameHost_CreateNewWindow_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameHost_CreateNewWindow_ResponseParams_Data>(
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
void FrameHostInterceptorForTesting::CreateNewWindow(CreateNewWindowParamsPtr params, CreateNewWindowCallback callback) {
  GetForwardingInterface()->CreateNewWindow(std::move(params), std::move(callback));
}
void FrameHostInterceptorForTesting::IssueKeepAliveHandle(KeepAliveHandleRequest keep_alive_handle) {
  GetForwardingInterface()->IssueKeepAliveHandle(std::move(keep_alive_handle));
}
void FrameHostInterceptorForTesting::DidCommitProvisionalLoad(std::unique_ptr<::FrameHostMsg_DidCommitProvisionalLoad_Params> params, ::service_manager::mojom::InterfaceProviderRequest interface_provider_request) {
  GetForwardingInterface()->DidCommitProvisionalLoad(std::move(params), std::move(interface_provider_request));
}
void FrameHostInterceptorForTesting::DidCommitSameDocumentNavigation(std::unique_ptr<::FrameHostMsg_DidCommitProvisionalLoad_Params> params) {
  GetForwardingInterface()->DidCommitSameDocumentNavigation(std::move(params));
}
void FrameHostInterceptorForTesting::BeginNavigation(const content::CommonNavigationParams& common_params, ::content::mojom::BeginNavigationParamsPtr begin_params, ::blink::mojom::BlobURLTokenPtr blob_url_token) {
  GetForwardingInterface()->BeginNavigation(std::move(common_params), std::move(begin_params), std::move(blob_url_token));
}
void FrameHostInterceptorForTesting::SubresourceResponseStarted(const GURL& url, uint32_t cert_status) {
  GetForwardingInterface()->SubresourceResponseStarted(std::move(url), std::move(cert_status));
}
void FrameHostInterceptorForTesting::ResourceLoadComplete(::content::mojom::ResourceLoadInfoPtr url_load_info) {
  GetForwardingInterface()->ResourceLoadComplete(std::move(url_load_info));
}
void FrameHostInterceptorForTesting::DidChangeName(const std::string& name, const std::string& unique_name) {
  GetForwardingInterface()->DidChangeName(std::move(name), std::move(unique_name));
}
void FrameHostInterceptorForTesting::EnforceInsecureRequestPolicy(uint8_t policy_bitmap) {
  GetForwardingInterface()->EnforceInsecureRequestPolicy(std::move(policy_bitmap));
}
void FrameHostInterceptorForTesting::EnforceInsecureNavigationsSet(const std::vector<uint32_t>& set) {
  GetForwardingInterface()->EnforceInsecureNavigationsSet(std::move(set));
}
void FrameHostInterceptorForTesting::DidSetFramePolicyHeaders(blink::WebSandboxFlags sandbox_flags, const std::vector<blink::ParsedFeaturePolicyDeclaration>& parsed_header) {
  GetForwardingInterface()->DidSetFramePolicyHeaders(std::move(sandbox_flags), std::move(parsed_header));
}
void FrameHostInterceptorForTesting::CancelInitialHistoryLoad() {
  GetForwardingInterface()->CancelInitialHistoryLoad();
}
void FrameHostInterceptorForTesting::UpdateEncoding(const std::string& encoding_name) {
  GetForwardingInterface()->UpdateEncoding(std::move(encoding_name));
}
void FrameHostInterceptorForTesting::FrameSizeChanged(const gfx::Size& size) {
  GetForwardingInterface()->FrameSizeChanged(std::move(size));
}
FrameHostAsyncWaiter::FrameHostAsyncWaiter(
    FrameHost* proxy) : proxy_(proxy) {}

FrameHostAsyncWaiter::~FrameHostAsyncWaiter() = default;

void FrameHostAsyncWaiter::CreateNewWindow(
    CreateNewWindowParamsPtr params, CreateNewWindowStatus* out_status, CreateNewWindowReplyPtr* out_reply) {
  base::RunLoop loop;
  proxy_->CreateNewWindow(std::move(params),
      base::BindOnce(
          [](base::RunLoop* loop,
             CreateNewWindowStatus* out_status
,
             CreateNewWindowReplyPtr* out_reply
,
             CreateNewWindowStatus status,
             CreateNewWindowReplyPtr reply) {*out_status = std::move(status);*out_reply = std::move(reply);
            loop->Quit();
          },
          &loop,
          out_status,
          out_reply));
  loop.Run();
}

}  // namespace mojom
}  // namespace content

namespace mojo {


// static
bool StructTraits<::content::mojom::CreateNewWindowParams::DataView, ::content::mojom::CreateNewWindowParamsPtr>::Read(
    ::content::mojom::CreateNewWindowParams::DataView input,
    ::content::mojom::CreateNewWindowParamsPtr* output) {
  bool success = true;
  ::content::mojom::CreateNewWindowParamsPtr result(::content::mojom::CreateNewWindowParams::New());
  
      result->user_gesture = input.user_gesture();
      if (!input.ReadWindowContainerType(&result->window_container_type))
        success = false;
      if (!input.ReadSessionStorageNamespaceId(&result->session_storage_namespace_id))
        success = false;
      if (!input.ReadCloneFromSessionStorageNamespaceId(&result->clone_from_session_storage_namespace_id))
        success = false;
      if (!input.ReadFrameName(&result->frame_name))
        success = false;
      result->opener_suppressed = input.opener_suppressed();
      if (!input.ReadDisposition(&result->disposition))
        success = false;
      if (!input.ReadTargetUrl(&result->target_url))
        success = false;
      if (!input.ReadReferrer(&result->referrer))
        success = false;
      if (!input.ReadFeatures(&result->features))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::CreateNewWindowReply::DataView, ::content::mojom::CreateNewWindowReplyPtr>::Read(
    ::content::mojom::CreateNewWindowReply::DataView input,
    ::content::mojom::CreateNewWindowReplyPtr* output) {
  bool success = true;
  ::content::mojom::CreateNewWindowReplyPtr result(::content::mojom::CreateNewWindowReply::New());
  
      result->route_id = input.route_id();
      result->main_frame_route_id = input.main_frame_route_id();
      result->main_frame_widget_route_id = input.main_frame_widget_route_id();
      result->main_frame_interface_provider =
          input.TakeMainFrameInterfaceProvider<decltype(result->main_frame_interface_provider)>();
      if (!input.ReadClonedSessionStorageNamespaceId(&result->cloned_session_storage_namespace_id))
        success = false;
      if (!input.ReadDevtoolsMainFrameToken(&result->devtools_main_frame_token))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif