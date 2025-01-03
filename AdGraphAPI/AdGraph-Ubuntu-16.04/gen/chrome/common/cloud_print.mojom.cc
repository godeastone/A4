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

#include "chrome/common/cloud_print.mojom.h"

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

#include "chrome/common/cloud_print.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/values_mojom_traits.h"
namespace cloud_print {
namespace mojom {
const char CloudPrint::Name_[] = "cloud_print.mojom.CloudPrint";

class CloudPrint_GetCloudPrintProxyInfo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CloudPrint_GetCloudPrintProxyInfo_ForwardToCallback(
      CloudPrint::GetCloudPrintProxyInfoCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CloudPrint::GetCloudPrintProxyInfoCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CloudPrint_GetCloudPrintProxyInfo_ForwardToCallback);
};

class CloudPrint_GetPrinters_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CloudPrint_GetPrinters_ForwardToCallback(
      CloudPrint::GetPrintersCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CloudPrint::GetPrintersCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CloudPrint_GetPrinters_ForwardToCallback);
};

CloudPrintProxy::CloudPrintProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CloudPrintProxy::EnableCloudPrintProxyWithRobot(
    const std::string& in_robot_auth_code, const std::string& in_robot_email, const std::string& in_user_email, base::Value in_user_settings) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "cloud_print::mojom::CloudPrint::EnableCloudPrintProxyWithRobot");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCloudPrint_EnableCloudPrintProxyWithRobot_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::cloud_print::mojom::internal::CloudPrint_EnableCloudPrintProxyWithRobot_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->robot_auth_code)::BaseType::BufferWriter
      robot_auth_code_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_robot_auth_code, buffer, &robot_auth_code_writer, &serialization_context);
  params->robot_auth_code.Set(
      robot_auth_code_writer.is_null() ? nullptr : robot_auth_code_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->robot_auth_code.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null robot_auth_code in CloudPrint.EnableCloudPrintProxyWithRobot request");
  typename decltype(params->robot_email)::BaseType::BufferWriter
      robot_email_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_robot_email, buffer, &robot_email_writer, &serialization_context);
  params->robot_email.Set(
      robot_email_writer.is_null() ? nullptr : robot_email_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->robot_email.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null robot_email in CloudPrint.EnableCloudPrintProxyWithRobot request");
  typename decltype(params->user_email)::BaseType::BufferWriter
      user_email_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_user_email, buffer, &user_email_writer, &serialization_context);
  params->user_email.Set(
      user_email_writer.is_null() ? nullptr : user_email_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->user_email.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null user_email in CloudPrint.EnableCloudPrintProxyWithRobot request");
  typename decltype(params->user_settings)::BaseType::BufferWriter
      user_settings_writer;
  mojo::internal::Serialize<::mojo_base::mojom::DictionaryValueDataView>(
      in_user_settings, buffer, &user_settings_writer, &serialization_context);
  params->user_settings.Set(
      user_settings_writer.is_null() ? nullptr : user_settings_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->user_settings.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null user_settings in CloudPrint.EnableCloudPrintProxyWithRobot request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CloudPrintProxy::DisableCloudPrintProxy(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "cloud_print::mojom::CloudPrint::DisableCloudPrintProxy");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCloudPrint_DisableCloudPrintProxy_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::cloud_print::mojom::internal::CloudPrint_DisableCloudPrintProxy_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CloudPrintProxy::GetCloudPrintProxyInfo(
    GetCloudPrintProxyInfoCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "cloud_print::mojom::CloudPrint::GetCloudPrintProxyInfo");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCloudPrint_GetCloudPrintProxyInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::cloud_print::mojom::internal::CloudPrint_GetCloudPrintProxyInfo_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CloudPrint_GetCloudPrintProxyInfo_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CloudPrintProxy::GetPrinters(
    GetPrintersCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "cloud_print::mojom::CloudPrint::GetPrinters");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCloudPrint_GetPrinters_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::cloud_print::mojom::internal::CloudPrint_GetPrinters_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CloudPrint_GetPrinters_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class CloudPrint_GetCloudPrintProxyInfo_ProxyToResponder {
 public:
  static CloudPrint::GetCloudPrintProxyInfoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CloudPrint_GetCloudPrintProxyInfo_ProxyToResponder> proxy(
        new CloudPrint_GetCloudPrintProxyInfo_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CloudPrint_GetCloudPrintProxyInfo_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CloudPrint_GetCloudPrintProxyInfo_ProxyToResponder() {
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
  CloudPrint_GetCloudPrintProxyInfo_ProxyToResponder(
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
        << "CloudPrint::GetCloudPrintProxyInfoCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_enabled, const std::string& in_email, const std::string& in_proxy_id);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CloudPrint_GetCloudPrintProxyInfo_ProxyToResponder);
};

bool CloudPrint_GetCloudPrintProxyInfo_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "cloud_print::mojom::CloudPrint::GetCloudPrintProxyInfoCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CloudPrint_GetCloudPrintProxyInfo_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CloudPrint_GetCloudPrintProxyInfo_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_enabled{};
  std::string p_email{};
  std::string p_proxy_id{};
  CloudPrint_GetCloudPrintProxyInfo_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_enabled = input_data_view.enabled();
  if (!input_data_view.ReadEmail(&p_email))
    success = false;
  if (!input_data_view.ReadProxyId(&p_proxy_id))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "CloudPrint::GetCloudPrintProxyInfo response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_enabled), 
std::move(p_email), 
std::move(p_proxy_id));
  return true;
}

void CloudPrint_GetCloudPrintProxyInfo_ProxyToResponder::Run(
    bool in_enabled, const std::string& in_email, const std::string& in_proxy_id) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCloudPrint_GetCloudPrintProxyInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::cloud_print::mojom::internal::CloudPrint_GetCloudPrintProxyInfo_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->enabled = in_enabled;
  typename decltype(params->email)::BaseType::BufferWriter
      email_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_email, buffer, &email_writer, &serialization_context);
  params->email.Set(
      email_writer.is_null() ? nullptr : email_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->email.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null email in ");
  typename decltype(params->proxy_id)::BaseType::BufferWriter
      proxy_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_proxy_id, buffer, &proxy_id_writer, &serialization_context);
  params->proxy_id.Set(
      proxy_id_writer.is_null() ? nullptr : proxy_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->proxy_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null proxy_id in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)cloud_print::mojom::CloudPrint::GetCloudPrintProxyInfoCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CloudPrint_GetPrinters_ProxyToResponder {
 public:
  static CloudPrint::GetPrintersCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CloudPrint_GetPrinters_ProxyToResponder> proxy(
        new CloudPrint_GetPrinters_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CloudPrint_GetPrinters_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CloudPrint_GetPrinters_ProxyToResponder() {
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
  CloudPrint_GetPrinters_ProxyToResponder(
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
        << "CloudPrint::GetPrintersCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::vector<std::string>& in_printers);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CloudPrint_GetPrinters_ProxyToResponder);
};

bool CloudPrint_GetPrinters_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "cloud_print::mojom::CloudPrint::GetPrintersCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CloudPrint_GetPrinters_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CloudPrint_GetPrinters_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<std::string> p_printers{};
  CloudPrint_GetPrinters_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadPrinters(&p_printers))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "CloudPrint::GetPrinters response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_printers));
  return true;
}

void CloudPrint_GetPrinters_ProxyToResponder::Run(
    const std::vector<std::string>& in_printers) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCloudPrint_GetPrinters_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::cloud_print::mojom::internal::CloudPrint_GetPrinters_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->printers)::BaseType::BufferWriter
      printers_writer;
  const mojo::internal::ContainerValidateParams printers_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_printers, buffer, &printers_writer, &printers_validate_params,
      &serialization_context);
  params->printers.Set(
      printers_writer.is_null() ? nullptr : printers_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->printers.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null printers in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)cloud_print::mojom::CloudPrint::GetPrintersCallback",
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
bool CloudPrintStubDispatch::Accept(
    CloudPrint* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCloudPrint_EnableCloudPrintProxyWithRobot_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)cloud_print::mojom::CloudPrint::EnableCloudPrintProxyWithRobot",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CloudPrint_EnableCloudPrintProxyWithRobot_Params_Data* params =
          reinterpret_cast<internal::CloudPrint_EnableCloudPrintProxyWithRobot_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_robot_auth_code{};
      std::string p_robot_email{};
      std::string p_user_email{};
      base::Value p_user_settings{};
      CloudPrint_EnableCloudPrintProxyWithRobot_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRobotAuthCode(&p_robot_auth_code))
        success = false;
      if (!input_data_view.ReadRobotEmail(&p_robot_email))
        success = false;
      if (!input_data_view.ReadUserEmail(&p_user_email))
        success = false;
      if (!input_data_view.ReadUserSettings(&p_user_settings))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CloudPrint::EnableCloudPrintProxyWithRobot deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->EnableCloudPrintProxyWithRobot(
std::move(p_robot_auth_code), 
std::move(p_robot_email), 
std::move(p_user_email), 
std::move(p_user_settings));
      return true;
    }
    case internal::kCloudPrint_DisableCloudPrintProxy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)cloud_print::mojom::CloudPrint::DisableCloudPrintProxy",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CloudPrint_DisableCloudPrintProxy_Params_Data* params =
          reinterpret_cast<internal::CloudPrint_DisableCloudPrintProxy_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CloudPrint_DisableCloudPrintProxy_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CloudPrint::DisableCloudPrintProxy deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DisableCloudPrintProxy();
      return true;
    }
    case internal::kCloudPrint_GetCloudPrintProxyInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)cloud_print::mojom::CloudPrint::GetCloudPrintProxyInfo",
               "message", message->name());
#endif
      break;
    }
    case internal::kCloudPrint_GetPrinters_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)cloud_print::mojom::CloudPrint::GetPrinters",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool CloudPrintStubDispatch::AcceptWithResponder(
    CloudPrint* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCloudPrint_EnableCloudPrintProxyWithRobot_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)cloud_print::mojom::CloudPrint::EnableCloudPrintProxyWithRobot",
               "message", message->name());
#endif
      break;
    }
    case internal::kCloudPrint_DisableCloudPrintProxy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)cloud_print::mojom::CloudPrint::DisableCloudPrintProxy",
               "message", message->name());
#endif
      break;
    }
    case internal::kCloudPrint_GetCloudPrintProxyInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)cloud_print::mojom::CloudPrint::GetCloudPrintProxyInfo",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::CloudPrint_GetCloudPrintProxyInfo_Params_Data* params =
          reinterpret_cast<
              internal::CloudPrint_GetCloudPrintProxyInfo_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CloudPrint_GetCloudPrintProxyInfo_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CloudPrint::GetCloudPrintProxyInfo deserializer");
        return false;
      }
      CloudPrint::GetCloudPrintProxyInfoCallback callback =
          CloudPrint_GetCloudPrintProxyInfo_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetCloudPrintProxyInfo(std::move(callback));
      return true;
    }
    case internal::kCloudPrint_GetPrinters_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)cloud_print::mojom::CloudPrint::GetPrinters",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::CloudPrint_GetPrinters_Params_Data* params =
          reinterpret_cast<
              internal::CloudPrint_GetPrinters_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CloudPrint_GetPrinters_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CloudPrint::GetPrinters deserializer");
        return false;
      }
      CloudPrint::GetPrintersCallback callback =
          CloudPrint_GetPrinters_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetPrinters(std::move(callback));
      return true;
    }
  }
  return false;
}

bool CloudPrintRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CloudPrint RequestValidator");

  switch (message->header()->name) {
    case internal::kCloudPrint_EnableCloudPrintProxyWithRobot_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CloudPrint_EnableCloudPrintProxyWithRobot_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCloudPrint_DisableCloudPrintProxy_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CloudPrint_DisableCloudPrintProxy_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCloudPrint_GetCloudPrintProxyInfo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CloudPrint_GetCloudPrintProxyInfo_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCloudPrint_GetPrinters_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CloudPrint_GetPrinters_Params_Data>(
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

bool CloudPrintResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CloudPrint ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kCloudPrint_GetCloudPrintProxyInfo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CloudPrint_GetCloudPrintProxyInfo_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCloudPrint_GetPrinters_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CloudPrint_GetPrinters_ResponseParams_Data>(
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
void CloudPrintInterceptorForTesting::EnableCloudPrintProxyWithRobot(const std::string& robot_auth_code, const std::string& robot_email, const std::string& user_email, base::Value user_settings) {
  GetForwardingInterface()->EnableCloudPrintProxyWithRobot(std::move(robot_auth_code), std::move(robot_email), std::move(user_email), std::move(user_settings));
}
void CloudPrintInterceptorForTesting::DisableCloudPrintProxy() {
  GetForwardingInterface()->DisableCloudPrintProxy();
}
void CloudPrintInterceptorForTesting::GetCloudPrintProxyInfo(GetCloudPrintProxyInfoCallback callback) {
  GetForwardingInterface()->GetCloudPrintProxyInfo(std::move(callback));
}
void CloudPrintInterceptorForTesting::GetPrinters(GetPrintersCallback callback) {
  GetForwardingInterface()->GetPrinters(std::move(callback));
}
CloudPrintAsyncWaiter::CloudPrintAsyncWaiter(
    CloudPrint* proxy) : proxy_(proxy) {}

CloudPrintAsyncWaiter::~CloudPrintAsyncWaiter() = default;

void CloudPrintAsyncWaiter::GetCloudPrintProxyInfo(
    bool* out_enabled, std::string* out_email, std::string* out_proxy_id) {
  base::RunLoop loop;
  proxy_->GetCloudPrintProxyInfo(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_enabled
,
             std::string* out_email
,
             std::string* out_proxy_id
,
             bool enabled,
             const std::string& email,
             const std::string& proxy_id) {*out_enabled = std::move(enabled);*out_email = std::move(email);*out_proxy_id = std::move(proxy_id);
            loop->Quit();
          },
          &loop,
          out_enabled,
          out_email,
          out_proxy_id));
  loop.Run();
}
void CloudPrintAsyncWaiter::GetPrinters(
    std::vector<std::string>* out_printers) {
  base::RunLoop loop;
  proxy_->GetPrinters(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<std::string>* out_printers
,
             const std::vector<std::string>& printers) {*out_printers = std::move(printers);
            loop->Quit();
          },
          &loop,
          out_printers));
  loop.Run();
}

}  // namespace mojom
}  // namespace cloud_print

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif