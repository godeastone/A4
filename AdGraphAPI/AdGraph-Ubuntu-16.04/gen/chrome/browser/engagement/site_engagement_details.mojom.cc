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

#include "chrome/browser/engagement/site_engagement_details.mojom.h"

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

#include "chrome/browser/engagement/site_engagement_details.mojom-shared-message-ids.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace mojom {
SiteEngagementDetails::SiteEngagementDetails()
    : origin(),
      total_score(),
      base_score(),
      installed_bonus() {}

SiteEngagementDetails::SiteEngagementDetails(
    const GURL& origin_in,
    double total_score_in,
    double base_score_in,
    double installed_bonus_in)
    : origin(std::move(origin_in)),
      total_score(std::move(total_score_in)),
      base_score(std::move(base_score_in)),
      installed_bonus(std::move(installed_bonus_in)) {}

SiteEngagementDetails::~SiteEngagementDetails() = default;

bool SiteEngagementDetails::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char SiteEngagementDetailsProvider::Name_[] = "mojom.SiteEngagementDetailsProvider";

class SiteEngagementDetailsProvider_GetSiteEngagementDetails_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SiteEngagementDetailsProvider_GetSiteEngagementDetails_ForwardToCallback(
      SiteEngagementDetailsProvider::GetSiteEngagementDetailsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SiteEngagementDetailsProvider::GetSiteEngagementDetailsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SiteEngagementDetailsProvider_GetSiteEngagementDetails_ForwardToCallback);
};

SiteEngagementDetailsProviderProxy::SiteEngagementDetailsProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SiteEngagementDetailsProviderProxy::GetSiteEngagementDetails(
    GetSiteEngagementDetailsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "mojom::SiteEngagementDetailsProvider::GetSiteEngagementDetails");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSiteEngagementDetailsProvider_GetSiteEngagementDetails_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::SiteEngagementDetailsProvider_GetSiteEngagementDetails_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SiteEngagementDetailsProvider_GetSiteEngagementDetails_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SiteEngagementDetailsProviderProxy::SetSiteEngagementBaseScoreForUrl(
    const GURL& in_url, double in_score) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "mojom::SiteEngagementDetailsProvider::SetSiteEngagementBaseScoreForUrl");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_Params_Data::BufferWriter
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
      "null url in SiteEngagementDetailsProvider.SetSiteEngagementBaseScoreForUrl request");
  params->score = in_score;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class SiteEngagementDetailsProvider_GetSiteEngagementDetails_ProxyToResponder {
 public:
  static SiteEngagementDetailsProvider::GetSiteEngagementDetailsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SiteEngagementDetailsProvider_GetSiteEngagementDetails_ProxyToResponder> proxy(
        new SiteEngagementDetailsProvider_GetSiteEngagementDetails_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SiteEngagementDetailsProvider_GetSiteEngagementDetails_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SiteEngagementDetailsProvider_GetSiteEngagementDetails_ProxyToResponder() {
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
  SiteEngagementDetailsProvider_GetSiteEngagementDetails_ProxyToResponder(
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
        << "SiteEngagementDetailsProvider::GetSiteEngagementDetailsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<SiteEngagementDetailsPtr> in_info);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SiteEngagementDetailsProvider_GetSiteEngagementDetails_ProxyToResponder);
};

bool SiteEngagementDetailsProvider_GetSiteEngagementDetails_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "mojom::SiteEngagementDetailsProvider::GetSiteEngagementDetailsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<SiteEngagementDetailsPtr> p_info{};
  SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadInfo(&p_info))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SiteEngagementDetailsProvider::GetSiteEngagementDetails response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_info));
  return true;
}

void SiteEngagementDetailsProvider_GetSiteEngagementDetails_ProxyToResponder::Run(
    std::vector<SiteEngagementDetailsPtr> in_info) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSiteEngagementDetailsProvider_GetSiteEngagementDetails_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->info)::BaseType::BufferWriter
      info_writer;
  const mojo::internal::ContainerValidateParams info_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::mojom::SiteEngagementDetailsDataView>>(
      in_info, buffer, &info_writer, &info_validate_params,
      &serialization_context);
  params->info.Set(
      info_writer.is_null() ? nullptr : info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null info in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::SiteEngagementDetailsProvider::GetSiteEngagementDetailsCallback",
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
bool SiteEngagementDetailsProviderStubDispatch::Accept(
    SiteEngagementDetailsProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSiteEngagementDetailsProvider_GetSiteEngagementDetails_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::SiteEngagementDetailsProvider::GetSiteEngagementDetails",
               "message", message->name());
#endif
      break;
    }
    case internal::kSiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::SiteEngagementDetailsProvider::SetSiteEngagementBaseScoreForUrl",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_Params_Data* params =
          reinterpret_cast<internal::SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      double p_score{};
      SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      p_score = input_data_view.score();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SiteEngagementDetailsProvider::SetSiteEngagementBaseScoreForUrl deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetSiteEngagementBaseScoreForUrl(
std::move(p_url), 
std::move(p_score));
      return true;
    }
  }
  return false;
}

// static
bool SiteEngagementDetailsProviderStubDispatch::AcceptWithResponder(
    SiteEngagementDetailsProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSiteEngagementDetailsProvider_GetSiteEngagementDetails_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::SiteEngagementDetailsProvider::GetSiteEngagementDetails",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SiteEngagementDetailsProvider_GetSiteEngagementDetails_Params_Data* params =
          reinterpret_cast<
              internal::SiteEngagementDetailsProvider_GetSiteEngagementDetails_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SiteEngagementDetailsProvider_GetSiteEngagementDetails_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SiteEngagementDetailsProvider::GetSiteEngagementDetails deserializer");
        return false;
      }
      SiteEngagementDetailsProvider::GetSiteEngagementDetailsCallback callback =
          SiteEngagementDetailsProvider_GetSiteEngagementDetails_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetSiteEngagementDetails(std::move(callback));
      return true;
    }
    case internal::kSiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::SiteEngagementDetailsProvider::SetSiteEngagementBaseScoreForUrl",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool SiteEngagementDetailsProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SiteEngagementDetailsProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kSiteEngagementDetailsProvider_GetSiteEngagementDetails_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SiteEngagementDetailsProvider_GetSiteEngagementDetails_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_Params_Data>(
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

bool SiteEngagementDetailsProviderResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SiteEngagementDetailsProvider ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kSiteEngagementDetailsProvider_GetSiteEngagementDetails_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParams_Data>(
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
void SiteEngagementDetailsProviderInterceptorForTesting::GetSiteEngagementDetails(GetSiteEngagementDetailsCallback callback) {
  GetForwardingInterface()->GetSiteEngagementDetails(std::move(callback));
}
void SiteEngagementDetailsProviderInterceptorForTesting::SetSiteEngagementBaseScoreForUrl(const GURL& url, double score) {
  GetForwardingInterface()->SetSiteEngagementBaseScoreForUrl(std::move(url), std::move(score));
}
SiteEngagementDetailsProviderAsyncWaiter::SiteEngagementDetailsProviderAsyncWaiter(
    SiteEngagementDetailsProvider* proxy) : proxy_(proxy) {}

SiteEngagementDetailsProviderAsyncWaiter::~SiteEngagementDetailsProviderAsyncWaiter() = default;

void SiteEngagementDetailsProviderAsyncWaiter::GetSiteEngagementDetails(
    std::vector<SiteEngagementDetailsPtr>* out_info) {
  base::RunLoop loop;
  proxy_->GetSiteEngagementDetails(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<SiteEngagementDetailsPtr>* out_info
,
             std::vector<SiteEngagementDetailsPtr> info) {*out_info = std::move(info);
            loop->Quit();
          },
          &loop,
          out_info));
  loop.Run();
}

}  // namespace mojom

namespace mojo {


// static
bool StructTraits<::mojom::SiteEngagementDetails::DataView, ::mojom::SiteEngagementDetailsPtr>::Read(
    ::mojom::SiteEngagementDetails::DataView input,
    ::mojom::SiteEngagementDetailsPtr* output) {
  bool success = true;
  ::mojom::SiteEngagementDetailsPtr result(::mojom::SiteEngagementDetails::New());
  
      if (!input.ReadOrigin(&result->origin))
        success = false;
      result->total_score = input.total_score();
      result->base_score = input.base_score();
      result->installed_bonus = input.installed_bonus();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif