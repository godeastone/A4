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

#include "components/security_interstitials/core/common/interfaces/interstitial_commands.mojom.h"

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

#include "components/security_interstitials/core/common/interfaces/interstitial_commands.mojom-shared-message-ids.h"
namespace security_interstitials {
namespace mojom {
const char InterstitialCommands::Name_[] = "security_interstitials.mojom.InterstitialCommands";

InterstitialCommandsProxy::InterstitialCommandsProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void InterstitialCommandsProxy::DontProceed(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "security_interstitials::mojom::InterstitialCommands::DontProceed");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterstitialCommands_DontProceed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::security_interstitials::mojom::internal::InterstitialCommands_DontProceed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InterstitialCommandsProxy::Proceed(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "security_interstitials::mojom::InterstitialCommands::Proceed");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterstitialCommands_Proceed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::security_interstitials::mojom::internal::InterstitialCommands_Proceed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InterstitialCommandsProxy::ShowMoreSection(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "security_interstitials::mojom::InterstitialCommands::ShowMoreSection");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterstitialCommands_ShowMoreSection_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::security_interstitials::mojom::internal::InterstitialCommands_ShowMoreSection_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InterstitialCommandsProxy::OpenHelpCenter(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "security_interstitials::mojom::InterstitialCommands::OpenHelpCenter");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterstitialCommands_OpenHelpCenter_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::security_interstitials::mojom::internal::InterstitialCommands_OpenHelpCenter_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InterstitialCommandsProxy::OpenDiagnostic(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "security_interstitials::mojom::InterstitialCommands::OpenDiagnostic");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterstitialCommands_OpenDiagnostic_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::security_interstitials::mojom::internal::InterstitialCommands_OpenDiagnostic_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InterstitialCommandsProxy::Reload(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "security_interstitials::mojom::InterstitialCommands::Reload");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterstitialCommands_Reload_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::security_interstitials::mojom::internal::InterstitialCommands_Reload_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InterstitialCommandsProxy::OpenDateSettings(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "security_interstitials::mojom::InterstitialCommands::OpenDateSettings");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterstitialCommands_OpenDateSettings_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::security_interstitials::mojom::internal::InterstitialCommands_OpenDateSettings_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InterstitialCommandsProxy::OpenLogin(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "security_interstitials::mojom::InterstitialCommands::OpenLogin");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterstitialCommands_OpenLogin_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::security_interstitials::mojom::internal::InterstitialCommands_OpenLogin_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InterstitialCommandsProxy::DoReport(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "security_interstitials::mojom::InterstitialCommands::DoReport");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterstitialCommands_DoReport_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::security_interstitials::mojom::internal::InterstitialCommands_DoReport_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InterstitialCommandsProxy::DontReport(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "security_interstitials::mojom::InterstitialCommands::DontReport");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterstitialCommands_DontReport_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::security_interstitials::mojom::internal::InterstitialCommands_DontReport_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InterstitialCommandsProxy::OpenReportingPrivacy(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "security_interstitials::mojom::InterstitialCommands::OpenReportingPrivacy");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterstitialCommands_OpenReportingPrivacy_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::security_interstitials::mojom::internal::InterstitialCommands_OpenReportingPrivacy_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InterstitialCommandsProxy::OpenWhitepaper(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "security_interstitials::mojom::InterstitialCommands::OpenWhitepaper");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterstitialCommands_OpenWhitepaper_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::security_interstitials::mojom::internal::InterstitialCommands_OpenWhitepaper_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InterstitialCommandsProxy::ReportPhishingError(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "security_interstitials::mojom::InterstitialCommands::ReportPhishingError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterstitialCommands_ReportPhishingError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::security_interstitials::mojom::internal::InterstitialCommands_ReportPhishingError_Params_Data::BufferWriter
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
bool InterstitialCommandsStubDispatch::Accept(
    InterstitialCommands* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kInterstitialCommands_DontProceed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)security_interstitials::mojom::InterstitialCommands::DontProceed",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterstitialCommands_DontProceed_Params_Data* params =
          reinterpret_cast<internal::InterstitialCommands_DontProceed_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InterstitialCommands_DontProceed_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InterstitialCommands::DontProceed deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DontProceed();
      return true;
    }
    case internal::kInterstitialCommands_Proceed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)security_interstitials::mojom::InterstitialCommands::Proceed",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterstitialCommands_Proceed_Params_Data* params =
          reinterpret_cast<internal::InterstitialCommands_Proceed_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InterstitialCommands_Proceed_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InterstitialCommands::Proceed deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Proceed();
      return true;
    }
    case internal::kInterstitialCommands_ShowMoreSection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)security_interstitials::mojom::InterstitialCommands::ShowMoreSection",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterstitialCommands_ShowMoreSection_Params_Data* params =
          reinterpret_cast<internal::InterstitialCommands_ShowMoreSection_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InterstitialCommands_ShowMoreSection_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InterstitialCommands::ShowMoreSection deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ShowMoreSection();
      return true;
    }
    case internal::kInterstitialCommands_OpenHelpCenter_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)security_interstitials::mojom::InterstitialCommands::OpenHelpCenter",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterstitialCommands_OpenHelpCenter_Params_Data* params =
          reinterpret_cast<internal::InterstitialCommands_OpenHelpCenter_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InterstitialCommands_OpenHelpCenter_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InterstitialCommands::OpenHelpCenter deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OpenHelpCenter();
      return true;
    }
    case internal::kInterstitialCommands_OpenDiagnostic_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)security_interstitials::mojom::InterstitialCommands::OpenDiagnostic",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterstitialCommands_OpenDiagnostic_Params_Data* params =
          reinterpret_cast<internal::InterstitialCommands_OpenDiagnostic_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InterstitialCommands_OpenDiagnostic_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InterstitialCommands::OpenDiagnostic deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OpenDiagnostic();
      return true;
    }
    case internal::kInterstitialCommands_Reload_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)security_interstitials::mojom::InterstitialCommands::Reload",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterstitialCommands_Reload_Params_Data* params =
          reinterpret_cast<internal::InterstitialCommands_Reload_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InterstitialCommands_Reload_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InterstitialCommands::Reload deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Reload();
      return true;
    }
    case internal::kInterstitialCommands_OpenDateSettings_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)security_interstitials::mojom::InterstitialCommands::OpenDateSettings",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterstitialCommands_OpenDateSettings_Params_Data* params =
          reinterpret_cast<internal::InterstitialCommands_OpenDateSettings_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InterstitialCommands_OpenDateSettings_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InterstitialCommands::OpenDateSettings deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OpenDateSettings();
      return true;
    }
    case internal::kInterstitialCommands_OpenLogin_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)security_interstitials::mojom::InterstitialCommands::OpenLogin",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterstitialCommands_OpenLogin_Params_Data* params =
          reinterpret_cast<internal::InterstitialCommands_OpenLogin_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InterstitialCommands_OpenLogin_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InterstitialCommands::OpenLogin deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OpenLogin();
      return true;
    }
    case internal::kInterstitialCommands_DoReport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)security_interstitials::mojom::InterstitialCommands::DoReport",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterstitialCommands_DoReport_Params_Data* params =
          reinterpret_cast<internal::InterstitialCommands_DoReport_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InterstitialCommands_DoReport_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InterstitialCommands::DoReport deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DoReport();
      return true;
    }
    case internal::kInterstitialCommands_DontReport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)security_interstitials::mojom::InterstitialCommands::DontReport",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterstitialCommands_DontReport_Params_Data* params =
          reinterpret_cast<internal::InterstitialCommands_DontReport_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InterstitialCommands_DontReport_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InterstitialCommands::DontReport deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DontReport();
      return true;
    }
    case internal::kInterstitialCommands_OpenReportingPrivacy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)security_interstitials::mojom::InterstitialCommands::OpenReportingPrivacy",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterstitialCommands_OpenReportingPrivacy_Params_Data* params =
          reinterpret_cast<internal::InterstitialCommands_OpenReportingPrivacy_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InterstitialCommands_OpenReportingPrivacy_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InterstitialCommands::OpenReportingPrivacy deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OpenReportingPrivacy();
      return true;
    }
    case internal::kInterstitialCommands_OpenWhitepaper_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)security_interstitials::mojom::InterstitialCommands::OpenWhitepaper",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterstitialCommands_OpenWhitepaper_Params_Data* params =
          reinterpret_cast<internal::InterstitialCommands_OpenWhitepaper_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InterstitialCommands_OpenWhitepaper_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InterstitialCommands::OpenWhitepaper deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OpenWhitepaper();
      return true;
    }
    case internal::kInterstitialCommands_ReportPhishingError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)security_interstitials::mojom::InterstitialCommands::ReportPhishingError",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterstitialCommands_ReportPhishingError_Params_Data* params =
          reinterpret_cast<internal::InterstitialCommands_ReportPhishingError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InterstitialCommands_ReportPhishingError_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InterstitialCommands::ReportPhishingError deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ReportPhishingError();
      return true;
    }
  }
  return false;
}

// static
bool InterstitialCommandsStubDispatch::AcceptWithResponder(
    InterstitialCommands* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kInterstitialCommands_DontProceed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)security_interstitials::mojom::InterstitialCommands::DontProceed",
               "message", message->name());
#endif
      break;
    }
    case internal::kInterstitialCommands_Proceed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)security_interstitials::mojom::InterstitialCommands::Proceed",
               "message", message->name());
#endif
      break;
    }
    case internal::kInterstitialCommands_ShowMoreSection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)security_interstitials::mojom::InterstitialCommands::ShowMoreSection",
               "message", message->name());
#endif
      break;
    }
    case internal::kInterstitialCommands_OpenHelpCenter_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)security_interstitials::mojom::InterstitialCommands::OpenHelpCenter",
               "message", message->name());
#endif
      break;
    }
    case internal::kInterstitialCommands_OpenDiagnostic_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)security_interstitials::mojom::InterstitialCommands::OpenDiagnostic",
               "message", message->name());
#endif
      break;
    }
    case internal::kInterstitialCommands_Reload_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)security_interstitials::mojom::InterstitialCommands::Reload",
               "message", message->name());
#endif
      break;
    }
    case internal::kInterstitialCommands_OpenDateSettings_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)security_interstitials::mojom::InterstitialCommands::OpenDateSettings",
               "message", message->name());
#endif
      break;
    }
    case internal::kInterstitialCommands_OpenLogin_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)security_interstitials::mojom::InterstitialCommands::OpenLogin",
               "message", message->name());
#endif
      break;
    }
    case internal::kInterstitialCommands_DoReport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)security_interstitials::mojom::InterstitialCommands::DoReport",
               "message", message->name());
#endif
      break;
    }
    case internal::kInterstitialCommands_DontReport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)security_interstitials::mojom::InterstitialCommands::DontReport",
               "message", message->name());
#endif
      break;
    }
    case internal::kInterstitialCommands_OpenReportingPrivacy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)security_interstitials::mojom::InterstitialCommands::OpenReportingPrivacy",
               "message", message->name());
#endif
      break;
    }
    case internal::kInterstitialCommands_OpenWhitepaper_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)security_interstitials::mojom::InterstitialCommands::OpenWhitepaper",
               "message", message->name());
#endif
      break;
    }
    case internal::kInterstitialCommands_ReportPhishingError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)security_interstitials::mojom::InterstitialCommands::ReportPhishingError",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool InterstitialCommandsRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "InterstitialCommands RequestValidator");

  switch (message->header()->name) {
    case internal::kInterstitialCommands_DontProceed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterstitialCommands_DontProceed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInterstitialCommands_Proceed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterstitialCommands_Proceed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInterstitialCommands_ShowMoreSection_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterstitialCommands_ShowMoreSection_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInterstitialCommands_OpenHelpCenter_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterstitialCommands_OpenHelpCenter_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInterstitialCommands_OpenDiagnostic_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterstitialCommands_OpenDiagnostic_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInterstitialCommands_Reload_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterstitialCommands_Reload_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInterstitialCommands_OpenDateSettings_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterstitialCommands_OpenDateSettings_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInterstitialCommands_OpenLogin_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterstitialCommands_OpenLogin_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInterstitialCommands_DoReport_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterstitialCommands_DoReport_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInterstitialCommands_DontReport_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterstitialCommands_DontReport_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInterstitialCommands_OpenReportingPrivacy_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterstitialCommands_OpenReportingPrivacy_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInterstitialCommands_OpenWhitepaper_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterstitialCommands_OpenWhitepaper_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInterstitialCommands_ReportPhishingError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterstitialCommands_ReportPhishingError_Params_Data>(
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

void InterstitialCommandsInterceptorForTesting::DontProceed() {
  GetForwardingInterface()->DontProceed();
}
void InterstitialCommandsInterceptorForTesting::Proceed() {
  GetForwardingInterface()->Proceed();
}
void InterstitialCommandsInterceptorForTesting::ShowMoreSection() {
  GetForwardingInterface()->ShowMoreSection();
}
void InterstitialCommandsInterceptorForTesting::OpenHelpCenter() {
  GetForwardingInterface()->OpenHelpCenter();
}
void InterstitialCommandsInterceptorForTesting::OpenDiagnostic() {
  GetForwardingInterface()->OpenDiagnostic();
}
void InterstitialCommandsInterceptorForTesting::Reload() {
  GetForwardingInterface()->Reload();
}
void InterstitialCommandsInterceptorForTesting::OpenDateSettings() {
  GetForwardingInterface()->OpenDateSettings();
}
void InterstitialCommandsInterceptorForTesting::OpenLogin() {
  GetForwardingInterface()->OpenLogin();
}
void InterstitialCommandsInterceptorForTesting::DoReport() {
  GetForwardingInterface()->DoReport();
}
void InterstitialCommandsInterceptorForTesting::DontReport() {
  GetForwardingInterface()->DontReport();
}
void InterstitialCommandsInterceptorForTesting::OpenReportingPrivacy() {
  GetForwardingInterface()->OpenReportingPrivacy();
}
void InterstitialCommandsInterceptorForTesting::OpenWhitepaper() {
  GetForwardingInterface()->OpenWhitepaper();
}
void InterstitialCommandsInterceptorForTesting::ReportPhishingError() {
  GetForwardingInterface()->ReportPhishingError();
}
InterstitialCommandsAsyncWaiter::InterstitialCommandsAsyncWaiter(
    InterstitialCommands* proxy) : proxy_(proxy) {}

InterstitialCommandsAsyncWaiter::~InterstitialCommandsAsyncWaiter() = default;


}  // namespace mojom
}  // namespace security_interstitials

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif