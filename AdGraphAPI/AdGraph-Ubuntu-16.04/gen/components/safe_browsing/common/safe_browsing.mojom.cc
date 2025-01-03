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

#include "components/safe_browsing/common/safe_browsing.mojom.h"

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

#include "components/safe_browsing/common/safe_browsing.mojom-shared-message-ids.h"
#include "content/public/common/resource_type_struct_traits.h"
#include "services/network/public/cpp/http_request_headers_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace safe_browsing {
namespace mojom {
AttributeNameValue::AttributeNameValue()
    : name(),
      value() {}

AttributeNameValue::AttributeNameValue(
    const std::string& name_in,
    const std::string& value_in)
    : name(std::move(name_in)),
      value(std::move(value_in)) {}

AttributeNameValue::~AttributeNameValue() = default;
size_t AttributeNameValue::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->name);
  seed = mojo::internal::Hash(seed, this->value);
  return seed;
}

bool AttributeNameValue::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ThreatDOMDetailsNode::ThreatDOMDetailsNode()
    : node_id(),
      url(),
      tag_name(),
      parent(),
      parent_node_id(),
      children(),
      child_node_ids(),
      attributes(),
      child_frame_routing_id() {}

ThreatDOMDetailsNode::ThreatDOMDetailsNode(
    int32_t node_id_in,
    const GURL& url_in,
    const std::string& tag_name_in,
    const GURL& parent_in,
    int32_t parent_node_id_in,
    const std::vector<GURL>& children_in,
    const std::vector<int32_t>& child_node_ids_in,
    std::vector<AttributeNameValuePtr> attributes_in,
    int32_t child_frame_routing_id_in)
    : node_id(std::move(node_id_in)),
      url(std::move(url_in)),
      tag_name(std::move(tag_name_in)),
      parent(std::move(parent_in)),
      parent_node_id(std::move(parent_node_id_in)),
      children(std::move(children_in)),
      child_node_ids(std::move(child_node_ids_in)),
      attributes(std::move(attributes_in)),
      child_frame_routing_id(std::move(child_frame_routing_id_in)) {}

ThreatDOMDetailsNode::~ThreatDOMDetailsNode() = default;

bool ThreatDOMDetailsNode::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char SafeBrowsing::Name_[] = "safe_browsing.mojom.SafeBrowsing";

class SafeBrowsing_CreateCheckerAndCheck_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SafeBrowsing_CreateCheckerAndCheck_ForwardToCallback(
      SafeBrowsing::CreateCheckerAndCheckCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SafeBrowsing::CreateCheckerAndCheckCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SafeBrowsing_CreateCheckerAndCheck_ForwardToCallback);
};

SafeBrowsingProxy::SafeBrowsingProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SafeBrowsingProxy::CreateCheckerAndCheck(
    int32_t in_render_frame_id, SafeBrowsingUrlCheckerRequest in_request, const GURL& in_url, const std::string& in_method, const net::HttpRequestHeaders& in_headers, int32_t in_load_flags, content::ResourceType in_resource_type, bool in_has_user_gesture, bool in_originated_from_service_worker, CreateCheckerAndCheckCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "safe_browsing::mojom::SafeBrowsing::CreateCheckerAndCheck");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSafeBrowsing_CreateCheckerAndCheck_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::safe_browsing::mojom::internal::SafeBrowsing_CreateCheckerAndCheck_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->render_frame_id = in_render_frame_id;
  mojo::internal::Serialize<::safe_browsing::mojom::SafeBrowsingUrlCheckerRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in SafeBrowsing.CreateCheckerAndCheck request");
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in SafeBrowsing.CreateCheckerAndCheck request");
  typename decltype(params->method)::BaseType::BufferWriter
      method_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_method, buffer, &method_writer, &serialization_context);
  params->method.Set(
      method_writer.is_null() ? nullptr : method_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->method.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null method in SafeBrowsing.CreateCheckerAndCheck request");
  typename decltype(params->headers)::BaseType::BufferWriter
      headers_writer;
  mojo::internal::Serialize<::network::mojom::HttpRequestHeadersDataView>(
      in_headers, buffer, &headers_writer, &serialization_context);
  params->headers.Set(
      headers_writer.is_null() ? nullptr : headers_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->headers.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null headers in SafeBrowsing.CreateCheckerAndCheck request");
  params->load_flags = in_load_flags;
  mojo::internal::Serialize<::content::mojom::ResourceType>(
      in_resource_type, &params->resource_type);
  params->has_user_gesture = in_has_user_gesture;
  params->originated_from_service_worker = in_originated_from_service_worker;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SafeBrowsing_CreateCheckerAndCheck_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SafeBrowsingProxy::Clone(
    SafeBrowsingRequest in_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "safe_browsing::mojom::SafeBrowsing::Clone");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSafeBrowsing_Clone_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::safe_browsing::mojom::internal::SafeBrowsing_Clone_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::safe_browsing::mojom::SafeBrowsingRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in SafeBrowsing.Clone request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class SafeBrowsing_CreateCheckerAndCheck_ProxyToResponder {
 public:
  static SafeBrowsing::CreateCheckerAndCheckCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SafeBrowsing_CreateCheckerAndCheck_ProxyToResponder> proxy(
        new SafeBrowsing_CreateCheckerAndCheck_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SafeBrowsing_CreateCheckerAndCheck_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SafeBrowsing_CreateCheckerAndCheck_ProxyToResponder() {
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
  SafeBrowsing_CreateCheckerAndCheck_ProxyToResponder(
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
        << "SafeBrowsing::CreateCheckerAndCheckCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      UrlCheckNotifierRequest in_slow_check_notifier, bool in_proceed, bool in_showed_interstitial);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SafeBrowsing_CreateCheckerAndCheck_ProxyToResponder);
};

bool SafeBrowsing_CreateCheckerAndCheck_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "safe_browsing::mojom::SafeBrowsing::CreateCheckerAndCheckCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SafeBrowsing_CreateCheckerAndCheck_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SafeBrowsing_CreateCheckerAndCheck_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  UrlCheckNotifierRequest p_slow_check_notifier{};
  bool p_proceed{};
  bool p_showed_interstitial{};
  SafeBrowsing_CreateCheckerAndCheck_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_slow_check_notifier =
      input_data_view.TakeSlowCheckNotifier<decltype(p_slow_check_notifier)>();
  p_proceed = input_data_view.proceed();
  p_showed_interstitial = input_data_view.showed_interstitial();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SafeBrowsing::CreateCheckerAndCheck response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_slow_check_notifier), 
std::move(p_proceed), 
std::move(p_showed_interstitial));
  return true;
}

void SafeBrowsing_CreateCheckerAndCheck_ProxyToResponder::Run(
    UrlCheckNotifierRequest in_slow_check_notifier, bool in_proceed, bool in_showed_interstitial) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSafeBrowsing_CreateCheckerAndCheck_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::safe_browsing::mojom::internal::SafeBrowsing_CreateCheckerAndCheck_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::safe_browsing::mojom::UrlCheckNotifierRequestDataView>(
      in_slow_check_notifier, &params->slow_check_notifier, &serialization_context);
  params->proceed = in_proceed;
  params->showed_interstitial = in_showed_interstitial;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)safe_browsing::mojom::SafeBrowsing::CreateCheckerAndCheckCallback",
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
bool SafeBrowsingStubDispatch::Accept(
    SafeBrowsing* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSafeBrowsing_CreateCheckerAndCheck_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)safe_browsing::mojom::SafeBrowsing::CreateCheckerAndCheck",
               "message", message->name());
#endif
      break;
    }
    case internal::kSafeBrowsing_Clone_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)safe_browsing::mojom::SafeBrowsing::Clone",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SafeBrowsing_Clone_Params_Data* params =
          reinterpret_cast<internal::SafeBrowsing_Clone_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SafeBrowsingRequest p_request{};
      SafeBrowsing_Clone_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SafeBrowsing::Clone deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Clone(
std::move(p_request));
      return true;
    }
  }
  return false;
}

// static
bool SafeBrowsingStubDispatch::AcceptWithResponder(
    SafeBrowsing* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSafeBrowsing_CreateCheckerAndCheck_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)safe_browsing::mojom::SafeBrowsing::CreateCheckerAndCheck",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SafeBrowsing_CreateCheckerAndCheck_Params_Data* params =
          reinterpret_cast<
              internal::SafeBrowsing_CreateCheckerAndCheck_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_render_frame_id{};
      SafeBrowsingUrlCheckerRequest p_request{};
      GURL p_url{};
      std::string p_method{};
      net::HttpRequestHeaders p_headers{};
      int32_t p_load_flags{};
      content::ResourceType p_resource_type{};
      bool p_has_user_gesture{};
      bool p_originated_from_service_worker{};
      SafeBrowsing_CreateCheckerAndCheck_ParamsDataView input_data_view(params, &serialization_context);
      
      p_render_frame_id = input_data_view.render_frame_id();
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadMethod(&p_method))
        success = false;
      if (!input_data_view.ReadHeaders(&p_headers))
        success = false;
      p_load_flags = input_data_view.load_flags();
      if (!input_data_view.ReadResourceType(&p_resource_type))
        success = false;
      p_has_user_gesture = input_data_view.has_user_gesture();
      p_originated_from_service_worker = input_data_view.originated_from_service_worker();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SafeBrowsing::CreateCheckerAndCheck deserializer");
        return false;
      }
      SafeBrowsing::CreateCheckerAndCheckCallback callback =
          SafeBrowsing_CreateCheckerAndCheck_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateCheckerAndCheck(
std::move(p_render_frame_id), 
std::move(p_request), 
std::move(p_url), 
std::move(p_method), 
std::move(p_headers), 
std::move(p_load_flags), 
std::move(p_resource_type), 
std::move(p_has_user_gesture), 
std::move(p_originated_from_service_worker), std::move(callback));
      return true;
    }
    case internal::kSafeBrowsing_Clone_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)safe_browsing::mojom::SafeBrowsing::Clone",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool SafeBrowsingRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SafeBrowsing RequestValidator");

  switch (message->header()->name) {
    case internal::kSafeBrowsing_CreateCheckerAndCheck_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SafeBrowsing_CreateCheckerAndCheck_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSafeBrowsing_Clone_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SafeBrowsing_Clone_Params_Data>(
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

bool SafeBrowsingResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SafeBrowsing ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kSafeBrowsing_CreateCheckerAndCheck_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SafeBrowsing_CreateCheckerAndCheck_ResponseParams_Data>(
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
void SafeBrowsingInterceptorForTesting::CreateCheckerAndCheck(int32_t render_frame_id, SafeBrowsingUrlCheckerRequest request, const GURL& url, const std::string& method, const net::HttpRequestHeaders& headers, int32_t load_flags, content::ResourceType resource_type, bool has_user_gesture, bool originated_from_service_worker, CreateCheckerAndCheckCallback callback) {
  GetForwardingInterface()->CreateCheckerAndCheck(std::move(render_frame_id), std::move(request), std::move(url), std::move(method), std::move(headers), std::move(load_flags), std::move(resource_type), std::move(has_user_gesture), std::move(originated_from_service_worker), std::move(callback));
}
void SafeBrowsingInterceptorForTesting::Clone(SafeBrowsingRequest request) {
  GetForwardingInterface()->Clone(std::move(request));
}
SafeBrowsingAsyncWaiter::SafeBrowsingAsyncWaiter(
    SafeBrowsing* proxy) : proxy_(proxy) {}

SafeBrowsingAsyncWaiter::~SafeBrowsingAsyncWaiter() = default;

void SafeBrowsingAsyncWaiter::CreateCheckerAndCheck(
    int32_t render_frame_id, SafeBrowsingUrlCheckerRequest request, const GURL& url, const std::string& method, const net::HttpRequestHeaders& headers, int32_t load_flags, content::ResourceType resource_type, bool has_user_gesture, bool originated_from_service_worker, UrlCheckNotifierRequest* out_slow_check_notifier, bool* out_proceed, bool* out_showed_interstitial) {
  base::RunLoop loop;
  proxy_->CreateCheckerAndCheck(std::move(render_frame_id),std::move(request),std::move(url),std::move(method),std::move(headers),std::move(load_flags),std::move(resource_type),std::move(has_user_gesture),std::move(originated_from_service_worker),
      base::BindOnce(
          [](base::RunLoop* loop,
             UrlCheckNotifierRequest* out_slow_check_notifier
,
             bool* out_proceed
,
             bool* out_showed_interstitial
,
             UrlCheckNotifierRequest slow_check_notifier,
             bool proceed,
             bool showed_interstitial) {*out_slow_check_notifier = std::move(slow_check_notifier);*out_proceed = std::move(proceed);*out_showed_interstitial = std::move(showed_interstitial);
            loop->Quit();
          },
          &loop,
          out_slow_check_notifier,
          out_proceed,
          out_showed_interstitial));
  loop.Run();
}

const char SafeBrowsingUrlChecker::Name_[] = "safe_browsing.mojom.SafeBrowsingUrlChecker";

class SafeBrowsingUrlChecker_CheckUrl_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SafeBrowsingUrlChecker_CheckUrl_ForwardToCallback(
      SafeBrowsingUrlChecker::CheckUrlCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SafeBrowsingUrlChecker::CheckUrlCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SafeBrowsingUrlChecker_CheckUrl_ForwardToCallback);
};

SafeBrowsingUrlCheckerProxy::SafeBrowsingUrlCheckerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SafeBrowsingUrlCheckerProxy::CheckUrl(
    const GURL& in_url, const std::string& in_method, CheckUrlCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "safe_browsing::mojom::SafeBrowsingUrlChecker::CheckUrl");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSafeBrowsingUrlChecker_CheckUrl_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::safe_browsing::mojom::internal::SafeBrowsingUrlChecker_CheckUrl_Params_Data::BufferWriter
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
      "null url in SafeBrowsingUrlChecker.CheckUrl request");
  typename decltype(params->method)::BaseType::BufferWriter
      method_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_method, buffer, &method_writer, &serialization_context);
  params->method.Set(
      method_writer.is_null() ? nullptr : method_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->method.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null method in SafeBrowsingUrlChecker.CheckUrl request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SafeBrowsingUrlChecker_CheckUrl_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class SafeBrowsingUrlChecker_CheckUrl_ProxyToResponder {
 public:
  static SafeBrowsingUrlChecker::CheckUrlCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SafeBrowsingUrlChecker_CheckUrl_ProxyToResponder> proxy(
        new SafeBrowsingUrlChecker_CheckUrl_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SafeBrowsingUrlChecker_CheckUrl_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SafeBrowsingUrlChecker_CheckUrl_ProxyToResponder() {
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
  SafeBrowsingUrlChecker_CheckUrl_ProxyToResponder(
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
        << "SafeBrowsingUrlChecker::CheckUrlCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      UrlCheckNotifierRequest in_slow_check_notifier, bool in_proceed, bool in_showed_interstitial);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SafeBrowsingUrlChecker_CheckUrl_ProxyToResponder);
};

bool SafeBrowsingUrlChecker_CheckUrl_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "safe_browsing::mojom::SafeBrowsingUrlChecker::CheckUrlCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SafeBrowsingUrlChecker_CheckUrl_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SafeBrowsingUrlChecker_CheckUrl_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  UrlCheckNotifierRequest p_slow_check_notifier{};
  bool p_proceed{};
  bool p_showed_interstitial{};
  SafeBrowsingUrlChecker_CheckUrl_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_slow_check_notifier =
      input_data_view.TakeSlowCheckNotifier<decltype(p_slow_check_notifier)>();
  p_proceed = input_data_view.proceed();
  p_showed_interstitial = input_data_view.showed_interstitial();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SafeBrowsingUrlChecker::CheckUrl response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_slow_check_notifier), 
std::move(p_proceed), 
std::move(p_showed_interstitial));
  return true;
}

void SafeBrowsingUrlChecker_CheckUrl_ProxyToResponder::Run(
    UrlCheckNotifierRequest in_slow_check_notifier, bool in_proceed, bool in_showed_interstitial) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSafeBrowsingUrlChecker_CheckUrl_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::safe_browsing::mojom::internal::SafeBrowsingUrlChecker_CheckUrl_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::safe_browsing::mojom::UrlCheckNotifierRequestDataView>(
      in_slow_check_notifier, &params->slow_check_notifier, &serialization_context);
  params->proceed = in_proceed;
  params->showed_interstitial = in_showed_interstitial;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)safe_browsing::mojom::SafeBrowsingUrlChecker::CheckUrlCallback",
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
bool SafeBrowsingUrlCheckerStubDispatch::Accept(
    SafeBrowsingUrlChecker* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSafeBrowsingUrlChecker_CheckUrl_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)safe_browsing::mojom::SafeBrowsingUrlChecker::CheckUrl",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool SafeBrowsingUrlCheckerStubDispatch::AcceptWithResponder(
    SafeBrowsingUrlChecker* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSafeBrowsingUrlChecker_CheckUrl_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)safe_browsing::mojom::SafeBrowsingUrlChecker::CheckUrl",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SafeBrowsingUrlChecker_CheckUrl_Params_Data* params =
          reinterpret_cast<
              internal::SafeBrowsingUrlChecker_CheckUrl_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      std::string p_method{};
      SafeBrowsingUrlChecker_CheckUrl_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadMethod(&p_method))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SafeBrowsingUrlChecker::CheckUrl deserializer");
        return false;
      }
      SafeBrowsingUrlChecker::CheckUrlCallback callback =
          SafeBrowsingUrlChecker_CheckUrl_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CheckUrl(
std::move(p_url), 
std::move(p_method), std::move(callback));
      return true;
    }
  }
  return false;
}

bool SafeBrowsingUrlCheckerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SafeBrowsingUrlChecker RequestValidator");

  switch (message->header()->name) {
    case internal::kSafeBrowsingUrlChecker_CheckUrl_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SafeBrowsingUrlChecker_CheckUrl_Params_Data>(
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

bool SafeBrowsingUrlCheckerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SafeBrowsingUrlChecker ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kSafeBrowsingUrlChecker_CheckUrl_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SafeBrowsingUrlChecker_CheckUrl_ResponseParams_Data>(
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
void SafeBrowsingUrlCheckerInterceptorForTesting::CheckUrl(const GURL& url, const std::string& method, CheckUrlCallback callback) {
  GetForwardingInterface()->CheckUrl(std::move(url), std::move(method), std::move(callback));
}
SafeBrowsingUrlCheckerAsyncWaiter::SafeBrowsingUrlCheckerAsyncWaiter(
    SafeBrowsingUrlChecker* proxy) : proxy_(proxy) {}

SafeBrowsingUrlCheckerAsyncWaiter::~SafeBrowsingUrlCheckerAsyncWaiter() = default;

void SafeBrowsingUrlCheckerAsyncWaiter::CheckUrl(
    const GURL& url, const std::string& method, UrlCheckNotifierRequest* out_slow_check_notifier, bool* out_proceed, bool* out_showed_interstitial) {
  base::RunLoop loop;
  proxy_->CheckUrl(std::move(url),std::move(method),
      base::BindOnce(
          [](base::RunLoop* loop,
             UrlCheckNotifierRequest* out_slow_check_notifier
,
             bool* out_proceed
,
             bool* out_showed_interstitial
,
             UrlCheckNotifierRequest slow_check_notifier,
             bool proceed,
             bool showed_interstitial) {*out_slow_check_notifier = std::move(slow_check_notifier);*out_proceed = std::move(proceed);*out_showed_interstitial = std::move(showed_interstitial);
            loop->Quit();
          },
          &loop,
          out_slow_check_notifier,
          out_proceed,
          out_showed_interstitial));
  loop.Run();
}

const char UrlCheckNotifier::Name_[] = "safe_browsing.mojom.UrlCheckNotifier";

UrlCheckNotifierProxy::UrlCheckNotifierProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void UrlCheckNotifierProxy::OnCompleteCheck(
    bool in_proceed, bool in_showed_interstitial) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "safe_browsing::mojom::UrlCheckNotifier::OnCompleteCheck");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUrlCheckNotifier_OnCompleteCheck_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::safe_browsing::mojom::internal::UrlCheckNotifier_OnCompleteCheck_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->proceed = in_proceed;
  params->showed_interstitial = in_showed_interstitial;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool UrlCheckNotifierStubDispatch::Accept(
    UrlCheckNotifier* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kUrlCheckNotifier_OnCompleteCheck_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)safe_browsing::mojom::UrlCheckNotifier::OnCompleteCheck",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::UrlCheckNotifier_OnCompleteCheck_Params_Data* params =
          reinterpret_cast<internal::UrlCheckNotifier_OnCompleteCheck_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_proceed{};
      bool p_showed_interstitial{};
      UrlCheckNotifier_OnCompleteCheck_ParamsDataView input_data_view(params, &serialization_context);
      
      p_proceed = input_data_view.proceed();
      p_showed_interstitial = input_data_view.showed_interstitial();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "UrlCheckNotifier::OnCompleteCheck deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnCompleteCheck(
std::move(p_proceed), 
std::move(p_showed_interstitial));
      return true;
    }
  }
  return false;
}

// static
bool UrlCheckNotifierStubDispatch::AcceptWithResponder(
    UrlCheckNotifier* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kUrlCheckNotifier_OnCompleteCheck_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)safe_browsing::mojom::UrlCheckNotifier::OnCompleteCheck",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool UrlCheckNotifierRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "UrlCheckNotifier RequestValidator");

  switch (message->header()->name) {
    case internal::kUrlCheckNotifier_OnCompleteCheck_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UrlCheckNotifier_OnCompleteCheck_Params_Data>(
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

void UrlCheckNotifierInterceptorForTesting::OnCompleteCheck(bool proceed, bool showed_interstitial) {
  GetForwardingInterface()->OnCompleteCheck(std::move(proceed), std::move(showed_interstitial));
}
UrlCheckNotifierAsyncWaiter::UrlCheckNotifierAsyncWaiter(
    UrlCheckNotifier* proxy) : proxy_(proxy) {}

UrlCheckNotifierAsyncWaiter::~UrlCheckNotifierAsyncWaiter() = default;


const char ThreatReporter::Name_[] = "safe_browsing.mojom.ThreatReporter";

class ThreatReporter_GetThreatDOMDetails_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ThreatReporter_GetThreatDOMDetails_ForwardToCallback(
      ThreatReporter::GetThreatDOMDetailsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ThreatReporter::GetThreatDOMDetailsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ThreatReporter_GetThreatDOMDetails_ForwardToCallback);
};

ThreatReporterProxy::ThreatReporterProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ThreatReporterProxy::GetThreatDOMDetails(
    GetThreatDOMDetailsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "safe_browsing::mojom::ThreatReporter::GetThreatDOMDetails");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kThreatReporter_GetThreatDOMDetails_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::safe_browsing::mojom::internal::ThreatReporter_GetThreatDOMDetails_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ThreatReporter_GetThreatDOMDetails_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ThreatReporter_GetThreatDOMDetails_ProxyToResponder {
 public:
  static ThreatReporter::GetThreatDOMDetailsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ThreatReporter_GetThreatDOMDetails_ProxyToResponder> proxy(
        new ThreatReporter_GetThreatDOMDetails_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ThreatReporter_GetThreatDOMDetails_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ThreatReporter_GetThreatDOMDetails_ProxyToResponder() {
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
  ThreatReporter_GetThreatDOMDetails_ProxyToResponder(
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
        << "ThreatReporter::GetThreatDOMDetailsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<ThreatDOMDetailsNodePtr> in_nodes);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ThreatReporter_GetThreatDOMDetails_ProxyToResponder);
};

bool ThreatReporter_GetThreatDOMDetails_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "safe_browsing::mojom::ThreatReporter::GetThreatDOMDetailsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ThreatReporter_GetThreatDOMDetails_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ThreatReporter_GetThreatDOMDetails_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<ThreatDOMDetailsNodePtr> p_nodes{};
  ThreatReporter_GetThreatDOMDetails_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadNodes(&p_nodes))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ThreatReporter::GetThreatDOMDetails response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_nodes));
  return true;
}

void ThreatReporter_GetThreatDOMDetails_ProxyToResponder::Run(
    std::vector<ThreatDOMDetailsNodePtr> in_nodes) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kThreatReporter_GetThreatDOMDetails_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::safe_browsing::mojom::internal::ThreatReporter_GetThreatDOMDetails_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->nodes)::BaseType::BufferWriter
      nodes_writer;
  const mojo::internal::ContainerValidateParams nodes_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::safe_browsing::mojom::ThreatDOMDetailsNodeDataView>>(
      in_nodes, buffer, &nodes_writer, &nodes_validate_params,
      &serialization_context);
  params->nodes.Set(
      nodes_writer.is_null() ? nullptr : nodes_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->nodes.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null nodes in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)safe_browsing::mojom::ThreatReporter::GetThreatDOMDetailsCallback",
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
bool ThreatReporterStubDispatch::Accept(
    ThreatReporter* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kThreatReporter_GetThreatDOMDetails_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)safe_browsing::mojom::ThreatReporter::GetThreatDOMDetails",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool ThreatReporterStubDispatch::AcceptWithResponder(
    ThreatReporter* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kThreatReporter_GetThreatDOMDetails_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)safe_browsing::mojom::ThreatReporter::GetThreatDOMDetails",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ThreatReporter_GetThreatDOMDetails_Params_Data* params =
          reinterpret_cast<
              internal::ThreatReporter_GetThreatDOMDetails_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ThreatReporter_GetThreatDOMDetails_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ThreatReporter::GetThreatDOMDetails deserializer");
        return false;
      }
      ThreatReporter::GetThreatDOMDetailsCallback callback =
          ThreatReporter_GetThreatDOMDetails_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetThreatDOMDetails(std::move(callback));
      return true;
    }
  }
  return false;
}

bool ThreatReporterRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ThreatReporter RequestValidator");

  switch (message->header()->name) {
    case internal::kThreatReporter_GetThreatDOMDetails_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ThreatReporter_GetThreatDOMDetails_Params_Data>(
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

bool ThreatReporterResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ThreatReporter ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kThreatReporter_GetThreatDOMDetails_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ThreatReporter_GetThreatDOMDetails_ResponseParams_Data>(
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
void ThreatReporterInterceptorForTesting::GetThreatDOMDetails(GetThreatDOMDetailsCallback callback) {
  GetForwardingInterface()->GetThreatDOMDetails(std::move(callback));
}
ThreatReporterAsyncWaiter::ThreatReporterAsyncWaiter(
    ThreatReporter* proxy) : proxy_(proxy) {}

ThreatReporterAsyncWaiter::~ThreatReporterAsyncWaiter() = default;

void ThreatReporterAsyncWaiter::GetThreatDOMDetails(
    std::vector<ThreatDOMDetailsNodePtr>* out_nodes) {
  base::RunLoop loop;
  proxy_->GetThreatDOMDetails(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<ThreatDOMDetailsNodePtr>* out_nodes
,
             std::vector<ThreatDOMDetailsNodePtr> nodes) {*out_nodes = std::move(nodes);
            loop->Quit();
          },
          &loop,
          out_nodes));
  loop.Run();
}

const char PhishingDetector::Name_[] = "safe_browsing.mojom.PhishingDetector";

PhishingDetectorProxy::PhishingDetectorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PhishingDetectorProxy::StartPhishingDetection(
    const GURL& in_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "safe_browsing::mojom::PhishingDetector::StartPhishingDetection");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPhishingDetector_StartPhishingDetection_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::safe_browsing::mojom::internal::PhishingDetector_StartPhishingDetection_Params_Data::BufferWriter
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
      "null url in PhishingDetector.StartPhishingDetection request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PhishingDetectorStubDispatch::Accept(
    PhishingDetector* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPhishingDetector_StartPhishingDetection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)safe_browsing::mojom::PhishingDetector::StartPhishingDetection",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PhishingDetector_StartPhishingDetection_Params_Data* params =
          reinterpret_cast<internal::PhishingDetector_StartPhishingDetection_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      PhishingDetector_StartPhishingDetection_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PhishingDetector::StartPhishingDetection deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StartPhishingDetection(
std::move(p_url));
      return true;
    }
  }
  return false;
}

// static
bool PhishingDetectorStubDispatch::AcceptWithResponder(
    PhishingDetector* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPhishingDetector_StartPhishingDetection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)safe_browsing::mojom::PhishingDetector::StartPhishingDetection",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PhishingDetectorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PhishingDetector RequestValidator");

  switch (message->header()->name) {
    case internal::kPhishingDetector_StartPhishingDetection_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PhishingDetector_StartPhishingDetection_Params_Data>(
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

void PhishingDetectorInterceptorForTesting::StartPhishingDetection(const GURL& url) {
  GetForwardingInterface()->StartPhishingDetection(std::move(url));
}
PhishingDetectorAsyncWaiter::PhishingDetectorAsyncWaiter(
    PhishingDetector* proxy) : proxy_(proxy) {}

PhishingDetectorAsyncWaiter::~PhishingDetectorAsyncWaiter() = default;


const char PhishingDetectorClient::Name_[] = "safe_browsing.mojom.PhishingDetectorClient";

PhishingDetectorClientProxy::PhishingDetectorClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PhishingDetectorClientProxy::PhishingDetectionDone(
    const std::string& in_request_proto) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "safe_browsing::mojom::PhishingDetectorClient::PhishingDetectionDone");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPhishingDetectorClient_PhishingDetectionDone_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::safe_browsing::mojom::internal::PhishingDetectorClient_PhishingDetectionDone_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->request_proto)::BaseType::BufferWriter
      request_proto_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_request_proto, buffer, &request_proto_writer, &serialization_context);
  params->request_proto.Set(
      request_proto_writer.is_null() ? nullptr : request_proto_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request_proto.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request_proto in PhishingDetectorClient.PhishingDetectionDone request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PhishingDetectorClientStubDispatch::Accept(
    PhishingDetectorClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPhishingDetectorClient_PhishingDetectionDone_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)safe_browsing::mojom::PhishingDetectorClient::PhishingDetectionDone",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PhishingDetectorClient_PhishingDetectionDone_Params_Data* params =
          reinterpret_cast<internal::PhishingDetectorClient_PhishingDetectionDone_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_request_proto{};
      PhishingDetectorClient_PhishingDetectionDone_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRequestProto(&p_request_proto))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PhishingDetectorClient::PhishingDetectionDone deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PhishingDetectionDone(
std::move(p_request_proto));
      return true;
    }
  }
  return false;
}

// static
bool PhishingDetectorClientStubDispatch::AcceptWithResponder(
    PhishingDetectorClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPhishingDetectorClient_PhishingDetectionDone_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)safe_browsing::mojom::PhishingDetectorClient::PhishingDetectionDone",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PhishingDetectorClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PhishingDetectorClient RequestValidator");

  switch (message->header()->name) {
    case internal::kPhishingDetectorClient_PhishingDetectionDone_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PhishingDetectorClient_PhishingDetectionDone_Params_Data>(
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

void PhishingDetectorClientInterceptorForTesting::PhishingDetectionDone(const std::string& request_proto) {
  GetForwardingInterface()->PhishingDetectionDone(std::move(request_proto));
}
PhishingDetectorClientAsyncWaiter::PhishingDetectorClientAsyncWaiter(
    PhishingDetectorClient* proxy) : proxy_(proxy) {}

PhishingDetectorClientAsyncWaiter::~PhishingDetectorClientAsyncWaiter() = default;


const char PhishingModelSetter::Name_[] = "safe_browsing.mojom.PhishingModelSetter";

PhishingModelSetterProxy::PhishingModelSetterProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PhishingModelSetterProxy::SetPhishingModel(
    const std::string& in_model) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "safe_browsing::mojom::PhishingModelSetter::SetPhishingModel");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPhishingModelSetter_SetPhishingModel_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::safe_browsing::mojom::internal::PhishingModelSetter_SetPhishingModel_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->model)::BaseType::BufferWriter
      model_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_model, buffer, &model_writer, &serialization_context);
  params->model.Set(
      model_writer.is_null() ? nullptr : model_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->model.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null model in PhishingModelSetter.SetPhishingModel request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PhishingModelSetterStubDispatch::Accept(
    PhishingModelSetter* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPhishingModelSetter_SetPhishingModel_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)safe_browsing::mojom::PhishingModelSetter::SetPhishingModel",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PhishingModelSetter_SetPhishingModel_Params_Data* params =
          reinterpret_cast<internal::PhishingModelSetter_SetPhishingModel_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_model{};
      PhishingModelSetter_SetPhishingModel_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadModel(&p_model))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PhishingModelSetter::SetPhishingModel deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetPhishingModel(
std::move(p_model));
      return true;
    }
  }
  return false;
}

// static
bool PhishingModelSetterStubDispatch::AcceptWithResponder(
    PhishingModelSetter* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPhishingModelSetter_SetPhishingModel_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)safe_browsing::mojom::PhishingModelSetter::SetPhishingModel",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PhishingModelSetterRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PhishingModelSetter RequestValidator");

  switch (message->header()->name) {
    case internal::kPhishingModelSetter_SetPhishingModel_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PhishingModelSetter_SetPhishingModel_Params_Data>(
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

void PhishingModelSetterInterceptorForTesting::SetPhishingModel(const std::string& model) {
  GetForwardingInterface()->SetPhishingModel(std::move(model));
}
PhishingModelSetterAsyncWaiter::PhishingModelSetterAsyncWaiter(
    PhishingModelSetter* proxy) : proxy_(proxy) {}

PhishingModelSetterAsyncWaiter::~PhishingModelSetterAsyncWaiter() = default;


}  // namespace mojom
}  // namespace safe_browsing

namespace mojo {


// static
bool StructTraits<::safe_browsing::mojom::AttributeNameValue::DataView, ::safe_browsing::mojom::AttributeNameValuePtr>::Read(
    ::safe_browsing::mojom::AttributeNameValue::DataView input,
    ::safe_browsing::mojom::AttributeNameValuePtr* output) {
  bool success = true;
  ::safe_browsing::mojom::AttributeNameValuePtr result(::safe_browsing::mojom::AttributeNameValue::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::safe_browsing::mojom::ThreatDOMDetailsNode::DataView, ::safe_browsing::mojom::ThreatDOMDetailsNodePtr>::Read(
    ::safe_browsing::mojom::ThreatDOMDetailsNode::DataView input,
    ::safe_browsing::mojom::ThreatDOMDetailsNodePtr* output) {
  bool success = true;
  ::safe_browsing::mojom::ThreatDOMDetailsNodePtr result(::safe_browsing::mojom::ThreatDOMDetailsNode::New());
  
      result->node_id = input.node_id();
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadTagName(&result->tag_name))
        success = false;
      if (!input.ReadParent(&result->parent))
        success = false;
      result->parent_node_id = input.parent_node_id();
      if (!input.ReadChildren(&result->children))
        success = false;
      if (!input.ReadChildNodeIds(&result->child_node_ids))
        success = false;
      if (!input.ReadAttributes(&result->attributes))
        success = false;
      result->child_frame_routing_id = input.child_frame_routing_id();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif