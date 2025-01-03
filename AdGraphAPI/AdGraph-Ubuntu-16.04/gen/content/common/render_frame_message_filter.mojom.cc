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

#include "content/common/render_frame_message_filter.mojom.h"

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

#include "content/common/render_frame_message_filter.mojom-shared-message-ids.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace content {
namespace mojom {
const char RenderFrameMessageFilter::Name_[] = "content.mojom.RenderFrameMessageFilter";
bool RenderFrameMessageFilter::SetCookie(int32_t render_frame_id, const GURL& url, const GURL& first_party_for_cookies, const std::string& cookie) {
  NOTREACHED();
  return false;
}
bool RenderFrameMessageFilter::GetCookies(int32_t render_frame_id, const GURL& url, const GURL& first_party_for_cookies, std::string* out_cookies) {
  NOTREACHED();
  return false;
}
class RenderFrameMessageFilter_SetCookie_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  RenderFrameMessageFilter_SetCookie_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(RenderFrameMessageFilter_SetCookie_HandleSyncResponse);
};

class RenderFrameMessageFilter_SetCookie_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  RenderFrameMessageFilter_SetCookie_ForwardToCallback(
      RenderFrameMessageFilter::SetCookieCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  RenderFrameMessageFilter::SetCookieCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(RenderFrameMessageFilter_SetCookie_ForwardToCallback);
};
class RenderFrameMessageFilter_GetCookies_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  RenderFrameMessageFilter_GetCookies_HandleSyncResponse(
      bool* result, std::string* out_cookies)
      : result_(result), out_cookies_(out_cookies) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  std::string* out_cookies_;DISALLOW_COPY_AND_ASSIGN(RenderFrameMessageFilter_GetCookies_HandleSyncResponse);
};

class RenderFrameMessageFilter_GetCookies_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  RenderFrameMessageFilter_GetCookies_ForwardToCallback(
      RenderFrameMessageFilter::GetCookiesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  RenderFrameMessageFilter::GetCookiesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(RenderFrameMessageFilter_GetCookies_ForwardToCallback);
};

RenderFrameMessageFilterProxy::RenderFrameMessageFilterProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool RenderFrameMessageFilterProxy::SetCookie(
    int32_t param_render_frame_id, const GURL& param_url, const GURL& param_first_party_for_cookies, const std::string& param_cookie) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RenderFrameMessageFilter::SetCookie");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderFrameMessageFilter_SetCookie_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RenderFrameMessageFilter_SetCookie_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->render_frame_id = param_render_frame_id;
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in RenderFrameMessageFilter.SetCookie request");
  typename decltype(params->first_party_for_cookies)::BaseType::BufferWriter
      first_party_for_cookies_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_first_party_for_cookies, buffer, &first_party_for_cookies_writer, &serialization_context);
  params->first_party_for_cookies.Set(
      first_party_for_cookies_writer.is_null() ? nullptr : first_party_for_cookies_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->first_party_for_cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null first_party_for_cookies in RenderFrameMessageFilter.SetCookie request");
  typename decltype(params->cookie)::BaseType::BufferWriter
      cookie_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_cookie, buffer, &cookie_writer, &serialization_context);
  params->cookie.Set(
      cookie_writer.is_null() ? nullptr : cookie_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cookie.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cookie in RenderFrameMessageFilter.SetCookie request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RenderFrameMessageFilter_SetCookie_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void RenderFrameMessageFilterProxy::SetCookie(
    int32_t in_render_frame_id, const GURL& in_url, const GURL& in_first_party_for_cookies, const std::string& in_cookie, SetCookieCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RenderFrameMessageFilter::SetCookie");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderFrameMessageFilter_SetCookie_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RenderFrameMessageFilter_SetCookie_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->render_frame_id = in_render_frame_id;
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in RenderFrameMessageFilter.SetCookie request");
  typename decltype(params->first_party_for_cookies)::BaseType::BufferWriter
      first_party_for_cookies_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_first_party_for_cookies, buffer, &first_party_for_cookies_writer, &serialization_context);
  params->first_party_for_cookies.Set(
      first_party_for_cookies_writer.is_null() ? nullptr : first_party_for_cookies_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->first_party_for_cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null first_party_for_cookies in RenderFrameMessageFilter.SetCookie request");
  typename decltype(params->cookie)::BaseType::BufferWriter
      cookie_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_cookie, buffer, &cookie_writer, &serialization_context);
  params->cookie.Set(
      cookie_writer.is_null() ? nullptr : cookie_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cookie.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cookie in RenderFrameMessageFilter.SetCookie request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RenderFrameMessageFilter_SetCookie_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool RenderFrameMessageFilterProxy::GetCookies(
    int32_t param_render_frame_id, const GURL& param_url, const GURL& param_first_party_for_cookies, std::string* out_param_cookies) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RenderFrameMessageFilter::GetCookies");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderFrameMessageFilter_GetCookies_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RenderFrameMessageFilter_GetCookies_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->render_frame_id = param_render_frame_id;
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in RenderFrameMessageFilter.GetCookies request");
  typename decltype(params->first_party_for_cookies)::BaseType::BufferWriter
      first_party_for_cookies_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_first_party_for_cookies, buffer, &first_party_for_cookies_writer, &serialization_context);
  params->first_party_for_cookies.Set(
      first_party_for_cookies_writer.is_null() ? nullptr : first_party_for_cookies_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->first_party_for_cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null first_party_for_cookies in RenderFrameMessageFilter.GetCookies request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RenderFrameMessageFilter_GetCookies_HandleSyncResponse(
          &result, out_param_cookies));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void RenderFrameMessageFilterProxy::GetCookies(
    int32_t in_render_frame_id, const GURL& in_url, const GURL& in_first_party_for_cookies, GetCookiesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RenderFrameMessageFilter::GetCookies");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderFrameMessageFilter_GetCookies_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RenderFrameMessageFilter_GetCookies_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->render_frame_id = in_render_frame_id;
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in RenderFrameMessageFilter.GetCookies request");
  typename decltype(params->first_party_for_cookies)::BaseType::BufferWriter
      first_party_for_cookies_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_first_party_for_cookies, buffer, &first_party_for_cookies_writer, &serialization_context);
  params->first_party_for_cookies.Set(
      first_party_for_cookies_writer.is_null() ? nullptr : first_party_for_cookies_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->first_party_for_cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null first_party_for_cookies in RenderFrameMessageFilter.GetCookies request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RenderFrameMessageFilter_GetCookies_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class RenderFrameMessageFilter_SetCookie_ProxyToResponder {
 public:
  static RenderFrameMessageFilter::SetCookieCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<RenderFrameMessageFilter_SetCookie_ProxyToResponder> proxy(
        new RenderFrameMessageFilter_SetCookie_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&RenderFrameMessageFilter_SetCookie_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~RenderFrameMessageFilter_SetCookie_ProxyToResponder() {
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
  RenderFrameMessageFilter_SetCookie_ProxyToResponder(
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
        << "RenderFrameMessageFilter::SetCookieCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(RenderFrameMessageFilter_SetCookie_ProxyToResponder);
};

bool RenderFrameMessageFilter_SetCookie_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::RenderFrameMessageFilter::SetCookieCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::RenderFrameMessageFilter_SetCookie_ResponseParams_Data* params =
      reinterpret_cast<
          internal::RenderFrameMessageFilter_SetCookie_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  RenderFrameMessageFilter_SetCookie_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "RenderFrameMessageFilter::SetCookie response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void RenderFrameMessageFilter_SetCookie_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderFrameMessageFilter_SetCookie_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RenderFrameMessageFilter_SetCookie_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderFrameMessageFilter::SetCookieCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool RenderFrameMessageFilter_SetCookie_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::RenderFrameMessageFilter_SetCookie_ResponseParams_Data* params =
      reinterpret_cast<internal::RenderFrameMessageFilter_SetCookie_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  RenderFrameMessageFilter_SetCookie_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "RenderFrameMessageFilter::SetCookie response deserializer");
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class RenderFrameMessageFilter_GetCookies_ProxyToResponder {
 public:
  static RenderFrameMessageFilter::GetCookiesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<RenderFrameMessageFilter_GetCookies_ProxyToResponder> proxy(
        new RenderFrameMessageFilter_GetCookies_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&RenderFrameMessageFilter_GetCookies_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~RenderFrameMessageFilter_GetCookies_ProxyToResponder() {
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
  RenderFrameMessageFilter_GetCookies_ProxyToResponder(
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
        << "RenderFrameMessageFilter::GetCookiesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::string& in_cookies);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(RenderFrameMessageFilter_GetCookies_ProxyToResponder);
};

bool RenderFrameMessageFilter_GetCookies_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::RenderFrameMessageFilter::GetCookiesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::RenderFrameMessageFilter_GetCookies_ResponseParams_Data* params =
      reinterpret_cast<
          internal::RenderFrameMessageFilter_GetCookies_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::string p_cookies{};
  RenderFrameMessageFilter_GetCookies_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadCookies(&p_cookies))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "RenderFrameMessageFilter::GetCookies response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_cookies));
  return true;
}

void RenderFrameMessageFilter_GetCookies_ProxyToResponder::Run(
    const std::string& in_cookies) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderFrameMessageFilter_GetCookies_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RenderFrameMessageFilter_GetCookies_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cookies)::BaseType::BufferWriter
      cookies_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_cookies, buffer, &cookies_writer, &serialization_context);
  params->cookies.Set(
      cookies_writer.is_null() ? nullptr : cookies_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cookies in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderFrameMessageFilter::GetCookiesCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool RenderFrameMessageFilter_GetCookies_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::RenderFrameMessageFilter_GetCookies_ResponseParams_Data* params =
      reinterpret_cast<internal::RenderFrameMessageFilter_GetCookies_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::string p_cookies{};
  RenderFrameMessageFilter_GetCookies_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadCookies(&p_cookies))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "RenderFrameMessageFilter::GetCookies response deserializer");
    return false;
  }
  *out_cookies_ = std::move(p_cookies);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool RenderFrameMessageFilterStubDispatch::Accept(
    RenderFrameMessageFilter* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRenderFrameMessageFilter_SetCookie_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderFrameMessageFilter::SetCookie",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderFrameMessageFilter_GetCookies_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderFrameMessageFilter::GetCookies",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool RenderFrameMessageFilterStubDispatch::AcceptWithResponder(
    RenderFrameMessageFilter* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRenderFrameMessageFilter_SetCookie_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderFrameMessageFilter::SetCookie",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::RenderFrameMessageFilter_SetCookie_Params_Data* params =
          reinterpret_cast<
              internal::RenderFrameMessageFilter_SetCookie_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_render_frame_id{};
      GURL p_url{};
      GURL p_first_party_for_cookies{};
      std::string p_cookie{};
      RenderFrameMessageFilter_SetCookie_ParamsDataView input_data_view(params, &serialization_context);
      
      p_render_frame_id = input_data_view.render_frame_id();
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadFirstPartyForCookies(&p_first_party_for_cookies))
        success = false;
      if (!input_data_view.ReadCookie(&p_cookie))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RenderFrameMessageFilter::SetCookie deserializer");
        return false;
      }
      RenderFrameMessageFilter::SetCookieCallback callback =
          RenderFrameMessageFilter_SetCookie_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetCookie(
std::move(p_render_frame_id), 
std::move(p_url), 
std::move(p_first_party_for_cookies), 
std::move(p_cookie), std::move(callback));
      return true;
    }
    case internal::kRenderFrameMessageFilter_GetCookies_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderFrameMessageFilter::GetCookies",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::RenderFrameMessageFilter_GetCookies_Params_Data* params =
          reinterpret_cast<
              internal::RenderFrameMessageFilter_GetCookies_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_render_frame_id{};
      GURL p_url{};
      GURL p_first_party_for_cookies{};
      RenderFrameMessageFilter_GetCookies_ParamsDataView input_data_view(params, &serialization_context);
      
      p_render_frame_id = input_data_view.render_frame_id();
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadFirstPartyForCookies(&p_first_party_for_cookies))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RenderFrameMessageFilter::GetCookies deserializer");
        return false;
      }
      RenderFrameMessageFilter::GetCookiesCallback callback =
          RenderFrameMessageFilter_GetCookies_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetCookies(
std::move(p_render_frame_id), 
std::move(p_url), 
std::move(p_first_party_for_cookies), std::move(callback));
      return true;
    }
  }
  return false;
}

bool RenderFrameMessageFilterRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RenderFrameMessageFilter RequestValidator");

  switch (message->header()->name) {
    case internal::kRenderFrameMessageFilter_SetCookie_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RenderFrameMessageFilter_SetCookie_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderFrameMessageFilter_GetCookies_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RenderFrameMessageFilter_GetCookies_Params_Data>(
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

bool RenderFrameMessageFilterResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RenderFrameMessageFilter ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kRenderFrameMessageFilter_SetCookie_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::RenderFrameMessageFilter_SetCookie_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderFrameMessageFilter_GetCookies_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::RenderFrameMessageFilter_GetCookies_ResponseParams_Data>(
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
void RenderFrameMessageFilterInterceptorForTesting::SetCookie(int32_t render_frame_id, const GURL& url, const GURL& first_party_for_cookies, const std::string& cookie, SetCookieCallback callback) {
  GetForwardingInterface()->SetCookie(std::move(render_frame_id), std::move(url), std::move(first_party_for_cookies), std::move(cookie), std::move(callback));
}
void RenderFrameMessageFilterInterceptorForTesting::GetCookies(int32_t render_frame_id, const GURL& url, const GURL& first_party_for_cookies, GetCookiesCallback callback) {
  GetForwardingInterface()->GetCookies(std::move(render_frame_id), std::move(url), std::move(first_party_for_cookies), std::move(callback));
}
RenderFrameMessageFilterAsyncWaiter::RenderFrameMessageFilterAsyncWaiter(
    RenderFrameMessageFilter* proxy) : proxy_(proxy) {}

RenderFrameMessageFilterAsyncWaiter::~RenderFrameMessageFilterAsyncWaiter() = default;

void RenderFrameMessageFilterAsyncWaiter::SetCookie(
    int32_t render_frame_id, const GURL& url, const GURL& first_party_for_cookies, const std::string& cookie) {
  base::RunLoop loop;
  proxy_->SetCookie(std::move(render_frame_id),std::move(url),std::move(first_party_for_cookies),std::move(cookie),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void RenderFrameMessageFilterAsyncWaiter::GetCookies(
    int32_t render_frame_id, const GURL& url, const GURL& first_party_for_cookies, std::string* out_cookies) {
  base::RunLoop loop;
  proxy_->GetCookies(std::move(render_frame_id),std::move(url),std::move(first_party_for_cookies),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::string* out_cookies
,
             const std::string& cookies) {*out_cookies = std::move(cookies);
            loop->Quit();
          },
          &loop,
          out_cookies));
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