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

#include "chrome/common/renderer_configuration.mojom.h"

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

#include "chrome/common/renderer_configuration.mojom-shared-message-ids.h"
#include "components/content_settings/core/common/content_settings_struct_traits.h"
#include "mojo/public/cpp/base/values_mojom_traits.h"
namespace chrome {
namespace mojom {
const char RendererConfiguration::Name_[] = "chrome.mojom.RendererConfiguration";

RendererConfigurationProxy::RendererConfigurationProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void RendererConfigurationProxy::SetInitialConfiguration(
    bool in_is_incognito_process) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::RendererConfiguration::SetInitialConfiguration");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRendererConfiguration_SetInitialConfiguration_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::RendererConfiguration_SetInitialConfiguration_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->is_incognito_process = in_is_incognito_process;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererConfigurationProxy::SetContentSettingRules(
    const ::RendererContentSettingRules& in_rules) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::RendererConfiguration::SetContentSettingRules");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRendererConfiguration_SetContentSettingRules_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::RendererConfiguration_SetContentSettingRules_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->rules)::BaseType::BufferWriter
      rules_writer;
  mojo::internal::Serialize<::content_settings::mojom::RendererContentSettingRulesDataView>(
      in_rules, buffer, &rules_writer, &serialization_context);
  params->rules.Set(
      rules_writer.is_null() ? nullptr : rules_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->rules.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null rules in RendererConfiguration.SetContentSettingRules request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RendererConfigurationProxy::SetFieldTrialGroup(
    const std::string& in_trial_name, const std::string& in_group_name) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::RendererConfiguration::SetFieldTrialGroup");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRendererConfiguration_SetFieldTrialGroup_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::RendererConfiguration_SetFieldTrialGroup_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->trial_name)::BaseType::BufferWriter
      trial_name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_trial_name, buffer, &trial_name_writer, &serialization_context);
  params->trial_name.Set(
      trial_name_writer.is_null() ? nullptr : trial_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->trial_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null trial_name in RendererConfiguration.SetFieldTrialGroup request");
  typename decltype(params->group_name)::BaseType::BufferWriter
      group_name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_group_name, buffer, &group_name_writer, &serialization_context);
  params->group_name.Set(
      group_name_writer.is_null() ? nullptr : group_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->group_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null group_name in RendererConfiguration.SetFieldTrialGroup request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool RendererConfigurationStubDispatch::Accept(
    RendererConfiguration* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRendererConfiguration_SetInitialConfiguration_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::RendererConfiguration::SetInitialConfiguration",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RendererConfiguration_SetInitialConfiguration_Params_Data* params =
          reinterpret_cast<internal::RendererConfiguration_SetInitialConfiguration_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_is_incognito_process{};
      RendererConfiguration_SetInitialConfiguration_ParamsDataView input_data_view(params, &serialization_context);
      
      p_is_incognito_process = input_data_view.is_incognito_process();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RendererConfiguration::SetInitialConfiguration deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetInitialConfiguration(
std::move(p_is_incognito_process));
      return true;
    }
    case internal::kRendererConfiguration_SetContentSettingRules_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::RendererConfiguration::SetContentSettingRules",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RendererConfiguration_SetContentSettingRules_Params_Data* params =
          reinterpret_cast<internal::RendererConfiguration_SetContentSettingRules_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::RendererContentSettingRules p_rules{};
      RendererConfiguration_SetContentSettingRules_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRules(&p_rules))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RendererConfiguration::SetContentSettingRules deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetContentSettingRules(
std::move(p_rules));
      return true;
    }
    case internal::kRendererConfiguration_SetFieldTrialGroup_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::RendererConfiguration::SetFieldTrialGroup",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RendererConfiguration_SetFieldTrialGroup_Params_Data* params =
          reinterpret_cast<internal::RendererConfiguration_SetFieldTrialGroup_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_trial_name{};
      std::string p_group_name{};
      RendererConfiguration_SetFieldTrialGroup_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTrialName(&p_trial_name))
        success = false;
      if (!input_data_view.ReadGroupName(&p_group_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RendererConfiguration::SetFieldTrialGroup deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetFieldTrialGroup(
std::move(p_trial_name), 
std::move(p_group_name));
      return true;
    }
  }
  return false;
}

// static
bool RendererConfigurationStubDispatch::AcceptWithResponder(
    RendererConfiguration* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRendererConfiguration_SetInitialConfiguration_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::RendererConfiguration::SetInitialConfiguration",
               "message", message->name());
#endif
      break;
    }
    case internal::kRendererConfiguration_SetContentSettingRules_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::RendererConfiguration::SetContentSettingRules",
               "message", message->name());
#endif
      break;
    }
    case internal::kRendererConfiguration_SetFieldTrialGroup_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::RendererConfiguration::SetFieldTrialGroup",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool RendererConfigurationRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RendererConfiguration RequestValidator");

  switch (message->header()->name) {
    case internal::kRendererConfiguration_SetInitialConfiguration_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RendererConfiguration_SetInitialConfiguration_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRendererConfiguration_SetContentSettingRules_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RendererConfiguration_SetContentSettingRules_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRendererConfiguration_SetFieldTrialGroup_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RendererConfiguration_SetFieldTrialGroup_Params_Data>(
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

void RendererConfigurationInterceptorForTesting::SetInitialConfiguration(bool is_incognito_process) {
  GetForwardingInterface()->SetInitialConfiguration(std::move(is_incognito_process));
}
void RendererConfigurationInterceptorForTesting::SetContentSettingRules(const ::RendererContentSettingRules& rules) {
  GetForwardingInterface()->SetContentSettingRules(std::move(rules));
}
void RendererConfigurationInterceptorForTesting::SetFieldTrialGroup(const std::string& trial_name, const std::string& group_name) {
  GetForwardingInterface()->SetFieldTrialGroup(std::move(trial_name), std::move(group_name));
}
RendererConfigurationAsyncWaiter::RendererConfigurationAsyncWaiter(
    RendererConfiguration* proxy) : proxy_(proxy) {}

RendererConfigurationAsyncWaiter::~RendererConfigurationAsyncWaiter() = default;


}  // namespace mojom
}  // namespace chrome

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif