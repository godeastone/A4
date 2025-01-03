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

#include "chrome/common/plugin.mojom.h"

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

#include "chrome/common/plugin.mojom-shared-message-ids.h"
#include "content/public/common/webplugininfo_param_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace chrome {
namespace mojom {
PluginInfo::PluginInfo()
    : status(),
      plugin(),
      actual_mime_type(),
      group_identifier(),
      group_name() {}

PluginInfo::PluginInfo(
    PluginStatus status_in,
    const content::WebPluginInfo& plugin_in,
    const std::string& actual_mime_type_in,
    const std::string& group_identifier_in,
    const base::string16& group_name_in)
    : status(std::move(status_in)),
      plugin(std::move(plugin_in)),
      actual_mime_type(std::move(actual_mime_type_in)),
      group_identifier(std::move(group_identifier_in)),
      group_name(std::move(group_name_in)) {}

PluginInfo::~PluginInfo() = default;

bool PluginInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PluginParam::PluginParam()
    : name(),
      value() {}

PluginParam::PluginParam(
    const base::string16& name_in,
    const base::string16& value_in)
    : name(std::move(name_in)),
      value(std::move(value_in)) {}

PluginParam::~PluginParam() = default;

bool PluginParam::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char PluginHost::Name_[] = "chrome.mojom.PluginHost";

PluginHostProxy::PluginHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PluginHostProxy::ShowFlashPermissionBubble(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::PluginHost::ShowFlashPermissionBubble");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPluginHost_ShowFlashPermissionBubble_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::PluginHost_ShowFlashPermissionBubble_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PluginHostProxy::CouldNotLoadPlugin(
    const base::FilePath& in_file_path) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::PluginHost::CouldNotLoadPlugin");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPluginHost_CouldNotLoadPlugin_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::PluginHost_CouldNotLoadPlugin_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->file_path)::BaseType::BufferWriter
      file_path_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
      in_file_path, buffer, &file_path_writer, &serialization_context);
  params->file_path.Set(
      file_path_writer.is_null() ? nullptr : file_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->file_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null file_path in PluginHost.CouldNotLoadPlugin request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PluginHostProxy::BlockedOutdatedPlugin(
    PluginRendererPtr in_plugin_renderer, const std::string& in_group_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::PluginHost::BlockedOutdatedPlugin");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPluginHost_BlockedOutdatedPlugin_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::PluginHost_BlockedOutdatedPlugin_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::chrome::mojom::PluginRendererPtrDataView>(
      in_plugin_renderer, &params->plugin_renderer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->plugin_renderer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid plugin_renderer in PluginHost.BlockedOutdatedPlugin request");
  typename decltype(params->group_id)::BaseType::BufferWriter
      group_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_group_id, buffer, &group_id_writer, &serialization_context);
  params->group_id.Set(
      group_id_writer.is_null() ? nullptr : group_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->group_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null group_id in PluginHost.BlockedOutdatedPlugin request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PluginHostProxy::BlockedComponentUpdatedPlugin(
    PluginRendererPtr in_plugin_renderer, const std::string& in_group_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::PluginHost::BlockedComponentUpdatedPlugin");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPluginHost_BlockedComponentUpdatedPlugin_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::PluginHost_BlockedComponentUpdatedPlugin_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::chrome::mojom::PluginRendererPtrDataView>(
      in_plugin_renderer, &params->plugin_renderer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->plugin_renderer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid plugin_renderer in PluginHost.BlockedComponentUpdatedPlugin request");
  typename decltype(params->group_id)::BaseType::BufferWriter
      group_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_group_id, buffer, &group_id_writer, &serialization_context);
  params->group_id.Set(
      group_id_writer.is_null() ? nullptr : group_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->group_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null group_id in PluginHost.BlockedComponentUpdatedPlugin request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PluginHostStubDispatch::Accept(
    PluginHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPluginHost_ShowFlashPermissionBubble_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PluginHost::ShowFlashPermissionBubble",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PluginHost_ShowFlashPermissionBubble_Params_Data* params =
          reinterpret_cast<internal::PluginHost_ShowFlashPermissionBubble_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PluginHost_ShowFlashPermissionBubble_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PluginHost::ShowFlashPermissionBubble deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ShowFlashPermissionBubble();
      return true;
    }
    case internal::kPluginHost_CouldNotLoadPlugin_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PluginHost::CouldNotLoadPlugin",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PluginHost_CouldNotLoadPlugin_Params_Data* params =
          reinterpret_cast<internal::PluginHost_CouldNotLoadPlugin_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::FilePath p_file_path{};
      PluginHost_CouldNotLoadPlugin_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFilePath(&p_file_path))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PluginHost::CouldNotLoadPlugin deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CouldNotLoadPlugin(
std::move(p_file_path));
      return true;
    }
    case internal::kPluginHost_BlockedOutdatedPlugin_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PluginHost::BlockedOutdatedPlugin",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PluginHost_BlockedOutdatedPlugin_Params_Data* params =
          reinterpret_cast<internal::PluginHost_BlockedOutdatedPlugin_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PluginRendererPtr p_plugin_renderer{};
      std::string p_group_id{};
      PluginHost_BlockedOutdatedPlugin_ParamsDataView input_data_view(params, &serialization_context);
      
      p_plugin_renderer =
          input_data_view.TakePluginRenderer<decltype(p_plugin_renderer)>();
      if (!input_data_view.ReadGroupId(&p_group_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PluginHost::BlockedOutdatedPlugin deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->BlockedOutdatedPlugin(
std::move(p_plugin_renderer), 
std::move(p_group_id));
      return true;
    }
    case internal::kPluginHost_BlockedComponentUpdatedPlugin_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PluginHost::BlockedComponentUpdatedPlugin",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PluginHost_BlockedComponentUpdatedPlugin_Params_Data* params =
          reinterpret_cast<internal::PluginHost_BlockedComponentUpdatedPlugin_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PluginRendererPtr p_plugin_renderer{};
      std::string p_group_id{};
      PluginHost_BlockedComponentUpdatedPlugin_ParamsDataView input_data_view(params, &serialization_context);
      
      p_plugin_renderer =
          input_data_view.TakePluginRenderer<decltype(p_plugin_renderer)>();
      if (!input_data_view.ReadGroupId(&p_group_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PluginHost::BlockedComponentUpdatedPlugin deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->BlockedComponentUpdatedPlugin(
std::move(p_plugin_renderer), 
std::move(p_group_id));
      return true;
    }
  }
  return false;
}

// static
bool PluginHostStubDispatch::AcceptWithResponder(
    PluginHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPluginHost_ShowFlashPermissionBubble_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PluginHost::ShowFlashPermissionBubble",
               "message", message->name());
#endif
      break;
    }
    case internal::kPluginHost_CouldNotLoadPlugin_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PluginHost::CouldNotLoadPlugin",
               "message", message->name());
#endif
      break;
    }
    case internal::kPluginHost_BlockedOutdatedPlugin_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PluginHost::BlockedOutdatedPlugin",
               "message", message->name());
#endif
      break;
    }
    case internal::kPluginHost_BlockedComponentUpdatedPlugin_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PluginHost::BlockedComponentUpdatedPlugin",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PluginHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PluginHost RequestValidator");

  switch (message->header()->name) {
    case internal::kPluginHost_ShowFlashPermissionBubble_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PluginHost_ShowFlashPermissionBubble_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPluginHost_CouldNotLoadPlugin_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PluginHost_CouldNotLoadPlugin_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPluginHost_BlockedOutdatedPlugin_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PluginHost_BlockedOutdatedPlugin_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPluginHost_BlockedComponentUpdatedPlugin_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PluginHost_BlockedComponentUpdatedPlugin_Params_Data>(
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

void PluginHostInterceptorForTesting::ShowFlashPermissionBubble() {
  GetForwardingInterface()->ShowFlashPermissionBubble();
}
void PluginHostInterceptorForTesting::CouldNotLoadPlugin(const base::FilePath& file_path) {
  GetForwardingInterface()->CouldNotLoadPlugin(std::move(file_path));
}
void PluginHostInterceptorForTesting::BlockedOutdatedPlugin(PluginRendererPtr plugin_renderer, const std::string& group_id) {
  GetForwardingInterface()->BlockedOutdatedPlugin(std::move(plugin_renderer), std::move(group_id));
}
void PluginHostInterceptorForTesting::BlockedComponentUpdatedPlugin(PluginRendererPtr plugin_renderer, const std::string& group_id) {
  GetForwardingInterface()->BlockedComponentUpdatedPlugin(std::move(plugin_renderer), std::move(group_id));
}
PluginHostAsyncWaiter::PluginHostAsyncWaiter(
    PluginHost* proxy) : proxy_(proxy) {}

PluginHostAsyncWaiter::~PluginHostAsyncWaiter() = default;


const char PluginAuthHost::Name_[] = "chrome.mojom.PluginAuthHost";

PluginAuthHostProxy::PluginAuthHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PluginAuthHostProxy::BlockedUnauthorizedPlugin(
    const base::string16& in_name, const std::string& in_group_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::PluginAuthHost::BlockedUnauthorizedPlugin");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPluginAuthHost_BlockedUnauthorizedPlugin_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::PluginAuthHost_BlockedUnauthorizedPlugin_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in PluginAuthHost.BlockedUnauthorizedPlugin request");
  typename decltype(params->group_id)::BaseType::BufferWriter
      group_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_group_id, buffer, &group_id_writer, &serialization_context);
  params->group_id.Set(
      group_id_writer.is_null() ? nullptr : group_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->group_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null group_id in PluginAuthHost.BlockedUnauthorizedPlugin request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PluginAuthHostStubDispatch::Accept(
    PluginAuthHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPluginAuthHost_BlockedUnauthorizedPlugin_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PluginAuthHost::BlockedUnauthorizedPlugin",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PluginAuthHost_BlockedUnauthorizedPlugin_Params_Data* params =
          reinterpret_cast<internal::PluginAuthHost_BlockedUnauthorizedPlugin_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_name{};
      std::string p_group_id{};
      PluginAuthHost_BlockedUnauthorizedPlugin_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!input_data_view.ReadGroupId(&p_group_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PluginAuthHost::BlockedUnauthorizedPlugin deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->BlockedUnauthorizedPlugin(
std::move(p_name), 
std::move(p_group_id));
      return true;
    }
  }
  return false;
}

// static
bool PluginAuthHostStubDispatch::AcceptWithResponder(
    PluginAuthHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPluginAuthHost_BlockedUnauthorizedPlugin_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PluginAuthHost::BlockedUnauthorizedPlugin",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PluginAuthHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PluginAuthHost RequestValidator");

  switch (message->header()->name) {
    case internal::kPluginAuthHost_BlockedUnauthorizedPlugin_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PluginAuthHost_BlockedUnauthorizedPlugin_Params_Data>(
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

void PluginAuthHostInterceptorForTesting::BlockedUnauthorizedPlugin(const base::string16& name, const std::string& group_id) {
  GetForwardingInterface()->BlockedUnauthorizedPlugin(std::move(name), std::move(group_id));
}
PluginAuthHostAsyncWaiter::PluginAuthHostAsyncWaiter(
    PluginAuthHost* proxy) : proxy_(proxy) {}

PluginAuthHostAsyncWaiter::~PluginAuthHostAsyncWaiter() = default;


const char PluginInfoHost::Name_[] = "chrome.mojom.PluginInfoHost";
bool PluginInfoHost::GetPluginInfo(int32_t render_frame_id, const GURL& url, const url::Origin& origin, const std::string& mime_type, PluginInfoPtr* out_plugin_info) {
  NOTREACHED();
  return false;
}
class PluginInfoHost_GetPluginInfo_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  PluginInfoHost_GetPluginInfo_HandleSyncResponse(
      bool* result, PluginInfoPtr* out_plugin_info)
      : result_(result), out_plugin_info_(out_plugin_info) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  PluginInfoPtr* out_plugin_info_;DISALLOW_COPY_AND_ASSIGN(PluginInfoHost_GetPluginInfo_HandleSyncResponse);
};

class PluginInfoHost_GetPluginInfo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PluginInfoHost_GetPluginInfo_ForwardToCallback(
      const PluginInfoHost::GetPluginInfoCallback& callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PluginInfoHost::GetPluginInfoCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PluginInfoHost_GetPluginInfo_ForwardToCallback);
};

PluginInfoHostProxy::PluginInfoHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool PluginInfoHostProxy::GetPluginInfo(
    int32_t param_render_frame_id, const GURL& param_url, const url::Origin& param_origin, const std::string& param_mime_type, PluginInfoPtr* out_param_plugin_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::PluginInfoHost::GetPluginInfo");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPluginInfoHost_GetPluginInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::PluginInfoHost_GetPluginInfo_Params_Data::BufferWriter
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
      "null url in PluginInfoHost.GetPluginInfo request");
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      param_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in PluginInfoHost.GetPluginInfo request");
  typename decltype(params->mime_type)::BaseType::BufferWriter
      mime_type_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_mime_type, buffer, &mime_type_writer, &serialization_context);
  params->mime_type.Set(
      mime_type_writer.is_null() ? nullptr : mime_type_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->mime_type.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null mime_type in PluginInfoHost.GetPluginInfo request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PluginInfoHost_GetPluginInfo_HandleSyncResponse(
          &result, out_param_plugin_info));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void PluginInfoHostProxy::GetPluginInfo(
    int32_t in_render_frame_id, const GURL& in_url, const url::Origin& in_origin, const std::string& in_mime_type, const GetPluginInfoCallback& callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::PluginInfoHost::GetPluginInfo");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPluginInfoHost_GetPluginInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::PluginInfoHost_GetPluginInfo_Params_Data::BufferWriter
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
      "null url in PluginInfoHost.GetPluginInfo request");
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in PluginInfoHost.GetPluginInfo request");
  typename decltype(params->mime_type)::BaseType::BufferWriter
      mime_type_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_mime_type, buffer, &mime_type_writer, &serialization_context);
  params->mime_type.Set(
      mime_type_writer.is_null() ? nullptr : mime_type_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->mime_type.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null mime_type in PluginInfoHost.GetPluginInfo request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PluginInfoHost_GetPluginInfo_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class PluginInfoHost_GetPluginInfo_ProxyToResponder {
 public:
  static PluginInfoHost::GetPluginInfoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PluginInfoHost_GetPluginInfo_ProxyToResponder> proxy(
        new PluginInfoHost_GetPluginInfo_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::Bind(&PluginInfoHost_GetPluginInfo_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~PluginInfoHost_GetPluginInfo_ProxyToResponder() {
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
  PluginInfoHost_GetPluginInfo_ProxyToResponder(
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
        << "PluginInfoHost::GetPluginInfoCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      PluginInfoPtr in_plugin_info);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PluginInfoHost_GetPluginInfo_ProxyToResponder);
};

bool PluginInfoHost_GetPluginInfo_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "chrome::mojom::PluginInfoHost::GetPluginInfoCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PluginInfoHost_GetPluginInfo_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PluginInfoHost_GetPluginInfo_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  PluginInfoPtr p_plugin_info{};
  PluginInfoHost_GetPluginInfo_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadPluginInfo(&p_plugin_info))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "PluginInfoHost::GetPluginInfo response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_plugin_info));
  return true;
}

void PluginInfoHost_GetPluginInfo_ProxyToResponder::Run(
    PluginInfoPtr in_plugin_info) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPluginInfoHost_GetPluginInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::PluginInfoHost_GetPluginInfo_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->plugin_info)::BaseType::BufferWriter
      plugin_info_writer;
  mojo::internal::Serialize<::chrome::mojom::PluginInfoDataView>(
      in_plugin_info, buffer, &plugin_info_writer, &serialization_context);
  params->plugin_info.Set(
      plugin_info_writer.is_null() ? nullptr : plugin_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->plugin_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null plugin_info in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PluginInfoHost::GetPluginInfoCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool PluginInfoHost_GetPluginInfo_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::PluginInfoHost_GetPluginInfo_ResponseParams_Data* params =
      reinterpret_cast<internal::PluginInfoHost_GetPluginInfo_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  PluginInfoPtr p_plugin_info{};
  PluginInfoHost_GetPluginInfo_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadPluginInfo(&p_plugin_info))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "PluginInfoHost::GetPluginInfo response deserializer");
    return false;
  }
  *out_plugin_info_ = std::move(p_plugin_info);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool PluginInfoHostStubDispatch::Accept(
    PluginInfoHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPluginInfoHost_GetPluginInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PluginInfoHost::GetPluginInfo",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool PluginInfoHostStubDispatch::AcceptWithResponder(
    PluginInfoHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPluginInfoHost_GetPluginInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PluginInfoHost::GetPluginInfo",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::PluginInfoHost_GetPluginInfo_Params_Data* params =
          reinterpret_cast<
              internal::PluginInfoHost_GetPluginInfo_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_render_frame_id{};
      GURL p_url{};
      url::Origin p_origin{};
      std::string p_mime_type{};
      PluginInfoHost_GetPluginInfo_ParamsDataView input_data_view(params, &serialization_context);
      
      p_render_frame_id = input_data_view.render_frame_id();
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (!input_data_view.ReadMimeType(&p_mime_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PluginInfoHost::GetPluginInfo deserializer");
        return false;
      }
      PluginInfoHost::GetPluginInfoCallback callback =
          PluginInfoHost_GetPluginInfo_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetPluginInfo(
std::move(p_render_frame_id), 
std::move(p_url), 
std::move(p_origin), 
std::move(p_mime_type), std::move(callback));
      return true;
    }
  }
  return false;
}

bool PluginInfoHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PluginInfoHost RequestValidator");

  switch (message->header()->name) {
    case internal::kPluginInfoHost_GetPluginInfo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PluginInfoHost_GetPluginInfo_Params_Data>(
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

bool PluginInfoHostResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PluginInfoHost ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kPluginInfoHost_GetPluginInfo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PluginInfoHost_GetPluginInfo_ResponseParams_Data>(
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
void PluginInfoHostInterceptorForTesting::GetPluginInfo(int32_t render_frame_id, const GURL& url, const url::Origin& origin, const std::string& mime_type, const GetPluginInfoCallback& callback) {
  GetForwardingInterface()->GetPluginInfo(std::move(render_frame_id), std::move(url), std::move(origin), std::move(mime_type), std::move(callback));
}
PluginInfoHostAsyncWaiter::PluginInfoHostAsyncWaiter(
    PluginInfoHost* proxy) : proxy_(proxy) {}

PluginInfoHostAsyncWaiter::~PluginInfoHostAsyncWaiter() = default;

void PluginInfoHostAsyncWaiter::GetPluginInfo(
    int32_t render_frame_id, const GURL& url, const url::Origin& origin, const std::string& mime_type, PluginInfoPtr* out_plugin_info) {
  base::RunLoop loop;
  proxy_->GetPluginInfo(std::move(render_frame_id),std::move(url),std::move(origin),std::move(mime_type),
      base::Bind(
          [](base::RunLoop* loop,
             PluginInfoPtr* out_plugin_info
,
             PluginInfoPtr plugin_info) {*out_plugin_info = std::move(plugin_info);
            loop->Quit();
          },
          &loop,
          out_plugin_info));
  loop.Run();
}

const char PluginRenderer::Name_[] = "chrome.mojom.PluginRenderer";

PluginRendererProxy::PluginRendererProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PluginRendererProxy::FinishedDownloading(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::PluginRenderer::FinishedDownloading");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPluginRenderer_FinishedDownloading_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::PluginRenderer_FinishedDownloading_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PluginRendererProxy::UpdateSuccess(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::PluginRenderer::UpdateSuccess");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPluginRenderer_UpdateSuccess_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::PluginRenderer_UpdateSuccess_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PluginRendererProxy::UpdateFailure(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::PluginRenderer::UpdateFailure");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPluginRenderer_UpdateFailure_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::PluginRenderer_UpdateFailure_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PluginRendererProxy::UpdateDownloading(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::PluginRenderer::UpdateDownloading");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPluginRenderer_UpdateDownloading_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::PluginRenderer_UpdateDownloading_Params_Data::BufferWriter
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
bool PluginRendererStubDispatch::Accept(
    PluginRenderer* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPluginRenderer_FinishedDownloading_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PluginRenderer::FinishedDownloading",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PluginRenderer_FinishedDownloading_Params_Data* params =
          reinterpret_cast<internal::PluginRenderer_FinishedDownloading_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PluginRenderer_FinishedDownloading_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PluginRenderer::FinishedDownloading deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->FinishedDownloading();
      return true;
    }
    case internal::kPluginRenderer_UpdateSuccess_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PluginRenderer::UpdateSuccess",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PluginRenderer_UpdateSuccess_Params_Data* params =
          reinterpret_cast<internal::PluginRenderer_UpdateSuccess_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PluginRenderer_UpdateSuccess_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PluginRenderer::UpdateSuccess deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UpdateSuccess();
      return true;
    }
    case internal::kPluginRenderer_UpdateFailure_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PluginRenderer::UpdateFailure",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PluginRenderer_UpdateFailure_Params_Data* params =
          reinterpret_cast<internal::PluginRenderer_UpdateFailure_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PluginRenderer_UpdateFailure_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PluginRenderer::UpdateFailure deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UpdateFailure();
      return true;
    }
    case internal::kPluginRenderer_UpdateDownloading_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PluginRenderer::UpdateDownloading",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PluginRenderer_UpdateDownloading_Params_Data* params =
          reinterpret_cast<internal::PluginRenderer_UpdateDownloading_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PluginRenderer_UpdateDownloading_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PluginRenderer::UpdateDownloading deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UpdateDownloading();
      return true;
    }
  }
  return false;
}

// static
bool PluginRendererStubDispatch::AcceptWithResponder(
    PluginRenderer* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPluginRenderer_FinishedDownloading_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PluginRenderer::FinishedDownloading",
               "message", message->name());
#endif
      break;
    }
    case internal::kPluginRenderer_UpdateSuccess_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PluginRenderer::UpdateSuccess",
               "message", message->name());
#endif
      break;
    }
    case internal::kPluginRenderer_UpdateFailure_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PluginRenderer::UpdateFailure",
               "message", message->name());
#endif
      break;
    }
    case internal::kPluginRenderer_UpdateDownloading_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::PluginRenderer::UpdateDownloading",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PluginRendererRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PluginRenderer RequestValidator");

  switch (message->header()->name) {
    case internal::kPluginRenderer_FinishedDownloading_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PluginRenderer_FinishedDownloading_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPluginRenderer_UpdateSuccess_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PluginRenderer_UpdateSuccess_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPluginRenderer_UpdateFailure_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PluginRenderer_UpdateFailure_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPluginRenderer_UpdateDownloading_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PluginRenderer_UpdateDownloading_Params_Data>(
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

void PluginRendererInterceptorForTesting::FinishedDownloading() {
  GetForwardingInterface()->FinishedDownloading();
}
void PluginRendererInterceptorForTesting::UpdateSuccess() {
  GetForwardingInterface()->UpdateSuccess();
}
void PluginRendererInterceptorForTesting::UpdateFailure() {
  GetForwardingInterface()->UpdateFailure();
}
void PluginRendererInterceptorForTesting::UpdateDownloading() {
  GetForwardingInterface()->UpdateDownloading();
}
PluginRendererAsyncWaiter::PluginRendererAsyncWaiter(
    PluginRenderer* proxy) : proxy_(proxy) {}

PluginRendererAsyncWaiter::~PluginRendererAsyncWaiter() = default;


}  // namespace mojom
}  // namespace chrome

namespace mojo {


// static
bool StructTraits<::chrome::mojom::PluginInfo::DataView, ::chrome::mojom::PluginInfoPtr>::Read(
    ::chrome::mojom::PluginInfo::DataView input,
    ::chrome::mojom::PluginInfoPtr* output) {
  bool success = true;
  ::chrome::mojom::PluginInfoPtr result(::chrome::mojom::PluginInfo::New());
  
      if (!input.ReadStatus(&result->status))
        success = false;
      if (!input.ReadPlugin(&result->plugin))
        success = false;
      if (!input.ReadActualMimeType(&result->actual_mime_type))
        success = false;
      if (!input.ReadGroupIdentifier(&result->group_identifier))
        success = false;
      if (!input.ReadGroupName(&result->group_name))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::chrome::mojom::PluginParam::DataView, ::chrome::mojom::PluginParamPtr>::Read(
    ::chrome::mojom::PluginParam::DataView input,
    ::chrome::mojom::PluginParamPtr* output) {
  bool success = true;
  ::chrome::mojom::PluginParamPtr result(::chrome::mojom::PluginParam::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadValue(&result->value))
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