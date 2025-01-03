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

#include "chrome/browser/ui/webui/interventions_internals/interventions_internals.mojom.h"

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

#include "chrome/browser/ui/webui/interventions_internals/interventions_internals.mojom-shared-message-ids.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace mojom {
PreviewsStatus::PreviewsStatus()
    : description(),
      enabled(),
      htmlId() {}

PreviewsStatus::PreviewsStatus(
    const std::string& description_in,
    bool enabled_in,
    const std::string& htmlId_in)
    : description(std::move(description_in)),
      enabled(std::move(enabled_in)),
      htmlId(std::move(htmlId_in)) {}

PreviewsStatus::~PreviewsStatus() = default;
size_t PreviewsStatus::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->description);
  seed = mojo::internal::Hash(seed, this->enabled);
  seed = mojo::internal::Hash(seed, this->htmlId);
  return seed;
}

bool PreviewsStatus::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PreviewsFlag::PreviewsFlag()
    : description(),
      link(),
      value(),
      htmlId() {}

PreviewsFlag::PreviewsFlag(
    const std::string& description_in,
    const std::string& link_in,
    const std::string& value_in,
    const std::string& htmlId_in)
    : description(std::move(description_in)),
      link(std::move(link_in)),
      value(std::move(value_in)),
      htmlId(std::move(htmlId_in)) {}

PreviewsFlag::~PreviewsFlag() = default;
size_t PreviewsFlag::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->description);
  seed = mojo::internal::Hash(seed, this->link);
  seed = mojo::internal::Hash(seed, this->value);
  seed = mojo::internal::Hash(seed, this->htmlId);
  return seed;
}

bool PreviewsFlag::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
MessageLog::MessageLog()
    : type(),
      description(),
      url(),
      time(),
      page_id() {}

MessageLog::MessageLog(
    const std::string& type_in,
    const std::string& description_in,
    const GURL& url_in,
    int64_t time_in,
    uint64_t page_id_in)
    : type(std::move(type_in)),
      description(std::move(description_in)),
      url(std::move(url_in)),
      time(std::move(time_in)),
      page_id(std::move(page_id_in)) {}

MessageLog::~MessageLog() = default;

bool MessageLog::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char InterventionsInternalsPageHandler::Name_[] = "mojom.InterventionsInternalsPageHandler";

class InterventionsInternalsPageHandler_GetPreviewsEnabled_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  InterventionsInternalsPageHandler_GetPreviewsEnabled_ForwardToCallback(
      InterventionsInternalsPageHandler::GetPreviewsEnabledCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  InterventionsInternalsPageHandler::GetPreviewsEnabledCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(InterventionsInternalsPageHandler_GetPreviewsEnabled_ForwardToCallback);
};

class InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ForwardToCallback(
      InterventionsInternalsPageHandler::GetPreviewsFlagsDetailsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  InterventionsInternalsPageHandler::GetPreviewsFlagsDetailsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ForwardToCallback);
};

InterventionsInternalsPageHandlerProxy::InterventionsInternalsPageHandlerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void InterventionsInternalsPageHandlerProxy::GetPreviewsEnabled(
    GetPreviewsEnabledCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "mojom::InterventionsInternalsPageHandler::GetPreviewsEnabled");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterventionsInternalsPageHandler_GetPreviewsEnabled_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::InterventionsInternalsPageHandler_GetPreviewsEnabled_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new InterventionsInternalsPageHandler_GetPreviewsEnabled_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void InterventionsInternalsPageHandlerProxy::GetPreviewsFlagsDetails(
    GetPreviewsFlagsDetailsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "mojom::InterventionsInternalsPageHandler::GetPreviewsFlagsDetails");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void InterventionsInternalsPageHandlerProxy::SetClientPage(
    InterventionsInternalsPagePtr in_page) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "mojom::InterventionsInternalsPageHandler::SetClientPage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterventionsInternalsPageHandler_SetClientPage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::InterventionsInternalsPageHandler_SetClientPage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojom::InterventionsInternalsPagePtrDataView>(
      in_page, &params->page, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->page),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid page in InterventionsInternalsPageHandler.SetClientPage request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InterventionsInternalsPageHandlerProxy::SetIgnorePreviewsBlacklistDecision(
    bool in_ignored) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "mojom::InterventionsInternalsPageHandler::SetIgnorePreviewsBlacklistDecision");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->ignored = in_ignored;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class InterventionsInternalsPageHandler_GetPreviewsEnabled_ProxyToResponder {
 public:
  static InterventionsInternalsPageHandler::GetPreviewsEnabledCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<InterventionsInternalsPageHandler_GetPreviewsEnabled_ProxyToResponder> proxy(
        new InterventionsInternalsPageHandler_GetPreviewsEnabled_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&InterventionsInternalsPageHandler_GetPreviewsEnabled_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~InterventionsInternalsPageHandler_GetPreviewsEnabled_ProxyToResponder() {
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
  InterventionsInternalsPageHandler_GetPreviewsEnabled_ProxyToResponder(
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
        << "InterventionsInternalsPageHandler::GetPreviewsEnabledCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<PreviewsStatusPtr> in_statuses);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(InterventionsInternalsPageHandler_GetPreviewsEnabled_ProxyToResponder);
};

bool InterventionsInternalsPageHandler_GetPreviewsEnabled_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "mojom::InterventionsInternalsPageHandler::GetPreviewsEnabledCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams_Data* params =
      reinterpret_cast<
          internal::InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<PreviewsStatusPtr> p_statuses{};
  InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatuses(&p_statuses))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "InterventionsInternalsPageHandler::GetPreviewsEnabled response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_statuses));
  return true;
}

void InterventionsInternalsPageHandler_GetPreviewsEnabled_ProxyToResponder::Run(
    std::vector<PreviewsStatusPtr> in_statuses) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterventionsInternalsPageHandler_GetPreviewsEnabled_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->statuses)::BaseType::BufferWriter
      statuses_writer;
  const mojo::internal::ContainerValidateParams statuses_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::mojom::PreviewsStatusDataView>>(
      in_statuses, buffer, &statuses_writer, &statuses_validate_params,
      &serialization_context);
  params->statuses.Set(
      statuses_writer.is_null() ? nullptr : statuses_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->statuses.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null statuses in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::InterventionsInternalsPageHandler::GetPreviewsEnabledCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ProxyToResponder {
 public:
  static InterventionsInternalsPageHandler::GetPreviewsFlagsDetailsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ProxyToResponder> proxy(
        new InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ProxyToResponder() {
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
  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ProxyToResponder(
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
        << "InterventionsInternalsPageHandler::GetPreviewsFlagsDetailsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<PreviewsFlagPtr> in_flags);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ProxyToResponder);
};

bool InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "mojom::InterventionsInternalsPageHandler::GetPreviewsFlagsDetailsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams_Data* params =
      reinterpret_cast<
          internal::InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<PreviewsFlagPtr> p_flags{};
  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadFlags(&p_flags))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "InterventionsInternalsPageHandler::GetPreviewsFlagsDetails response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_flags));
  return true;
}

void InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ProxyToResponder::Run(
    std::vector<PreviewsFlagPtr> in_flags) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->flags)::BaseType::BufferWriter
      flags_writer;
  const mojo::internal::ContainerValidateParams flags_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::mojom::PreviewsFlagDataView>>(
      in_flags, buffer, &flags_writer, &flags_validate_params,
      &serialization_context);
  params->flags.Set(
      flags_writer.is_null() ? nullptr : flags_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->flags.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null flags in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::InterventionsInternalsPageHandler::GetPreviewsFlagsDetailsCallback",
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
bool InterventionsInternalsPageHandlerStubDispatch::Accept(
    InterventionsInternalsPageHandler* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kInterventionsInternalsPageHandler_GetPreviewsEnabled_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::InterventionsInternalsPageHandler::GetPreviewsEnabled",
               "message", message->name());
#endif
      break;
    }
    case internal::kInterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::InterventionsInternalsPageHandler::GetPreviewsFlagsDetails",
               "message", message->name());
#endif
      break;
    }
    case internal::kInterventionsInternalsPageHandler_SetClientPage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::InterventionsInternalsPageHandler::SetClientPage",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterventionsInternalsPageHandler_SetClientPage_Params_Data* params =
          reinterpret_cast<internal::InterventionsInternalsPageHandler_SetClientPage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InterventionsInternalsPagePtr p_page{};
      InterventionsInternalsPageHandler_SetClientPage_ParamsDataView input_data_view(params, &serialization_context);
      
      p_page =
          input_data_view.TakePage<decltype(p_page)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InterventionsInternalsPageHandler::SetClientPage deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetClientPage(
std::move(p_page));
      return true;
    }
    case internal::kInterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::InterventionsInternalsPageHandler::SetIgnorePreviewsBlacklistDecision",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params_Data* params =
          reinterpret_cast<internal::InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_ignored{};
      InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_ParamsDataView input_data_view(params, &serialization_context);
      
      p_ignored = input_data_view.ignored();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InterventionsInternalsPageHandler::SetIgnorePreviewsBlacklistDecision deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetIgnorePreviewsBlacklistDecision(
std::move(p_ignored));
      return true;
    }
  }
  return false;
}

// static
bool InterventionsInternalsPageHandlerStubDispatch::AcceptWithResponder(
    InterventionsInternalsPageHandler* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kInterventionsInternalsPageHandler_GetPreviewsEnabled_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::InterventionsInternalsPageHandler::GetPreviewsEnabled",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::InterventionsInternalsPageHandler_GetPreviewsEnabled_Params_Data* params =
          reinterpret_cast<
              internal::InterventionsInternalsPageHandler_GetPreviewsEnabled_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InterventionsInternalsPageHandler_GetPreviewsEnabled_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InterventionsInternalsPageHandler::GetPreviewsEnabled deserializer");
        return false;
      }
      InterventionsInternalsPageHandler::GetPreviewsEnabledCallback callback =
          InterventionsInternalsPageHandler_GetPreviewsEnabled_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetPreviewsEnabled(std::move(callback));
      return true;
    }
    case internal::kInterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::InterventionsInternalsPageHandler::GetPreviewsFlagsDetails",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params_Data* params =
          reinterpret_cast<
              internal::InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InterventionsInternalsPageHandler::GetPreviewsFlagsDetails deserializer");
        return false;
      }
      InterventionsInternalsPageHandler::GetPreviewsFlagsDetailsCallback callback =
          InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetPreviewsFlagsDetails(std::move(callback));
      return true;
    }
    case internal::kInterventionsInternalsPageHandler_SetClientPage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::InterventionsInternalsPageHandler::SetClientPage",
               "message", message->name());
#endif
      break;
    }
    case internal::kInterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::InterventionsInternalsPageHandler::SetIgnorePreviewsBlacklistDecision",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool InterventionsInternalsPageHandlerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "InterventionsInternalsPageHandler RequestValidator");

  switch (message->header()->name) {
    case internal::kInterventionsInternalsPageHandler_GetPreviewsEnabled_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterventionsInternalsPageHandler_GetPreviewsEnabled_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInterventionsInternalsPageHandler_SetClientPage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterventionsInternalsPageHandler_SetClientPage_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params_Data>(
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

bool InterventionsInternalsPageHandlerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "InterventionsInternalsPageHandler ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kInterventionsInternalsPageHandler_GetPreviewsEnabled_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams_Data>(
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
void InterventionsInternalsPageHandlerInterceptorForTesting::GetPreviewsEnabled(GetPreviewsEnabledCallback callback) {
  GetForwardingInterface()->GetPreviewsEnabled(std::move(callback));
}
void InterventionsInternalsPageHandlerInterceptorForTesting::GetPreviewsFlagsDetails(GetPreviewsFlagsDetailsCallback callback) {
  GetForwardingInterface()->GetPreviewsFlagsDetails(std::move(callback));
}
void InterventionsInternalsPageHandlerInterceptorForTesting::SetClientPage(InterventionsInternalsPagePtr page) {
  GetForwardingInterface()->SetClientPage(std::move(page));
}
void InterventionsInternalsPageHandlerInterceptorForTesting::SetIgnorePreviewsBlacklistDecision(bool ignored) {
  GetForwardingInterface()->SetIgnorePreviewsBlacklistDecision(std::move(ignored));
}
InterventionsInternalsPageHandlerAsyncWaiter::InterventionsInternalsPageHandlerAsyncWaiter(
    InterventionsInternalsPageHandler* proxy) : proxy_(proxy) {}

InterventionsInternalsPageHandlerAsyncWaiter::~InterventionsInternalsPageHandlerAsyncWaiter() = default;

void InterventionsInternalsPageHandlerAsyncWaiter::GetPreviewsEnabled(
    std::vector<PreviewsStatusPtr>* out_statuses) {
  base::RunLoop loop;
  proxy_->GetPreviewsEnabled(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<PreviewsStatusPtr>* out_statuses
,
             std::vector<PreviewsStatusPtr> statuses) {*out_statuses = std::move(statuses);
            loop->Quit();
          },
          &loop,
          out_statuses));
  loop.Run();
}
void InterventionsInternalsPageHandlerAsyncWaiter::GetPreviewsFlagsDetails(
    std::vector<PreviewsFlagPtr>* out_flags) {
  base::RunLoop loop;
  proxy_->GetPreviewsFlagsDetails(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<PreviewsFlagPtr>* out_flags
,
             std::vector<PreviewsFlagPtr> flags) {*out_flags = std::move(flags);
            loop->Quit();
          },
          &loop,
          out_flags));
  loop.Run();
}

const char InterventionsInternalsPage::Name_[] = "mojom.InterventionsInternalsPage";

InterventionsInternalsPageProxy::InterventionsInternalsPageProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void InterventionsInternalsPageProxy::LogNewMessage(
    MessageLogPtr in_log) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "mojom::InterventionsInternalsPage::LogNewMessage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterventionsInternalsPage_LogNewMessage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::InterventionsInternalsPage_LogNewMessage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->log)::BaseType::BufferWriter
      log_writer;
  mojo::internal::Serialize<::mojom::MessageLogDataView>(
      in_log, buffer, &log_writer, &serialization_context);
  params->log.Set(
      log_writer.is_null() ? nullptr : log_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->log.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null log in InterventionsInternalsPage.LogNewMessage request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InterventionsInternalsPageProxy::OnBlacklistedHost(
    const std::string& in_host, int64_t in_time) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "mojom::InterventionsInternalsPage::OnBlacklistedHost");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterventionsInternalsPage_OnBlacklistedHost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::InterventionsInternalsPage_OnBlacklistedHost_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->host)::BaseType::BufferWriter
      host_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_host, buffer, &host_writer, &serialization_context);
  params->host.Set(
      host_writer.is_null() ? nullptr : host_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->host.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null host in InterventionsInternalsPage.OnBlacklistedHost request");
  params->time = in_time;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InterventionsInternalsPageProxy::OnUserBlacklistedStatusChange(
    bool in_blacklisted) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "mojom::InterventionsInternalsPage::OnUserBlacklistedStatusChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterventionsInternalsPage_OnUserBlacklistedStatusChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->blacklisted = in_blacklisted;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InterventionsInternalsPageProxy::OnBlacklistCleared(
    int64_t in_time) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "mojom::InterventionsInternalsPage::OnBlacklistCleared");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterventionsInternalsPage_OnBlacklistCleared_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::InterventionsInternalsPage_OnBlacklistCleared_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->time = in_time;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InterventionsInternalsPageProxy::OnEffectiveConnectionTypeChanged(
    const std::string& in_type) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "mojom::InterventionsInternalsPage::OnEffectiveConnectionTypeChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->type)::BaseType::BufferWriter
      type_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_type, buffer, &type_writer, &serialization_context);
  params->type.Set(
      type_writer.is_null() ? nullptr : type_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->type.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null type in InterventionsInternalsPage.OnEffectiveConnectionTypeChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InterventionsInternalsPageProxy::OnIgnoreBlacklistDecisionStatusChanged(
    bool in_ignored) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "mojom::InterventionsInternalsPage::OnIgnoreBlacklistDecisionStatusChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->ignored = in_ignored;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool InterventionsInternalsPageStubDispatch::Accept(
    InterventionsInternalsPage* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kInterventionsInternalsPage_LogNewMessage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::InterventionsInternalsPage::LogNewMessage",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterventionsInternalsPage_LogNewMessage_Params_Data* params =
          reinterpret_cast<internal::InterventionsInternalsPage_LogNewMessage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MessageLogPtr p_log{};
      InterventionsInternalsPage_LogNewMessage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadLog(&p_log))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InterventionsInternalsPage::LogNewMessage deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->LogNewMessage(
std::move(p_log));
      return true;
    }
    case internal::kInterventionsInternalsPage_OnBlacklistedHost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::InterventionsInternalsPage::OnBlacklistedHost",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterventionsInternalsPage_OnBlacklistedHost_Params_Data* params =
          reinterpret_cast<internal::InterventionsInternalsPage_OnBlacklistedHost_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_host{};
      int64_t p_time{};
      InterventionsInternalsPage_OnBlacklistedHost_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHost(&p_host))
        success = false;
      p_time = input_data_view.time();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InterventionsInternalsPage::OnBlacklistedHost deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnBlacklistedHost(
std::move(p_host), 
std::move(p_time));
      return true;
    }
    case internal::kInterventionsInternalsPage_OnUserBlacklistedStatusChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::InterventionsInternalsPage::OnUserBlacklistedStatusChange",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params_Data* params =
          reinterpret_cast<internal::InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_blacklisted{};
      InterventionsInternalsPage_OnUserBlacklistedStatusChange_ParamsDataView input_data_view(params, &serialization_context);
      
      p_blacklisted = input_data_view.blacklisted();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InterventionsInternalsPage::OnUserBlacklistedStatusChange deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnUserBlacklistedStatusChange(
std::move(p_blacklisted));
      return true;
    }
    case internal::kInterventionsInternalsPage_OnBlacklistCleared_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::InterventionsInternalsPage::OnBlacklistCleared",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterventionsInternalsPage_OnBlacklistCleared_Params_Data* params =
          reinterpret_cast<internal::InterventionsInternalsPage_OnBlacklistCleared_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_time{};
      InterventionsInternalsPage_OnBlacklistCleared_ParamsDataView input_data_view(params, &serialization_context);
      
      p_time = input_data_view.time();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InterventionsInternalsPage::OnBlacklistCleared deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnBlacklistCleared(
std::move(p_time));
      return true;
    }
    case internal::kInterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::InterventionsInternalsPage::OnEffectiveConnectionTypeChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params_Data* params =
          reinterpret_cast<internal::InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_type{};
      InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InterventionsInternalsPage::OnEffectiveConnectionTypeChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnEffectiveConnectionTypeChanged(
std::move(p_type));
      return true;
    }
    case internal::kInterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::InterventionsInternalsPage::OnIgnoreBlacklistDecisionStatusChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params_Data* params =
          reinterpret_cast<internal::InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_ignored{};
      InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_ignored = input_data_view.ignored();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InterventionsInternalsPage::OnIgnoreBlacklistDecisionStatusChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnIgnoreBlacklistDecisionStatusChanged(
std::move(p_ignored));
      return true;
    }
  }
  return false;
}

// static
bool InterventionsInternalsPageStubDispatch::AcceptWithResponder(
    InterventionsInternalsPage* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kInterventionsInternalsPage_LogNewMessage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::InterventionsInternalsPage::LogNewMessage",
               "message", message->name());
#endif
      break;
    }
    case internal::kInterventionsInternalsPage_OnBlacklistedHost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::InterventionsInternalsPage::OnBlacklistedHost",
               "message", message->name());
#endif
      break;
    }
    case internal::kInterventionsInternalsPage_OnUserBlacklistedStatusChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::InterventionsInternalsPage::OnUserBlacklistedStatusChange",
               "message", message->name());
#endif
      break;
    }
    case internal::kInterventionsInternalsPage_OnBlacklistCleared_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::InterventionsInternalsPage::OnBlacklistCleared",
               "message", message->name());
#endif
      break;
    }
    case internal::kInterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::InterventionsInternalsPage::OnEffectiveConnectionTypeChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kInterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::InterventionsInternalsPage::OnIgnoreBlacklistDecisionStatusChanged",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool InterventionsInternalsPageRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "InterventionsInternalsPage RequestValidator");

  switch (message->header()->name) {
    case internal::kInterventionsInternalsPage_LogNewMessage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterventionsInternalsPage_LogNewMessage_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInterventionsInternalsPage_OnBlacklistedHost_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterventionsInternalsPage_OnBlacklistedHost_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInterventionsInternalsPage_OnUserBlacklistedStatusChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInterventionsInternalsPage_OnBlacklistCleared_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterventionsInternalsPage_OnBlacklistCleared_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params_Data>(
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

void InterventionsInternalsPageInterceptorForTesting::LogNewMessage(MessageLogPtr log) {
  GetForwardingInterface()->LogNewMessage(std::move(log));
}
void InterventionsInternalsPageInterceptorForTesting::OnBlacklistedHost(const std::string& host, int64_t time) {
  GetForwardingInterface()->OnBlacklistedHost(std::move(host), std::move(time));
}
void InterventionsInternalsPageInterceptorForTesting::OnUserBlacklistedStatusChange(bool blacklisted) {
  GetForwardingInterface()->OnUserBlacklistedStatusChange(std::move(blacklisted));
}
void InterventionsInternalsPageInterceptorForTesting::OnBlacklistCleared(int64_t time) {
  GetForwardingInterface()->OnBlacklistCleared(std::move(time));
}
void InterventionsInternalsPageInterceptorForTesting::OnEffectiveConnectionTypeChanged(const std::string& type) {
  GetForwardingInterface()->OnEffectiveConnectionTypeChanged(std::move(type));
}
void InterventionsInternalsPageInterceptorForTesting::OnIgnoreBlacklistDecisionStatusChanged(bool ignored) {
  GetForwardingInterface()->OnIgnoreBlacklistDecisionStatusChanged(std::move(ignored));
}
InterventionsInternalsPageAsyncWaiter::InterventionsInternalsPageAsyncWaiter(
    InterventionsInternalsPage* proxy) : proxy_(proxy) {}

InterventionsInternalsPageAsyncWaiter::~InterventionsInternalsPageAsyncWaiter() = default;


}  // namespace mojom

namespace mojo {


// static
bool StructTraits<::mojom::PreviewsStatus::DataView, ::mojom::PreviewsStatusPtr>::Read(
    ::mojom::PreviewsStatus::DataView input,
    ::mojom::PreviewsStatusPtr* output) {
  bool success = true;
  ::mojom::PreviewsStatusPtr result(::mojom::PreviewsStatus::New());
  
      if (!input.ReadDescription(&result->description))
        success = false;
      result->enabled = input.enabled();
      if (!input.ReadHtmlId(&result->htmlId))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojom::PreviewsFlag::DataView, ::mojom::PreviewsFlagPtr>::Read(
    ::mojom::PreviewsFlag::DataView input,
    ::mojom::PreviewsFlagPtr* output) {
  bool success = true;
  ::mojom::PreviewsFlagPtr result(::mojom::PreviewsFlag::New());
  
      if (!input.ReadDescription(&result->description))
        success = false;
      if (!input.ReadLink(&result->link))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
      if (!input.ReadHtmlId(&result->htmlId))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojom::MessageLog::DataView, ::mojom::MessageLogPtr>::Read(
    ::mojom::MessageLog::DataView input,
    ::mojom::MessageLogPtr* output) {
  bool success = true;
  ::mojom::MessageLogPtr result(::mojom::MessageLog::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadDescription(&result->description))
        success = false;
      if (!input.ReadUrl(&result->url))
        success = false;
      result->time = input.time();
      result->page_id = input.page_id();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif